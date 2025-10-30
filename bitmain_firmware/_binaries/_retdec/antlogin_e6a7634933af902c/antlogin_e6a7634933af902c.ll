source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_1031c = local_unnamed_addr constant i32 66516
@global_var_10320 = local_unnamed_addr constant i32 66589
@global_var_10340 = local_unnamed_addr constant i32 66124
@global_var_1024c = constant [3 x i8] c".4\00"
@global_var_10344 = local_unnamed_addr constant i32 28
@global_var_10334 = constant i32 -481165312
@global_var_10368 = local_unnamed_addr constant i32 132523
@global_var_1046c = local_unnamed_addr constant [5 x i8] c"root\00"
@global_var_10474 = local_unnamed_addr constant [3 x i8] c"-f\00"
@global_var_10478 = local_unnamed_addr constant [6 x i8] c"login\00"
@global_var_10454 = local_unnamed_addr constant i32 65632
@global_var_1045c = local_unnamed_addr constant [3 x i8] c"pG\00"
@global_var_20490 = global i32 66457
@global_var_205a8 = external global i8*

declare i32 @unknown_240(i32) local_unnamed_addr

define i32 @function_102a4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_102a4:
  %0 = call i32 @function_10324(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_102c4() local_unnamed_addr {
dec_label_pc_102c4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !2
}

define i32 @function_102d0() local_unnamed_addr {
dec_label_pc_102d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

define i32 @function_102dc() local_unnamed_addr {
dec_label_pc_102dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !4
}

define i32 @function_102e8() local_unnamed_addr {
dec_label_pc_102e8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !5
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_102f4:
  %0 = call i32 @function_102d0(), !insn.addr !6
  %1 = call i32 @function_102e8(), !insn.addr !7
  ret i32 %1, !insn.addr !8
}

define i32 @function_10324() local_unnamed_addr {
dec_label_pc_10324:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10334 to i32), i32 ptrtoint ([3 x i8]* @global_var_1024c to i32)), i32 28) to i32*), align 4, !insn.addr !9
  %3 = icmp eq i32 %2, 0, !insn.addr !10
  br i1 %3, label %4, label %dec_label_pc_1033c, !insn.addr !11

; <label>:4:                                      ; preds = %dec_label_pc_10324
  ret i32 %1, !insn.addr !11

dec_label_pc_1033c:                               ; preds = %dec_label_pc_10324
  %5 = call i32 @function_102dc(), !insn.addr !12
  ret i32 %5, !insn.addr !12
}

define i32 @function_10348() local_unnamed_addr {
dec_label_pc_10348:
  ret i32 ptrtoint (i8** @global_var_205a8 to i32), !insn.addr !13
}

define i32 @function_1036c() local_unnamed_addr {
dec_label_pc_1036c:
  ret i32 ptrtoint (i8** @global_var_205a8 to i32), !insn.addr !14
}

define i32 @function_10398() local_unnamed_addr {
dec_label_pc_10398:
  %r0.0.reg2mem = alloca i32, !insn.addr !15
  %0 = load i8, i8* bitcast (i8** @global_var_205a8 to i8*), align 4, !insn.addr !16
  %1 = icmp eq i8 %0, 0, !insn.addr !17
  br i1 %1, label %dec_label_pc_103a6, label %dec_label_pc_103ae, !insn.addr !17

dec_label_pc_103a6:                               ; preds = %dec_label_pc_10398
  %2 = call i32 @function_10348(), !insn.addr !18
  store i8 1, i8* bitcast (i8** @global_var_205a8 to i8*), align 4, !insn.addr !19
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !19
  br label %dec_label_pc_103ae, !insn.addr !19

dec_label_pc_103ae:                               ; preds = %dec_label_pc_10398, %dec_label_pc_103a6
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !20

; uselistorder directives
  uselistorder i8** @global_var_205a8, { 1, 0 }
  uselistorder label %dec_label_pc_103ae, { 1, 0 }
}

define i32 @function_103b0(i32 %arg1) local_unnamed_addr {
dec_label_pc_103b0:
  ret i32 %arg1, !insn.addr !21
}

