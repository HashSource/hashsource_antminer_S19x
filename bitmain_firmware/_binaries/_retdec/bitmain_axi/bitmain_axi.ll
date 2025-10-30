source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_28 = constant i32 -516948194
@global_var_24 = constant i32 -476053504
@global_var_4 = external global i32
@global_var_14 = local_unnamed_addr global i32 -1319779311
@global_var_3 = local_unnamed_addr global i32 5120
@global_var_84 = local_unnamed_addr constant i32 941
@global_var_3ad = constant [26 x i8] c"axi_fpga_dev_mmap error!\0A\00"
@global_var_1f0 = local_unnamed_addr constant i32 988
@global_var_3dc = constant [13 x i8] c"axi_fpga_dev\00"
@global_var_1f4 = local_unnamed_addr constant i32 3172
@global_var_c64 = external global i32
@global_var_0 = local_unnamed_addr global i32* @global_var_4
@global_var_1f8 = local_unnamed_addr constant i32 967
@global_var_3c7 = constant [21 x i8] c"In axi fpga driver!\0A\00"
@global_var_1 = global i32 335544320
@global_var_1fc = local_unnamed_addr constant i32 1001
@global_var_3e9 = constant [26 x i8] c"alloc axi_fpga_dev fail!\0A\00"
@global_var_200 = local_unnamed_addr constant i32 3260
@global_var_204 = local_unnamed_addr constant i32 37748928
@global_var_c68 = external local_unnamed_addr global i32
@global_var_208 = local_unnamed_addr constant i32 1027
@global_var_403 = constant [20 x i8] c"kmalloc cdev fail!\0A\00"
@global_var_20c = local_unnamed_addr constant i32 676
@global_var_54c = external global i32
@global_var_210 = local_unnamed_addr constant i32 1356
@global_var_214 = local_unnamed_addr constant i32 1047
@global_var_417 = constant [24 x i8] c"add axi_fpga_dev fail!\0A\00"
@global_var_218 = local_unnamed_addr constant i32 1071
@global_var_42f = constant [17 x i8] c"axi_fpga_vir_mem\00"
@global_var_21c = local_unnamed_addr constant i32 3252
@global_var_cb4 = external global i32
@global_var_220 = local_unnamed_addr constant i32 1088
@global_var_440 = constant [28 x i8] c"request_mem_region failed!\0A\00"
@global_var_224 = local_unnamed_addr constant i32 1116
@global_var_45c = constant [24 x i8] c"request_mem_region OK!\0A\00"
@global_var_c70 = external local_unnamed_addr global i32
@global_var_228 = local_unnamed_addr constant i32 1140
@global_var_474 = constant [15 x i8] c"ioremap fail!\0A\00"
@global_var_22c = local_unnamed_addr constant i32 1155
@global_var_483 = constant [26 x i8] c"!!!*base_vir_addr = 0x%x\0A\00"
@global_var_230 = local_unnamed_addr constant i32 1181
@global_var_49d = constant [38 x i8] c"AXI fpga dev virtual address is 0x%x\0A\00"
@global_var_234 = local_unnamed_addr constant i32 1219
@global_var_4c3 = constant [23 x i8] c"*base_vir_addr = 0x%x\0A\00"
@global_var_c74 = external local_unnamed_addr global i32
@global_var_238 = local_unnamed_addr constant i32 1242
@global_var_4da = constant [40 x i8] c"Err:failed in creating axi fpga class.\0A\00"
@global_var_298 = local_unnamed_addr constant i32 3172
@global_var_29c = local_unnamed_addr constant i32 3252
@global_var_2a0 = local_unnamed_addr constant i32 1282
@global_var_502 = local_unnamed_addr constant [26 x i8] c"Bye Bye axi fpga driver!\0A\00"

define i32 @axi_fpga_dev_open() local_unnamed_addr {
dec_label_pc_24:
  ret i32 0, !insn.addr !0
}

