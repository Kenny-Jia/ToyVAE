; ModuleID = '/u1/hjia625/conifer/Vitis_Latency_small_SNL_VAE/myproject_prj/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>" = type { %"struct.ap_fixed_base<32, 16, true, AP_TRN, AP_WRAP, 0>" }
%"struct.ap_fixed_base<32, 16, true, AP_TRN, AP_WRAP, 0>" = type { %"struct.ssdm_int<32, true>" }
%"struct.ssdm_int<32, true>" = type { i32 }

; Function Attrs: inaccessiblemem_or_argmemonly noinline
define void @apatb_myproject_ir(%"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="57" %inputs, %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* noalias nocapture nonnull "fpga.decayed.dim.hint"="3" "partition" %layer8_out) local_unnamed_addr #0 {
entry:
  %inputs_copy5 = alloca i1824, align 512
  %layer8_out_copy_0 = alloca i32, align 512
  %layer8_out_copy_1 = alloca i32, align 512
  %layer8_out_copy_2 = alloca i32, align 512
  %0 = bitcast %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* %inputs to [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]*
  %1 = bitcast %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* %layer8_out to [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]*
  call void @copy_in([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %0, i1824* nonnull align 512 %inputs_copy5, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %1, i32* nonnull align 512 %layer8_out_copy_0, i32* nonnull align 512 %layer8_out_copy_1, i32* nonnull align 512 %layer8_out_copy_2)
  call void @apatb_myproject_hw(i1824* %inputs_copy5, i32* %layer8_out_copy_0, i32* %layer8_out_copy_1, i32* %layer8_out_copy_2)
  call void @copy_back([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %0, i1824* %inputs_copy5, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %1, i32* %layer8_out_copy_0, i32* %layer8_out_copy_1, i32* %layer8_out_copy_2)
  ret void
}

; Function Attrs: nounwind
declare void @llvm.assume(i1) #1

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"(i32* nocapture "orig.arg.no"="0" "unpacked"="0.0.0" %dst_0, i32* nocapture "orig.arg.no"="0" "unpacked"="0.0.1" %dst_1, i32* nocapture "orig.arg.no"="0" "unpacked"="0.0.2" %dst_2, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* readonly "orig.arg.no"="1" "unpacked"="1" %src, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %dst.addr.0.0.06.exit, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %dst.addr.0.0.06.exit ]
  %1 = trunc i64 %for.loop.idx2 to i2
  %src.addr.0.0.05 = getelementptr [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"], [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %2 = load i32, i32* %src.addr.0.0.05, align 4
  switch i2 %1, label %dst.addr.0.0.06.case.2 [
    i2 0, label %dst.addr.0.0.06.case.0
    i2 1, label %dst.addr.0.0.06.case.1
  ]

dst.addr.0.0.06.case.0:                           ; preds = %for.loop
  store i32 %2, i32* %dst_0, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.1:                           ; preds = %for.loop
  store i32 %2, i32* %dst_1, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.case.2:                           ; preds = %for.loop
  %3 = icmp eq i2 %1, -2
  call void @llvm.assume(i1 %3)
  store i32 %2, i32* %dst_2, align 4
  br label %dst.addr.0.0.06.exit

dst.addr.0.0.06.exit:                             ; preds = %dst.addr.0.0.06.case.2, %dst.addr.0.0.06.case.1, %dst.addr.0.0.06.case.0
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %dst.addr.0.0.06.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"(i32* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.0" %dst_0, i32* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.1" %dst_1, i32* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0.2" %dst_2, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="1" "unpacked"="1" %src) #3 {
entry:
  %0 = icmp eq [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"(i32* %dst_0, i32* %dst_1, i32* %dst_2, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %src, i64 3)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.35"([3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* "orig.arg.no"="0" "unpacked"="0" %dst, i32* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.0" %src_0, i32* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.1" %src_1, i32* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0.2" %src_2, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %src.addr.0.0.05.exit, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %src.addr.0.0.05.exit ]
  %1 = trunc i64 %for.loop.idx2 to i2
  %dst.addr.0.0.06 = getelementptr [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"], [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  switch i2 %1, label %src.addr.0.0.05.case.2 [
    i2 0, label %src.addr.0.0.05.case.0
    i2 1, label %src.addr.0.0.05.case.1
  ]

src.addr.0.0.05.case.0:                           ; preds = %for.loop
  %_0 = load i32, i32* %src_0, align 4
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.1:                           ; preds = %for.loop
  %_1 = load i32, i32* %src_1, align 4
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.case.2:                           ; preds = %for.loop
  %2 = icmp eq i2 %1, -2
  call void @llvm.assume(i1 %2)
  %_2 = load i32, i32* %src_2, align 4
  br label %src.addr.0.0.05.exit

src.addr.0.0.05.exit:                             ; preds = %src.addr.0.0.05.case.2, %src.addr.0.0.05.case.1, %src.addr.0.0.05.case.0
  %3 = phi i32 [ %_0, %src.addr.0.0.05.case.0 ], [ %_1, %src.addr.0.0.05.case.1 ], [ %_2, %src.addr.0.0.05.case.2 ]
  store i32 %3, i32* %dst.addr.0.0.06, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %src.addr.0.0.05.exit, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.32"([3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0" %dst, i32* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.0" %src_0, i32* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.1" %src_1, i32* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0.2" %src_2) #3 {
entry:
  %0 = icmp eq [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.35"([3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %dst, i32* %src_0, i32* %src_1, i32* %src_2, i64 3)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.45"(i1824* nocapture "orig.arg.no"="0" "unpacked"="0.0" %dst, i64 %dst_shift, [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* readonly "orig.arg.no"="1" "unpacked"="1" %src, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %src.addr.0.0.05 = getelementptr [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"], [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %1 = mul i64 32, %for.loop.idx2
  %2 = add i64 %dst_shift, %1
  %3 = load i32, i32* %src.addr.0.0.05, align 4
  %4 = load i1824, i1824* %dst, align 256
  %5 = zext i64 %2 to i1824
  %6 = shl i1824 4294967295, %5
  %7 = zext i32 %3 to i1824
  %8 = shl i1824 %7, %5
  %thr.xor1 = xor i1824 %6, -1
  %thr.and2 = and i1824 %4, %thr.xor1
  %thr.or3 = or i1824 %thr.and2, %8
  store i1824 %thr.or3, i1824* %dst, align 256
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.42"(i1824* noalias nocapture align 512 "orig.arg.no"="0" "unpacked"="0.0" %dst, [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="1" "unpacked"="1" %src) #3 {
entry:
  %0 = icmp eq [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %src, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.45"(i1824* %dst, i64 0, [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %src, i64 57)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_in([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="0" "unpacked"="0", i1824* noalias nocapture align 512 "orig.arg.no"="1" "unpacked"="1.0", [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias readonly "orig.arg.no"="2" "unpacked"="2", i32* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i32* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i32* noalias nocapture align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2) #4 {
entry:
  call void @"onebyonecpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.42"(i1824* align 512 %1, [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %0)
  call void @"onebyonecpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"(i32* align 512 %_0, i32* align 512 %_1, i32* align 512 %_2, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %2)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define void @"arraycpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* "orig.arg.no"="0" "unpacked"="0" %dst, i1824* nocapture readonly "orig.arg.no"="1" "unpacked"="1.0" %src, i64 %src_shift, i64 "orig.arg.no"="2" "unpacked"="2" %num) #2 {
entry:
  %0 = icmp eq [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %1 = mul i64 32, %for.loop.idx2
  %2 = add i64 %src_shift, %1
  %dst.addr.0.0.06 = getelementptr [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"], [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, i64 0, i64 %for.loop.idx2, i32 0, i32 0, i32 0
  %3 = load i1824, i1824* %src, align 256
  %4 = zext i64 %2 to i1824
  %5 = lshr i1824 %3, %4
  %6 = trunc i1824 %5 to i32
  store i32 %6, i32* %dst.addr.0.0.06, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @"onebyonecpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0" %dst, i1824* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0" %src) #3 {
entry:
  %0 = icmp eq [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %dst, null
  br i1 %0, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @"arraycpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* nonnull %dst, i1824* %src, i64 0, i64 57)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_out([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1824* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2) #5 {
entry:
  call void @"onebyonecpy_hls.p0a57struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %0, i1824* align 512 %1)
  call void @"onebyonecpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.32"([3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %2, i32* align 512 %_0, i32* align 512 %_1, i32* align 512 %_2)
  ret void
}

declare void @apatb_myproject_hw(i1824*, i32*, i32*, i32*)

; Function Attrs: argmemonly noinline norecurse
define internal void @copy_back([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="0" "unpacked"="0", i1824* noalias nocapture readonly align 512 "orig.arg.no"="1" "unpacked"="1.0", [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* noalias "orig.arg.no"="2" "unpacked"="2", i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.0" %_0, i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.1" %_1, i32* noalias nocapture readonly align 512 "orig.arg.no"="3" "unpacked"="3.0.2" %_2) #5 {
entry:
  call void @"onebyonecpy_hls.p0a3struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>.32"([3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %2, i32* align 512 %_0, i32* align 512 %_1, i32* align 512 %_2)
  ret void
}

define void @myproject_hw_stub_wrapper(i1824*, i32*, i32*, i32*) #6 {
entry:
  %4 = alloca [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]
  %5 = alloca [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]
  call void @copy_out([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %4, i1824* %0, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %5, i32* %1, i32* %2, i32* %3)
  %6 = bitcast [57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %4 to %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"*
  %7 = bitcast [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %5 to %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"*
  call void @myproject_hw_stub(%"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* %6, %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"* %7)
  call void @copy_in([57 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %4, i1824* %0, [3 x %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"]* %5, i32* %1, i32* %2, i32* %3)
  ret void
}

declare void @myproject_hw_stub(%"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"*, %"struct.ap_fixed<32, 16, AP_TRN, AP_WRAP, 0>"*)

attributes #0 = { inaccessiblemem_or_argmemonly noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { nounwind }
attributes #2 = { argmemonly noinline norecurse "fpga.wrapper.func"="arraycpy_hls" }
attributes #3 = { argmemonly noinline norecurse "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #4 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyin" }
attributes #5 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyout" }
attributes #6 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}
!datalayout.transforms.on.top = !{!5}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
!5 = !{!6, !8, !10}
!6 = !{!7}
!7 = !{!"1.0", [3 x i32]* null}
!8 = !{!9}
!9 = !{!"array_partition", !"type=Complete", !"dim=1"}
!10 = !{!11, !12, !13}
!11 = !{!"1.0.0", i32* null}
!12 = !{!"1.0.1", i32* null}
!13 = !{!"1.0.2", i32* null}