define i32 @function_103b6(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_103b6:
  %0 = alloca i32
  %1 = alloca i1
  %lr.0.off0.reg2mem = alloca i16, !insn.addr !22
  %r0.0.reg2mem = alloca i32, !insn.addr !22
  %merge.reg2mem = alloca i32, !insn.addr !22
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !22
  br i1 %3, label %7, label %dec_label_pc_103ba, !insn.addr !22

; <label>:7:                                      ; preds = %17, %16, %dec_label_pc_103b6
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !22

dec_label_pc_103ba:                               ; preds = %dec_label_pc_103b6
  %8 = icmp eq i1 %4, %2, !insn.addr !23
  %extract.t = trunc i32 %6 to i16
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !23
  store i16 %extract.t, i16* %lr.0.off0.reg2mem, !insn.addr !23
  br i1 %8, label %16, label %9, !insn.addr !23

; <label>:9:                                      ; preds = %dec_label_pc_103ba
  %10 = add i32 %arg4, -4, !insn.addr !23
  %11 = inttoptr i32 %10 to i32*, !insn.addr !23
  %12 = load i32, i32* %11, align 4, !insn.addr !23
  %13 = add i32 %arg4, -20, !insn.addr !23
  %14 = inttoptr i32 %13 to i32*, !insn.addr !23
  %15 = load i32, i32* %14, align 4, !insn.addr !23
  %extract.t1 = trunc i32 %15 to i16
  store i32 %12, i32* %r0.0.reg2mem, !insn.addr !23
  store i16 %extract.t1, i16* %lr.0.off0.reg2mem, !insn.addr !23
  br label %16, !insn.addr !23

; <label>:16:                                     ; preds = %dec_label_pc_103ba, %9
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !24
  br i1 %4, label %17, label %7, !insn.addr !24

; <label>:17:                                     ; preds = %16
  %lr.0.off0.reload = load i16, i16* %lr.0.off0.reg2mem
  %18 = inttoptr i32 %5 to i16*, !insn.addr !24
  store i16 %lr.0.off0.reload, i16* %18, align 2, !insn.addr !24
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !24
  br label %7, !insn.addr !24

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0 }
  uselistorder i32* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %16, { 1, 0 }
}

define i32 @function_103c2() local_unnamed_addr {
dec_label_pc_103c2:
  %0 = call i32 @function_1036c(), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_103c4(i32 %arg1) local_unnamed_addr {
dec_label_pc_103c4:
  %0 = alloca i1
  %1 = load i1, i1* %0
  br i1 %1, label %2, label %dec_label_pc_103cc, !insn.addr !26

; <label>:2:                                      ; preds = %dec_label_pc_103c4
  %3 = call i32 @unknown_240(i32 %arg1), !insn.addr !26
  ret i32 %3, !insn.addr !26

dec_label_pc_103cc:                               ; preds = %dec_label_pc_103c4
  ret i32 %arg1, !insn.addr !27
}

define i32 @function_103d0() local_unnamed_addr {
dec_label_pc_103d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !28

; uselistorder directives
  uselistorder i32 1, { 6, 8, 11, 10, 9, 7, 5, 12, 4, 3, 2, 1, 0 }
}

define i32 @function_103d4() local_unnamed_addr {
dec_label_pc_103d4:
  %0 = call i32 @function_102c4(), !insn.addr !29
  ret i32 0, !insn.addr !30
}

define i32 @function_1041c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1041c:
  %0 = call i32 @function_102a4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !31
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_20490 to i32), i32 84900), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !32

; uselistorder directives
  uselistorder i32 0, { 1, 0, 2 }
}

define i32 @function_10460(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10460:
  ret i32 %arg1, !insn.addr !33
}

!0 = !{i64 66216}
!1 = !{i64 66220}
!2 = !{i64 66252}
!3 = !{i64 66264}
!4 = !{i64 66276}
!5 = !{i64 66288}
!6 = !{i64 66320}
!7 = !{i64 66324}
!8 = !{i64 66330}
!9 = !{i64 66352}
!10 = !{i64 66356}
!11 = !{i64 66360}
!12 = !{i64 66364}
!13 = !{i64 66404}
!14 = !{i64 66452}
!15 = !{i64 66456}
!16 = !{i64 66466}
!17 = !{i64 66468}
!18 = !{i64 66470}
!19 = !{i64 66476}
!20 = !{i64 66478}
!21 = !{i64 66480}
!22 = !{i64 66486}
!23 = !{i64 66490}
!24 = !{i64 66494}
!25 = !{i64 66498}
!26 = !{i64 66500}
!27 = !{i64 66508}
!28 = !{i64 66514}
!29 = !{i64 66568}
!30 = !{i64 66584}
!31 = !{i64 66606}
!32 = !{i64 66640}
!33 = !{i64 66660}