define i32 @axi_fpga_dev_mmap(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !1
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, ptrtoint (i32* @global_var_28 to i32), !insn.addr !2
  %3 = inttoptr i32 %2 to i32*, !insn.addr !2
  %4 = load i32, i32* %3, align 4, !insn.addr !2
  %5 = add i32 %arg2, ptrtoint (i32* @global_var_24 to i32), !insn.addr !3
  %6 = inttoptr i32 %5 to i32*, !insn.addr !3
  %7 = load i32, i32* %6, align 4, !insn.addr !3
  %8 = or i32 %4, 67387392, !insn.addr !4
  %9 = and i32 %7, -61, !insn.addr !5
  store i32 %8, i32* %3, align 4, !insn.addr !6
  store i32 %9, i32* %6, align 4, !insn.addr !7
  %10 = add i32 %arg2, ptrtoint (i32* @global_var_4 to i32), !insn.addr !8
  %11 = inttoptr i32 %10 to i32*, !insn.addr !8
  %12 = load i32, i32* %11, align 4, !insn.addr !8
  %13 = sub i32 %12, %arg2, !insn.addr !9
  %14 = call i32 @device_destroy(i32 %arg2, i32 %arg2, i32 262144, i32 %13, i32 %9, i32 %arg2, i32 %arg3, i32 %1), !insn.addr !10
  %15 = icmp eq i32 %14, 0, !insn.addr !11
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !12
  br i1 %15, label %dec_label_pc_7c, label %dec_label_pc_70, !insn.addr !12

dec_label_pc_70:                                  ; preds = %dec_label_pc_2c
  %16 = call i32 @unknown_ccc(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3ad, i32 0, i32 0)), !insn.addr !13
  store i32 -11, i32* %r0.0.reg2mem, !insn.addr !14
  br label %dec_label_pc_7c, !insn.addr !14

dec_label_pc_7c:                                  ; preds = %dec_label_pc_70, %dec_label_pc_2c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !15

; uselistorder directives
  uselistorder i32* @global_var_4, { 1, 0 }
  uselistorder i32 %arg2, { 4, 1, 3, 0, 2, 6, 5 }
}

define i32 @axi_fpga_dev_release() local_unnamed_addr {
dec_label_pc_88:
  ret i32 0, !insn.addr !16
}

define i32 @init_module(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_90:
  %r1.1.reg2mem = alloca i32, !insn.addr !17
  %r0.3.reg2mem = alloca i32, !insn.addr !17
  %r5.1.reg2mem = alloca i32, !insn.addr !17
  %r5.0.reg2mem = alloca i32, !insn.addr !17
  %r1.0.reg2mem = alloca i32, !insn.addr !17
  %r0.2.reg2mem = alloca i32, !insn.addr !17
  %0 = call i32 @unknown_d38(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_3c7, i32 0, i32 0), i32 %arg2), !insn.addr !18
  %1 = call i32 @unknown_d08(i32* nonnull @global_var_c64, i32 0, i32* nonnull @global_var_1, i32 ptrtoint ([13 x i8]* @global_var_3dc to i32)), !insn.addr !19
  %2 = icmp slt i32 %1, 0, !insn.addr !20
  %3 = icmp eq i1 %2, false, !insn.addr !21
  store i32 ptrtoint ([26 x i8]* @global_var_3e9 to i32), i32* %r0.2.reg2mem, !insn.addr !21
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !21
  store i32 %1, i32* %r5.0.reg2mem, !insn.addr !21
  br i1 %3, label %dec_label_pc_c4, label %dec_label_pc_110, !insn.addr !21

dec_label_pc_c4:                                  ; preds = %dec_label_pc_90
  %4 = load i32, i32* inttoptr (i32 3284 to i32*), align 4, !insn.addr !22
  %5 = call i32 @unknown_d28(i32 %4, i32 37748928), !insn.addr !23
  %6 = icmp eq i32 %5, 0, !insn.addr !24
  store i32 %5, i32* inttoptr (i32 3176 to i32*), align 8, !insn.addr !25
  store i32 ptrtoint ([20 x i8]* @global_var_403 to i32), i32* %r0.3.reg2mem, !insn.addr !26
  store i32 37748928, i32* %r1.1.reg2mem, !insn.addr !26
  br i1 %6, label %dec_label_pc_148, label %dec_label_pc_e4, !insn.addr !26

