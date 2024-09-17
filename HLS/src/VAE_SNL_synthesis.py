import hls4ml
import matplotlib.pyplot as plt
import plotting
from scipy.special import softmax, expit as sigmoid
from sklearn import metrics as sk
from keras.models import load_model
import keras
import os
import h5py
import numpy as np
import tensorflow_model_optimization as tfmot
import tensorflow as tf
from tensorflow_model_optimization.sparsity.keras import strip_pruning
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper
from qkeras.utils import _add_supported_quantized_objects
print(tf.__version__)
print(keras.__version__)
print(tfmot.__version__)

import tensorflow as tf
import tensorflow.math as tfmath
import tensorflow.keras as keras
from scipy.optimize import curve_fit
from tensorflow.keras import layers, Model
import tensorflow.keras.backend as K
from tensorflow.keras.callbacks import EarlyStopping, ReduceLROnPlateau
from tensorflow.keras.models import load_model
from sklearn.metrics import roc_curve, auc
import sklearn.metrics as sk
from tensorflow.keras.models import Model
from tensorflow.keras.layers import PReLU, Input, LSTM, Flatten, Concatenate, Dense, Conv2D, TimeDistributed, MaxPooling2D, ReLU, Dropout, BatchNormalization, Activation
from tensorflow.keras.optimizers import Adam, SGD
from tensorflow.keras.metrics import Precision
from qkeras import QActivation, QDense, QConv2D, QBatchNormalization, QConv2DBatchnorm
from qkeras import quantized_relu, quantized_bits, quantized_po2, quantized_relu_po2

os.environ['PATH'] = os.environ['XILINX_VIVADO'] + '/bin:' + os.environ['PATH']
os.environ['PATH'] = os.environ['XILINX_AP_INCLUDE'] + '/bin:' + os.environ['PATH']
with h5py.File('preprocessed_SNL_data.h5', 'r') as hf:
    X_test  = hf['X_test'][:]
    Ato4l_data  = hf['Ato4l_data'][:]
    hToTauTau_data  = hf['hToTauTau_data'][:]
    hChToTauNu_data  = hf['hChToTauNu_data'][:]
    leptoquark_data = hf['leptoquark_data'][:]
    print("Data loaded from preprocessed_SNL_data.h5")
def analyze_columns(arr):
    for col in range(57):
        column = arr[:, col]
        # Calculate statistics
        mean_val = np.mean(column)
        min_val = np.min(column)
        max_val = np.max(column)
        has_nan = np.isnan(column).any()
        # Print results
        print(f"Column {col + 1}:")
        print(f"  Mean: {mean_val:.4f}")
        print(f"  Min: {min_val:.4f}")
        print(f"  Max: {max_val:.4f}")
        print(f"  Contains NaN: {has_nan}")
        print()  # Empty line for readability
#analyze_columns(Ato4l_data)

model_path = 'VAE_40MHZ_model_Vsmall_onchip'
custom_objects = {
    'QDense': QDense,
    'QActivation': QActivation,
    'QBatchNormalization': QBatchNormalization
}

model = tf.keras.models.load_model(model_path, custom_objects=custom_objects)
print(model.summary())
np.set_printoptions(threshold=np.inf, linewidth=np.inf)
'''
for layer in model.layers:
    if hasattr(layer, 'weights'):
        print(f"Layer: {layer.name}")
        if len(layer.weights) > 0:
            print("  Weights:")
            print(layer.weights[0])
        if len(layer.weights) > 1:
            print("  Biases:")
            print(layer.weights[1])
        print("\n")
'''
np.set_printoptions(threshold=100, linewidth=10)
############
# First, the baseline model
hls_config = hls4ml.utils.config_from_keras_model(model, granularity='name')
print("--------------------------------------------------------------------------------------")
print(hls_config)
print("--------------------------------------------------------------------------------------")

