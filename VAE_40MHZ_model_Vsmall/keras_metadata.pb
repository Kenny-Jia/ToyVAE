
�root"_tf_keras_model*�{"name": "vae__model_4", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "VAE_Model", "config": {}, "shared_object_id": 0, "build_input_shape": {"class_name": "TensorShape", "items": [null, 57]}, "is_graph_network": false, "full_save_spec": {"class_name": "__tuple__", "items": [[{"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 57]}, "float32", "input_1"]}], {}]}, "save_spec": {"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 57]}, "float32", "input_1"]}, "keras_version": "2.13.1", "backend": "tensorflow", "model_config": {"class_name": "VAE_Model", "config": {}}}2
�Wroot.encoder"_tf_keras_network*�V{"name": "encoder", "trainable": true, "expects_training_arg": true, "dtype": "float32", "batch_input_shape": null, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": false, "class_name": "Functional", "config": {"name": "encoder", "trainable": true, "layers": [{"class_name": "InputLayer", "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 57]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "inputs"}, "name": "inputs", "inbound_nodes": []}, {"class_name": "BatchNormalization", "config": {"name": "BN0", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}}, "gamma_initializer": {"class_name": "Ones", "config": {}}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}}, "moving_variance_initializer": {"class_name": "Ones", "config": {}}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN0", "inbound_nodes": [[["inputs", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "dense1", "trainable": true, "dtype": "float32", "units": 32, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense1", "inbound_nodes": [[["BN0", 0, 0, {}]]]}, {"class_name": "BatchNormalization", "config": {"name": "BN1", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}}, "gamma_initializer": {"class_name": "Ones", "config": {}}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}}, "moving_variance_initializer": {"class_name": "Ones", "config": {}}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN1", "inbound_nodes": [[["dense1", 0, 0, {}]]]}, {"class_name": "LeakyReLU", "config": {"name": "relu1", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "name": "relu1", "inbound_nodes": [[["BN1", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "dense2", "trainable": true, "dtype": "float32", "units": 16, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense2", "inbound_nodes": [[["relu1", 0, 0, {}]]]}, {"class_name": "BatchNormalization", "config": {"name": "BN2", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}}, "gamma_initializer": {"class_name": "Ones", "config": {}}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}}, "moving_variance_initializer": {"class_name": "Ones", "config": {}}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN2", "inbound_nodes": [[["dense2", 0, 0, {}]]]}, {"class_name": "LeakyReLU", "config": {"name": "relu2", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "name": "relu2", "inbound_nodes": [[["BN2", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "z_mean", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "z_mean", "inbound_nodes": [[["relu2", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "z_log_var", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "z_log_var", "inbound_nodes": [[["relu2", 0, 0, {}]]]}, {"class_name": "Sampling", "config": {"name": "sampling_4", "trainable": true, "dtype": "float32"}, "name": "sampling_4", "inbound_nodes": [[["z_mean", 0, 0, {}], ["z_log_var", 0, 0, {}]]]}], "input_layers": [["inputs", 0, 0]], "output_layers": [["z_mean", 0, 0], ["z_log_var", 0, 0], ["sampling_4", 0, 0]]}, "shared_object_id": 32, "input_spec": [{"class_name": "InputSpec", "config": {"dtype": null, "shape": {"class_name": "__tuple__", "items": [null, 57]}, "ndim": 2, "max_ndim": null, "min_ndim": null, "axes": {}}}], "build_input_shape": {"class_name": "TensorShape", "items": [null, 57]}, "is_graph_network": true, "full_save_spec": {"class_name": "__tuple__", "items": [[{"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 57]}, "float32", "inputs"]}], {}]}, "save_spec": {"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 57]}, "float32", "inputs"]}, "keras_version": "2.13.1", "backend": "tensorflow", "model_config": {"class_name": "Functional", "config": {"name": "encoder", "trainable": true, "layers": [{"class_name": "InputLayer", "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 57]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "inputs"}, "name": "inputs", "inbound_nodes": [], "shared_object_id": 1}, {"class_name": "BatchNormalization", "config": {"name": "BN0", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 2}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 3}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 4}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 5}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN0", "inbound_nodes": [[["inputs", 0, 0, {}]]], "shared_object_id": 6}, {"class_name": "Dense", "config": {"name": "dense1", "trainable": true, "dtype": "float32", "units": 32, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 7}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 8}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense1", "inbound_nodes": [[["BN0", 0, 0, {}]]], "shared_object_id": 9}, {"class_name": "BatchNormalization", "config": {"name": "BN1", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 10}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 11}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 12}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 13}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN1", "inbound_nodes": [[["dense1", 0, 0, {}]]], "shared_object_id": 14}, {"class_name": "LeakyReLU", "config": {"name": "relu1", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "name": "relu1", "inbound_nodes": [[["BN1", 0, 0, {}]]], "shared_object_id": 15}, {"class_name": "Dense", "config": {"name": "dense2", "trainable": true, "dtype": "float32", "units": 16, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 16}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 17}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense2", "inbound_nodes": [[["relu1", 0, 0, {}]]], "shared_object_id": 18}, {"class_name": "BatchNormalization", "config": {"name": "BN2", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 19}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 20}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 21}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 22}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "name": "BN2", "inbound_nodes": [[["dense2", 0, 0, {}]]], "shared_object_id": 23}, {"class_name": "LeakyReLU", "config": {"name": "relu2", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "name": "relu2", "inbound_nodes": [[["BN2", 0, 0, {}]]], "shared_object_id": 24}, {"class_name": "Dense", "config": {"name": "z_mean", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 25}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 26}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "z_mean", "inbound_nodes": [[["relu2", 0, 0, {}]]], "shared_object_id": 27}, {"class_name": "Dense", "config": {"name": "z_log_var", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 28}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 29}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "z_log_var", "inbound_nodes": [[["relu2", 0, 0, {}]]], "shared_object_id": 30}, {"class_name": "Sampling", "config": {"name": "sampling_4", "trainable": true, "dtype": "float32"}, "name": "sampling_4", "inbound_nodes": [[["z_mean", 0, 0, {}], ["z_log_var", 0, 0, {}]]], "shared_object_id": 31}], "input_layers": [["inputs", 0, 0]], "output_layers": [["z_mean", 0, 0], ["z_log_var", 0, 0], ["sampling_4", 0, 0]]}}}2
�&	root.decoder"_tf_keras_network*�&{"name": "decoder", "trainable": true, "expects_training_arg": true, "dtype": "float32", "batch_input_shape": null, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": false, "class_name": "Functional", "config": {"name": "decoder", "trainable": true, "layers": [{"class_name": "InputLayer", "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 3]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "input_5"}, "name": "input_5", "inbound_nodes": []}, {"class_name": "Dense", "config": {"name": "dense_12", "trainable": true, "dtype": "float32", "units": 16, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_12", "inbound_nodes": [[["input_5", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "dense_13", "trainable": true, "dtype": "float32", "units": 32, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_13", "inbound_nodes": [[["dense_12", 0, 0, {}]]]}, {"class_name": "Dense", "config": {"name": "dense_14", "trainable": true, "dtype": "float32", "units": 57, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}}, "bias_initializer": {"class_name": "Zeros", "config": {}}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_14", "inbound_nodes": [[["dense_13", 0, 0, {}]]]}], "input_layers": [["input_5", 0, 0]], "output_layers": [["dense_14", 0, 0]]}, "shared_object_id": 44, "input_spec": [{"class_name": "InputSpec", "config": {"dtype": null, "shape": {"class_name": "__tuple__", "items": [null, 3]}, "ndim": 2, "max_ndim": null, "min_ndim": null, "axes": {}}}], "build_input_shape": {"class_name": "TensorShape", "items": [null, 3]}, "is_graph_network": true, "full_save_spec": {"class_name": "__tuple__", "items": [[{"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 3]}, "float32", "input_5"]}], {}]}, "save_spec": {"class_name": "TypeSpec", "type_spec": "tf.TensorSpec", "serialized": [{"class_name": "TensorShape", "items": [null, 3]}, "float32", "input_5"]}, "keras_version": "2.13.1", "backend": "tensorflow", "model_config": {"class_name": "Functional", "config": {"name": "decoder", "trainable": true, "layers": [{"class_name": "InputLayer", "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 3]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "input_5"}, "name": "input_5", "inbound_nodes": [], "shared_object_id": 34}, {"class_name": "Dense", "config": {"name": "dense_12", "trainable": true, "dtype": "float32", "units": 16, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 35}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 36}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_12", "inbound_nodes": [[["input_5", 0, 0, {}]]], "shared_object_id": 37}, {"class_name": "Dense", "config": {"name": "dense_13", "trainable": true, "dtype": "float32", "units": 32, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 38}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 39}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_13", "inbound_nodes": [[["dense_12", 0, 0, {}]]], "shared_object_id": 40}, {"class_name": "Dense", "config": {"name": "dense_14", "trainable": true, "dtype": "float32", "units": 57, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 41}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 42}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "name": "dense_14", "inbound_nodes": [[["dense_13", 0, 0, {}]]], "shared_object_id": 43}], "input_layers": [["input_5", 0, 0]], "output_layers": [["dense_14", 0, 0]]}}}2
�
root.total_loss_tracker"_tf_keras_metric*�{"class_name": "Mean", "name": "total_loss", "dtype": "float32", "config": {"name": "total_loss", "dtype": "float32"}, "shared_object_id": 46}2
� root.reconstruction_loss_tracker"_tf_keras_metric*�{"class_name": "Mean", "name": "reconstruction_loss", "dtype": "float32", "config": {"name": "reconstruction_loss", "dtype": "float32"}, "shared_object_id": 47}2
�root.kl_loss_tracker"_tf_keras_metric*�{"class_name": "Mean", "name": "kl_loss", "dtype": "float32", "config": {"name": "kl_loss", "dtype": "float32"}, "shared_object_id": 48}2
�7root.encoder.layer-0"_tf_keras_input_layer*�{"class_name": "InputLayer", "name": "inputs", "dtype": "float32", "sparse": false, "ragged": false, "batch_input_shape": {"class_name": "__tuple__", "items": [null, 57]}, "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 57]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "inputs"}}2
�	8!root.encoder.layer_with_weights-0"_tf_keras_layer*�	{"name": "BN0", "trainable": true, "expects_training_arg": true, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "BatchNormalization", "config": {"name": "BN0", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 2}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 3}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 4}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 5}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "inbound_nodes": [[["inputs", 0, 0, {}]]], "shared_object_id": 6, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": 2, "max_ndim": null, "min_ndim": null, "axes": {"1": 57}}, "shared_object_id": 49}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 57]}}2
�9!root.encoder.layer_with_weights-1"_tf_keras_layer*�{"name": "dense1", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "dense1", "trainable": true, "dtype": "float32", "units": 32, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 7}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 8}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["BN0", 0, 0, {}]]], "shared_object_id": 9, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 57}}, "shared_object_id": 50}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 57]}}2
�	:!root.encoder.layer_with_weights-2"_tf_keras_layer*�	{"name": "BN1", "trainable": true, "expects_training_arg": true, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "BatchNormalization", "config": {"name": "BN1", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 10}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 11}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 12}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 13}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "inbound_nodes": [[["dense1", 0, 0, {}]]], "shared_object_id": 14, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": 2, "max_ndim": null, "min_ndim": null, "axes": {"1": 32}}, "shared_object_id": 51}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 32]}}2
�;root.encoder.layer-4"_tf_keras_layer*�{"name": "relu1", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "LeakyReLU", "config": {"name": "relu1", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "inbound_nodes": [[["BN1", 0, 0, {}]]], "shared_object_id": 15, "build_input_shape": {"class_name": "TensorShape", "items": [null, 32]}}2
�<!root.encoder.layer_with_weights-3"_tf_keras_layer*�{"name": "dense2", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "dense2", "trainable": true, "dtype": "float32", "units": 16, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 16}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 17}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["relu1", 0, 0, {}]]], "shared_object_id": 18, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 32}}, "shared_object_id": 52}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 32]}}2
�	=!root.encoder.layer_with_weights-4"_tf_keras_layer*�	{"name": "BN2", "trainable": true, "expects_training_arg": true, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "BatchNormalization", "config": {"name": "BN2", "trainable": true, "dtype": "float32", "axis": [1], "momentum": 0.99, "epsilon": 0.001, "center": true, "scale": true, "beta_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 19}, "gamma_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 20}, "moving_mean_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 21}, "moving_variance_initializer": {"class_name": "Ones", "config": {}, "shared_object_id": 22}, "beta_regularizer": null, "gamma_regularizer": null, "beta_constraint": null, "gamma_constraint": null}, "inbound_nodes": [[["dense2", 0, 0, {}]]], "shared_object_id": 23, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": 2, "max_ndim": null, "min_ndim": null, "axes": {"1": 16}}, "shared_object_id": 53}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 16]}}2
�>root.encoder.layer-7"_tf_keras_layer*�{"name": "relu2", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "LeakyReLU", "config": {"name": "relu2", "trainable": true, "dtype": "float32", "alpha": 0.0009765625}, "inbound_nodes": [[["BN2", 0, 0, {}]]], "shared_object_id": 24, "build_input_shape": {"class_name": "TensorShape", "items": [null, 16]}}2
�?!root.encoder.layer_with_weights-5"_tf_keras_layer*�{"name": "z_mean", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "z_mean", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 25}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 26}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["relu2", 0, 0, {}]]], "shared_object_id": 27, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 16}}, "shared_object_id": 54}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 16]}}2
�@!root.encoder.layer_with_weights-6"_tf_keras_layer*�{"name": "z_log_var", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "z_log_var", "trainable": true, "dtype": "float32", "units": 3, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 28}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 29}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["relu2", 0, 0, {}]]], "shared_object_id": 30, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 16}}, "shared_object_id": 55}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 16]}}2
�Aroot.encoder.layer-10"_tf_keras_layer*�{"name": "sampling_4", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Sampling", "config": {"name": "sampling_4", "trainable": true, "dtype": "float32"}, "inbound_nodes": [[["z_mean", 0, 0, {}], ["z_log_var", 0, 0, {}]]], "shared_object_id": 31, "build_input_shape": [{"class_name": "TensorShape", "items": [null, 3]}, {"class_name": "TensorShape", "items": [null, 3]}]}2
�Hroot.decoder.layer-0"_tf_keras_input_layer*�{"class_name": "InputLayer", "name": "input_5", "dtype": "float32", "sparse": false, "ragged": false, "batch_input_shape": {"class_name": "__tuple__", "items": [null, 3]}, "config": {"batch_input_shape": {"class_name": "__tuple__", "items": [null, 3]}, "dtype": "float32", "sparse": false, "ragged": false, "name": "input_5"}}2
�I!root.decoder.layer_with_weights-0"_tf_keras_layer*�{"name": "dense_12", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "dense_12", "trainable": true, "dtype": "float32", "units": 16, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 35}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 36}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["input_5", 0, 0, {}]]], "shared_object_id": 37, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 3}}, "shared_object_id": 56}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 3]}}2
�J!root.decoder.layer_with_weights-1"_tf_keras_layer*�{"name": "dense_13", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "dense_13", "trainable": true, "dtype": "float32", "units": 32, "activation": "relu", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 38}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 39}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["dense_12", 0, 0, {}]]], "shared_object_id": 40, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 16}}, "shared_object_id": 57}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 16]}}2
�K!root.decoder.layer_with_weights-2"_tf_keras_layer*�{"name": "dense_14", "trainable": true, "expects_training_arg": false, "dtype": "float32", "batch_input_shape": null, "stateful": false, "must_restore_from_config": false, "preserve_input_structure_in_config": false, "autocast": true, "class_name": "Dense", "config": {"name": "dense_14", "trainable": true, "dtype": "float32", "units": 57, "activation": "linear", "use_bias": true, "kernel_initializer": {"class_name": "GlorotUniform", "config": {"seed": null}, "shared_object_id": 41}, "bias_initializer": {"class_name": "Zeros", "config": {}, "shared_object_id": 42}, "kernel_regularizer": null, "bias_regularizer": null, "activity_regularizer": null, "kernel_constraint": null, "bias_constraint": null}, "inbound_nodes": [[["dense_13", 0, 0, {}]]], "shared_object_id": 43, "input_spec": {"class_name": "InputSpec", "config": {"dtype": null, "shape": null, "ndim": null, "max_ndim": null, "min_ndim": 2, "axes": {"-1": 32}}, "shared_object_id": 58}, "build_input_shape": {"class_name": "TensorShape", "items": [null, 32]}}2