dec_label_pc_e4:                                  ; preds = %dec_label_pc_c4
  %7 = call i32 @unknown_d48(), !insn.addr !27
  %8 = load i32, i32* @global_var_c68, align 4, !insn.addr !28
  %9 = load i32, i32* @global_var_c64, align 4, !insn.addr !29
  %10 = add i32 %8, ptrtoint (i32* @global_var_24 to i32), !insn.addr !30
  %11 = inttoptr i32 %10 to i32*, !insn.addr !30
  store i32 ptrtoint (i32* @global_var_54c to i32), i32* %11, align 4, !insn.addr !30
  %12 = call i32 @unknown_d2c(i32 %8, i32 %9, i32* nonnull @global_var_1), !insn.addr !31
  %13 = icmp eq i32 %12, 0, !insn.addr !32
  store i32 ptrtoint ([24 x i8]* @global_var_417 to i32), i32* %r0.2.reg2mem, !insn.addr !33
  store i32 %9, i32* %r1.0.reg2mem, !insn.addr !33
  store i32 %12, i32* %r5.0.reg2mem, !insn.addr !33
  br i1 %13, label %dec_label_pc_120, label %dec_label_pc_110, !insn.addr !33

dec_label_pc_110:                                 ; preds = %dec_label_pc_e4, %dec_label_pc_90
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %14 = inttoptr i32 %r0.2.reload to i8*, !insn.addr !34
  %15 = call i32 @unknown_d38(i8* %14, i32 %r1.0.reload), !insn.addr !34
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !34
  br label %dec_label_pc_114, !insn.addr !34

dec_label_pc_114:                                 ; preds = %dec_label_pc_178, %dec_label_pc_1cc, %dec_label_pc_1d8, %dec_label_pc_148, %dec_label_pc_110
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !35

dec_label_pc_120:                                 ; preds = %dec_label_pc_e4
  %16 = call i32 @unknown_d54(i32 3252, i32 1073741824, i32 5120, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_42f, i32 0, i32 0), i32 0), !insn.addr !36
  %17 = icmp eq i32 %16, 0, !insn.addr !37
  store i32 %16, i32* inttoptr (i32 3180 to i32*), align 4, !insn.addr !38
  store i32 ptrtoint ([28 x i8]* @global_var_440 to i32), i32* %r0.3.reg2mem, !insn.addr !39
  store i32 1073741824, i32* %r1.1.reg2mem, !insn.addr !39
  br i1 %17, label %dec_label_pc_148, label %dec_label_pc_154, !insn.addr !39

dec_label_pc_148:                                 ; preds = %dec_label_pc_120, %dec_label_pc_c4
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  %18 = inttoptr i32 %r0.3.reload to i8*, !insn.addr !40
  %19 = call i32 @unknown_d38(i8* %18, i32 %r1.1.reload), !insn.addr !40
  store i32 ptrtoint (i32* @global_var_1 to i32), i32* %r5.1.reg2mem, !insn.addr !41
  br label %dec_label_pc_114, !insn.addr !41

dec_label_pc_154:                                 ; preds = %dec_label_pc_120
  %20 = call i32 @unknown_d38(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_45c, i32 0, i32 0), i32 1073741824), !insn.addr !42
  %21 = call i32 @unknown_d34(i32 1073741824, i32 5120), !insn.addr !43
  %22 = icmp eq i32 %21, 0, !insn.addr !44
  store i32 %21, i32* inttoptr (i32 3184 to i32*), align 16, !insn.addr !45
  br i1 %22, label %dec_label_pc_178, label %dec_label_pc_194, !insn.addr !46

dec_label_pc_178:                                 ; preds = %dec_label_pc_154
  %23 = call i32 @unknown_d38(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_474, i32 0, i32 0), i32 0), !insn.addr !47
  %24 = load i32, i32* @global_var_c70, align 4, !insn.addr !48
  %25 = call i32 @unknown_d38(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_483, i32 0, i32 0), i32 %24), !insn.addr !49
  store i32 -1, i32* %r5.1.reg2mem, !insn.addr !49
  br label %dec_label_pc_114, !insn.addr !49