hls_config['Model']['ReuseFactor'] = 1 
hls_config['Model']['Precision'] = 'ap_fixed<32,16>'
for layer in hls_config['LayerName'].keys():
    print(layer)
    hls_config['LayerName'][layer]['Trace'] = True
    hls_config['LayerName'][layer]['Strategy'] = 'Resource'
    
    if layer == 'inputs':
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'dense1':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'dense1_linear':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'relu1':
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16,AP_RND_CONV,AP_SAT>'
    if layer == 'dense2':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'dense2_linear':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'relu2':
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16,AP_RND_CONV,AP_SAT>'
    if layer == 'z_mean':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
    if layer == 'z_mean_linear':
        hls_config['LayerName'][layer]['Precision']['weight'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['bias'] = 'ap_fixed<32,16>'
        hls_config['LayerName'][layer]['Precision']['result'] = 'ap_fixed<32,16>'
 
print("-------------------------------------------------------------------------")
print(hls_config)
print("-------------------------------------------------------------------------")


cfg = hls4ml.converters.create_config(backend='Vivado')

cfg['IOType'] = 'io_parallel'
cfg['HLSConfig'] = hls_config
cfg['KerasModel'] = model
cfg['OutputDir'] = 'Resource_small_SNL_VAE'
cfg['ClockPeriod'] = 25
cfg['ClockUncertainty'] = '27%'
cfg['Part'] = 'xcvu9p-flga2104-2-e'

hls_model = hls4ml.converters.keras_to_hls(cfg)
#, project_name='AD_L1Topo2A_project'
hls_model.compile()
hls_model.build(csim=False)
def AD_score_CKL(z_mean):
    return np.mean(z_mean**2, axis=-1)

def calculate_loss(model, data):
    z_mean = model.predict(np.ascontiguousarray(data))
    return AD_score_CKL(z_mean)
import struct
class Model_Evaluator:
    def __init__(
        self,
        model,
        backround,
        br_weights,
        signal,
        signal_weights,
        input_dim,
        title="placeholder",
        save=False,
        labels=None,
    ):
        self.input_dim = input_dim
        self.model = model  # Now directly using the model object
        self.signal = signal
        self.backround = backround
        self.br_loss = []
        self.signal_loss = []
        self.title = title
        self.saveplots = save
        self.labels = labels
        self.br_weights = br_weights
        self.signal_weights = signal_weights

    def calculate_loss(self, l_type):
        if l_type == "CKL":
            self.br_loss = calculate_loss(self.model, self.backround)
            self.signal_loss = [calculate_loss(self.model, batch) for batch in self.signal]
        else:
            raise ValueError(f"Unsupported loss type: {l_type}")

    def ROC(self):
        target_fpr = 1e-5
        tpr_at_target = []
        thresholds_at_target = []
        plt.figure(figsize=(10, 8))
        plt.plot(np.linspace(0, 1, 1000), np.linspace(0, 1, 1000), "--", label="diagonal")
        
        br_loss = np.atleast_1d(self.br_loss)
        for j, batch_loss in enumerate(self.signal_loss):
            sig_w = self.signal_weights[j]
            br_w = self.br_weights
            weights = np.concatenate((br_w, sig_w))
            truth = np.concatenate([np.zeros(len(self.br_loss)), np.ones(len(batch_loss))])
            ROC_data = np.concatenate((self.br_loss, batch_loss))
            fpr, tpr, thresholds = sk.roc_curve(truth, ROC_data, sample_weight=weights)
            auc = sk.roc_auc_score(truth, ROC_data)
            plt.plot(fpr, tpr, label=f"{self.labels[j]}: AUC = {auc:.3f}")

            idx = np.argmin(np.abs(fpr - target_fpr))
            tpr_at_target.append(tpr[idx])
            thresholds_at_target.append(thresholds[idx])
        plt.xlabel("Pure Rate")
        plt.ylabel("True Positive Rate")
        plt.xscale('log')
        plt.yscale('log')
        plt.title(f"{self.title} ROC")
        plt.vlines(1e-5, 0, 1, colors="r", linestyles="dashed")
        plt.legend(loc="lower right")
        plt.grid(True, which="both", ls="-", alpha=0.2)
        
        if self.saveplots:
            plt.savefig(f"{self.title}_SNL_ROC.png", format="png", bbox_inches="tight", dpi=1200)
        plt.show()
        print(f"\nTPR at FPR = {target_fpr} for each channel:")
        for label, tpr, threshold in zip(self.labels, tpr_at_target, thresholds_at_target):
            print(f"{label}: {100*tpr:.6f}%, Theshold = {threshold:.30f}")
            print(''.join(f'{byte:08b}' for byte in struct.pack('!d', threshold)))

def plot_distribution_outside(br_loss, br_weights, signal_losses, signal_weights, labels, 
                                    title, saveplots=False, save_path=None):
    fig, ax = plt.subplots(figsize=(12, 8))
    bins = 1000
    
    # Determine the range for the bins
    all_scores = np.concatenate([br_loss] + signal_losses)
    min_score, max_score = 0.01, np.max(all_scores)
    bin_edges = np.linspace(min_score, max_score, bins + 1)

    # Plot signal distributions
    colors = plt.cm.rainbow(np.linspace(0, 1, len(signal_losses)))
    for i, (signal_scores, signal_weights, label) in enumerate(zip(signal_losses, signal_weights, labels)):
        signal_weights = signal_weights / np.sum(signal_weights)  # Normalize weights
        ax.hist(signal_scores, bins=bin_edges, weights=signal_weights, 
                histtype='step', label=label, color=colors[i],
                density=True, linewidth=2)
    
    # Plot background distribution
    br_weights = br_weights / np.sum(br_weights)  # Normalize weights
    ax.hist(br_loss, bins=bin_edges, weights=br_weights, histtype='step', 
            label='Background', color='black', density=True, linewidth=2)
    
    ax.set_xlabel('Anomaly Score')
    ax.set_ylabel('Weighted Normalized Density')
    ax.set_title(f'{title} Weighted Normalized Anomaly Score Distribution')
    ax.legend()
    ax.grid(True, which='both', linestyle='--', alpha=0.7)
    ax.set_ylim(bottom=1e-6, top=1)
    ax.set_xscale('log')
    ax.set_yscale('log')
    
    if saveplots and save_path:
        plt.savefig(save_path, format="png", bbox_inches="tight")
    plt.show()        

def evaluate_model(model, title, is_hls_model=False):
    evaluator = Model_Evaluator(
        model=model,
        backround=X_test,
        br_weights=np.ones(len(X_test)),
        signal=[
            Ato4l_data,
            hToTauTau_data,
            hChToTauNu_data,
            leptoquark_data
        ],
        signal_weights=[
            np.ones(len(Ato4l_data)),
            np.ones(len(hToTauTau_data)),
            np.ones(len(hChToTauNu_data)),
            np.ones(len(leptoquark_data))
        ],
        input_dim=57,  # Adjust this if your input dimension is different
        title=title,
        save=True,  # Set to True if you want to save the ROC plots
        labels=[
            'Ato4l', 'h->tautau', 'h+_->TauNu',
            'leptoquark'
        ]
    )

    print(f"\nEvaluating {title}")
    if not is_hls_model:
        print("Model summary:")
        model.summary()

    else:
        print("HLS4ML model - summary not available")

    evaluator.calculate_loss("CKL")
    evaluator.ROC()
    plot_distribution_outside(
        br_loss=evaluator.br_loss,
        br_weights=evaluator.br_weights,
        signal_losses=evaluator.signal_loss,
        signal_weights=evaluator.signal_weights,
        labels=evaluator.labels[0:],  # Exclude 'background' label
        title="Topo 2A Model",
        saveplots=False,
    )
# Evaluate original Keras model
print("Evaluating original Keras model:")
#evaluate_model(model, "Original_SNL_Model")

# Evaluate hls4ml model
print("Evaluating hls4ml model:")
evaluate_model(hls_model, "hls4ml_SNL_Model", is_hls_model=True)
'''
##########################################################################################
hls4ml.model.profiling.numerical(model=model, hls_model=hls_model, X=Ato4l_data)
plt.show()
##########################################################################################
hls4ml.model.profiling.numerical(model=model, hls_model=hls_model, X=X_test)
plt.show()
##########################################################################################
hls4ml.model.profiling.numerical(model=model, hls_model=hls_model, X=hToTauTau_data)
plt.show()
##########################################################################################
hls4ml.model.profiling.numerical(model=model, hls_model=hls_model, X=hChToTauNu_data)
plt.show()
##########################################################################################
hls4ml.model.profiling.numerical(model=model, hls_model=hls_model, X=leptoquark_data)
plt.show()
'''
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from scipy import stats
def compare_anomaly_scores(signal_name, keras_predictions, hls_predictions):
    keras_scores = AD_score_CKL(keras_predictions)
    hls_scores = AD_score_CKL(hls_predictions)

    diff = abs(keras_scores-hls_scores)
    x_min = min(keras_scores.min(), hls_scores.min())
    x_min = min(x_min, diff.min())
    x_max = max(keras_scores.max(), hls_scores.max())

    plt.figure(figsize=(12, 6))
    sns.kdeplot(keras_scores, label='Pre-synthesis (Keras)', shade=True)
    sns.kdeplot(hls_scores, label='Post-synthesis (HLS)', shade=True)
    sns.kdeplot(abs(keras_scores-hls_scores), label='Pre-post difference', shade=True)

    plt.title(f'Anomaly Score Distribution Comparison for {signal_name}')
    plt.xlabel('Anomaly Score')
    plt.ylabel('Density')
    plt.legend()
    plt.grid(True, alpha=0.3)
    plt.xlim(x_min-x_max/20, x_max+x_max/20)
    plt.tight_layout()
    plt.savefig(f'{signal_name}_difference_small_SNL.png')
    plt.close()
signals = [np.array(X_test),
        np.array(Ato4l_data),
        np.array(hToTauTau_data),
        np.array(hChToTauNu_data),
        np.array(leptoquark_data)]
signal_names = ['SM', 'Ato4l', 'h->tautau', 'h+_->TauNu',
            'leptoquark']
for channel, signal_name in zip(signals, signal_names):
    print(len(channel))
    #keras_predictions = model.predict(np.ascontiguousarray(channel))
    #hls_predictions = hls_model.predict(channel)
    #compare_anomaly_scores(signal_name, keras_predictions, hls_predictions)
#
'''
def compare_models(check_value):
    hls_model.compile()
    hls4ml_pred, hls4ml_trace = hls_model.trace((check_value*np.ones(57)).reshape(1,57))
    keras_trace = hls4ml.model.profiling.get_ymodel_keras(model, (check_value*np.ones(57)).reshape(1,57))

    print(f"Check value: {check_value}")
    print("Keras layer 'dense1', first sample:")
    print(keras_trace['dense1'][0])
    print("hls4ml layer 'dense1', first sample:")
    print(hls4ml_trace['dense1'][0])
    print("Absolute difference:")
    print(np.abs(hls4ml_trace['dense1'][0]-keras_trace['dense1'][0]))
    print("\n" + "="*50 + "\n")

# Generate the range of values from 2^6 to 2^-10
check_values = [2**i for i in range(8, 0, -1)]

# Iterate through the check values
for check_value in check_values:
    compare_models(check_value)

Ato4l_keras = model.predict(np.ascontiguousarray(Ato4l_data))
AD_keras = AD_score_CKL(Ato4l_keras)
Ato4l_hls = hls_model.predict(np.ascontiguousarray(Ato4l_data))
AD_hls = AD_score_CKL(Ato4l_hls)
score_diff = np.abs(AD_keras - AD_hls)

threshold = 17 
indices = np.where(score_diff > threshold)[0]
print(indices)
print(f"Number of events with difference > {threshold}: {len(indices)}")

def compare_layer_outputs(input_sample, layer_names, keras_model, hls_model):
    keras_outputs = keras_model.predict(input_sample)
    keras_outputs_dict = dict(zip(layer_names, keras_outputs))
    hls4ml_pred, hls4ml_trace = hls_model.trace(input_sample)

    for name in layer_names:
        if name == "inputs":
            continue
        keras_out = keras_outputs_dict[name].flatten()
        hls_out = hls4ml_trace[name].flatten()
        diff = np.abs(keras_out - hls_out)
        max_diff = np.max(diff)
        mean_diff = np.mean(diff)
        print(f"Layer '{name}':")
        print(f"  Max absolute difference: {max_diff}")
        print(f"  Mean absolute difference: {mean_diff}")
        print(f"  Keras output sample: {keras_out[:15]}")  # Show first 5 values
        print(f"  HLS output sample:   {hls_out[:15]}")    # Show first 5 values
        print("-" * 50)

# Step 9: Prepare Keras model for intermediate outputs
layer_names = [layer.name for layer in model.layers]
intermediate_layer_model = Model(inputs=model.input, outputs=[layer.output for layer in model.layers])

# Step 10: Compare layer outputs for events with large discrepancy
#for idx in indices:
    #print(f"\nComparing event index: {idx}")
    #input_sample = Ato4l_data[idx:idx+1]
    #compare_layer_outputs(input_sample, layer_names, intermediate_layer_model, hls_model)
#input_sample = np.ones(57).reshape(1,57)
#compare_layer_outputs(input_sample, layer_names, intermediate_layer_model, hls_model)
'''
