source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_10468 = local_unnamed_addr constant [6 x i8] c"login\00"
@global_var_1045c = local_unnamed_addr constant [5 x i8] c"root\00"
@global_var_10464 = local_unnamed_addr constant [3 x i8] c"-f\00"
@global_var_10378 = local_unnamed_addr constant i32 66324
@global_var_1037c = local_unnamed_addr constant i32 66577
@global_var_1039c = local_unnamed_addr constant i32 68720
@global_var_103a0 = local_unnamed_addr constant i32 28
@global_var_20f18 = global i32 1
@global_var_21000 = local_unnamed_addr global i32* @global_var_20f18
@global_var_2101c = local_unnamed_addr global i32 0
@global_var_10444 = local_unnamed_addr constant i32 68338
@global_var_10448 = local_unnamed_addr constant i32 68328
@global_var_20f10 = global i32 66573
@global_var_21028 = external local_unnamed_addr global i8*

define i32 @function_102c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_102c4:
  %0 = call i32 @function_10380(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_102e4() local_unnamed_addr {
dec_label_pc_102e4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !2
}

define i32 @function_102f0() local_unnamed_addr {
dec_label_pc_102f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

define i32 @function_102fc() local_unnamed_addr {
dec_label_pc_102fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !4
}

define i32 @function_10308() local_unnamed_addr {
dec_label_pc_10308:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !5
}

define i32 @function_10314() local_unnamed_addr {
dec_label_pc_10314:
  %0 = call i32 @function_102e4(), !insn.addr !6
  ret i32 0, !insn.addr !7
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10350:
  %0 = call i32 @function_102f0(), !insn.addr !8
  %1 = call i32 @function_10308(), !insn.addr !9
  ret i32 %1, !insn.addr !10
}

define i32 @function_10380() local_unnamed_addr {
dec_label_pc_10380:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_2101c, align 4, !insn.addr !11
  %3 = icmp eq i32 %2, 0, !insn.addr !12
  br i1 %3, label %4, label %dec_label_pc_10398, !insn.addr !13

; <label>:4:                                      ; preds = %dec_label_pc_10380
  ret i32 %1, !insn.addr !13

dec_label_pc_10398:                               ; preds = %dec_label_pc_10380
  %5 = call i32 @function_102fc(), !insn.addr !14
  ret i32 %5, !insn.addr !14
}

define i32 @function_103a4(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_103a4:
  %0 = alloca i1
  %1 = load i1, i1* %0
  %2 = load i1, i1* %0
  %3 = load i1, i1* %0
  %4 = icmp eq i1 %3, %1, !insn.addr !15
  %or.cond = or i1 %2, %4
  br i1 %or.cond, label %5, label %6, !insn.addr !16

; <label>:5:                                      ; preds = %6, %dec_label_pc_103a4
  ret i32 %arg1, !insn.addr !16

; <label>:6:                                      ; preds = %dec_label_pc_103a4
  call void @__asm_svclt(i32 18288), !insn.addr !15
  br label %5, !insn.addr !15

; uselistorder directives
  uselistorder i1* %0, { 2, 1, 0 }
}

define i32 @function_103ce() local_unnamed_addr {
dec_label_pc_103ce:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %r0.0.reg2mem = alloca i32, !insn.addr !17
  %4 = load i32, i32* %0
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i1, i1* %1
  %8 = load fp128, fp128* %2
  %9 = load double, double* %3
  %10 = load double, double* %3
  %11 = load double, double* %3
  %12 = load double, double* %3
  %13 = call fp128 @__asm_vaddw.s8(fp128 %8, double %9), !insn.addr !17
  %14 = call fp128 @__asm_vaddl.s8(double %12, double %11), !insn.addr !18
  br i1 %6, label %dec_label_pc_103da, label %15, !insn.addr !19

; <label>:15:                                     ; preds = %dec_label_pc_103ce
  %16 = call i32 @function_2507e6(), !insn.addr !19
  br label %dec_label_pc_103da, !insn.addr !19

dec_label_pc_103da:                               ; preds = %dec_label_pc_103ce, %15
  %17 = call i32 @unknown_54606(), !insn.addr !20
  %18 = call double @__asm_vhadd.s8(double %12, double %10), !insn.addr !21
  %19 = call fp128 @__asm_vsubw.s8(fp128 %8, double %12), !insn.addr !22
  %20 = icmp eq i1 %7, %5, !insn.addr !23
  store i32 %17, i32* %r0.0.reg2mem, !insn.addr !23
  br i1 %20, label %23, label %21, !insn.addr !23

; <label>:21:                                     ; preds = %dec_label_pc_103da
  %22 = call i32 @__asm_mrslt(i32 %4), !insn.addr !23
  store i32 %22, i32* %r0.0.reg2mem, !insn.addr !23
  br label %23, !insn.addr !23

; <label>:23:                                     ; preds = %dec_label_pc_103da, %21
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !23

; uselistorder directives
  uselistorder double %12, { 1, 2, 0 }
  uselistorder fp128 %8, { 1, 0 }
  uselistorder double* %3, { 3, 2, 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %23, { 1, 0 }
  uselistorder label %dec_label_pc_103da, { 1, 0 }
}

define i32 @function_103ee() local_unnamed_addr {
dec_label_pc_103ee:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !24
}

define i32 @function_103f0() local_unnamed_addr {
dec_label_pc_103f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !25
}

define i32 @function_103f4() local_unnamed_addr {
dec_label_pc_103f4:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !26
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_21028 to i8*), align 4, !insn.addr !27
  %5 = icmp eq i8 %4, 0, !insn.addr !28
  br i1 %5, label %dec_label_pc_10402, label %dec_label_pc_1040a, !insn.addr !28

dec_label_pc_10402:                               ; preds = %dec_label_pc_103f4
  %6 = call i32 @function_103a4(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !29
  store i8 1, i8* bitcast (i8** @global_var_21028 to i8*), align 4, !insn.addr !30
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !30
  br label %dec_label_pc_1040a, !insn.addr !30

dec_label_pc_1040a:                               ; preds = %dec_label_pc_103f4, %dec_label_pc_10402
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !31

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1040a, { 1, 0 }
}

define i32 @function_1040c() local_unnamed_addr {
dec_label_pc_1040c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !32
}

define i32 @function_10410(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10410:
  %0 = call i32 @function_102c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !33
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 134930, i32 ptrtoint (i32* @global_var_20f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !34

; uselistorder directives
  uselistorder i32 0, { 1, 3, 0, 2 }
}

define i32 @function_1044c() local_unnamed_addr {
dec_label_pc_1044c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @function_10450(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10450:
  ret i32 %arg1, !insn.addr !36
}

declare i32 @unknown_54606() local_unnamed_addr

define i32 @function_2507e6() local_unnamed_addr {
dec_label_pc_2507e6:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 11, 10, 9, 16, 8, 7, 6, 17, 15, 14, 13, 5, 12, 4, 3, 2, 1, 0, 18 }
}

declare void @__asm_svclt(i32) local_unnamed_addr

declare fp128 @__asm_vaddw.s8(fp128, double) local_unnamed_addr

declare fp128 @__asm_vaddl.s8(double, double) local_unnamed_addr

declare double @__asm_vhadd.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vsubw.s8(fp128, double) local_unnamed_addr

declare i32 @__asm_mrslt(i32) local_unnamed_addr

!0 = !{i64 66248}
!1 = !{i64 66252}
!2 = !{i64 66284}
!3 = !{i64 66296}
!4 = !{i64 66308}
!5 = !{i64 66320}
!6 = !{i64 66368}
!7 = !{i64 66380}
!8 = !{i64 66412}
!9 = !{i64 66416}
!10 = !{i64 66422}
!11 = !{i64 66444}
!12 = !{i64 66448}
!13 = !{i64 66452}
!14 = !{i64 66456}
!15 = !{i64 66500}
!16 = !{i64 66468}
!17 = !{i64 66510}
!18 = !{i64 66514}
!19 = !{i64 66518}
!20 = !{i64 66522}
!21 = !{i64 66530}
!22 = !{i64 66534}
!23 = !{i64 66538}
!24 = !{i64 66542}
!25 = !{i64 66544}
!26 = !{i64 66548}
!27 = !{i64 66558}
!28 = !{i64 66560}
!29 = !{i64 66562}
!30 = !{i64 66568}
!31 = !{i64 66570}
!32 = !{i64 66572}
!33 = !{i64 66592}
!34 = !{i64 66624}
!35 = !{i64 66636}
!36 = !{i64 66644}