dec_label_pc_194:                                 ; preds = %dec_label_pc_154
  %26 = call i32 @unknown_d38(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_49d, i32 0, i32 0), i32 %21), !insn.addr !50
  %27 = load i32, i32* @global_var_c70, align 4, !insn.addr !51
  %28 = call i32 @__asm_dsb(i32 %26, i32 %27), !insn.addr !52
  %29 = call i32 @unknown_d38(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_4c3, i32 0, i32 0), i32 %27), !insn.addr !53
  %30 = call i32 @unknown_d0c(i32 ptrtoint (i32* @global_var_54c to i32), i32 ptrtoint ([13 x i8]* @global_var_3dc to i32), i32 3188), !insn.addr !54
  %31 = icmp ugt i32 %30, -4097, !insn.addr !55
  %32 = icmp eq i32 %30, -4096, !insn.addr !55
  store i32 %30, i32* @global_var_c74, align 4, !insn.addr !56
  %33 = icmp ne i1 %31, true, !insn.addr !57
  %34 = or i1 %32, %33, !insn.addr !57
  br i1 %34, label %dec_label_pc_1d8, label %dec_label_pc_1cc, !insn.addr !57

dec_label_pc_1cc:                                 ; preds = %dec_label_pc_194
  %35 = call i32 @unknown_d38(i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_4da, i32 0, i32 0), i32 ptrtoint ([13 x i8]* @global_var_3dc to i32)), !insn.addr !58
  store i32 -1, i32* %r5.1.reg2mem, !insn.addr !59
  br label %dec_label_pc_114, !insn.addr !59

dec_label_pc_1d8:                                 ; preds = %dec_label_pc_194
  %36 = call i32 @unknown_d30(), !insn.addr !60
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !61
  br label %dec_label_pc_114, !insn.addr !61

; uselistorder directives
  uselistorder i32 %30, { 2, 0, 1 }
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %21, { 0, 2, 1 }
  uselistorder i32 %16, { 1, 0 }
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %r5.1.reg2mem, { 4, 2, 1, 5, 0, 3 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32 (i8*, i32)* @unknown_d38, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 0, { 0, 7, 8, 9, 10, 11, 12, 13, 14, 5, 15, 16, 26, 17, 18, 27, 6, 19, 20, 28, 29, 1, 30, 25, 21, 22, 3, 23, 24, 2, 31, 4 }
  uselistorder i32 1, { 6, 5, 4, 3, 2, 1, 7, 0 }
  uselistorder label %dec_label_pc_114, { 2, 1, 0, 3, 4 }
}

define i32 @axi_fpga_dev_exit() local_unnamed_addr {
dec_label_pc_23c:
  %0 = load i32, i32* @global_var_c64, align 4, !insn.addr !62
  %1 = call i32 @unknown_ee8(i32 %0, i32* nonnull @global_var_1), !insn.addr !63
  %2 = load i32, i32* @global_var_c68, align 4, !insn.addr !64
  %3 = call i32 @unknown_efc(i32 %2), !insn.addr !65
  %4 = load i32, i32* @global_var_c68, align 4, !insn.addr !66
  %5 = call i32 @unknown_ecc(i32 %4), !insn.addr !67
  %6 = load i32, i32* @global_var_c70, align 4, !insn.addr !68
  %7 = call i32 @unknown_ec4(i32 %6), !insn.addr !69
  %8 = call i32 @unknown_ed0(i32* nonnull @global_var_cb4, i32 1073741824, i32 5120), !insn.addr !70
  %9 = load i32, i32* @global_var_c64, align 4, !insn.addr !71
  %10 = load i32, i32* @global_var_c74, align 4, !insn.addr !72
  %11 = call i32 @unknown_eec(i32 %10, i32 %9), !insn.addr !73
  %12 = load i32, i32* @global_var_c74, align 4, !insn.addr !74
  %13 = call i32 @unknown_ec0(i32 %12), !insn.addr !75
  br label %dec_label_pc_294, !insn.addr !76

dec_label_pc_294:                                 ; preds = %dec_label_pc_294, %dec_label_pc_23c
  br label %dec_label_pc_294, !insn.addr !77

; uselistorder directives
  uselistorder i32 1073741824, { 2, 3, 1, 0, 4 }
  uselistorder i32* @global_var_1, { 0, 3, 1, 2 }
  uselistorder i32* @global_var_c64, { 1, 2, 3, 0 }
}

