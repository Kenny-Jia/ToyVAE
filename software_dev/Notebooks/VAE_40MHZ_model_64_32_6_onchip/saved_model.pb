��
��
^
AssignVariableOp
resource
value"dtype"
dtypetype"
validate_shapebool( �
�
BiasAdd

value"T	
bias"T
output"T""
Ttype:
2	"-
data_formatstringNHWC:
NHWCNCHW
8
Const
output"dtype"
valuetensor"
dtypetype
$
DisableCopyOnRead
resource�
.
Identity

input"T
output"T"	
Ttype
u
MatMul
a"T
b"T
product"T"
transpose_abool( "
transpose_bbool( "
Ttype:
2	
�
MergeV2Checkpoints
checkpoint_prefixes
destination_prefix"
delete_old_dirsbool("
allow_missing_filesbool( �

NoOp
M
Pack
values"T*N
output"T"
Nint(0"	
Ttype"
axisint 
C
Placeholder
output"dtype"
dtypetype"
shapeshape:
@
ReadVariableOp
resource
value"dtype"
dtypetype�
E
Relu
features"T
activations"T"
Ttype:
2	
o
	RestoreV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0�
l
SaveV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0�
?
Select
	condition

t"T
e"T
output"T"	
Ttype
H
ShardedFilename
basename	
shard

num_shards
filename
�
StatefulPartitionedCall
args2Tin
output2Tout"
Tin
list(type)("
Tout
list(type)("	
ffunc"
configstring "
config_protostring "
executor_typestring ��
@
StaticRegexFullMatch	
input

output
"
patternstring
L

StringJoin
inputs*N

output"

Nint("
	separatorstring 
�
VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 �"serve*2.13.12v2.13.0-17-gf841394b1b78��
n
z_mean/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*
shared_namez_mean/bias
g
z_mean/bias/Read/ReadVariableOpReadVariableOpz_mean/bias*
_output_shapes
:*
dtype0
v
z_mean/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_namez_mean/kernel
o
!z_mean/kernel/Read/ReadVariableOpReadVariableOpz_mean/kernel*
_output_shapes

: *
dtype0
n
dense2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namedense2/bias
g
dense2/bias/Read/ReadVariableOpReadVariableOpdense2/bias*
_output_shapes
: *
dtype0
v
dense2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:@ *
shared_namedense2/kernel
o
!dense2/kernel/Read/ReadVariableOpReadVariableOpdense2/kernel*
_output_shapes

:@ *
dtype0
n
dense1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:@*
shared_namedense1/bias
g
dense1/bias/Read/ReadVariableOpReadVariableOpdense1/bias*
_output_shapes
:@*
dtype0
v
dense1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:9@*
shared_namedense1/kernel
o
!dense1/kernel/Read/ReadVariableOpReadVariableOpdense1/kernel*
_output_shapes

:9@*
dtype0
y
serving_default_inputsPlaceholder*'
_output_shapes
:���������9*
dtype0*
shape:���������9
�
StatefulPartitionedCallStatefulPartitionedCallserving_default_inputsdense1/kerneldense1/biasdense2/kerneldense2/biasz_mean/kernelz_mean/bias*
Tin
	2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*(
_read_only_resource_inputs

*0
config_proto 

CPU

GPU2*0J 8� *+
f&R$
"__inference_signature_wrapper_1480

NoOpNoOp
�!
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*� 
value� B�  B� 
�
layer-0
layer_with_weights-0
layer-1
layer-2
layer_with_weights-1
layer-3
layer-4
layer_with_weights-2
layer-5
	variables
trainable_variables
	regularization_losses

	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature

signatures*
* 
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses

kernel
bias*
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses* 
�
	variables
trainable_variables
regularization_losses
 	keras_api
!__call__
*"&call_and_return_all_conditional_losses

#kernel
$bias*
�
%	variables
&trainable_variables
'regularization_losses
(	keras_api
)__call__
**&call_and_return_all_conditional_losses* 
�
+	variables
,trainable_variables
-regularization_losses
.	keras_api
/__call__
*0&call_and_return_all_conditional_losses

1kernel
2bias*
.
0
1
#2
$3
14
25*
.
0
1
#2
$3
14
25*
* 
�
3non_trainable_variables

4layers
5metrics
6layer_regularization_losses
7layer_metrics
	variables
trainable_variables
	regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

8trace_0
9trace_1* 

:trace_0
;trace_1* 
* 

<serving_default* 

0
1*

0
1*
* 
�
=non_trainable_variables

>layers
?metrics
@layer_regularization_losses
Alayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

Btrace_0* 

Ctrace_0* 
]W
VARIABLE_VALUEdense1/kernel6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUE*
YS
VARIABLE_VALUEdense1/bias4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
Dnon_trainable_variables

Elayers
Fmetrics
Glayer_regularization_losses
Hlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses* 

Itrace_0* 

Jtrace_0* 

#0
$1*

#0
$1*
* 
�
Knon_trainable_variables

Llayers
Mmetrics
Nlayer_regularization_losses
Olayer_metrics
	variables
trainable_variables
regularization_losses
!__call__
*"&call_and_return_all_conditional_losses
&""call_and_return_conditional_losses*

Ptrace_0* 

Qtrace_0* 
]W
VARIABLE_VALUEdense2/kernel6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUE*
YS
VARIABLE_VALUEdense2/bias4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
Rnon_trainable_variables

Slayers
Tmetrics
Ulayer_regularization_losses
Vlayer_metrics
%	variables
&trainable_variables
'regularization_losses
)__call__
**&call_and_return_all_conditional_losses
&*"call_and_return_conditional_losses* 

Wtrace_0* 

Xtrace_0* 

10
21*

10
21*
* 
�
Ynon_trainable_variables

Zlayers
[metrics
\layer_regularization_losses
]layer_metrics
+	variables
,trainable_variables
-regularization_losses
/__call__
*0&call_and_return_all_conditional_losses
&0"call_and_return_conditional_losses*

^trace_0* 

_trace_0* 
]W
VARIABLE_VALUEz_mean/kernel6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUE*
YS
VARIABLE_VALUEz_mean/bias4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
.
0
1
2
3
4
5*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
O
saver_filenamePlaceholder*
_output_shapes
: *
dtype0*
shape: 
�
StatefulPartitionedCall_1StatefulPartitionedCallsaver_filenamedense1/kerneldense1/biasdense2/kerneldense2/biasz_mean/kernelz_mean/biasConst*
Tin

2*
Tout
2*
_collective_manager_ids
 *
_output_shapes
: * 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *&
f!R
__inference__traced_save_1615
�
StatefulPartitionedCall_2StatefulPartitionedCallsaver_filenamedense1/kerneldense1/biasdense2/kerneldense2/biasz_mean/kernelz_mean/bias*
Tin
	2*
Tout
2*
_collective_manager_ids
 *
_output_shapes
: * 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *)
f$R"
 __inference__traced_restore_1642��
�
�
%__inference_z_mean_layer_call_fn_1547

inputs
unknown: 
	unknown_0:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_z_mean_layer_call_and_return_conditional_losses_1363o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:��������� : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs:$ 

_user_specified_name1541:$ 

_user_specified_name1543
�	
�
@__inference_dense2_layer_call_and_return_conditional_losses_1342

inputs0
matmul_readvariableop_resource:@ -
biasadd_readvariableop_resource: 
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:@ *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������@: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�	
�
@__inference_dense1_layer_call_and_return_conditional_losses_1321

inputs0
matmul_readvariableop_resource:9@-
biasadd_readvariableop_resource:@
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:9@*
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:@*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:���������@S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������9: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�

�
&__inference_encoder_layer_call_fn_1425

inputs
unknown:9@
	unknown_0:@
	unknown_1:@ 
	unknown_2: 
	unknown_3: 
	unknown_4:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*(
_read_only_resource_inputs

*0
config_proto 

CPU

GPU2*0J 8� *J
fERC
A__inference_encoder_layer_call_and_return_conditional_losses_1391o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1411:$ 

_user_specified_name1413:$ 

_user_specified_name1415:$ 

_user_specified_name1417:$ 

_user_specified_name1419:$ 

_user_specified_name1421
�
[
?__inference_relu1_layer_call_and_return_conditional_losses_1331

inputs
identityF
ReluReluinputs*
T0*'
_output_shapes
:���������@Z
IdentityIdentityRelu:activations:0*
T0*'
_output_shapes
:���������@"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������@:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs
�;
�
__inference__traced_save_1615
file_prefix6
$read_disablecopyonread_dense1_kernel:9@2
$read_1_disablecopyonread_dense1_bias:@8
&read_2_disablecopyonread_dense2_kernel:@ 2
$read_3_disablecopyonread_dense2_bias: 8
&read_4_disablecopyonread_z_mean_kernel: 2
$read_5_disablecopyonread_z_mean_bias:
savev2_const
identity_13��MergeV2Checkpoints�Read/DisableCopyOnRead�Read/ReadVariableOp�Read_1/DisableCopyOnRead�Read_1/ReadVariableOp�Read_2/DisableCopyOnRead�Read_2/ReadVariableOp�Read_3/DisableCopyOnRead�Read_3/ReadVariableOp�Read_4/DisableCopyOnRead�Read_4/ReadVariableOp�Read_5/DisableCopyOnRead�Read_5/ReadVariableOpw
StaticRegexFullMatchStaticRegexFullMatchfile_prefix"/device:CPU:**
_output_shapes
: *
pattern
^s3://.*Z
ConstConst"/device:CPU:**
_output_shapes
: *
dtype0*
valueB B.parta
Const_1Const"/device:CPU:**
_output_shapes
: *
dtype0*
valueB B
_temp/part�
SelectSelectStaticRegexFullMatch:output:0Const:output:0Const_1:output:0"/device:CPU:**
T0*
_output_shapes
: f

StringJoin
StringJoinfile_prefixSelect:output:0"/device:CPU:**
N*
_output_shapes
: L

num_shardsConst*
_output_shapes
: *
dtype0*
value	B :f
ShardedFilename/shardConst"/device:CPU:0*
_output_shapes
: *
dtype0*
value	B : �
ShardedFilenameShardedFilenameStringJoin:output:0ShardedFilename/shard:output:0num_shards:output:0"/device:CPU:0*
_output_shapes
: v
Read/DisableCopyOnReadDisableCopyOnRead$read_disablecopyonread_dense1_kernel"/device:CPU:0*
_output_shapes
 �
Read/ReadVariableOpReadVariableOp$read_disablecopyonread_dense1_kernel^Read/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:9@*
dtype0i
IdentityIdentityRead/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:9@a

Identity_1IdentityIdentity:output:0"/device:CPU:0*
T0*
_output_shapes

:9@x
Read_1/DisableCopyOnReadDisableCopyOnRead$read_1_disablecopyonread_dense1_bias"/device:CPU:0*
_output_shapes
 �
Read_1/ReadVariableOpReadVariableOp$read_1_disablecopyonread_dense1_bias^Read_1/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:@*
dtype0i

Identity_2IdentityRead_1/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:@_

Identity_3IdentityIdentity_2:output:0"/device:CPU:0*
T0*
_output_shapes
:@z
Read_2/DisableCopyOnReadDisableCopyOnRead&read_2_disablecopyonread_dense2_kernel"/device:CPU:0*
_output_shapes
 �
Read_2/ReadVariableOpReadVariableOp&read_2_disablecopyonread_dense2_kernel^Read_2/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:@ *
dtype0m

Identity_4IdentityRead_2/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:@ c

Identity_5IdentityIdentity_4:output:0"/device:CPU:0*
T0*
_output_shapes

:@ x
Read_3/DisableCopyOnReadDisableCopyOnRead$read_3_disablecopyonread_dense2_bias"/device:CPU:0*
_output_shapes
 �
Read_3/ReadVariableOpReadVariableOp$read_3_disablecopyonread_dense2_bias^Read_3/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0i

Identity_6IdentityRead_3/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: _

Identity_7IdentityIdentity_6:output:0"/device:CPU:0*
T0*
_output_shapes
: z
Read_4/DisableCopyOnReadDisableCopyOnRead&read_4_disablecopyonread_z_mean_kernel"/device:CPU:0*
_output_shapes
 �
Read_4/ReadVariableOpReadVariableOp&read_4_disablecopyonread_z_mean_kernel^Read_4/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0m

Identity_8IdentityRead_4/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: c

Identity_9IdentityIdentity_8:output:0"/device:CPU:0*
T0*
_output_shapes

: x
Read_5/DisableCopyOnReadDisableCopyOnRead$read_5_disablecopyonread_z_mean_bias"/device:CPU:0*
_output_shapes
 �
Read_5/ReadVariableOpReadVariableOp$read_5_disablecopyonread_z_mean_bias^Read_5/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0j
Identity_10IdentityRead_5/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_11IdentityIdentity_10:output:0"/device:CPU:0*
T0*
_output_shapes
:�
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:*
dtype0*�
value�B�B6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH{
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:*
dtype0*!
valueBB B B B B B B �
SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0Identity_1:output:0Identity_3:output:0Identity_5:output:0Identity_7:output:0Identity_9:output:0Identity_11:output:0savev2_const"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtypes
	2�
&MergeV2Checkpoints/checkpoint_prefixesPackShardedFilename:filename:0^SaveV2"/device:CPU:0*
N*
T0*
_output_shapes
:�
MergeV2CheckpointsMergeV2Checkpoints/MergeV2Checkpoints/checkpoint_prefixes:output:0file_prefix"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 i
Identity_12Identityfile_prefix^MergeV2Checkpoints"/device:CPU:0*
T0*
_output_shapes
: U
Identity_13IdentityIdentity_12:output:0^NoOp*
T0*
_output_shapes
: �
NoOpNoOp^MergeV2Checkpoints^Read/DisableCopyOnRead^Read/ReadVariableOp^Read_1/DisableCopyOnRead^Read_1/ReadVariableOp^Read_2/DisableCopyOnRead^Read_2/ReadVariableOp^Read_3/DisableCopyOnRead^Read_3/ReadVariableOp^Read_4/DisableCopyOnRead^Read_4/ReadVariableOp^Read_5/DisableCopyOnRead^Read_5/ReadVariableOp*
_output_shapes
 "#
identity_13Identity_13:output:0*(
_construction_contextkEagerRuntime*#
_input_shapes
: : : : : : : : 2(
MergeV2CheckpointsMergeV2Checkpoints20
Read/DisableCopyOnReadRead/DisableCopyOnRead2*
Read/ReadVariableOpRead/ReadVariableOp24
Read_1/DisableCopyOnReadRead_1/DisableCopyOnRead2.
Read_1/ReadVariableOpRead_1/ReadVariableOp24
Read_2/DisableCopyOnReadRead_2/DisableCopyOnRead2.
Read_2/ReadVariableOpRead_2/ReadVariableOp24
Read_3/DisableCopyOnReadRead_3/DisableCopyOnRead2.
Read_3/ReadVariableOpRead_3/ReadVariableOp24
Read_4/DisableCopyOnReadRead_4/DisableCopyOnRead2.
Read_4/ReadVariableOpRead_4/ReadVariableOp24
Read_5/DisableCopyOnReadRead_5/DisableCopyOnRead2.
Read_5/ReadVariableOpRead_5/ReadVariableOp:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix:-)
'
_user_specified_namedense1/kernel:+'
%
_user_specified_namedense1/bias:-)
'
_user_specified_namedense2/kernel:+'
%
_user_specified_namedense2/bias:-)
'
_user_specified_namez_mean/kernel:+'
%
_user_specified_namez_mean/bias:=9

_output_shapes
: 

_user_specified_nameConst
� 
�
 __inference__traced_restore_1642
file_prefix0
assignvariableop_dense1_kernel:9@,
assignvariableop_1_dense1_bias:@2
 assignvariableop_2_dense2_kernel:@ ,
assignvariableop_3_dense2_bias: 2
 assignvariableop_4_z_mean_kernel: ,
assignvariableop_5_z_mean_bias:

identity_7��AssignVariableOp�AssignVariableOp_1�AssignVariableOp_2�AssignVariableOp_3�AssignVariableOp_4�AssignVariableOp_5�
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:*
dtype0*�
value�B�B6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH~
RestoreV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:*
dtype0*!
valueBB B B B B B B �
	RestoreV2	RestoreV2file_prefixRestoreV2/tensor_names:output:0#RestoreV2/shape_and_slices:output:0"/device:CPU:0*0
_output_shapes
:::::::*
dtypes
	2[
IdentityIdentityRestoreV2:tensors:0"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOpAssignVariableOpassignvariableop_dense1_kernelIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_1AssignVariableOpassignvariableop_1_dense1_biasIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_2AssignVariableOp assignvariableop_2_dense2_kernelIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_3AssignVariableOpassignvariableop_3_dense2_biasIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_4AssignVariableOp assignvariableop_4_z_mean_kernelIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_5AssignVariableOpassignvariableop_5_z_mean_biasIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0Y
NoOpNoOp"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �

Identity_6Identityfile_prefix^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_2^AssignVariableOp_3^AssignVariableOp_4^AssignVariableOp_5^NoOp"/device:CPU:0*
T0*
_output_shapes
: U

Identity_7IdentityIdentity_6:output:0^NoOp_1*
T0*
_output_shapes
: �
NoOp_1NoOp^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_2^AssignVariableOp_3^AssignVariableOp_4^AssignVariableOp_5*
_output_shapes
 "!

identity_7Identity_7:output:0*(
_construction_contextkEagerRuntime*!
_input_shapes
: : : : : : : 2$
AssignVariableOpAssignVariableOp2(
AssignVariableOp_1AssignVariableOp_12(
AssignVariableOp_2AssignVariableOp_22(
AssignVariableOp_3AssignVariableOp_32(
AssignVariableOp_4AssignVariableOp_42(
AssignVariableOp_5AssignVariableOp_5:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix:-)
'
_user_specified_namedense1/kernel:+'
%
_user_specified_namedense1/bias:-)
'
_user_specified_namedense2/kernel:+'
%
_user_specified_namedense2/bias:-)
'
_user_specified_namez_mean/kernel:+'
%
_user_specified_namez_mean/bias
�
�
A__inference_encoder_layer_call_and_return_conditional_losses_1370

inputs
dense1_1322:9@
dense1_1324:@
dense2_1343:@ 
dense2_1345: 
z_mean_1364: 
z_mean_1366:
identity��dense1/StatefulPartitionedCall�dense2/StatefulPartitionedCall�z_mean/StatefulPartitionedCall�
dense1/StatefulPartitionedCallStatefulPartitionedCallinputsdense1_1322dense1_1324*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense1_layer_call_and_return_conditional_losses_1321�
relu1/PartitionedCallPartitionedCall'dense1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@* 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu1_layer_call_and_return_conditional_losses_1331�
dense2/StatefulPartitionedCallStatefulPartitionedCallrelu1/PartitionedCall:output:0dense2_1343dense2_1345*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense2_layer_call_and_return_conditional_losses_1342�
relu2/PartitionedCallPartitionedCall'dense2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu2_layer_call_and_return_conditional_losses_1352�
z_mean/StatefulPartitionedCallStatefulPartitionedCallrelu2/PartitionedCall:output:0z_mean_1364z_mean_1366*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_z_mean_layer_call_and_return_conditional_losses_1363v
IdentityIdentity'z_mean/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^dense1/StatefulPartitionedCall^dense2/StatefulPartitionedCall^z_mean/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 2@
dense1/StatefulPartitionedCalldense1/StatefulPartitionedCall2@
dense2/StatefulPartitionedCalldense2/StatefulPartitionedCall2@
z_mean/StatefulPartitionedCallz_mean/StatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1322:$ 

_user_specified_name1324:$ 

_user_specified_name1343:$ 

_user_specified_name1345:$ 

_user_specified_name1364:$ 

_user_specified_name1366
�
�
%__inference_dense1_layer_call_fn_1489

inputs
unknown:9@
	unknown_0:@
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense1_layer_call_and_return_conditional_losses_1321o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������@<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������9: : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1483:$ 

_user_specified_name1485
�	
�
@__inference_dense2_layer_call_and_return_conditional_losses_1528

inputs0
matmul_readvariableop_resource:@ -
biasadd_readvariableop_resource: 
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:@ *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������@: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�
@
$__inference_relu2_layer_call_fn_1533

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu2_layer_call_and_return_conditional_losses_1352`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�

�
&__inference_encoder_layer_call_fn_1408

inputs
unknown:9@
	unknown_0:@
	unknown_1:@ 
	unknown_2: 
	unknown_3: 
	unknown_4:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*(
_read_only_resource_inputs

*0
config_proto 

CPU

GPU2*0J 8� *J
fERC
A__inference_encoder_layer_call_and_return_conditional_losses_1370o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1394:$ 

_user_specified_name1396:$ 

_user_specified_name1398:$ 

_user_specified_name1400:$ 

_user_specified_name1402:$ 

_user_specified_name1404
�
@
$__inference_relu1_layer_call_fn_1504

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@* 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu1_layer_call_and_return_conditional_losses_1331`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:���������@"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������@:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs
�
[
?__inference_relu2_layer_call_and_return_conditional_losses_1538

inputs
identityF
ReluReluinputs*
T0*'
_output_shapes
:��������� Z
IdentityIdentityRelu:activations:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�	
�
@__inference_z_mean_layer_call_and_return_conditional_losses_1557

inputs0
matmul_readvariableop_resource: -
biasadd_readvariableop_resource:
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:���������S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:��������� : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�	
�
@__inference_dense1_layer_call_and_return_conditional_losses_1499

inputs0
matmul_readvariableop_resource:9@-
biasadd_readvariableop_resource:@
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:9@*
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:@*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:���������@S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������9: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�
[
?__inference_relu1_layer_call_and_return_conditional_losses_1509

inputs
identityF
ReluReluinputs*
T0*'
_output_shapes
:���������@Z
IdentityIdentityRelu:activations:0*
T0*'
_output_shapes
:���������@"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������@:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs
�
�
A__inference_encoder_layer_call_and_return_conditional_losses_1391

inputs
dense1_1373:9@
dense1_1375:@
dense2_1379:@ 
dense2_1381: 
z_mean_1385: 
z_mean_1387:
identity��dense1/StatefulPartitionedCall�dense2/StatefulPartitionedCall�z_mean/StatefulPartitionedCall�
dense1/StatefulPartitionedCallStatefulPartitionedCallinputsdense1_1373dense1_1375*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense1_layer_call_and_return_conditional_losses_1321�
relu1/PartitionedCallPartitionedCall'dense1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������@* 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu1_layer_call_and_return_conditional_losses_1331�
dense2/StatefulPartitionedCallStatefulPartitionedCallrelu1/PartitionedCall:output:0dense2_1379dense2_1381*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense2_layer_call_and_return_conditional_losses_1342�
relu2/PartitionedCallPartitionedCall'dense2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *0
config_proto 

CPU

GPU2*0J 8� *H
fCRA
?__inference_relu2_layer_call_and_return_conditional_losses_1352�
z_mean/StatefulPartitionedCallStatefulPartitionedCallrelu2/PartitionedCall:output:0z_mean_1385z_mean_1387*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_z_mean_layer_call_and_return_conditional_losses_1363v
IdentityIdentity'z_mean/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^dense1/StatefulPartitionedCall^dense2/StatefulPartitionedCall^z_mean/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 2@
dense1/StatefulPartitionedCalldense1/StatefulPartitionedCall2@
dense2/StatefulPartitionedCalldense2/StatefulPartitionedCall2@
z_mean/StatefulPartitionedCallz_mean/StatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1373:$ 

_user_specified_name1375:$ 

_user_specified_name1379:$ 

_user_specified_name1381:$ 

_user_specified_name1385:$ 

_user_specified_name1387
�	
�
@__inference_z_mean_layer_call_and_return_conditional_losses_1363

inputs0
matmul_readvariableop_resource: -
biasadd_readvariableop_resource:
identity��BiasAdd/ReadVariableOp�MatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:���������S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:��������� : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�
[
?__inference_relu2_layer_call_and_return_conditional_losses_1352

inputs
identityF
ReluReluinputs*
T0*'
_output_shapes
:��������� Z
IdentityIdentityRelu:activations:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
__inference__wrapped_model_1309

inputs?
-encoder_dense1_matmul_readvariableop_resource:9@<
.encoder_dense1_biasadd_readvariableop_resource:@?
-encoder_dense2_matmul_readvariableop_resource:@ <
.encoder_dense2_biasadd_readvariableop_resource: ?
-encoder_z_mean_matmul_readvariableop_resource: <
.encoder_z_mean_biasadd_readvariableop_resource:
identity��%encoder/dense1/BiasAdd/ReadVariableOp�$encoder/dense1/MatMul/ReadVariableOp�%encoder/dense2/BiasAdd/ReadVariableOp�$encoder/dense2/MatMul/ReadVariableOp�%encoder/z_mean/BiasAdd/ReadVariableOp�$encoder/z_mean/MatMul/ReadVariableOp�
$encoder/dense1/MatMul/ReadVariableOpReadVariableOp-encoder_dense1_matmul_readvariableop_resource*
_output_shapes

:9@*
dtype0�
encoder/dense1/MatMulMatMulinputs,encoder/dense1/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@�
%encoder/dense1/BiasAdd/ReadVariableOpReadVariableOp.encoder_dense1_biasadd_readvariableop_resource*
_output_shapes
:@*
dtype0�
encoder/dense1/BiasAddBiasAddencoder/dense1/MatMul:product:0-encoder/dense1/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������@m
encoder/relu1/ReluReluencoder/dense1/BiasAdd:output:0*
T0*'
_output_shapes
:���������@�
$encoder/dense2/MatMul/ReadVariableOpReadVariableOp-encoder_dense2_matmul_readvariableop_resource*
_output_shapes

:@ *
dtype0�
encoder/dense2/MatMulMatMul encoder/relu1/Relu:activations:0,encoder/dense2/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� �
%encoder/dense2/BiasAdd/ReadVariableOpReadVariableOp.encoder_dense2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0�
encoder/dense2/BiasAddBiasAddencoder/dense2/MatMul:product:0-encoder/dense2/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:��������� m
encoder/relu2/ReluReluencoder/dense2/BiasAdd:output:0*
T0*'
_output_shapes
:��������� �
$encoder/z_mean/MatMul/ReadVariableOpReadVariableOp-encoder_z_mean_matmul_readvariableop_resource*
_output_shapes

: *
dtype0�
encoder/z_mean/MatMulMatMul encoder/relu2/Relu:activations:0,encoder/z_mean/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:����������
%encoder/z_mean/BiasAdd/ReadVariableOpReadVariableOp.encoder_z_mean_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0�
encoder/z_mean/BiasAddBiasAddencoder/z_mean/MatMul:product:0-encoder/z_mean/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������n
IdentityIdentityencoder/z_mean/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp&^encoder/dense1/BiasAdd/ReadVariableOp%^encoder/dense1/MatMul/ReadVariableOp&^encoder/dense2/BiasAdd/ReadVariableOp%^encoder/dense2/MatMul/ReadVariableOp&^encoder/z_mean/BiasAdd/ReadVariableOp%^encoder/z_mean/MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 2N
%encoder/dense1/BiasAdd/ReadVariableOp%encoder/dense1/BiasAdd/ReadVariableOp2L
$encoder/dense1/MatMul/ReadVariableOp$encoder/dense1/MatMul/ReadVariableOp2N
%encoder/dense2/BiasAdd/ReadVariableOp%encoder/dense2/BiasAdd/ReadVariableOp2L
$encoder/dense2/MatMul/ReadVariableOp$encoder/dense2/MatMul/ReadVariableOp2N
%encoder/z_mean/BiasAdd/ReadVariableOp%encoder/z_mean/BiasAdd/ReadVariableOp2L
$encoder/z_mean/MatMul/ReadVariableOp$encoder/z_mean/MatMul/ReadVariableOp:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource
�
�
%__inference_dense2_layer_call_fn_1518

inputs
unknown:@ 
	unknown_0: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *$
_read_only_resource_inputs
*0
config_proto 

CPU

GPU2*0J 8� *I
fDRB
@__inference_dense2_layer_call_and_return_conditional_losses_1342o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:��������� <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������@: : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:���������@
 
_user_specified_nameinputs:$ 

_user_specified_name1512:$ 

_user_specified_name1514
�

�
"__inference_signature_wrapper_1480

inputs
unknown:9@
	unknown_0:@
	unknown_1:@ 
	unknown_2: 
	unknown_3: 
	unknown_4:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*(
_read_only_resource_inputs

*0
config_proto 

CPU

GPU2*0J 8� *(
f#R!
__inference__wrapped_model_1309o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*2
_input_shapes!
:���������9: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:���������9
 
_user_specified_nameinputs:$ 

_user_specified_name1466:$ 

_user_specified_name1468:$ 

_user_specified_name1470:$ 

_user_specified_name1472:$ 

_user_specified_name1474:$ 

_user_specified_name1476"�L
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*�
serving_default�
9
inputs/
serving_default_inputs:0���������9:
z_mean0
StatefulPartitionedCall:0���������tensorflow/serving/predict:�p
�
layer-0
layer_with_weights-0
layer-1
layer-2
layer_with_weights-1
layer-3
layer-4
layer_with_weights-2
layer-5
	variables
trainable_variables
	regularization_losses

	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature

signatures"
_tf_keras_network
"
_tf_keras_input_layer
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses

kernel
bias"
_tf_keras_layer
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses"
_tf_keras_layer
�
	variables
trainable_variables
regularization_losses
 	keras_api
!__call__
*"&call_and_return_all_conditional_losses

#kernel
$bias"
_tf_keras_layer
�
%	variables
&trainable_variables
'regularization_losses
(	keras_api
)__call__
**&call_and_return_all_conditional_losses"
_tf_keras_layer
�
+	variables
,trainable_variables
-regularization_losses
.	keras_api
/__call__
*0&call_and_return_all_conditional_losses

1kernel
2bias"
_tf_keras_layer
J
0
1
#2
$3
14
25"
trackable_list_wrapper
J
0
1
#2
$3
14
25"
trackable_list_wrapper
 "
trackable_list_wrapper
�
3non_trainable_variables

4layers
5metrics
6layer_regularization_losses
7layer_metrics
	variables
trainable_variables
	regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
�
8trace_0
9trace_12�
&__inference_encoder_layer_call_fn_1408
&__inference_encoder_layer_call_fn_1425�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z8trace_0z9trace_1
�
:trace_0
;trace_12�
A__inference_encoder_layer_call_and_return_conditional_losses_1370
A__inference_encoder_layer_call_and_return_conditional_losses_1391�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z:trace_0z;trace_1
�B�
__inference__wrapped_model_1309inputs"�
���
FullArgSpec
args� 
varargsjargs
varkwjkwargs
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
,
<serving_default"
signature_map
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
=non_trainable_variables

>layers
?metrics
@layer_regularization_losses
Alayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
�
Btrace_02�
%__inference_dense1_layer_call_fn_1489�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zBtrace_0
�
Ctrace_02�
@__inference_dense1_layer_call_and_return_conditional_losses_1499�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zCtrace_0
:9@2dense1/kernel
:@2dense1/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
Dnon_trainable_variables

Elayers
Fmetrics
Glayer_regularization_losses
Hlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
�
Itrace_02�
$__inference_relu1_layer_call_fn_1504�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zItrace_0
�
Jtrace_02�
?__inference_relu1_layer_call_and_return_conditional_losses_1509�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zJtrace_0
.
#0
$1"
trackable_list_wrapper
.
#0
$1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
Knon_trainable_variables

Llayers
Mmetrics
Nlayer_regularization_losses
Olayer_metrics
	variables
trainable_variables
regularization_losses
!__call__
*"&call_and_return_all_conditional_losses
&""call_and_return_conditional_losses"
_generic_user_object
�
Ptrace_02�
%__inference_dense2_layer_call_fn_1518�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zPtrace_0
�
Qtrace_02�
@__inference_dense2_layer_call_and_return_conditional_losses_1528�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zQtrace_0
:@ 2dense2/kernel
: 2dense2/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
Rnon_trainable_variables

Slayers
Tmetrics
Ulayer_regularization_losses
Vlayer_metrics
%	variables
&trainable_variables
'regularization_losses
)__call__
**&call_and_return_all_conditional_losses
&*"call_and_return_conditional_losses"
_generic_user_object
�
Wtrace_02�
$__inference_relu2_layer_call_fn_1533�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zWtrace_0
�
Xtrace_02�
?__inference_relu2_layer_call_and_return_conditional_losses_1538�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 zXtrace_0
.
10
21"
trackable_list_wrapper
.
10
21"
trackable_list_wrapper
 "
trackable_list_wrapper
�
Ynon_trainable_variables

Zlayers
[metrics
\layer_regularization_losses
]layer_metrics
+	variables
,trainable_variables
-regularization_losses
/__call__
*0&call_and_return_all_conditional_losses
&0"call_and_return_conditional_losses"
_generic_user_object
�
^trace_02�
%__inference_z_mean_layer_call_fn_1547�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z^trace_0
�
_trace_02�
@__inference_z_mean_layer_call_and_return_conditional_losses_1557�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z_trace_0
: 2z_mean/kernel
:2z_mean/bias
 "
trackable_list_wrapper
J
0
1
2
3
4
5"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
&__inference_encoder_layer_call_fn_1408inputs"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
&__inference_encoder_layer_call_fn_1425inputs"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
A__inference_encoder_layer_call_and_return_conditional_losses_1370inputs"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
A__inference_encoder_layer_call_and_return_conditional_losses_1391inputs"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
"__inference_signature_wrapper_1480inputs"�
���
FullArgSpec
args� 
varargs
 
varkwjkwargs
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
%__inference_dense1_layer_call_fn_1489inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
@__inference_dense1_layer_call_and_return_conditional_losses_1499inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
$__inference_relu1_layer_call_fn_1504inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
?__inference_relu1_layer_call_and_return_conditional_losses_1509inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
%__inference_dense2_layer_call_fn_1518inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
@__inference_dense2_layer_call_and_return_conditional_losses_1528inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
$__inference_relu2_layer_call_fn_1533inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
?__inference_relu2_layer_call_and_return_conditional_losses_1538inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
%__inference_z_mean_layer_call_fn_1547inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
@__inference_z_mean_layer_call_and_return_conditional_losses_1557inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 �
__inference__wrapped_model_1309j#$12/�,
%�"
 �
inputs���������9
� "/�,
*
z_mean �
z_mean����������
@__inference_dense1_layer_call_and_return_conditional_losses_1499c/�,
%�"
 �
inputs���������9
� ",�)
"�
tensor_0���������@
� �
%__inference_dense1_layer_call_fn_1489X/�,
%�"
 �
inputs���������9
� "!�
unknown���������@�
@__inference_dense2_layer_call_and_return_conditional_losses_1528c#$/�,
%�"
 �
inputs���������@
� ",�)
"�
tensor_0��������� 
� �
%__inference_dense2_layer_call_fn_1518X#$/�,
%�"
 �
inputs���������@
� "!�
unknown��������� �
A__inference_encoder_layer_call_and_return_conditional_losses_1370o#$127�4
-�*
 �
inputs���������9
p

 
� ",�)
"�
tensor_0���������
� �
A__inference_encoder_layer_call_and_return_conditional_losses_1391o#$127�4
-�*
 �
inputs���������9
p 

 
� ",�)
"�
tensor_0���������
� �
&__inference_encoder_layer_call_fn_1408d#$127�4
-�*
 �
inputs���������9
p

 
� "!�
unknown����������
&__inference_encoder_layer_call_fn_1425d#$127�4
-�*
 �
inputs���������9
p 

 
� "!�
unknown����������
?__inference_relu1_layer_call_and_return_conditional_losses_1509_/�,
%�"
 �
inputs���������@
� ",�)
"�
tensor_0���������@
� |
$__inference_relu1_layer_call_fn_1504T/�,
%�"
 �
inputs���������@
� "!�
unknown���������@�
?__inference_relu2_layer_call_and_return_conditional_losses_1538_/�,
%�"
 �
inputs��������� 
� ",�)
"�
tensor_0��������� 
� |
$__inference_relu2_layer_call_fn_1533T/�,
%�"
 �
inputs��������� 
� "!�
unknown��������� �
"__inference_signature_wrapper_1480t#$129�6
� 
/�,
*
inputs �
inputs���������9"/�,
*
z_mean �
z_mean����������
@__inference_z_mean_layer_call_and_return_conditional_losses_1557c12/�,
%�"
 �
inputs��������� 
� ",�)
"�
tensor_0���������
� �
%__inference_z_mean_layer_call_fn_1547X12/�,
%�"
 �
inputs��������� 
� "!�
unknown���������