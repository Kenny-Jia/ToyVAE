#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"

// hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w5.h"
#include "weights/b5.h"
#include "weights/w8.h"
#include "weights/b8.h"

// hls-fpga-machine-learning insert layer-config
// dense1
struct config2 : nnet::dense_config {
    static const unsigned n_in = 57;
    static const unsigned n_out = 128;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 19;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 7296;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef dense1_bias_t bias_t;
    typedef dense1_weight_t weight_t;
    typedef layer2_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// relu1
struct ReLU_config4 : nnet::activ_config {
    static const unsigned n_in = 128;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 12;
    typedef relu1_table_t table_t;
};

// dense2
struct config5 : nnet::dense_config {
    static const unsigned n_in = 128;
    static const unsigned n_out = 64;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 8;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 8192;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef dense2_bias_t bias_t;
    typedef dense2_weight_t weight_t;
    typedef layer5_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// relu2
struct ReLU_config7 : nnet::activ_config {
    static const unsigned n_in = 64;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 12;
    typedef relu2_table_t table_t;
};

// z_mean
struct config8 : nnet::dense_config {
    static const unsigned n_in = 64;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 8;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 1024;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef z_mean_bias_t bias_t;
    typedef z_mean_weight_t weight_t;
    typedef layer8_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};


#endif