declare i32 @device_destroy(i32, i32, i32, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @unknown_ccc(i8*) local_unnamed_addr

declare i32 @unknown_d08(i32*, i32, i32*, i32) local_unnamed_addr

declare i32 @unknown_d0c(i32, i32, i32) local_unnamed_addr

declare i32 @unknown_d28(i32, i32) local_unnamed_addr

declare i32 @unknown_d2c(i32, i32, i32*) local_unnamed_addr

declare i32 @unknown_d30() local_unnamed_addr

declare i32 @unknown_d34(i32, i32) local_unnamed_addr

declare i32 @unknown_d38(i8*, i32) local_unnamed_addr

declare i32 @unknown_d48() local_unnamed_addr

declare i32 @unknown_d54(i32, i32, i32, i8*, i32) local_unnamed_addr

declare i32 @unknown_ec0(i32) local_unnamed_addr

declare i32 @unknown_ec4(i32) local_unnamed_addr

declare i32 @unknown_ecc(i32) local_unnamed_addr

declare i32 @unknown_ed0(i32*, i32, i32) local_unnamed_addr

declare i32 @unknown_ee8(i32, i32*) local_unnamed_addr

declare i32 @unknown_eec(i32, i32) local_unnamed_addr

declare i32 @unknown_efc(i32) local_unnamed_addr

declare i32 @__asm_dsb(i32, i32) local_unnamed_addr

!0 = !{i64 40}
!1 = !{i64 44}
!2 = !{i64 52}
!3 = !{i64 56}
!4 = !{i64 64}
!5 = !{i64 68}
!6 = !{i64 72}
!7 = !{i64 76}
!8 = !{i64 84}
!9 = !{i64 96}
!10 = !{i64 100}
!11 = !{i64 104}
!12 = !{i64 108}
!13 = !{i64 116}
!14 = !{i64 120}
!15 = !{i64 128}
!16 = !{i64 140}
!17 = !{i64 144}
!18 = !{i64 160}
!19 = !{i64 180}
!20 = !{i64 184}
!21 = !{i64 192}
!22 = !{i64 204}
!23 = !{i64 208}
!24 = !{i64 212}
!25 = !{i64 216}
!26 = !{i64 224}
!27 = !{i64 232}
!28 = !{i64 244}
!29 = !{i64 248}
!30 = !{i64 252}
!31 = !{i64 256}
!32 = !{i64 260}
!33 = !{i64 264}
!34 = !{i64 272}
!35 = !{i64 284}
!36 = !{i64 308}
!37 = !{i64 312}
!38 = !{i64 316}
!39 = !{i64 320}
!40 = !{i64 328}
!41 = !{i64 336}
!42 = !{i64 344}
!43 = !{i64 356}
!44 = !{i64 360}
!45 = !{i64 368}
!46 = !{i64 372}
!47 = !{i64 380}
!48 = !{i64 384}
!49 = !{i64 392}
!50 = !{i64 408}
!51 = !{i64 416}
!52 = !{i64 420}
!53 = !{i64 428}
!54 = !{i64 444}
!55 = !{i64 448}
!56 = !{i64 452}
!57 = !{i64 456}
!58 = !{i64 464}
!59 = !{i64 468}
!60 = !{i64 488}
!61 = !{i64 492}
!62 = !{i64 584}
!63 = !{i64 588}
!64 = !{i64 592}
!65 = !{i64 596}
!66 = !{i64 600}
!67 = !{i64 604}
!68 = !{i64 608}
!69 = !{i64 612}
!70 = !{i64 628}
!71 = !{i64 632}
!72 = !{i64 636}
!73 = !{i64 640}
!74 = !{i64 644}
!75 = !{i64 648}
!76 = !{i64 656}
!77 = !{i64 660}
