#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 57
#define N_LAYER_2 128
#define N_LAYER_2 128
#define N_LAYER_5 64
#define N_LAYER_5 64
#define N_LAYER_8 16

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<32,16> input_t;
typedef ap_fixed<32,16> model_default_t;
typedef ap_fixed<32,16> layer2_t;
typedef ap_fixed<32,16> dense1_weight_t;
typedef ap_fixed<32,16> dense1_bias_t;
typedef ap_uint<1> layer2_index;
typedef ap_fixed<32,16,AP_RND_CONV,AP_SAT> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_fixed<32,16> layer5_t;
typedef ap_fixed<32,16> dense2_weight_t;
typedef ap_fixed<32,16> dense2_bias_t;
typedef ap_uint<1> layer5_index;
typedef ap_fixed<32,16,AP_RND_CONV,AP_SAT> layer7_t;
typedef ap_fixed<18,8> relu2_table_t;
typedef ap_fixed<32,16> result_t;
typedef ap_fixed<32,16> z_mean_weight_t;
typedef ap_fixed<32,16> z_mean_bias_t;
typedef ap_uint<1> layer8_index;

#endif
