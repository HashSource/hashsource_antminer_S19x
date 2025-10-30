source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat64 = type { i64, i64, i32, i32, i32, i32, i64, i64, i64, i32, i32, i64, i32, i32, i32, i32, i32, i32, i32, i32 }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@global_var_2300c = local_unnamed_addr global i32 67316
@global_var_23010 = local_unnamed_addr global i32 67316
@global_var_23014 = local_unnamed_addr global i32 67316
@global_var_23018 = local_unnamed_addr global i32 67316
@global_var_2301c = local_unnamed_addr global i32 67316
@global_var_23020 = local_unnamed_addr global i32 67316
@global_var_23024 = local_unnamed_addr global i32 67316
@global_var_23028 = local_unnamed_addr global i32 67316
@global_var_2302c = local_unnamed_addr global i32 67316
@global_var_23030 = local_unnamed_addr global i32 67316
@global_var_23034 = local_unnamed_addr global i32 67316
@global_var_23038 = local_unnamed_addr global i32 67316
@global_var_2303c = local_unnamed_addr global i32 67316
@global_var_23040 = local_unnamed_addr global i32 67316
@global_var_23044 = local_unnamed_addr global i32 67316
@global_var_23048 = local_unnamed_addr global i32 67316
@global_var_2304c = local_unnamed_addr global i32 67316
@global_var_23050 = local_unnamed_addr global i32 67316
@global_var_23054 = local_unnamed_addr global i32 67316
@global_var_23058 = local_unnamed_addr global i32 67316
@global_var_2305c = local_unnamed_addr global i32 67316
@global_var_23060 = local_unnamed_addr global i32 67316
@global_var_23064 = local_unnamed_addr global i32 67316
@global_var_23068 = local_unnamed_addr global i32 67316
@global_var_2306c = local_unnamed_addr global i32 67316
@global_var_10884 = local_unnamed_addr constant i32 75656
@global_var_12788 = constant [15 x i8] c"ething Wrong!\0A\00"
@global_var_10888 = local_unnamed_addr constant i32 112
@global_var_10878 = constant i32 -481165312
@global_var_122cc = constant [9 x i8] c"Useage:\0D\00"
@global_var_122d8 = constant [28 x i8] c"\09%s [option] [paramaters]\0A\0A\00"
@global_var_122f4 = constant [39 x i8] c"\09Option:{-f} {-s} {-p} {-n} {-x} {-q}\0A\00"
@global_var_1231c = constant [90 x i8] c"\09\09-f [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Only Check If Filename was Valided.\0A\00"
@global_var_12378 = constant [117 x i8] c"\09\09-s [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was Valided, and Splite Bmu To \22/tmp/tmpfw/\22\0A\00"
@global_var_123f0 = constant [106 x i8] c"\09\09-p [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was Valided, and Dump BmuComments\0A\00"
@global_var_1245c = constant [89 x i8] c"\09\09-x [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was FullSize BMU\0A\00"
@global_var_124b8 = constant [73 x i8] c"\09\09-n [nandBinFile]: \0A\09\09\09Splite SigImg To Single File To \22/tmp/tmpNand/\22\0A\00"
@global_var_12504 = constant [58 x i8] c"\09\09-q: \0A\09\09\09Generate A 256Bytes 0xff File To \22/tmp/256BFF\22\0A\00"
@global_var_12540 = constant [10 x i8] c"\09Returns:\00"
@global_var_1254c = constant [21 x i8] c"\09\090: \0A\09\09\09Well Done!\0A\00"
@global_var_12564 = constant [32 x i8] c"\09\09Others: \0A\09\09\09Something Wrong!\0A\00"
@global_var_12584 = constant [3 x i8] c"rb\00"
@global_var_12588 = constant [29 x i8] c"Load Nand Image File Failed!\00"
@global_var_2307c = global i32 256
@global_var_125a8 = constant [3 x i8] c"wb\00"
@global_var_125ac = constant [35 x i8] c"Try To Write To File '%s' Failed!\0A\00"
@global_var_125d0 = constant [12 x i8] c"/tmp/256BFF\00"
@global_var_125dc = constant [16 x i8] c"GenFile Failed!\00"
@global_var_125ec = constant [19 x i8] c"OpenSSL error: %s\0A\00"
@global_var_12600 = constant [23 x i8] c"Read Root PubK Failed!\00"
@global_var_12618 = constant [24 x i8] c"Check miner.pem Failed!\00"
@global_var_126ec = local_unnamed_addr constant [12 x i8] c"/tmp/tmpfw/\00"
@global_var_126f0 = local_unnamed_addr constant [8 x i8] c"/tmpfw/\00"
@global_var_126f4 = local_unnamed_addr constant [4 x i8] c"fw/\00"
@global_var_12630 = local_unnamed_addr constant [9 x i8] c"BOOT.bin\00"
@global_var_12634 = local_unnamed_addr constant [5 x i8] c".bin\00"
@global_var_1263c = local_unnamed_addr constant [15 x i8] c"devicetree.dtb\00"
@global_var_12640 = local_unnamed_addr constant [11 x i8] c"cetree.dtb\00"
@global_var_12644 = local_unnamed_addr constant [7 x i8] c"ee.dtb\00"
@global_var_12648 = local_unnamed_addr constant [3 x i8] c"tb\00"
@global_var_1264c = local_unnamed_addr constant [7 x i8] c"uImage\00"
@global_var_12650 = local_unnamed_addr constant [3 x i8] c"ge\00"
@global_var_12654 = local_unnamed_addr constant [17 x i8] c"minerfs.image.gz\00"
@global_var_12658 = local_unnamed_addr constant [13 x i8] c"rfs.image.gz\00"
@global_var_1265c = local_unnamed_addr constant [9 x i8] c"image.gz\00"
@global_var_12660 = local_unnamed_addr constant [5 x i8] c"e.gz\00"
@global_var_12668 = local_unnamed_addr constant [16 x i8] c"update.image.gz\00"
@global_var_1266c = local_unnamed_addr constant [12 x i8] c"te.image.gz\00"
@global_var_12670 = local_unnamed_addr constant [8 x i8] c"mage.gz\00"
@global_var_12674 = local_unnamed_addr constant [4 x i8] c".gz\00"
@global_var_12678 = local_unnamed_addr constant [11 x i8] c"crl.tar.gz\00"
@global_var_1267c = local_unnamed_addr constant [7 x i8] c"tar.gz\00"
@global_var_12680 = local_unnamed_addr constant [3 x i8] c"gz\00"
@global_var_12684 = local_unnamed_addr constant [17 x i8] c"miner.btm.tar.gz\00"
@global_var_12688 = local_unnamed_addr constant [13 x i8] c"r.btm.tar.gz\00"
@global_var_1268c = local_unnamed_addr constant [9 x i8] c"m.tar.gz\00"
@global_var_12690 = local_unnamed_addr constant [5 x i8] c"r.gz\00"
@global_var_12698 = local_unnamed_addr constant [8 x i8] c"reserve\00"
@global_var_1269c = local_unnamed_addr constant [4 x i8] c"rve\00"
@global_var_126a0 = local_unnamed_addr constant [9 x i8] c"datafile\00"
@global_var_126a4 = local_unnamed_addr constant [5 x i8] c"file\00"
@global_var_126ac = local_unnamed_addr constant [5 x i8] c".sig\00"
@global_var_126b4 = constant [27 x i8] c"fileName:'%s', size:[%d]\0D\0A\00"
@global_var_126d0 = constant [27 x i8] c"Create File '%s' Failed!\0D\0A\00"
@global_var_1276c = constant [43 x i8] c"File '%s' Not Enough %d, Something Wrong!\0A\00"
@global_var_12798 = constant [24 x i8] c"Read File '%s' Failed!\0A\00"
@global_var_127b0 = constant [23 x i8] c"'%s' Not A Btmu File!\0A\00"
@global_var_127c8 = constant [12 x i8] c"content:%x\0A\00"
@global_var_127d4 = constant [35 x i8] c"This Package Was Not Full Package!\00"
@global_var_127f8 = constant [32 x i8] c"Content Doesn't Match![%d][%d]\0A\00"
@global_var_12818 = constant [20 x i8] c"file[%d] size:[%d]\0A\00"
@global_var_1282c = constant [96 x i8] c"Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\0A\00"
@global_var_12890 = constant [34 x i8] c"Cannot Open Root PublicKey '%s'!\0A\00"
@global_var_128b4 = constant [36 x i8] c"Check pem payload failed! ret:[%d]\0A\00"
@global_var_128dc = constant [20 x i8] c"/usr/bin/fw_version\00"
@global_var_128f0 = constant [21 x i8] c"/tmp/tmpfw/miner.pem\00"
@global_var_12920 = constant [25 x i8] c"/tmp/tmpfw/miner.pem.sig\00"
@global_var_12908 = constant [24 x i8] c"Dump Miner.pem Failed!\0D\00"
@global_var_1293c = constant [28 x i8] c"Dump Miner.pem.sig Failed!\0D\00"
@global_var_12958 = constant [17 x i8] c"Load Pem Failed!\00"
@global_var_1296c = constant [24 x i8] c"Check File Sig failed!\0D\00"
@global_var_12984 = constant [11 x i8] c"All Done!\0D\00"
@global_var_12990 = constant [30 x i8] c"This Comment Of This Package:\00"
@global_var_129b0 = constant [19 x i8] c"fileName Too Long!\00"
@global_var_129c4 = constant [18 x i8] c"pemName Too Long!\00"
@global_var_129d8 = constant [11 x i8] c"Param Err!\00"
@global_var_129e4 = constant [21 x i8] c"Command Not Support!\00"
@global_var_122a8 = local_unnamed_addr constant i32 68742
@global_var_122ac = local_unnamed_addr constant i32 68732
@global_var_22f08 = global i32 67829
@global_var_10860 = local_unnamed_addr constant void ()* inttoptr (i32 73480 to void ()*)
@global_var_10864 = local_unnamed_addr constant void ()* inttoptr (i32 74357 to void ()*)
@global_var_23838 = external local_unnamed_addr global i8*
@global_var_12638 = local_unnamed_addr constant i8 0
@global_var_1264a = local_unnamed_addr constant i8 0
@global_var_12652 = local_unnamed_addr constant i8 0
@global_var_12664 = local_unnamed_addr constant i8 0
@global_var_12682 = local_unnamed_addr constant i8 0
@global_var_12694 = local_unnamed_addr constant i8 0
@global_var_126a8 = local_unnamed_addr constant i8 0
@global_var_126b0 = local_unnamed_addr constant i8 0
@2 = internal constant [2 x i8] c"r\00"
@3 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i32 0, i32 0)
@4 = internal constant [2 x i8] c"w\00"
@5 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @4, i32 0, i32 0)
@global_var_1288c = constant [2 x i8] c"r\00"
@global_var_128d8 = constant [2 x i8] c"w\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_106e8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_106e8:
  %0 = call i32 @function_10868(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define void @function_10708() local_unnamed_addr {
dec_label_pc_10708:
  call void @abort(), !insn.addr !2
  ret void, !insn.addr !2
}

define i32 @function_10714(i32 %arg1) local_unnamed_addr {
dec_label_pc_10714:
  %0 = call i32 @ERR_get_error(i32 %arg1), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10720(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10720:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1072c() local_unnamed_addr {
dec_label_pc_1072c:
  %0 = call i32 @__gmon_start__.1(), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10738(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10738:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32* @function_10744(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10744:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32 @function_10750(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_10750:
  %0 = call i32 @RSA_verify(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1075c(%_IO_FILE* %stream, i32 %off, i32 %whence) local_unnamed_addr {
dec_label_pc_1075c:
  %0 = call i32 @fseek(%_IO_FILE* %stream, i32 %off, i32 %whence), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10768(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10768:
  %0 = call i32 @PEM_read_bio_RSA_PUBKEY(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10774(i32* %arg1, i32* %arg2, i32* %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10774:
  %0 = call i32 @SHA256_Final(i32* %arg1, i32* %arg2, i32* %arg3, i32* %arg4), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10780(i8* %s) local_unnamed_addr {
dec_label_pc_10780:
  %0 = call i32 @strlen(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32* @function_1078c(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1078c:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !13
  ret i32* %0, !insn.addr !13
}

define %_IO_FILE* @function_10798(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10798:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !14
  ret %_IO_FILE* %0, !insn.addr !14
}

define i32 @function_107a4(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_107a4:
  %0 = call i32 @BIO_new_mem_buf(i32 %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i8* @function_107b0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_107b0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !16
  ret i8* %0, !insn.addr !16
}

define i32 @function_107bc(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107bc:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_107c8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_107c8:
  %0 = call i32 @ERR_error_string(i32 %arg1, i32 %arg2), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_107d4(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107d4:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_107e0(i32 %ver, i8* %filename, %stat64* %stat_buf) local_unnamed_addr {
dec_label_pc_107e0:
  %0 = call i32 @__xstat64(i32 %ver, i8* %filename, %stat64* %stat_buf), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_107f0(i8* %s) local_unnamed_addr {
dec_label_pc_107f0:
  %0 = call i32 @puts(i8* %s), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_107fc(i32 %arg1) local_unnamed_addr {
dec_label_pc_107fc:
  %0 = call i32 @RSA_free(i32 %arg1), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_10808(i32* %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @SHA256_Update(i32* %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10814(i32 %arg1) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i32 @BIO_free(i32 %arg1), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10820(i32* %arg1) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32 @SHA256_Init(i32* %arg1), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_1082c(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_1082c:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10838:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !27
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !27
  %2 = call i32 @__libc_start_main(i32 73480, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 74357 to void ()*), void ()* inttoptr (i32 73480 to void ()*), void ()* %1), !insn.addr !27
  call void @abort(), !insn.addr !28
  unreachable, !insn.addr !28
}

define i32 @function_1085c(i32 %arg1) local_unnamed_addr {
dec_label_pc_1085c:
  ret i32 %arg1, !insn.addr !29
}

define i32 @function_10868() local_unnamed_addr {
dec_label_pc_10868:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10878 to i32), i32 ptrtoint ([15 x i8]* @global_var_12788 to i32)), i32 112) to i32*), align 4, !insn.addr !30
  %3 = icmp eq i32 %2, 0, !insn.addr !31
  br i1 %3, label %4, label %dec_label_pc_10880, !insn.addr !32

; <label>:4:                                      ; preds = %dec_label_pc_10868
  ret i32 %1, !insn.addr !32

dec_label_pc_10880:                               ; preds = %dec_label_pc_10868
  %5 = call i32 @__gmon_start__.1(), !insn.addr !33
  ret i32 %5, !insn.addr !33
}

define i32 @function_1088c(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = alloca i32
  %1 = alloca i1
  %cpsr_n.21.reg2mem = alloca i1, !insn.addr !34
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  br i1 %3, label %6, label %dec_label_pc_108a8, !insn.addr !34

; <label>:6:                                      ; preds = %20, %dec_label_pc_108d4, %dec_label_pc_1088c
  ret i32 %arg1, !insn.addr !34

dec_label_pc_108a8:                               ; preds = %dec_label_pc_1088c
  %7 = icmp eq i1 %4, %2, !insn.addr !35
  br i1 %7, label %dec_label_pc_108bc, label %8, !insn.addr !35

; <label>:8:                                      ; preds = %dec_label_pc_108a8
  call void @__asm_svclt(i32 18288), !insn.addr !35
  br label %dec_label_pc_108bc, !insn.addr !35

dec_label_pc_108bc:                               ; preds = %8, %dec_label_pc_108a8
  br i1 %2, label %dec_label_pc_108d4, label %9, !insn.addr !36

; <label>:9:                                      ; preds = %dec_label_pc_108bc
  %10 = mul i32 %5, 1048577, !insn.addr !37
  %11 = mul i32 %5, 4194304, !insn.addr !36
  %12 = sub i32 0, %11
  %13 = sub i32 %12, 1
  %14 = and i32 %10, %13, !insn.addr !36
  %15 = icmp slt i32 %14, 0, !insn.addr !36
  %16 = icmp eq i32 %14, 0, !insn.addr !36
  store i1 %15, i1* %cpsr_n.21.reg2mem, !insn.addr !38
  br i1 %16, label %17, label %dec_label_pc_108d4, !insn.addr !38

; <label>:17:                                     ; preds = %9
  %18 = call i32 @unknown_240(), !insn.addr !38
  ret i32 %18, !insn.addr !38

dec_label_pc_108d4:                               ; preds = %dec_label_pc_108bc, %9
  %cpsr_n.21.reload = load i1, i1* %cpsr_n.21.reg2mem
  %19 = icmp eq i1 %cpsr_n.21.reload, %2, !insn.addr !39
  br i1 %19, label %6, label %20, !insn.addr !39

; <label>:20:                                     ; preds = %dec_label_pc_108d4
  call void @__asm_svclt(i32 18288), !insn.addr !39
  br label %6, !insn.addr !39

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i1 %2, { 2, 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %dec_label_pc_108d4, { 1, 0 }
}

define i32 @function_108dc() local_unnamed_addr {
dec_label_pc_108dc:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !40
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_23838 to i8*), align 4, !insn.addr !41
  %5 = icmp eq i8 %4, 0, !insn.addr !42
  br i1 %5, label %dec_label_pc_108ea, label %dec_label_pc_108f2, !insn.addr !42

dec_label_pc_108ea:                               ; preds = %dec_label_pc_108dc
  %6 = call i32 @function_1088c(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !43
  store i8 1, i8* bitcast (i8** @global_var_23838 to i8*), align 4, !insn.addr !44
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_108f2, !insn.addr !44

dec_label_pc_108f2:                               ; preds = %dec_label_pc_108dc, %dec_label_pc_108ea
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !45

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_108f2, { 1, 0 }
}

define i32 @function_108f4(i32 %arg1) local_unnamed_addr {
dec_label_pc_108f4:
  %0 = alloca i1
  %1 = load i1, i1* %0
  %2 = load i1, i1* %0
  %3 = icmp eq i1 %2, %1, !insn.addr !46
  br i1 %3, label %5, label %4, !insn.addr !46

; <label>:4:                                      ; preds = %dec_label_pc_108f4
  call void @__asm_svclt(i32 59356), !insn.addr !46
  br label %5, !insn.addr !46

; <label>:5:                                      ; preds = %dec_label_pc_108f4, %4
  %6 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_122cc, i32 0, i32 0)), !insn.addr !47
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !48
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_122d8, i32 0, i32 0), i8* %7), !insn.addr !48
  %9 = call i32 @puts(i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_122f4, i32 0, i32 0)), !insn.addr !49
  %10 = call i32 @puts(i8* getelementptr inbounds ([90 x i8], [90 x i8]* @global_var_1231c, i32 0, i32 0)), !insn.addr !50
  %11 = call i32 @puts(i8* getelementptr inbounds ([117 x i8], [117 x i8]* @global_var_12378, i32 0, i32 0)), !insn.addr !51
  %12 = call i32 @puts(i8* getelementptr inbounds ([106 x i8], [106 x i8]* @global_var_123f0, i32 0, i32 0)), !insn.addr !52
  %13 = call i32 @puts(i8* getelementptr inbounds ([89 x i8], [89 x i8]* @global_var_1245c, i32 0, i32 0)), !insn.addr !53
  %14 = call i32 @puts(i8* getelementptr inbounds ([73 x i8], [73 x i8]* @global_var_124b8, i32 0, i32 0)), !insn.addr !54
  %15 = call i32 @puts(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_12504, i32 0, i32 0)), !insn.addr !55
  %16 = call i32 @puts(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_12540, i32 0, i32 0)), !insn.addr !56
  %17 = call i32 @puts(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_1254c, i32 0, i32 0)), !insn.addr !57
  %18 = call i32 @puts(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_12564, i32 0, i32 0)), !insn.addr !58
  %19 = call i32 @__asm_nop(i32 %18), !insn.addr !59
  ret i32 %19, !insn.addr !60

; uselistorder directives
  uselistorder i1* %0, { 1, 0 }
  uselistorder label %5, { 1, 0 }
}

define i32 @function_109a8(i32* %arg1) local_unnamed_addr {
dec_label_pc_109a8:
  %r3.0.reg2mem = alloca i32, !insn.addr !61
  %storemerge3.reg2mem = alloca i32, !insn.addr !61
  %stack_var_-32784 = alloca i32, align 4
  %stack_var_-32788 = alloca i32, align 4
  store i32 0, i32* %stack_var_-32788, align 4, !insn.addr !62
  %0 = call i32* @memset(i32* nonnull %stack_var_-32784, i32 0, i32 32764), !insn.addr !63
  %1 = bitcast i32* %arg1 to i8*, !insn.addr !64
  %2 = call %_IO_FILE* @fopen64(i8* %1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_12584, i32 0, i32 0)), !insn.addr !64
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !65
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !66
  br i1 %3, label %dec_label_pc_10a10, label %dec_label_pc_10a38, !insn.addr !66

dec_label_pc_10a10:                               ; preds = %dec_label_pc_109a8
  %4 = call i32 @puts(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_12588, i32 0, i32 0)), !insn.addr !67
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !68
  br label %dec_label_pc_10b90, !insn.addr !68

dec_label_pc_10a38:                               ; preds = %dec_label_pc_109a8, %dec_label_pc_10b08
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %5 = mul nuw nsw i32 %storemerge3.reload, 132, !insn.addr !69
  %6 = add i32 %5, ptrtoint (i32* @global_var_2307c to i32), !insn.addr !70
  %7 = inttoptr i32 %6 to i32*, !insn.addr !71
  %8 = load i32, i32* %7, align 4, !insn.addr !71
  %9 = call i32 @fread(i32* nonnull %stack_var_-32788, i32 %8, i32 1, %_IO_FILE* nonnull %2), !insn.addr !72
  %10 = add i32 %5, add (i32 ptrtoint (i32* @global_var_2307c to i32), i32 4), !insn.addr !73
  %11 = inttoptr i32 %10 to i8*, !insn.addr !74
  %12 = call %_IO_FILE* @fopen64(i8* %11, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_125a8, i32 0, i32 0)), !insn.addr !74
  %13 = icmp eq %_IO_FILE* %12, null, !insn.addr !75
  br i1 %13, label %dec_label_pc_10ab8, label %dec_label_pc_10b08, !insn.addr !76

dec_label_pc_10ab8:                               ; preds = %dec_label_pc_10a38
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_125ac, i32 0, i32 0), i8* %11), !insn.addr !77
  %15 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !78
  store i32 2, i32* %r3.0.reg2mem, !insn.addr !79
  br label %dec_label_pc_10b90, !insn.addr !79

dec_label_pc_10b08:                               ; preds = %dec_label_pc_10a38
  %16 = load i32, i32* %7, align 4, !insn.addr !80
  %17 = call i32 @fwrite(i32* nonnull %stack_var_-32788, i32 %16, i32 1, %_IO_FILE* nonnull %12), !insn.addr !81
  %18 = call i32 @fclose(%_IO_FILE* nonnull %12), !insn.addr !82
  %19 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !83
  %20 = icmp ult i32 %19, 15, !insn.addr !84
  store i32 %19, i32* %storemerge3.reg2mem, !insn.addr !84
  br i1 %20, label %dec_label_pc_10a38, label %dec_label_pc_10b84, !insn.addr !84

dec_label_pc_10b84:                               ; preds = %dec_label_pc_10b08
  %21 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !85
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_10b90, !insn.addr !86

dec_label_pc_10b90:                               ; preds = %dec_label_pc_10b84, %dec_label_pc_10ab8, %dec_label_pc_10a10
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !87

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10a38, { 1, 0 }
}

define i32 @function_10b9c() local_unnamed_addr {
dec_label_pc_10b9c:
  %storemerge.reg2mem = alloca i32, !insn.addr !88
  %storemerge23.reg2mem = alloca i32, !insn.addr !88
  %stack_var_-268 = alloca i32, align 4
  %stack_var_-272 = alloca i32, align 4
  %0 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_125d0, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_125a8, i32 0, i32 0)), !insn.addr !89
  %1 = icmp eq %_IO_FILE* %0, null, !insn.addr !90
  br i1 %1, label %dec_label_pc_10bcc, label %dec_label_pc_10be0, !insn.addr !91

dec_label_pc_10bcc:                               ; preds = %dec_label_pc_10b9c
  %2 = call i32 @puts(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_125dc, i32 0, i32 0)), !insn.addr !92
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !93
  br label %dec_label_pc_10c64, !insn.addr !93

dec_label_pc_10be0:                               ; preds = %dec_label_pc_10b9c
  store i32 0, i32* %stack_var_-272, align 4, !insn.addr !94
  %3 = call i32* @memset(i32* nonnull %stack_var_-268, i32 0, i32 252), !insn.addr !95
  %4 = ptrtoint i32* %stack_var_-272 to i32, !insn.addr !96
  store i32 0, i32* %storemerge23.reg2mem
  br label %dec_label_pc_10c10

dec_label_pc_10c10:                               ; preds = %dec_label_pc_10be0, %dec_label_pc_10c10
  %storemerge23.reload = load i32, i32* %storemerge23.reg2mem
  %5 = add i32 %storemerge23.reload, %4, !insn.addr !97
  %6 = inttoptr i32 %5 to i8*, !insn.addr !98
  store i8 -1, i8* %6, align 1, !insn.addr !98
  %7 = add nuw nsw i32 %storemerge23.reload, 1, !insn.addr !99
  %8 = icmp ult i32 %7, 256, !insn.addr !100
  store i32 %7, i32* %storemerge23.reg2mem, !insn.addr !100
  br i1 %8, label %dec_label_pc_10c10, label %dec_label_pc_10c3c, !insn.addr !100

dec_label_pc_10c3c:                               ; preds = %dec_label_pc_10c10
  %9 = call i32 @fwrite(i32* nonnull %stack_var_-272, i32 256, i32 1, %_IO_FILE* nonnull %0), !insn.addr !101
  %10 = call i32 @fclose(%_IO_FILE* nonnull %0), !insn.addr !102
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !103
  br label %dec_label_pc_10c64, !insn.addr !103

dec_label_pc_10c64:                               ; preds = %dec_label_pc_10c3c, %dec_label_pc_10bcc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !104

; uselistorder directives
  uselistorder %_IO_FILE* %0, { 1, 0, 2 }
  uselistorder i32* %storemerge23.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_10c10, { 1, 0 }
}

define i32 @function_10c70(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10c70:
  %r3.0.reg2mem = alloca i32, !insn.addr !105
  %r0.1.reg2mem = alloca i32, !insn.addr !105
  %0 = ptrtoint i32* %arg4 to i32
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-164 = alloca i32, align 4
  %1 = call i32 @BIO_new_mem_buf(i32 %0, i32 1024), !insn.addr !106
  %2 = call i32 @PEM_read_bio_RSA_PUBKEY(i32 %1, i32 0, i32 0, i32 0), !insn.addr !107
  %3 = icmp eq i32 %2, 0, !insn.addr !108
  br i1 %3, label %dec_label_pc_10cd0, label %dec_label_pc_10d0c, !insn.addr !109

dec_label_pc_10cd0:                               ; preds = %dec_label_pc_10c70
  %4 = call i32 @ERR_get_error(i32 0), !insn.addr !110
  %5 = call i32 @ERR_error_string(i32 %4, i32 0), !insn.addr !111
  %6 = inttoptr i32 %5 to i8*, !insn.addr !112
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_125ec, i32 0, i32 0), i8* %6), !insn.addr !112
  %8 = call i32 @puts(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_12600, i32 0, i32 0)), !insn.addr !113
  store i32 12, i32* %r3.0.reg2mem, !insn.addr !114
  br label %dec_label_pc_10ddc, !insn.addr !114

dec_label_pc_10d0c:                               ; preds = %dec_label_pc_10c70
  %9 = call i32 @SHA256_Init(i32* nonnull %stack_var_-164), !insn.addr !115
  %10 = call i32 @SHA256_Update(i32* nonnull %stack_var_-164, i32 %arg1, i32 %arg2, i32* nonnull %stack_var_-164), !insn.addr !116
  %11 = call i32 @SHA256_Final(i32* nonnull %stack_var_-52, i32* nonnull %stack_var_-164, i32* nonnull %stack_var_-164, i32* nonnull %stack_var_-52), !insn.addr !117
  %12 = call i32 @RSA_verify(i32 672, i32* nonnull %stack_var_-52, i32 32, i32 %arg3, i32 256, i32 %2), !insn.addr !118
  %13 = call i32 @RSA_free(i32 %2), !insn.addr !119
  %14 = icmp eq i32 %1, 0, !insn.addr !120
  store i32 %13, i32* %r0.1.reg2mem, !insn.addr !121
  br i1 %14, label %dec_label_pc_10d90, label %dec_label_pc_10d88, !insn.addr !121

dec_label_pc_10d88:                               ; preds = %dec_label_pc_10d0c
  %15 = call i32 @BIO_free(i32 %1), !insn.addr !122
  store i32 %15, i32* %r0.1.reg2mem, !insn.addr !122
  br label %dec_label_pc_10d90, !insn.addr !122

dec_label_pc_10d90:                               ; preds = %dec_label_pc_10d88, %dec_label_pc_10d0c
  %16 = icmp eq i32 %12, 1, !insn.addr !123
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !124
  br i1 %16, label %dec_label_pc_10ddc, label %dec_label_pc_10da4, !insn.addr !124

dec_label_pc_10da4:                               ; preds = %dec_label_pc_10d90
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %17 = call i32 @ERR_get_error(i32 %r0.1.reload), !insn.addr !125
  %18 = call i32 @ERR_error_string(i32 %17, i32 0), !insn.addr !126
  %19 = inttoptr i32 %18 to i8*, !insn.addr !127
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_125ec, i32 0, i32 0), i8* %19), !insn.addr !127
  %21 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12618, i32 0, i32 0)), !insn.addr !128
  store i32 13, i32* %r3.0.reg2mem, !insn.addr !129
  br label %dec_label_pc_10ddc, !insn.addr !129

dec_label_pc_10ddc:                               ; preds = %dec_label_pc_10d90, %dec_label_pc_10da4, %dec_label_pc_10cd0
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !130

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_10ddc, { 1, 0, 2 }
}

define i32 @function_10de8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_10de8:
  %.lcssa11.reg2mem = alloca i32, !insn.addr !131
  %stack_var_-12.012.reg2mem = alloca i32, !insn.addr !131
  %stack_var_-16.0.ph.reg2mem = alloca %_IO_FILE*, !insn.addr !131
  %.pre14.pre-phi.reg2mem = alloca i8*, !insn.addr !131
  %stack_var_-1188 = alloca i32, align 4
  %stack_var_-1316 = alloca i8*, align 4
  %stack_var_-1304 = alloca i32, align 4
  %0 = urem i32 %arg6, 256
  %stack_var_-1156 = alloca i32, align 4
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1044 = alloca i32, align 4
  store i32 0, i32* %stack_var_-1044, align 4, !insn.addr !132
  %1 = call i32* @memset(i32* nonnull %stack_var_-1040, i32 0, i32 1020), !insn.addr !133
  %2 = call i32 @SHA256_Init(i32* nonnull %stack_var_-1156), !insn.addr !134
  %3 = icmp eq i32 %0, 0
  store %_IO_FILE* null, %_IO_FILE** %stack_var_-16.0.ph.reg2mem, !insn.addr !135
  br i1 %3, label %dec_label_pc_112fc.preheader, label %dec_label_pc_10e60, !insn.addr !135

dec_label_pc_10e60:                               ; preds = %dec_label_pc_10de8
  %4 = urem i32 %arg4, 256
  store i8* inttoptr (i32 1886221359 to i8*), i8** %stack_var_-1316, align 4, !insn.addr !136
  %5 = call i32* @memset(i32* nonnull %stack_var_-1304, i32 0, i32 116), !insn.addr !137
  store i32 %4, i32* @0, align 4, !insn.addr !138
  %trunc = trunc i32 %arg4 to i8
  switch i8 %trunc, label %dec_label_pc_10e60.dec_label_pc_111b4_crit_edge [
    i8 0, label %dec_label_pc_10ecc
    i8 1, label %dec_label_pc_10f18
    i8 2, label %dec_label_pc_10f74
    i8 3, label %dec_label_pc_10fc4
    i8 4, label %dec_label_pc_11020
    i8 5, label %dec_label_pc_11074
    i8 6, label %dec_label_pc_110c8
    i8 7, label %dec_label_pc_11124
    i8 9, label %dec_label_pc_11168
  ], !insn.addr !138

dec_label_pc_10e60.dec_label_pc_111b4_crit_edge:  ; preds = %dec_label_pc_10e60
  %.pre = bitcast i8** %stack_var_-1316 to i8*
  store i8* %.pre, i8** %.pre14.pre-phi.reg2mem
  br label %dec_label_pc_111b4

dec_label_pc_10ecc:                               ; preds = %dec_label_pc_10e60
  %6 = bitcast i8** %stack_var_-1316 to i8*
  %7 = call i32 @strlen(i8* nonnull %6), !insn.addr !139
  %8 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !140
  %9 = add i32 %7, %8, !insn.addr !141
  %10 = inttoptr i32 %9 to i32*, !insn.addr !142
  store i32 1414483778, i32* %10, align 4, !insn.addr !142
  %11 = add i32 %9, 4, !insn.addr !143
  %12 = inttoptr i32 %11 to i32*, !insn.addr !143
  store i32 1852400174, i32* %12, align 4, !insn.addr !143
  %13 = add i32 %9, 8, !insn.addr !144
  %14 = inttoptr i32 %13 to i8*, !insn.addr !144
  store i8 0, i8* %14, align 1, !insn.addr !144
  store i8* %6, i8** %.pre14.pre-phi.reg2mem, !insn.addr !145
  br label %dec_label_pc_111b4, !insn.addr !145

dec_label_pc_10f18:                               ; preds = %dec_label_pc_10e60
  %15 = bitcast i8** %stack_var_-1316 to i8*
  %16 = call i32 @strlen(i8* nonnull %15), !insn.addr !146
  %17 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !147
  %18 = add i32 %16, %17, !insn.addr !148
  %19 = inttoptr i32 %18 to i32*, !insn.addr !149
  store i32 1769366884, i32* %19, align 4, !insn.addr !149
  %20 = add i32 %18, 4, !insn.addr !150
  %21 = inttoptr i32 %20 to i32*, !insn.addr !150
  store i32 1920230755, i32* %21, align 4, !insn.addr !150
  %22 = add i32 %18, 8, !insn.addr !151
  %23 = inttoptr i32 %22 to i32*, !insn.addr !151
  store i32 1680762213, i32* %23, align 4, !insn.addr !151
  %24 = add i32 %18, 12, !insn.addr !152
  %25 = inttoptr i32 %24 to i16*, !insn.addr !152
  store i16 25204, i16* %25, align 2, !insn.addr !152
  %26 = add i32 %18, 14, !insn.addr !153
  %27 = inttoptr i32 %26 to i8*, !insn.addr !153
  store i8 0, i8* %27, align 1, !insn.addr !153
  store i8* %15, i8** %.pre14.pre-phi.reg2mem, !insn.addr !154
  br label %dec_label_pc_111b4, !insn.addr !154

dec_label_pc_10f74:                               ; preds = %dec_label_pc_10e60
  %28 = bitcast i8** %stack_var_-1316 to i8*
  %29 = call i32 @strlen(i8* nonnull %28), !insn.addr !155
  %30 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !156
  %31 = add i32 %29, %30, !insn.addr !157
  %32 = inttoptr i32 %31 to i32*, !insn.addr !158
  store i32 1634552181, i32* %32, align 4, !insn.addr !158
  %33 = add i32 %31, 4, !insn.addr !159
  %34 = inttoptr i32 %33 to i16*, !insn.addr !159
  store i16 25959, i16* %34, align 2, !insn.addr !159
  %35 = add i32 %31, 6, !insn.addr !160
  %36 = inttoptr i32 %35 to i8*, !insn.addr !160
  store i8 0, i8* %36, align 1, !insn.addr !160
  store i8* %28, i8** %.pre14.pre-phi.reg2mem, !insn.addr !161
  br label %dec_label_pc_111b4, !insn.addr !161

dec_label_pc_10fc4:                               ; preds = %dec_label_pc_10e60
  %37 = bitcast i8** %stack_var_-1316 to i8*
  %38 = call i32 @strlen(i8* nonnull %37), !insn.addr !162
  %39 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !163
  %40 = add i32 %38, %39, !insn.addr !164
  %41 = inttoptr i32 %40 to i32*, !insn.addr !165
  store i32 1701734765, i32* %41, align 4, !insn.addr !165
  %42 = add i32 %40, 4, !insn.addr !166
  %43 = inttoptr i32 %42 to i32*, !insn.addr !166
  store i32 779314802, i32* %43, align 4, !insn.addr !166
  %44 = add i32 %40, 8, !insn.addr !167
  %45 = inttoptr i32 %44 to i32*, !insn.addr !167
  store i32 1734438249, i32* %45, align 4, !insn.addr !167
  %46 = add i32 %40, 12, !insn.addr !168
  %47 = inttoptr i32 %46 to i32*, !insn.addr !168
  store i32 2053582437, i32* %47, align 4, !insn.addr !168
  %48 = add i32 %40, 16, !insn.addr !169
  %49 = inttoptr i32 %48 to i8*, !insn.addr !169
  store i8 0, i8* %49, align 1, !insn.addr !169
  store i8* %37, i8** %.pre14.pre-phi.reg2mem, !insn.addr !170
  br label %dec_label_pc_111b4, !insn.addr !170

dec_label_pc_11020:                               ; preds = %dec_label_pc_10e60
  %50 = bitcast i8** %stack_var_-1316 to i8*
  %51 = call i32 @strlen(i8* nonnull %50), !insn.addr !171
  %52 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !172
  %53 = add i32 %51, %52, !insn.addr !173
  %54 = inttoptr i32 %53 to i32*, !insn.addr !174
  store i32 1633972341, i32* %54, align 4, !insn.addr !174
  %55 = add i32 %53, 4, !insn.addr !175
  %56 = inttoptr i32 %55 to i32*, !insn.addr !175
  store i32 1764648308, i32* %56, align 4, !insn.addr !175
  %57 = add i32 %53, 8, !insn.addr !176
  %58 = inttoptr i32 %57 to i32*, !insn.addr !176
  store i32 1701273965, i32* %58, align 4, !insn.addr !176
  %59 = add i32 %53, 12, !insn.addr !177
  %60 = inttoptr i32 %59 to i32*, !insn.addr !177
  store i32 8021806, i32* %60, align 4, !insn.addr !177
  store i8* %50, i8** %.pre14.pre-phi.reg2mem, !insn.addr !178
  br label %dec_label_pc_111b4, !insn.addr !178

dec_label_pc_11074:                               ; preds = %dec_label_pc_10e60
  %61 = bitcast i8** %stack_var_-1316 to i8*
  %62 = call i32 @strlen(i8* nonnull %61), !insn.addr !179
  %63 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !180
  %64 = add i32 %62, %63, !insn.addr !181
  %65 = inttoptr i32 %64 to i32*, !insn.addr !182
  store i32 778859107, i32* %65, align 4, !insn.addr !182
  %66 = add i32 %64, 4, !insn.addr !183
  %67 = inttoptr i32 %66 to i32*, !insn.addr !183
  store i32 779247988, i32* %67, align 4, !insn.addr !183
  %68 = add i32 %64, 8, !insn.addr !184
  %69 = inttoptr i32 %68 to i16*, !insn.addr !184
  store i16 31335, i16* %69, align 2, !insn.addr !184
  %70 = add i32 %64, 10, !insn.addr !185
  %71 = inttoptr i32 %70 to i8*, !insn.addr !185
  store i8 0, i8* %71, align 1, !insn.addr !185
  store i8* %61, i8** %.pre14.pre-phi.reg2mem, !insn.addr !186
  br label %dec_label_pc_111b4, !insn.addr !186

dec_label_pc_110c8:                               ; preds = %dec_label_pc_10e60
  %72 = bitcast i8** %stack_var_-1316 to i8*
  %73 = call i32 @strlen(i8* nonnull %72), !insn.addr !187
  %74 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !188
  %75 = add i32 %73, %74, !insn.addr !189
  %76 = inttoptr i32 %75 to i32*, !insn.addr !190
  store i32 1701734765, i32* %76, align 4, !insn.addr !190
  %77 = add i32 %75, 4, !insn.addr !191
  %78 = inttoptr i32 %77 to i32*, !insn.addr !191
  store i32 1952591474, i32* %78, align 4, !insn.addr !191
  %79 = add i32 %75, 8, !insn.addr !192
  %80 = inttoptr i32 %79 to i32*, !insn.addr !192
  store i32 1635004013, i32* %80, align 4, !insn.addr !192
  %81 = add i32 %75, 12, !insn.addr !193
  %82 = inttoptr i32 %81 to i32*, !insn.addr !193
  store i32 2053582450, i32* %82, align 4, !insn.addr !193
  %83 = add i32 %75, 16, !insn.addr !194
  %84 = inttoptr i32 %83 to i8*, !insn.addr !194
  store i8 0, i8* %84, align 1, !insn.addr !194
  store i8* %72, i8** %.pre14.pre-phi.reg2mem, !insn.addr !195
  br label %dec_label_pc_111b4, !insn.addr !195

dec_label_pc_11124:                               ; preds = %dec_label_pc_10e60
  %85 = bitcast i8** %stack_var_-1316 to i8*
  %86 = call i32 @strlen(i8* nonnull %85), !insn.addr !196
  %87 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !197
  %88 = add i32 %86, %87, !insn.addr !198
  %89 = inttoptr i32 %88 to i32*, !insn.addr !199
  store i32 1702061426, i32* %89, align 4, !insn.addr !199
  %90 = add i32 %88, 4, !insn.addr !200
  %91 = inttoptr i32 %90 to i32*, !insn.addr !200
  store i32 6649458, i32* %91, align 4, !insn.addr !200
  store i8* %85, i8** %.pre14.pre-phi.reg2mem, !insn.addr !201
  br label %dec_label_pc_111b4, !insn.addr !201

dec_label_pc_11168:                               ; preds = %dec_label_pc_10e60
  %92 = bitcast i8** %stack_var_-1316 to i8*
  %93 = call i32 @strlen(i8* nonnull %92), !insn.addr !202
  %94 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !203
  %95 = add i32 %93, %94, !insn.addr !204
  %96 = inttoptr i32 %95 to i32*, !insn.addr !205
  store i32 1635017060, i32* %96, align 4, !insn.addr !205
  %97 = add i32 %95, 4, !insn.addr !206
  %98 = inttoptr i32 %97 to i32*, !insn.addr !206
  store i32 1701603686, i32* %98, align 4, !insn.addr !206
  %99 = add i32 %95, 8, !insn.addr !207
  %100 = inttoptr i32 %99 to i8*, !insn.addr !207
  store i8 0, i8* %100, align 1, !insn.addr !207
  %101 = call i32 @__asm_nop(i32 1635017060), !insn.addr !208
  store i8* %92, i8** %.pre14.pre-phi.reg2mem, !insn.addr !208
  br label %dec_label_pc_111b4, !insn.addr !208

dec_label_pc_111b4:                               ; preds = %dec_label_pc_10e60.dec_label_pc_111b4_crit_edge, %dec_label_pc_11168, %dec_label_pc_11124, %dec_label_pc_110c8, %dec_label_pc_11074, %dec_label_pc_11020, %dec_label_pc_10fc4, %dec_label_pc_10f74, %dec_label_pc_10f18, %dec_label_pc_10ecc
  %102 = urem i32 %arg5, 256
  %.pre14.pre-phi.reload = load i8*, i8** %.pre14.pre-phi.reg2mem
  %103 = icmp eq i32 %102, 0, !insn.addr !209
  br i1 %103, label %dec_label_pc_11204, label %dec_label_pc_111c0, !insn.addr !210

dec_label_pc_111c0:                               ; preds = %dec_label_pc_111b4
  %104 = call i32 @strlen(i8* nonnull %.pre14.pre-phi.reload), !insn.addr !211
  %105 = ptrtoint i8** %stack_var_-1316 to i32, !insn.addr !212
  %106 = add i32 %104, %105, !insn.addr !213
  %107 = inttoptr i32 %106 to i32*, !insn.addr !214
  store i32 1734964014, i32* %107, align 4, !insn.addr !214
  %108 = add i32 %106, 4, !insn.addr !215
  %109 = inttoptr i32 %108 to i8*, !insn.addr !215
  store i8 0, i8* %109, align 1, !insn.addr !215
  br label %dec_label_pc_11204, !insn.addr !215

dec_label_pc_11204:                               ; preds = %dec_label_pc_111b4, %dec_label_pc_111c0
  %110 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_126b4, i32 0, i32 0), i8** nonnull %stack_var_-1316, i32 %arg2), !insn.addr !216
  %111 = call %_IO_FILE* @fopen64(i8* nonnull %.pre14.pre-phi.reload, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_125a8, i32 0, i32 0)), !insn.addr !217
  %112 = icmp eq %_IO_FILE* %111, null, !insn.addr !218
  store %_IO_FILE* %111, %_IO_FILE** %stack_var_-16.0.ph.reg2mem, !insn.addr !219
  br i1 %112, label %dec_label_pc_11250, label %dec_label_pc_112fc.preheader, !insn.addr !219

dec_label_pc_11250:                               ; preds = %dec_label_pc_11204
  %113 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_126d0, i32 0, i32 0), i8** nonnull %stack_var_-1316), !insn.addr !220
  store %_IO_FILE* null, %_IO_FILE** %stack_var_-16.0.ph.reg2mem, !insn.addr !221
  br label %dec_label_pc_112fc.preheader, !insn.addr !221

dec_label_pc_112fc.preheader:                     ; preds = %dec_label_pc_10de8, %dec_label_pc_11250, %dec_label_pc_11204
  %stack_var_-16.0.ph.reload = load %_IO_FILE*, %_IO_FILE** %stack_var_-16.0.ph.reg2mem
  %114 = icmp ult i32 %arg2, 1024, !insn.addr !222
  %115 = icmp ne i1 %114, true, !insn.addr !222
  %116 = icmp eq i32 %arg2, 1024, !insn.addr !222
  %117 = icmp ne i1 %116, true, !insn.addr !223
  %118 = icmp eq i1 %115, %117, !insn.addr !223
  %119 = inttoptr i32 %arg1 to %_IO_FILE*
  %120 = ptrtoint i32* %stack_var_-1044 to i32
  store i32 %arg2, i32* %.lcssa11.reg2mem, !insn.addr !223
  br i1 %118, label %dec_label_pc_11270.lr.ph, label %dec_label_pc_11310, !insn.addr !223

dec_label_pc_11270.lr.ph:                         ; preds = %dec_label_pc_112fc.preheader
  %121 = icmp eq %_IO_FILE* %stack_var_-16.0.ph.reload, null
  %or.cond = or i1 %3, %121
  store i32 0, i32* %stack_var_-12.012.reg2mem
  br label %dec_label_pc_11270

dec_label_pc_11270:                               ; preds = %dec_label_pc_11270.lr.ph, %dec_label_pc_112fc.backedge
  %stack_var_-12.012.reload = load i32, i32* %stack_var_-12.012.reg2mem
  %122 = call i32 @fread(i32* nonnull %stack_var_-1044, i32 1, i32 1024, %_IO_FILE* %119), !insn.addr !224
  %123 = call i32 @SHA256_Update(i32* nonnull %stack_var_-1156, i32 %120, i32 1024, i32* nonnull %stack_var_-1156), !insn.addr !225
  br i1 %or.cond, label %dec_label_pc_112fc.backedge, label %dec_label_pc_112e0, !insn.addr !226

dec_label_pc_112fc.backedge:                      ; preds = %dec_label_pc_11270, %dec_label_pc_112e0
  %124 = add i32 %122, %stack_var_-12.012.reload, !insn.addr !227
  %125 = sub i32 %arg2, %124, !insn.addr !228
  %126 = icmp ult i32 %125, 1024, !insn.addr !222
  %127 = icmp ne i1 %126, true, !insn.addr !222
  %128 = icmp eq i32 %125, 1024, !insn.addr !222
  %129 = icmp ne i1 %128, true, !insn.addr !223
  %130 = icmp eq i1 %127, %129, !insn.addr !223
  store i32 %124, i32* %stack_var_-12.012.reg2mem, !insn.addr !223
  store i32 %125, i32* %.lcssa11.reg2mem, !insn.addr !223
  br i1 %130, label %dec_label_pc_11270, label %dec_label_pc_11310, !insn.addr !223

dec_label_pc_112e0:                               ; preds = %dec_label_pc_11270
  %131 = call i32 @fwrite(i32* nonnull %stack_var_-1044, i32 1, i32 1024, %_IO_FILE* nonnull %stack_var_-16.0.ph.reload), !insn.addr !229
  br label %dec_label_pc_112fc.backedge, !insn.addr !229

dec_label_pc_11310:                               ; preds = %dec_label_pc_112fc.backedge, %dec_label_pc_112fc.preheader
  %.lcssa11.reload = load i32, i32* %.lcssa11.reg2mem
  %132 = call i32 @fread(i32* nonnull %stack_var_-1044, i32 1, i32 %.lcssa11.reload, %_IO_FILE* %119), !insn.addr !230
  %133 = call i32 @SHA256_Update(i32* nonnull %stack_var_-1156, i32 %120, i32 %132, i32* nonnull %stack_var_-1156), !insn.addr !231
  %134 = icmp eq %_IO_FILE* %stack_var_-16.0.ph.reload, null, !insn.addr !232
  %or.cond8 = or i1 %3, %134
  br i1 %or.cond8, label %dec_label_pc_11394.thread, label %dec_label_pc_11404, !insn.addr !233

dec_label_pc_11394.thread:                        ; preds = %dec_label_pc_11310
  store i32 0, i32* %stack_var_-1188, align 4, !insn.addr !234
  %135 = call i32 @SHA256_Final(i32* nonnull %stack_var_-1188, i32* nonnull %stack_var_-1156, i32* nonnull %stack_var_-1156, i32* nonnull %stack_var_-1188), !insn.addr !235
  br label %dec_label_pc_11414

dec_label_pc_11404:                               ; preds = %dec_label_pc_11310
  %136 = call i32 @fwrite(i32* nonnull %stack_var_-1044, i32 1, i32 %132, %_IO_FILE* nonnull %stack_var_-16.0.ph.reload), !insn.addr !236
  store i32 0, i32* %stack_var_-1188, align 4, !insn.addr !234
  %137 = call i32 @SHA256_Final(i32* nonnull %stack_var_-1188, i32* nonnull %stack_var_-1156, i32* nonnull %stack_var_-1156, i32* nonnull %stack_var_-1188), !insn.addr !235
  %138 = call i32 @fclose(%_IO_FILE* nonnull %stack_var_-16.0.ph.reload), !insn.addr !237
  br label %dec_label_pc_11414, !insn.addr !238

dec_label_pc_11414:                               ; preds = %dec_label_pc_11394.thread, %dec_label_pc_11404
  %139 = load i32, i32* %stack_var_-1188, align 4, !insn.addr !239
  %140 = inttoptr i32 %arg3 to i32*, !insn.addr !240
  store i32 %139, i32* %140, align 4, !insn.addr !240
  %141 = add i32 %arg3, 4, !insn.addr !241
  %142 = inttoptr i32 %141 to i32*, !insn.addr !241
  store i32 0, i32* %142, align 4, !insn.addr !241
  %143 = add i32 %arg3, 8, !insn.addr !242
  %144 = inttoptr i32 %143 to i32*, !insn.addr !242
  store i32 0, i32* %144, align 4, !insn.addr !242
  %145 = add i32 %arg3, 12, !insn.addr !243
  %146 = inttoptr i32 %145 to i32*, !insn.addr !243
  store i32 0, i32* %146, align 4, !insn.addr !243
  %147 = add i32 %arg3, 16, !insn.addr !244
  %148 = inttoptr i32 %147 to i32*, !insn.addr !244
  store i32 0, i32* %148, align 4, !insn.addr !244
  %149 = add i32 %arg3, 20, !insn.addr !245
  %150 = inttoptr i32 %149 to i32*, !insn.addr !245
  store i32 0, i32* %150, align 4, !insn.addr !245
  %151 = add i32 %arg3, 24, !insn.addr !246
  %152 = inttoptr i32 %151 to i32*, !insn.addr !246
  store i32 0, i32* %152, align 4, !insn.addr !246
  %153 = add i32 %arg3, 28, !insn.addr !247
  %154 = inttoptr i32 %153 to i32*, !insn.addr !247
  store i32 0, i32* %154, align 4, !insn.addr !247
  %155 = call i32 @__asm_nop(i32 0), !insn.addr !248
  ret i32 0, !insn.addr !249

; uselistorder directives
  uselistorder i32 %125, { 0, 2, 1 }
  uselistorder %_IO_FILE* %stack_var_-16.0.ph.reload, { 0, 2, 1, 4, 3 }
  uselistorder i32 %106, { 1, 0 }
  uselistorder i32 %95, { 2, 1, 0 }
  uselistorder i32 %88, { 1, 0 }
  uselistorder i32 %75, { 4, 3, 2, 1, 0 }
  uselistorder i32 %64, { 3, 2, 1, 0 }
  uselistorder i32 %53, { 3, 2, 1, 0 }
  uselistorder i32 %40, { 4, 3, 2, 1, 0 }
  uselistorder i32 %31, { 2, 1, 0 }
  uselistorder i32 %18, { 4, 3, 2, 1, 0 }
  uselistorder i32 %9, { 2, 1, 0 }
  uselistorder i32* %stack_var_-1156, { 2, 3, 0, 1, 4, 5, 6, 7, 8 }
  uselistorder i8** %stack_var_-1316, { 1, 2, 13, 12, 22, 11, 21, 10, 20, 9, 19, 8, 18, 7, 17, 6, 16, 5, 15, 4, 14, 0, 3 }
  uselistorder i32* %stack_var_-1188, { 5, 3, 4, 6, 0, 1, 2 }
  uselistorder i8** %.pre14.pre-phi.reg2mem, { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 10 }
  uselistorder %_IO_FILE** %stack_var_-16.0.ph.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-12.012.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @__asm_nop, { 1, 2, 0 }
  uselistorder i32 1701734765, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder i32 %arg3, { 0, 2, 4, 6, 1, 3, 5, 7 }
  uselistorder i32 %arg2, { 4, 0, 1, 2, 3 }
  uselistorder label %dec_label_pc_11414, { 1, 0 }
  uselistorder label %dec_label_pc_112fc.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_11270, { 1, 0 }
  uselistorder label %dec_label_pc_112fc.preheader, { 1, 2, 0 }
  uselistorder label %dec_label_pc_11204, { 1, 0 }
  uselistorder label %dec_label_pc_111b4, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }
}

define i32 @function_11460(i32* %arg1, i32* %arg2, i32* %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_11460:
  %0 = alloca i64
  %1 = alloca i32
  %r3.0.reg2mem = alloca i32, !insn.addr !250
  %storemerge11.reg2mem = alloca i32, !insn.addr !250
  %storemerge812.reg2mem = alloca i32, !insn.addr !250
  %stack_var_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !250
  %stack_var_-20.013.reg2mem = alloca i32, !insn.addr !250
  %storemerge914.reg2mem = alloca i32, !insn.addr !250
  %stack_var_-9.116.reg2mem = alloca i8, !insn.addr !250
  %storemerge1017.reg2mem = alloca i32, !insn.addr !250
  %.pre-phi.reg2mem = alloca i32, !insn.addr !250
  %2 = load i32, i32* %1
  %3 = ptrtoint i32* %arg1 to i32
  %stack_var_-3040 = alloca i32, align 4
  %stack_var_-3044 = alloca i32, align 4
  %stack_var_-2784 = alloca i32, align 4
  %stack_var_-2672 = alloca i32, align 4
  %stack_var_-2636 = alloca i32, align 4
  %stack_var_-2640 = alloca i32, align 4
  %stack_var_-2384 = alloca i32, align 4
  %stack_var_-2272 = alloca i32, align 4
  %stack_var_-1212 = alloca i32, align 4
  %stack_var_-1216 = alloca i32, align 4
  %4 = load i64, i64* %0
  %stack_var_-192 = alloca i32, align 4
  %5 = call i32 @function_122b4(i32 %3, i32* nonnull %stack_var_-192), !insn.addr !251
  %6 = udiv i64 %4, 4294967296, !insn.addr !252
  %7 = trunc i64 %6 to i32, !insn.addr !252
  %8 = icmp sgt i32 %7, 2047, !insn.addr !253
  br i1 %8, label %dec_label_pc_114c4, label %dec_label_pc_114a8, !insn.addr !253

dec_label_pc_114a8:                               ; preds = %dec_label_pc_11460
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([43 x i8], [43 x i8]* @global_var_1276c, i32 0, i32 0), i32* %arg1, i32 2048), !insn.addr !254
  store i32 6, i32* %r3.0.reg2mem, !insn.addr !255
  br label %dec_label_pc_11efc, !insn.addr !255

dec_label_pc_114c4:                               ; preds = %dec_label_pc_11460
  %10 = bitcast i32* %arg1 to i8*
  %11 = call %_IO_FILE* @fopen64(i8* %10, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_12584, i32 0, i32 0)), !insn.addr !256
  %12 = icmp eq %_IO_FILE* %11, null, !insn.addr !257
  br i1 %12, label %dec_label_pc_114e4, label %dec_label_pc_114fc, !insn.addr !258

dec_label_pc_114e4:                               ; preds = %dec_label_pc_114c4
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12798, i32 0, i32 0), i32* %arg1), !insn.addr !259
  store i32 7, i32* %r3.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_11efc, !insn.addr !260

dec_label_pc_114fc:                               ; preds = %dec_label_pc_114c4
  %14 = trunc i32 %2 to i8
  %15 = call i32 @fread(i32* %arg3, i32 2048, i32 1, %_IO_FILE* nonnull %11), !insn.addr !261
  %16 = icmp eq i8 %14, 38, !insn.addr !262
  br i1 %16, label %dec_label_pc_1154c, label %dec_label_pc_11520, !insn.addr !263

dec_label_pc_11520:                               ; preds = %dec_label_pc_114fc
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_127b0, i32 0, i32 0), i32* %arg1), !insn.addr !264
  %18 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !265
  store i32 8, i32* %r3.0.reg2mem, !insn.addr !266
  br label %dec_label_pc_11efc, !insn.addr !266

dec_label_pc_1154c:                               ; preds = %dec_label_pc_114fc
  %19 = ptrtoint i32* %arg3 to i32
  %20 = urem i32 %arg6, 256
  %21 = add i32 %19, 11, !insn.addr !267
  %22 = inttoptr i32 %21 to i8*, !insn.addr !267
  %23 = load i8, i8* %22, align 1, !insn.addr !267
  %24 = zext i8 %23 to i32, !insn.addr !267
  %25 = mul i32 %24, 256, !insn.addr !268
  %26 = call i32 @__asm_sxth(i32 %25), !insn.addr !269
  %27 = add i32 %19, 12, !insn.addr !270
  %28 = inttoptr i32 %27 to i8*, !insn.addr !270
  %29 = load i8, i8* %28, align 1, !insn.addr !270
  %30 = zext i8 %29 to i32, !insn.addr !270
  %31 = call i32 @__asm_sxth(i32 %30), !insn.addr !271
  %32 = or i32 %31, %26, !insn.addr !272
  %33 = call i32 @__asm_sxth(i32 %32), !insn.addr !273
  %34 = icmp eq i32 %20, 0, !insn.addr !274
  br i1 %34, label %dec_label_pc_1154c.dec_label_pc_115c0_crit_edge, label %dec_label_pc_11588, !insn.addr !275

dec_label_pc_1154c.dec_label_pc_115c0_crit_edge:  ; preds = %dec_label_pc_1154c
  %.pre = urem i32 %33, 65536, !insn.addr !276
  store i32 %.pre, i32* %.pre-phi.reg2mem
  br label %dec_label_pc_115c0

dec_label_pc_11588:                               ; preds = %dec_label_pc_1154c
  %35 = trunc i32 %33 to i16, !insn.addr !277
  %36 = urem i32 %33, 65536
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_127c8, i32 0, i32 0), i32 %36), !insn.addr !278
  %38 = icmp ugt i16 %35, -513, !insn.addr !279
  store i32 %36, i32* %.pre-phi.reg2mem, !insn.addr !280
  br i1 %38, label %dec_label_pc_115c0, label %dec_label_pc_115ac, !insn.addr !280

dec_label_pc_115ac:                               ; preds = %dec_label_pc_11588
  %39 = call i32 @puts(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_127d4, i32 0, i32 0)), !insn.addr !281
  store i32 20, i32* %r3.0.reg2mem, !insn.addr !282
  br label %dec_label_pc_11efc, !insn.addr !282

dec_label_pc_115c0:                               ; preds = %dec_label_pc_1154c.dec_label_pc_115c0_crit_edge, %dec_label_pc_11588
  %40 = urem i32 %arg5, 256
  %41 = urem i32 %arg4, 256
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  store i32 0, i32* %storemerge1017.reg2mem
  store i8 0, i8* %stack_var_-9.116.reg2mem
  br label %dec_label_pc_115cc

dec_label_pc_115cc:                               ; preds = %dec_label_pc_115c0, %dec_label_pc_115cc
  %stack_var_-9.116.reload = load i8, i8* %stack_var_-9.116.reg2mem
  %storemerge1017.reload = load i32, i32* %storemerge1017.reg2mem
  %42 = shl i32 1, %storemerge1017.reload
  %43 = and i32 %42, %.pre-phi.reload
  %44 = icmp ne i32 %43, 0, !insn.addr !283
  %45 = zext i1 %44 to i8
  %spec.select = add i8 %stack_var_-9.116.reload, %45
  %46 = add nuw nsw i32 %storemerge1017.reload, 1, !insn.addr !284
  %47 = icmp ult i32 %46, 16, !insn.addr !285
  store i32 %46, i32* %storemerge1017.reg2mem, !insn.addr !285
  store i8 %spec.select, i8* %stack_var_-9.116.reg2mem, !insn.addr !285
  br i1 %47, label %dec_label_pc_115cc, label %dec_label_pc_11608, !insn.addr !285

dec_label_pc_11608:                               ; preds = %dec_label_pc_115cc
  %48 = add i32 %19, 1304, !insn.addr !286
  %49 = inttoptr i32 %48 to i8*, !insn.addr !286
  %50 = load i8, i8* %49, align 1, !insn.addr !286
  %51 = icmp eq i8 %spec.select, %50, !insn.addr !287
  %52 = zext i8 %50 to i32
  br i1 %51, label %dec_label_pc_11658, label %dec_label_pc_1161c, !insn.addr !288

dec_label_pc_1161c:                               ; preds = %dec_label_pc_11608
  %53 = zext i8 %spec.select to i32, !insn.addr !289
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_127f8, i32 0, i32 0), i32 %52, i32 %53), !insn.addr !290
  %55 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !291
  store i32 9, i32* %r3.0.reg2mem, !insn.addr !292
  br label %dec_label_pc_11efc, !insn.addr !292

dec_label_pc_11658:                               ; preds = %dec_label_pc_11608
  %56 = mul i32 %52, 256, !insn.addr !293
  %57 = add nuw nsw i32 %56, 2304, !insn.addr !294
  %58 = add i32 %19, 1305, !insn.addr !295
  %59 = inttoptr i32 %58 to i8*, !insn.addr !295
  %60 = load i8, i8* %59, align 1, !insn.addr !295
  %61 = add i32 %19, 1306, !insn.addr !296
  %62 = inttoptr i32 %61 to i8*, !insn.addr !296
  %63 = load i8, i8* %62, align 1, !insn.addr !296
  %64 = add i32 %19, 1307, !insn.addr !297
  %65 = inttoptr i32 %64 to i8*, !insn.addr !297
  %66 = load i8, i8* %65, align 1, !insn.addr !297
  %67 = add i32 %19, 1308, !insn.addr !298
  %68 = inttoptr i32 %67 to i8*, !insn.addr !298
  %69 = load i8, i8* %68, align 1, !insn.addr !298
  %70 = zext i8 %spec.select to i32, !insn.addr !299
  %71 = icmp eq i8 %spec.select, 0
  store i32 0, i32* %storemerge914.reg2mem, !insn.addr !300
  store i32 %57, i32* %stack_var_-20.013.reg2mem, !insn.addr !300
  store i32 %57, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !300
  br i1 %71, label %dec_label_pc_1179c, label %dec_label_pc_116b4, !insn.addr !300

dec_label_pc_116b4:                               ; preds = %dec_label_pc_11658, %dec_label_pc_116b4
  %stack_var_-20.013.reload = load i32, i32* %stack_var_-20.013.reg2mem
  %storemerge914.reload = load i32, i32* %storemerge914.reg2mem
  %72 = mul nuw nsw i32 %storemerge914.reload, 5, !insn.addr !301
  %73 = add i32 %72, %19, !insn.addr !302
  %74 = add i32 %73, 1310, !insn.addr !303
  %75 = inttoptr i32 %74 to i8*, !insn.addr !304
  %76 = load i8, i8* %75, align 1, !insn.addr !304
  %77 = zext i8 %76 to i32, !insn.addr !304
  %78 = mul i32 %77, 16777216, !insn.addr !305
  %79 = add i32 %73, 1311, !insn.addr !306
  %80 = inttoptr i32 %79 to i8*, !insn.addr !307
  %81 = load i8, i8* %80, align 1, !insn.addr !307
  %82 = zext i8 %81 to i32, !insn.addr !307
  %83 = mul i32 %82, 65536, !insn.addr !308
  %84 = or i32 %83, %78, !insn.addr !309
  %85 = add i32 %73, 1312, !insn.addr !310
  %86 = inttoptr i32 %85 to i8*, !insn.addr !311
  %87 = load i8, i8* %86, align 1, !insn.addr !311
  %88 = zext i8 %87 to i32, !insn.addr !311
  %89 = mul i32 %88, 256, !insn.addr !312
  %90 = or i32 %84, %89, !insn.addr !313
  %91 = add i32 %73, 1313, !insn.addr !314
  %92 = inttoptr i32 %91 to i8*, !insn.addr !315
  %93 = load i8, i8* %92, align 1, !insn.addr !315
  %94 = zext i8 %93 to i32, !insn.addr !315
  %95 = or i32 %90, %94, !insn.addr !316
  %96 = add i32 %95, %stack_var_-20.013.reload, !insn.addr !317
  %97 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12818, i32 0, i32 0), i32 %storemerge914.reload, i32 %95), !insn.addr !318
  %98 = add nuw nsw i32 %storemerge914.reload, 1, !insn.addr !319
  %99 = icmp ult i32 %98, %70, !insn.addr !300
  store i32 %98, i32* %storemerge914.reg2mem, !insn.addr !300
  store i32 %96, i32* %stack_var_-20.013.reg2mem, !insn.addr !300
  store i32 %96, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !300
  br i1 %99, label %dec_label_pc_116b4, label %dec_label_pc_1179c, !insn.addr !300

dec_label_pc_1179c:                               ; preds = %dec_label_pc_116b4, %dec_label_pc_11658
  %stack_var_-20.0.lcssa.reload = load i32, i32* %stack_var_-20.0.lcssa.reg2mem
  %100 = icmp eq i32 %stack_var_-20.0.lcssa.reload, %7, !insn.addr !320
  br i1 %100, label %dec_label_pc_117e0, label %dec_label_pc_117ac, !insn.addr !321

dec_label_pc_117ac:                               ; preds = %dec_label_pc_1179c
  %101 = zext i8 %60 to i32, !insn.addr !295
  %102 = mul i32 %101, 16777216, !insn.addr !322
  %103 = zext i8 %63 to i32, !insn.addr !296
  %104 = mul i32 %103, 65536, !insn.addr !323
  %105 = or i32 %104, %102, !insn.addr !324
  %106 = zext i8 %66 to i32, !insn.addr !297
  %107 = mul i32 %106, 256, !insn.addr !325
  %108 = or i32 %105, %107, !insn.addr !326
  %109 = zext i8 %69 to i32, !insn.addr !298
  %110 = or i32 %108, %109, !insn.addr !327
  %111 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([96 x i8], [96 x i8]* @global_var_1282c, i32 0, i32 0), i32 %110, i32 %7, i32 %stack_var_-20.0.lcssa.reload), !insn.addr !328
  %112 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !329
  store i32 10, i32* %r3.0.reg2mem, !insn.addr !330
  br label %dec_label_pc_11efc, !insn.addr !330

dec_label_pc_117e0:                               ; preds = %dec_label_pc_1179c
  %113 = bitcast i32* %arg2 to i8*, !insn.addr !331
  %114 = call %_IO_FILE* @fopen64(i8* %113, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_1288c, i32 0, i32 0)), !insn.addr !331
  %115 = icmp eq %_IO_FILE* %114, null, !insn.addr !332
  br i1 %115, label %dec_label_pc_11800, label %dec_label_pc_1182c, !insn.addr !333

dec_label_pc_11800:                               ; preds = %dec_label_pc_117e0
  %116 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_12890, i32 0, i32 0), i32* %arg2), !insn.addr !334
  %117 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !335
  store i32 11, i32* %r3.0.reg2mem, !insn.addr !336
  br label %dec_label_pc_11efc, !insn.addr !336

dec_label_pc_1182c:                               ; preds = %dec_label_pc_117e0
  store i32 0, i32* %stack_var_-1216, align 4, !insn.addr !337
  %118 = call i32* @memset(i32* nonnull %stack_var_-1212, i32 0, i32 1020), !insn.addr !338
  %119 = call i32 @fread(i32* nonnull %stack_var_-1216, i32 1024, i32 1, %_IO_FILE* nonnull %114), !insn.addr !339
  %120 = call i32 @fclose(%_IO_FILE* nonnull %114), !insn.addr !340
  %121 = add i32 %19, 22, !insn.addr !341
  %122 = inttoptr i32 %121 to i8*, !insn.addr !341
  %123 = load i8, i8* %122, align 1, !insn.addr !341
  %124 = zext i8 %123 to i32, !insn.addr !341
  %125 = mul i32 %124, 256, !insn.addr !342
  %126 = add i32 %19, 23, !insn.addr !343
  %127 = inttoptr i32 %126 to i8*, !insn.addr !343
  %128 = load i8, i8* %127, align 1, !insn.addr !343
  %129 = zext i8 %128 to i32, !insn.addr !343
  %130 = or i32 %125, %129, !insn.addr !344
  %131 = add i32 %19, 24, !insn.addr !345
  %132 = add i32 %19, 1048, !insn.addr !346
  %133 = call i32 @function_10c70(i32 %131, i32 %130, i32 %132, i32* nonnull %stack_var_-1216), !insn.addr !347
  %134 = icmp eq i32 %133, 0, !insn.addr !348
  br i1 %134, label %dec_label_pc_118fc, label %dec_label_pc_118d0, !insn.addr !349

dec_label_pc_118d0:                               ; preds = %dec_label_pc_1182c
  %135 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_128b4, i32 0, i32 0), i32 %133), !insn.addr !350
  %136 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !351
  store i32 %133, i32* %r3.0.reg2mem, !insn.addr !352
  br label %dec_label_pc_11efc, !insn.addr !352

dec_label_pc_118fc:                               ; preds = %dec_label_pc_1182c
  %137 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_128dc, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_128d8, i32 0, i32 0)), !insn.addr !353
  %138 = icmp eq %_IO_FILE* %137, null, !insn.addr !354
  br i1 %138, label %dec_label_pc_11940, label %dec_label_pc_11920, !insn.addr !355

dec_label_pc_11920:                               ; preds = %dec_label_pc_118fc
  %139 = add i32 %19, 13, !insn.addr !356
  %140 = inttoptr i32 %139 to i32*, !insn.addr !357
  %141 = call i32 @fwrite(i32* %140, i32 1, i32 8, %_IO_FILE* nonnull %137), !insn.addr !357
  %142 = call i32 @fclose(%_IO_FILE* nonnull %137), !insn.addr !358
  br label %dec_label_pc_11940, !insn.addr !358

dec_label_pc_11940:                               ; preds = %dec_label_pc_11920, %dec_label_pc_118fc
  %143 = icmp eq i32 %41, 0, !insn.addr !359
  br i1 %143, label %dec_label_pc_11a08, label %dec_label_pc_1194c, !insn.addr !360

dec_label_pc_1194c:                               ; preds = %dec_label_pc_11940
  %144 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_128f0, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_128d8, i32 0, i32 0)), !insn.addr !361
  %145 = icmp eq %_IO_FILE* %144, null, !insn.addr !362
  br i1 %145, label %dec_label_pc_119b8, label %dec_label_pc_11970, !insn.addr !363

dec_label_pc_11970:                               ; preds = %dec_label_pc_1194c
  %146 = inttoptr i32 %131 to i32*, !insn.addr !364
  %147 = call i32 @fwrite(i32* %146, i32 1, i32 %130, %_IO_FILE* nonnull %144), !insn.addr !364
  %148 = call i32 @fclose(%_IO_FILE* nonnull %144), !insn.addr !365
  %149 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_12920, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_128d8, i32 0, i32 0)), !insn.addr !366
  %150 = icmp eq %_IO_FILE* %149, null, !insn.addr !367
  br i1 %150, label %dec_label_pc_119f4, label %dec_label_pc_119cc, !insn.addr !368

dec_label_pc_119b8:                               ; preds = %dec_label_pc_1194c
  %151 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12908, i32 0, i32 0)), !insn.addr !369
  store i32 15, i32* %r3.0.reg2mem, !insn.addr !370
  br label %dec_label_pc_11efc, !insn.addr !370

dec_label_pc_119cc:                               ; preds = %dec_label_pc_11970
  %152 = inttoptr i32 %132 to i32*, !insn.addr !371
  %153 = call i32 @fwrite(i32* %152, i32 1, i32 256, %_IO_FILE* nonnull %149), !insn.addr !371
  %154 = call i32 @fclose(%_IO_FILE* nonnull %149), !insn.addr !372
  br label %dec_label_pc_11a08, !insn.addr !373

dec_label_pc_119f4:                               ; preds = %dec_label_pc_11970
  %155 = call i32 @puts(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1293c, i32 0, i32 0)), !insn.addr !374
  store i32 16, i32* %r3.0.reg2mem, !insn.addr !375
  br label %dec_label_pc_11efc, !insn.addr !375

dec_label_pc_11a08:                               ; preds = %dec_label_pc_119cc, %dec_label_pc_11940
  %156 = call i32* @memset(i32* nonnull %stack_var_-2272, i32 0, i32 1056), !insn.addr !376
  %157 = call i32 @SHA256_Init(i32* nonnull %stack_var_-2384), !insn.addr !377
  %158 = call i32 @SHA256_Update(i32* nonnull %stack_var_-2384, i32 %19, i32 2048, i32* nonnull %stack_var_-2384), !insn.addr !378
  %159 = call i32 @SHA256_Final(i32* nonnull %stack_var_-2272, i32* nonnull %stack_var_-2384, i32* nonnull %stack_var_-2384, i32* nonnull %stack_var_-2272), !insn.addr !379
  %.pre18 = ptrtoint i32* %stack_var_-2272 to i32
  br i1 %71, label %dec_label_pc_11c44, label %dec_label_pc_11a84.lr.ph, !insn.addr !380

dec_label_pc_11a84.lr.ph:                         ; preds = %dec_label_pc_11a08
  %160 = add i32 %.pre18, 32, !insn.addr !381
  %161 = ptrtoint %_IO_FILE* %11 to i32, !insn.addr !382
  store i32 0, i32* %storemerge812.reg2mem
  br label %dec_label_pc_11a84

dec_label_pc_11a84:                               ; preds = %dec_label_pc_11a84.lr.ph, %dec_label_pc_11a84
  %storemerge812.reload = load i32, i32* %storemerge812.reg2mem
  %162 = mul nuw nsw i32 %storemerge812.reload, 5, !insn.addr !383
  %163 = add i32 %162, %19, !insn.addr !384
  %164 = add i32 %163, 1310, !insn.addr !385
  %165 = inttoptr i32 %164 to i8*, !insn.addr !386
  %166 = load i8, i8* %165, align 1, !insn.addr !386
  %167 = zext i8 %166 to i32, !insn.addr !386
  %168 = mul i32 %167, 16777216, !insn.addr !387
  %169 = add i32 %163, 1311, !insn.addr !388
  %170 = inttoptr i32 %169 to i8*, !insn.addr !389
  %171 = load i8, i8* %170, align 1, !insn.addr !389
  %172 = zext i8 %171 to i32, !insn.addr !389
  %173 = mul i32 %172, 65536, !insn.addr !390
  %174 = or i32 %173, %168, !insn.addr !391
  %175 = add i32 %163, 1312, !insn.addr !392
  %176 = inttoptr i32 %175 to i8*, !insn.addr !393
  %177 = load i8, i8* %176, align 1, !insn.addr !393
  %178 = zext i8 %177 to i32, !insn.addr !393
  %179 = mul i32 %178, 256, !insn.addr !394
  %180 = or i32 %174, %179, !insn.addr !395
  %181 = add i32 %163, 1313, !insn.addr !396
  %182 = inttoptr i32 %181 to i8*, !insn.addr !397
  %183 = load i8, i8* %182, align 1, !insn.addr !397
  %184 = zext i8 %183 to i32, !insn.addr !397
  %185 = or i32 %180, %184, !insn.addr !398
  %186 = mul i32 %storemerge812.reload, 32, !insn.addr !399
  %187 = add i32 %160, %186, !insn.addr !400
  %188 = add i32 %163, 1309, !insn.addr !401
  %189 = inttoptr i32 %188 to i8*, !insn.addr !402
  %190 = load i8, i8* %189, align 1, !insn.addr !402
  %191 = zext i8 %190 to i32, !insn.addr !402
  %192 = call i32 @function_10de8(i32 %161, i32 %185, i32 %187, i32 %191, i32 0, i32 %41), !insn.addr !403
  %193 = add nuw nsw i32 %storemerge812.reload, 1, !insn.addr !404
  %194 = icmp ult i32 %193, %70, !insn.addr !380
  store i32 %193, i32* %storemerge812.reg2mem, !insn.addr !380
  br i1 %194, label %dec_label_pc_11a84, label %dec_label_pc_11bbc.lr.ph, !insn.addr !380

dec_label_pc_11bbc.lr.ph:                         ; preds = %dec_label_pc_11a84
  %195 = add i32 %19, 1309, !insn.addr !405
  store i32 0, i32* %storemerge11.reg2mem
  br label %dec_label_pc_11bbc

dec_label_pc_11bbc:                               ; preds = %dec_label_pc_11bbc.lr.ph, %dec_label_pc_11bbc
  %storemerge11.reload = load i32, i32* %storemerge11.reg2mem
  %196 = add nuw nsw i32 %storemerge11.reload, 1
  %197 = add nuw nsw i32 %196, %70, !insn.addr !406
  %198 = mul i32 %197, 32, !insn.addr !407
  %199 = add i32 %198, %.pre18, !insn.addr !408
  %200 = mul nuw nsw i32 %storemerge11.reload, 5, !insn.addr !409
  %201 = add i32 %195, %200, !insn.addr !410
  %202 = inttoptr i32 %201 to i8*, !insn.addr !411
  %203 = load i8, i8* %202, align 1, !insn.addr !411
  %204 = zext i8 %203 to i32, !insn.addr !411
  %205 = call i32 @function_10de8(i32 %161, i32 256, i32 %199, i32 %204, i32 1, i32 %41), !insn.addr !412
  %206 = icmp ult i32 %196, %70, !insn.addr !413
  store i32 %196, i32* %storemerge11.reg2mem, !insn.addr !413
  br i1 %206, label %dec_label_pc_11bbc, label %dec_label_pc_11c44, !insn.addr !413

dec_label_pc_11c44:                               ; preds = %dec_label_pc_11bbc, %dec_label_pc_11a08
  store i32 0, i32* %stack_var_-2640, align 4, !insn.addr !414
  %207 = call i32* @memset(i32* nonnull %stack_var_-2636, i32 0, i32 252), !insn.addr !415
  %208 = call i32 @fseek(%_IO_FILE* nonnull %11, i32 -256, i32 2), !insn.addr !416
  %209 = call i32 @fread(i32* nonnull %stack_var_-2640, i32 256, i32 1, %_IO_FILE* nonnull %11), !insn.addr !417
  store i32 0, i32* %stack_var_-2672, align 4, !insn.addr !418
  %210 = call i32 @SHA256_Init(i32* nonnull %stack_var_-2784), !insn.addr !419
  %211 = mul i32 %70, 64, !insn.addr !420
  %212 = or i32 %211, 32, !insn.addr !421
  %213 = call i32 @SHA256_Update(i32* nonnull %stack_var_-2784, i32 %.pre18, i32 %212, i32* nonnull %stack_var_-2784), !insn.addr !422
  %214 = call i32 @SHA256_Final(i32* nonnull %stack_var_-2672, i32* nonnull %stack_var_-2784, i32* nonnull %stack_var_-2784, i32* nonnull %stack_var_-2672), !insn.addr !423
  %215 = call i32 @BIO_new_mem_buf(i32 %131, i32 1024), !insn.addr !424
  %216 = call i32 @PEM_read_bio_RSA_PUBKEY(i32 %215, i32 0, i32 0, i32 0), !insn.addr !425
  %217 = icmp eq i32 %216, 0, !insn.addr !426
  br i1 %217, label %dec_label_pc_11d7c, label %dec_label_pc_11db8, !insn.addr !427

dec_label_pc_11d7c:                               ; preds = %dec_label_pc_11c44
  %218 = call i32 @ERR_get_error(i32 0), !insn.addr !428
  %219 = call i32 @ERR_error_string(i32 %218, i32 0), !insn.addr !429
  %220 = inttoptr i32 %219 to i8*, !insn.addr !430
  %221 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_125ec, i32 0, i32 0), i8* %220), !insn.addr !430
  %222 = call i32 @puts(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12958, i32 0, i32 0)), !insn.addr !431
  store i32 17, i32* %r3.0.reg2mem, !insn.addr !432
  br label %dec_label_pc_11efc, !insn.addr !432

dec_label_pc_11db8:                               ; preds = %dec_label_pc_11c44
  %223 = ptrtoint i32* %stack_var_-2640 to i32, !insn.addr !433
  %224 = call i32 @RSA_verify(i32 672, i32* nonnull %stack_var_-2672, i32 32, i32 %223, i32 256, i32 %216), !insn.addr !434
  %225 = call i32 @RSA_free(i32 %216), !insn.addr !435
  %226 = icmp eq i32 %215, 0, !insn.addr !436
  br i1 %226, label %dec_label_pc_11e18, label %dec_label_pc_11e10, !insn.addr !437

dec_label_pc_11e10:                               ; preds = %dec_label_pc_11db8
  %227 = call i32 @BIO_free(i32 %215), !insn.addr !438
  br label %dec_label_pc_11e18, !insn.addr !438

dec_label_pc_11e18:                               ; preds = %dec_label_pc_11e10, %dec_label_pc_11db8
  %228 = icmp eq i32 %224, 1, !insn.addr !439
  br i1 %228, label %dec_label_pc_11e6c, label %dec_label_pc_11e24, !insn.addr !440

dec_label_pc_11e24:                               ; preds = %dec_label_pc_11e18
  %229 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_1296c, i32 0, i32 0)), !insn.addr !441
  %230 = call i32 @ERR_get_error(i32 %229), !insn.addr !442
  %231 = call i32 @ERR_error_string(i32 %230, i32 0), !insn.addr !443
  %232 = inttoptr i32 %231 to i8*, !insn.addr !444
  %233 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_125ec, i32 0, i32 0), i8* %232), !insn.addr !444
  store i32 18, i32* %r3.0.reg2mem, !insn.addr !445
  br label %dec_label_pc_11efc, !insn.addr !445

dec_label_pc_11e6c:                               ; preds = %dec_label_pc_11e18
  %234 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !446
  %235 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_12984, i32 0, i32 0)), !insn.addr !447
  %236 = icmp eq i32 %40, 0, !insn.addr !448
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !449
  br i1 %236, label %dec_label_pc_11efc, label %dec_label_pc_11e94, !insn.addr !449

dec_label_pc_11e94:                               ; preds = %dec_label_pc_11e6c
  %237 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_12990, i32 0, i32 0)), !insn.addr !450
  store i32 0, i32* %stack_var_-3044, align 4, !insn.addr !451
  %238 = call i32* @memset(i32* nonnull %stack_var_-3040, i32 0, i32 253), !insn.addr !452
  %239 = add i32 %19, 1360, !insn.addr !453
  %240 = inttoptr i32 %239 to i32*, !insn.addr !454
  %241 = call i32* @memcpy(i32* nonnull %stack_var_-3044, i32* %240, i32 256), !insn.addr !454
  %242 = bitcast i32* %stack_var_-3044 to i8*, !insn.addr !455
  %243 = call i32 @puts(i8* nonnull %242), !insn.addr !455
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !455
  br label %dec_label_pc_11efc, !insn.addr !455

dec_label_pc_11efc:                               ; preds = %dec_label_pc_11e6c, %dec_label_pc_11e94, %dec_label_pc_11e24, %dec_label_pc_11d7c, %dec_label_pc_119f4, %dec_label_pc_119b8, %dec_label_pc_118d0, %dec_label_pc_11800, %dec_label_pc_117ac, %dec_label_pc_1161c, %dec_label_pc_115ac, %dec_label_pc_11520, %dec_label_pc_114e4, %dec_label_pc_114a8
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !456

; uselistorder directives
  uselistorder i32 %215, { 1, 0, 2 }
  uselistorder i32 %196, { 0, 2, 1 }
  uselistorder i32 %storemerge11.reload, { 1, 0 }
  uselistorder i32 %storemerge812.reload, { 0, 2, 1 }
  uselistorder i32 %.pre18, { 1, 0, 2 }
  uselistorder %_IO_FILE* %149, { 1, 0, 2 }
  uselistorder %_IO_FILE* %144, { 1, 0, 2 }
  uselistorder %_IO_FILE* %137, { 1, 0, 2 }
  uselistorder i32 %131, { 1, 0, 2 }
  uselistorder %_IO_FILE* %114, { 1, 0, 2 }
  uselistorder i32 %stack_var_-20.0.lcssa.reload, { 1, 0 }
  uselistorder i32 %95, { 1, 0 }
  uselistorder i32 %storemerge914.reload, { 1, 0, 2 }
  uselistorder i32 %70, { 0, 2, 1, 3, 4 }
  uselistorder i8 %spec.select, { 1, 2, 4, 3, 0 }
  uselistorder i32 %41, { 1, 0, 2 }
  uselistorder i32 %33, { 0, 2, 1 }
  uselistorder i32 %19, { 4, 2, 0, 5, 3, 7, 6, 9, 8, 1, 13, 12, 11, 10, 14, 15, 16 }
  uselistorder %_IO_FILE* %11, { 4, 6, 5, 7, 3, 8, 2, 1, 0, 9, 10 }
  uselistorder i32 %7, { 1, 0, 2 }
  uselistorder i32* %stack_var_-2640, { 1, 0, 2 }
  uselistorder i32* %storemerge1017.reg2mem, { 1, 0, 2 }
  uselistorder i8* %stack_var_-9.116.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge914.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-20.013.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge812.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge11.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1, 11, 12, 9, 10, 8, 13, 7, 6, 5, 4, 14, 3 }
  uselistorder i32 (i32)* @BIO_free, { 1, 0, 2 }
  uselistorder i32 (i32)* @RSA_free, { 1, 0, 2 }
  uselistorder i32 (i32, i32*, i32, i32, i32, i32)* @RSA_verify, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @ERR_error_string, { 2, 1, 0, 3, 4 }
  uselistorder i32 (i32)* @ERR_get_error, { 3, 1, 2, 0, 4 }
  uselistorder i32 (i32, i32, i32, i32)* @PEM_read_bio_RSA_PUBKEY, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @BIO_new_mem_buf, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32, i32, i32, i32)* @function_10de8, { 1, 0 }
  uselistorder i32 32, { 4, 3, 0, 1, 2, 5 }
  uselistorder i32 (i32*, i32*, i32*, i32*)* @SHA256_Final, { 4, 3, 2, 0, 1, 5 }
  uselistorder i32 (i32*, i32, i32, i32*)* @SHA256_Update, { 4, 3, 1, 2, 0, 5 }
  uselistorder i32 (i32*)* @SHA256_Init, { 0, 2, 3, 1, 4 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 6, 5, 4, 2, 3, 1, 0, 7 }
  uselistorder i32 13, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_128d8, i32 0, i32 0), { 2, 1, 0 }
  uselistorder i32 1024, { 2, 3, 4, 8, 9, 5, 6, 0, 1, 7 }
  uselistorder i32 16777216, { 0, 2, 1 }
  uselistorder i32 65536, { 0, 2, 1, 3, 4 }
  uselistorder i32 256, { 15, 12, 16, 17, 0, 18, 1, 3, 2, 4, 6, 8, 5, 7, 11, 9, 10, 13, 19, 14, 20 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 10, 9, 8, 14, 13, 12, 11, 7, 6, 5, 4, 3, 0, 2, 1, 15 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fread, { 0, 1, 4, 2, 3, 5, 6 }
  uselistorder %_IO_FILE* null, { 4, 5, 6, 7, 8, 2, 3, 1, 9, 0, 10, 11, 12 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 3, 2, 6, 5, 1, 0, 8, 7, 4, 9 }
  uselistorder i32 (i8*, ...)* @printf, { 0, 5, 4, 3, 1, 2, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 17 }
  uselistorder i32* %arg3, { 1, 0 }
  uselistorder i32* %arg1, { 1, 0, 3, 2, 4 }
  uselistorder label %dec_label_pc_11efc, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }
  uselistorder label %dec_label_pc_11bbc, { 1, 0 }
  uselistorder label %dec_label_pc_11a84, { 1, 0 }
  uselistorder label %dec_label_pc_116b4, { 1, 0 }
  uselistorder label %dec_label_pc_115cc, { 1, 0 }
  uselistorder label %dec_label_pc_115c0, { 1, 0 }
}

define i32 @function_11f08(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11f08:
  %r3.0.reg2mem = alloca i32, !insn.addr !457
  %stack_var_-11.2.reg2mem = alloca i8, !insn.addr !457
  %stack_var_-10.1.reg2mem = alloca i8, !insn.addr !457
  %stack_var_-9.0.reg2mem = alloca i32, !insn.addr !457
  %.reg2mem = alloca i32, !insn.addr !457
  %stack_var_-10.05.reg2mem = alloca i8, !insn.addr !457
  %stack_var_-11.17.reg2mem = alloca i8, !insn.addr !457
  %stack_var_-2576 = alloca i32, align 4
  %stack_var_-2320 = alloca i32, align 4
  %stack_var_-268 = alloca i32, align 4
  %stack_var_-272 = alloca i32, align 4
  %stack_var_-140 = alloca i32, align 4
  %stack_var_-144 = alloca i32, align 4
  %0 = icmp sgt i32 %arg1, 1, !insn.addr !458
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !458
  br i1 %0, label %dec_label_pc_11f40, label %dec_label_pc_12268, !insn.addr !458

dec_label_pc_11f40:                               ; preds = %dec_label_pc_11f08
  %1 = add i32 %arg2, 4, !insn.addr !459
  %2 = inttoptr i32 %1 to i32*, !insn.addr !460
  %3 = load i32, i32* %2, align 4, !insn.addr !460
  %4 = inttoptr i32 %3 to i8*, !insn.addr !461
  %5 = load i8, i8* %4, align 1, !insn.addr !461
  %6 = icmp eq i8 %5, 45, !insn.addr !462
  store i32 2, i32* %r3.0.reg2mem, !insn.addr !463
  br i1 %6, label %dec_label_pc_11f70, label %dec_label_pc_12268, !insn.addr !463

dec_label_pc_11f70:                               ; preds = %dec_label_pc_11f40
  store i32 0, i32* %stack_var_-144, align 4, !insn.addr !464
  %7 = call i32* @memset(i32* nonnull %stack_var_-140, i32 0, i32 124), !insn.addr !465
  store i32 0, i32* %stack_var_-272, align 4, !insn.addr !466
  %8 = call i32* @memset(i32* nonnull %stack_var_-268, i32 0, i32 124), !insn.addr !467
  %9 = call i32* @memset(i32* nonnull %stack_var_-2320, i32 0, i32 2048), !insn.addr !468
  %10 = call i32* @memset(i32* nonnull %stack_var_-2576, i32 0, i32 253), !insn.addr !469
  switch i32 %arg1, label %dec_label_pc_1211c [
    i32 5, label %dec_label_pc_1200c
    i32 3, label %dec_label_pc_120bc
    i32 2, label %dec_label_pc_12140
  ]

dec_label_pc_1200c:                               ; preds = %dec_label_pc_11f70
  %11 = add i32 %arg2, 12, !insn.addr !470
  %12 = inttoptr i32 %11 to i32*, !insn.addr !471
  %13 = load i32, i32* %12, align 4, !insn.addr !471
  %14 = inttoptr i32 %13 to i8*, !insn.addr !472
  %15 = call i32 @strlen(i8* %14), !insn.addr !472
  %16 = icmp ult i32 %15, 127, !insn.addr !473
  %17 = icmp ne i1 %16, true, !insn.addr !473
  %18 = icmp eq i32 %15, 127, !insn.addr !473
  %19 = icmp ne i1 %17, true, !insn.addr !474
  %20 = or i1 %18, %19, !insn.addr !474
  br i1 %20, label %dec_label_pc_12040, label %dec_label_pc_1202c, !insn.addr !474

dec_label_pc_1202c:                               ; preds = %dec_label_pc_1200c
  %21 = call i32 @puts(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_129b0, i32 0, i32 0)), !insn.addr !475
  store i32 3, i32* %r3.0.reg2mem, !insn.addr !476
  br label %dec_label_pc_12268, !insn.addr !476

dec_label_pc_12040:                               ; preds = %dec_label_pc_1200c
  %22 = load i32, i32* %12, align 4, !insn.addr !477
  %23 = bitcast i32* %stack_var_-144 to i8*, !insn.addr !478
  %24 = inttoptr i32 %22 to i8*, !insn.addr !478
  %25 = call i8* @strcpy(i8* nonnull %23, i8* %24), !insn.addr !478
  %26 = add i32 %arg2, 16, !insn.addr !479
  %27 = inttoptr i32 %26 to i32*, !insn.addr !480
  %28 = load i32, i32* %27, align 4, !insn.addr !480
  %29 = inttoptr i32 %28 to i8*, !insn.addr !481
  %30 = call i32 @strlen(i8* %29), !insn.addr !481
  %31 = icmp ult i32 %30, 127, !insn.addr !482
  %32 = icmp ne i1 %31, true, !insn.addr !482
  %33 = icmp eq i32 %30, 127, !insn.addr !482
  %34 = icmp ne i1 %32, true, !insn.addr !483
  %35 = or i1 %33, %34, !insn.addr !483
  br i1 %35, label %dec_label_pc_12090, label %dec_label_pc_1207c, !insn.addr !483

dec_label_pc_1207c:                               ; preds = %dec_label_pc_12040
  %36 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_129c4, i32 0, i32 0)), !insn.addr !484
  store i32 4, i32* %r3.0.reg2mem, !insn.addr !485
  br label %dec_label_pc_12268, !insn.addr !485

dec_label_pc_12090:                               ; preds = %dec_label_pc_12040
  %37 = load i32, i32* %27, align 4, !insn.addr !486
  %38 = bitcast i32* %stack_var_-272 to i8*, !insn.addr !487
  %39 = inttoptr i32 %37 to i8*, !insn.addr !487
  %40 = call i8* @strcpy(i8* nonnull %38, i8* %39), !insn.addr !487
  br label %dec_label_pc_12140, !insn.addr !488

dec_label_pc_120bc:                               ; preds = %dec_label_pc_11f70
  %41 = add i32 %arg2, 8, !insn.addr !489
  %42 = inttoptr i32 %41 to i32*, !insn.addr !490
  %43 = load i32, i32* %42, align 4, !insn.addr !490
  %44 = inttoptr i32 %43 to i8*, !insn.addr !491
  %45 = call i32 @strlen(i8* %44), !insn.addr !491
  %46 = icmp ult i32 %45, 127, !insn.addr !492
  %47 = icmp ne i1 %46, true, !insn.addr !492
  %48 = icmp eq i32 %45, 127, !insn.addr !492
  %49 = icmp ne i1 %47, true, !insn.addr !493
  %50 = or i1 %48, %49, !insn.addr !493
  br i1 %50, label %dec_label_pc_120f0, label %dec_label_pc_120dc, !insn.addr !493

dec_label_pc_120dc:                               ; preds = %dec_label_pc_120bc
  %51 = call i32 @puts(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_129b0, i32 0, i32 0)), !insn.addr !494
  store i32 3, i32* %r3.0.reg2mem, !insn.addr !495
  br label %dec_label_pc_12268, !insn.addr !495

dec_label_pc_120f0:                               ; preds = %dec_label_pc_120bc
  %52 = load i32, i32* %42, align 4, !insn.addr !496
  %53 = bitcast i32* %stack_var_-144 to i8*, !insn.addr !497
  %54 = inttoptr i32 %52 to i8*, !insn.addr !497
  %55 = call i8* @strcpy(i8* nonnull %53, i8* %54), !insn.addr !497
  br label %dec_label_pc_12140, !insn.addr !498

dec_label_pc_1211c:                               ; preds = %dec_label_pc_11f70
  %56 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_129d8, i32 0, i32 0)), !insn.addr !499
  store i32 3, i32* %r3.0.reg2mem, !insn.addr !500
  br label %dec_label_pc_12268, !insn.addr !500

dec_label_pc_12140:                               ; preds = %dec_label_pc_11f70, %dec_label_pc_120f0, %dec_label_pc_12090
  %57 = load i32, i32* %2, align 4, !insn.addr !501
  %58 = add i32 %57, 1, !insn.addr !502
  %59 = inttoptr i32 %58 to i8*, !insn.addr !503
  %60 = load i8, i8* %59, align 1, !insn.addr !503
  %61 = zext i8 %60 to i32, !insn.addr !503
  %62 = add nsw i32 %61, -102, !insn.addr !504
  store i32 %62, i32* @1, align 4, !insn.addr !505
  store i8 0, i8* %stack_var_-11.17.reg2mem, !insn.addr !505
  store i8 1, i8* %stack_var_-10.05.reg2mem, !insn.addr !505
  store i32 0, i32* %.reg2mem, !insn.addr !505
  store i32 0, i32* %stack_var_-9.0.reg2mem, !insn.addr !505
  store i8 0, i8* %stack_var_-10.1.reg2mem, !insn.addr !505
  store i8 0, i8* %stack_var_-11.2.reg2mem, !insn.addr !505
  switch i8 %60, label %dec_label_pc_12240 [
    i8 102, label %dec_label_pc_121e8
    i8 120, label %dec_label_pc_121d4.thread9
    i8 115, label %dec_label_pc_121d4.thread
    i8 113, label %dec_label_pc_12234
    i8 112, label %dec_label_pc_121d4
    i8 110, label %dec_label_pc_12220
  ], !insn.addr !505

dec_label_pc_121d4.thread9:                       ; preds = %dec_label_pc_12140
  store i8 1, i8* %stack_var_-11.17.reg2mem
  store i8 0, i8* %stack_var_-10.05.reg2mem
  store i32 1, i32* %.reg2mem
  br label %dec_label_pc_121d4

dec_label_pc_121d4.thread:                        ; preds = %dec_label_pc_12140
  store i8 0, i8* %stack_var_-11.17.reg2mem
  store i8 0, i8* %stack_var_-10.05.reg2mem
  store i32 1, i32* %.reg2mem
  br label %dec_label_pc_121d4

dec_label_pc_121d4:                               ; preds = %dec_label_pc_121d4.thread, %dec_label_pc_121d4.thread9, %dec_label_pc_12140
  %.reload = load i32, i32* %.reg2mem
  %stack_var_-10.05.reload = load i8, i8* %stack_var_-10.05.reg2mem
  %stack_var_-11.17.reload = load i8, i8* %stack_var_-11.17.reg2mem
  store i32 %.reload, i32* %stack_var_-9.0.reg2mem
  store i8 %stack_var_-10.05.reload, i8* %stack_var_-10.1.reg2mem
  store i8 %stack_var_-11.17.reload, i8* %stack_var_-11.2.reg2mem
  br label %dec_label_pc_121e8

dec_label_pc_121e8:                               ; preds = %dec_label_pc_121d4, %dec_label_pc_12140
  %stack_var_-11.2.reload = load i8, i8* %stack_var_-11.2.reg2mem
  %stack_var_-10.1.reload = load i8, i8* %stack_var_-10.1.reg2mem
  %stack_var_-9.0.reload = load i32, i32* %stack_var_-9.0.reg2mem
  %63 = zext i8 %stack_var_-11.2.reload to i32, !insn.addr !506
  %64 = sext i8 %stack_var_-10.1.reload to i32, !insn.addr !507
  %65 = call i32 @function_11460(i32* nonnull %stack_var_-144, i32* nonnull %stack_var_-272, i32* nonnull %stack_var_-2320, i32 %stack_var_-9.0.reload, i32 %64, i32 %63), !insn.addr !507
  store i32 %65, i32* %r3.0.reg2mem, !insn.addr !508
  br label %dec_label_pc_12268, !insn.addr !508

dec_label_pc_12220:                               ; preds = %dec_label_pc_12140
  %66 = call i32 @function_109a8(i32* nonnull %stack_var_-144), !insn.addr !509
  store i32 %66, i32* %r3.0.reg2mem, !insn.addr !510
  br label %dec_label_pc_12268, !insn.addr !510

dec_label_pc_12234:                               ; preds = %dec_label_pc_12140
  %67 = call i32 @function_10b9c(), !insn.addr !511
  store i32 %67, i32* %r3.0.reg2mem, !insn.addr !512
  br label %dec_label_pc_12268, !insn.addr !512

dec_label_pc_12240:                               ; preds = %dec_label_pc_12140
  %68 = call i32 @puts(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_129e4, i32 0, i32 0)), !insn.addr !513
  store i32 5, i32* %r3.0.reg2mem, !insn.addr !514
  br label %dec_label_pc_12268, !insn.addr !514

dec_label_pc_12268:                               ; preds = %dec_label_pc_12240, %dec_label_pc_121e8, %dec_label_pc_12220, %dec_label_pc_12234, %dec_label_pc_11f40, %dec_label_pc_11f08, %dec_label_pc_1211c, %dec_label_pc_120dc, %dec_label_pc_1207c, %dec_label_pc_1202c
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !515

; uselistorder directives
  uselistorder i32 %45, { 1, 0 }
  uselistorder i32 %30, { 1, 0 }
  uselistorder i32 %15, { 1, 0 }
  uselistorder i8* %stack_var_-11.17.reg2mem, { 0, 2, 1, 3 }
  uselistorder i8* %stack_var_-10.05.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %r3.0.reg2mem, { 0, 4, 1, 3, 2, 7, 8, 10, 9, 5, 6 }
  uselistorder i8 1, { 1, 0, 2, 3 }
  uselistorder i8 0, { 3, 4, 2, 0, 1, 5, 8, 6, 16, 17, 15, 14, 13, 12, 11, 10, 9, 7, 18, 19, 20, 21, 22, 23, 24, 25, 26 }
  uselistorder i32 8, { 2, 1, 0, 10, 3, 4, 5, 6, 7, 8, 9 }
  uselistorder i32 16, { 2, 0, 1, 5, 3, 4 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 0, 3 }
  uselistorder i32 (i8*)* @puts, { 27, 8, 7, 6, 5, 4, 3, 2, 1, 0, 17, 16, 15, 14, 13, 12, 11, 10, 9, 26, 25, 24, 23, 22, 21, 20, 19, 18, 28 }
  uselistorder i1 true, { 2, 3, 4, 5, 6, 7, 8, 9, 0, 1 }
  uselistorder i32 (i8*)* @strlen, { 12, 11, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 13 }
  uselistorder i32 12, { 1, 2, 7, 3, 4, 5, 6, 0 }
  uselistorder i32 5, { 0, 1, 4, 3, 2 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 9, 11, 10, 1, 0, 4, 3, 6, 5, 8, 7, 2, 12 }
  uselistorder i32 4, { 0, 2, 13, 12, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1 }
  uselistorder label %dec_label_pc_12268, { 0, 3, 2, 1, 6, 7, 8, 9, 4, 5 }
  uselistorder label %dec_label_pc_12140, { 1, 2, 0 }
}

define i32 @function_12274(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12274:
  %0 = call i32 @function_106e8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !516
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 143114, i32 ptrtoint (i32* @global_var_22f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !517

; uselistorder directives
  uselistorder i32 0, { 32, 35, 36, 0, 1, 33, 34, 37, 38, 39, 40, 130, 131, 132, 133, 134, 135, 3, 136, 137, 48, 49, 2, 162, 50, 51, 138, 52, 53, 163, 54, 55, 139, 21, 164, 142, 141, 140, 143, 144, 145, 4, 41, 5, 146, 46, 47, 44, 45, 56, 57, 58, 59, 20, 16, 17, 60, 61, 62, 63, 165, 147, 148, 64, 65, 18, 19, 66, 67, 42, 43, 6, 68, 69, 166, 7, 70, 71, 72, 73, 167, 74, 75, 76, 77, 78, 79, 15, 27, 24, 25, 26, 28, 29, 30, 31, 149, 23, 8, 80, 81, 82, 83, 168, 150, 169, 151, 152, 84, 85, 153, 9, 170, 86, 87, 88, 89, 154, 22, 171, 157, 156, 155, 10, 11, 158, 159, 90, 91, 92, 93, 12, 94, 95, 96, 97, 98, 99, 13, 100, 101, 160, 161, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 172, 173, 14, 174, 126, 127, 128, 129 }
  uselistorder i32 2, { 3, 2, 0, 4, 1 }
}

define i32 @function_122b0() local_unnamed_addr {
dec_label_pc_122b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !518
}

define i32 @function_122b4(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_122b4:
  %0 = alloca i1
  %1 = load i1, i1* %0
  br i1 %1, label %2, label %3, !insn.addr !519

; <label>:2:                                      ; preds = %dec_label_pc_122b4
  br label %3, !insn.addr !519

; <label>:3:                                      ; preds = %dec_label_pc_122b4, %2
  ret i32 %arg1, !insn.addr !519

; uselistorder directives
  uselistorder label %3, { 1, 0 }
}

define i32 @function_122b8() local_unnamed_addr {
dec_label_pc_122b8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %2 to i8*, !insn.addr !520
  %4 = inttoptr i32 %1 to %stat64*, !insn.addr !520
  %5 = call i32 @__xstat64(i32 3, i8* %3, %stat64* %4), !insn.addr !520
  ret i32 %5, !insn.addr !520

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 3, { 4, 0, 1, 2, 3 }
  uselistorder i32 1, { 6, 9, 5, 16, 15, 90, 10, 47, 66, 65, 64, 63, 62, 61, 19, 18, 17, 14, 13, 12, 11, 91, 48, 45, 92, 93, 49, 50, 51, 52, 94, 95, 44, 53, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 28, 27, 26, 25, 24, 23, 22, 21, 20, 4, 0, 54, 55, 56, 57, 82, 81, 80, 79, 46, 78, 32, 31, 30, 29, 96, 84, 83, 34, 33, 58, 97, 35, 86, 85, 37, 36, 98, 59, 60, 38, 88, 87, 40, 39, 8, 41, 3, 43, 42, 7, 2, 1, 89 }
}

define i32 @function_122c0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_122c0:
  ret i32 %arg1, !insn.addr !521
}

declare void @abort() local_unnamed_addr

declare i32 @ERR_get_error(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @__gmon_start__.1() local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @RSA_verify(i32, i32*, i32, i32, i32, i32) local_unnamed_addr

declare i32 @fseek(%_IO_FILE*, i32, i32) local_unnamed_addr

declare i32 @PEM_read_bio_RSA_PUBKEY(i32, i32, i32, i32) local_unnamed_addr

declare i32 @SHA256_Final(i32*, i32*, i32*, i32*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @BIO_new_mem_buf(i32, i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @ERR_error_string(i32, i32) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @__xstat64(i32, i8*, %stat64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @RSA_free(i32) local_unnamed_addr

declare i32 @SHA256_Update(i32*, i32, i32, i32*) local_unnamed_addr

declare i32 @BIO_free(i32) local_unnamed_addr

declare i32 @SHA256_Init(i32*) local_unnamed_addr

declare i32 @fread(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare i32 @__asm_nop(i32) local_unnamed_addr

declare i32 @__asm_sxth(i32) local_unnamed_addr

!0 = !{i64 67308}
!1 = !{i64 67312}
!2 = !{i64 67344}
!3 = !{i64 67356}
!4 = !{i64 67368}
!5 = !{i64 67380}
!6 = !{i64 67392}
!7 = !{i64 67404}
!8 = !{i64 67416}
!9 = !{i64 67428}
!10 = !{i64 67440}
!11 = !{i64 67452}
!12 = !{i64 67464}
!13 = !{i64 67476}
!14 = !{i64 67488}
!15 = !{i64 67500}
!16 = !{i64 67512}
!17 = !{i64 67524}
!18 = !{i64 67536}
!19 = !{i64 67548}
!20 = !{i64 67564}
!21 = !{i64 67576}
!22 = !{i64 67588}
!23 = !{i64 67600}
!24 = !{i64 67612}
!25 = !{i64 67624}
!26 = !{i64 67636}
!27 = !{i64 67668}
!28 = !{i64 67672}
!29 = !{i64 67678}
!30 = !{i64 67700}
!31 = !{i64 67704}
!32 = !{i64 67708}
!33 = !{i64 67712}
!34 = !{i64 67724}
!35 = !{i64 67756}
!36 = !{i64 67780}
!37 = !{i64 67776}
!38 = !{i64 67788}
!39 = !{i64 67800}
!40 = !{i64 67804}
!41 = !{i64 67814}
!42 = !{i64 67816}
!43 = !{i64 67818}
!44 = !{i64 67824}
!45 = !{i64 67826}
!46 = !{i64 67828}
!47 = !{i64 67856}
!48 = !{i64 67872}
!49 = !{i64 67884}
!50 = !{i64 67896}
!51 = !{i64 67908}
!52 = !{i64 67920}
!53 = !{i64 67932}
!54 = !{i64 67944}
!55 = !{i64 67956}
!56 = !{i64 67968}
!57 = !{i64 67980}
!58 = !{i64 67992}
!59 = !{i64 67996}
!60 = !{i64 68004}
!61 = !{i64 68008}
!62 = !{i64 68048}
!63 = !{i64 68068}
!64 = !{i64 68092}
!65 = !{i64 68104}
!66 = !{i64 68108}
!67 = !{i64 68120}
!68 = !{i64 68128}
!69 = !{i64 68176}
!70 = !{i64 68180}
!71 = !{i64 68184}
!72 = !{i64 68208}
!73 = !{i64 68244}
!74 = !{i64 68260}
!75 = !{i64 68272}
!76 = !{i64 68276}
!77 = !{i64 68328}
!78 = !{i64 68348}
!79 = !{i64 68356}
!80 = !{i64 68392}
!81 = !{i64 68416}
!82 = !{i64 68436}
!83 = !{i64 68452}
!84 = !{i64 68468}
!85 = !{i64 68488}
!86 = !{i64 68492}
!87 = !{i64 68504}
!88 = !{i64 68508}
!89 = !{i64 68536}
!90 = !{i64 68548}
!91 = !{i64 68552}
!92 = !{i64 68564}
!93 = !{i64 68572}
!94 = !{i64 68580}
!95 = !{i64 68600}
!96 = !{i64 68624}
!97 = !{i64 68632}
!98 = !{i64 68640}
!99 = !{i64 68648}
!100 = !{i64 68664}
!101 = !{i64 68684}
!102 = !{i64 68692}
!103 = !{i64 68704}
!104 = !{i64 68716}
!105 = !{i64 68720}
!106 = !{i64 68772}
!107 = !{i64 68796}
!108 = !{i64 68808}
!109 = !{i64 68812}
!110 = !{i64 68816}
!111 = !{i64 68832}
!112 = !{i64 68852}
!113 = !{i64 68864}
!114 = !{i64 68872}
!115 = !{i64 68884}
!116 = !{i64 68904}
!117 = !{i64 68924}
!118 = !{i64 68960}
!119 = !{i64 68984}
!120 = !{i64 68992}
!121 = !{i64 68996}
!122 = !{i64 69004}
!123 = !{i64 69012}
!124 = !{i64 69016}
!125 = !{i64 69028}
!126 = !{i64 69044}
!127 = !{i64 69064}
!128 = !{i64 69076}
!129 = !{i64 69080}
!130 = !{i64 69092}
!131 = !{i64 69096}
!132 = !{i64 69128}
!133 = !{i64 69156}
!134 = !{i64 69176}
!135 = !{i64 69212}
!136 = !{i64 69240}
!137 = !{i64 69264}
!138 = !{i64 69276}
!139 = !{i64 69340}
!140 = !{i64 69360}
!141 = !{i64 69364}
!142 = !{i64 69380}
!143 = !{i64 69384}
!144 = !{i64 69392}
!145 = !{i64 69396}
!146 = !{i64 69416}
!147 = !{i64 69436}
!148 = !{i64 69440}
!149 = !{i64 69460}
!150 = !{i64 69464}
!151 = !{i64 69468}
!152 = !{i64 69480}
!153 = !{i64 69484}
!154 = !{i64 69488}
!155 = !{i64 69508}
!156 = !{i64 69528}
!157 = !{i64 69532}
!158 = !{i64 69548}
!159 = !{i64 69560}
!160 = !{i64 69564}
!161 = !{i64 69568}
!162 = !{i64 69588}
!163 = !{i64 69608}
!164 = !{i64 69612}
!165 = !{i64 69636}
!166 = !{i64 69640}
!167 = !{i64 69644}
!168 = !{i64 69648}
!169 = !{i64 69656}
!170 = !{i64 69660}
!171 = !{i64 69680}
!172 = !{i64 69700}
!173 = !{i64 69704}
!174 = !{i64 69728}
!175 = !{i64 69732}
!176 = !{i64 69736}
!177 = !{i64 69740}
!178 = !{i64 69744}
!179 = !{i64 69764}
!180 = !{i64 69784}
!181 = !{i64 69788}
!182 = !{i64 69804}
!183 = !{i64 69808}
!184 = !{i64 69820}
!185 = !{i64 69824}
!186 = !{i64 69828}
!187 = !{i64 69848}
!188 = !{i64 69868}
!189 = !{i64 69872}
!190 = !{i64 69896}
!191 = !{i64 69900}
!192 = !{i64 69904}
!193 = !{i64 69908}
!194 = !{i64 69916}
!195 = !{i64 69920}
!196 = !{i64 69940}
!197 = !{i64 69960}
!198 = !{i64 69964}
!199 = !{i64 69980}
!200 = !{i64 69984}
!201 = !{i64 69988}
!202 = !{i64 70008}
!203 = !{i64 70028}
!204 = !{i64 70032}
!205 = !{i64 70048}
!206 = !{i64 70052}
!207 = !{i64 70060}
!208 = !{i64 70064}
!209 = !{i64 70072}
!210 = !{i64 70076}
!211 = !{i64 70096}
!212 = !{i64 70116}
!213 = !{i64 70120}
!214 = !{i64 70136}
!215 = !{i64 70144}
!216 = !{i64 70176}
!217 = !{i64 70204}
!218 = !{i64 70216}
!219 = !{i64 70220}
!220 = !{i64 70248}
!221 = !{i64 70252}
!222 = !{i64 70408}
!223 = !{i64 70412}
!224 = !{i64 70280}
!225 = !{i64 70340}
!226 = !{i64 70352}
!227 = !{i64 70300}
!228 = !{i64 70404}
!229 = !{i64 70392}
!230 = !{i64 70448}
!231 = !{i64 70492}
!232 = !{i64 70512}
!233 = !{i64 70504}
!234 = !{i64 70552}
!235 = !{i64 70632}
!236 = !{i64 70544}
!237 = !{i64 70664}
!238 = !{i64 70672}
!239 = !{i64 70696}
!240 = !{i64 70700}
!241 = !{i64 70704}
!242 = !{i64 70708}
!243 = !{i64 70712}
!244 = !{i64 70720}
!245 = !{i64 70724}
!246 = !{i64 70728}
!247 = !{i64 70732}
!248 = !{i64 70736}
!249 = !{i64 70748}
!250 = !{i64 70752}
!251 = !{i64 70796}
!252 = !{i64 70800}
!253 = !{i64 70820}
!254 = !{i64 70840}
!255 = !{i64 70848}
!256 = !{i64 70864}
!257 = !{i64 70876}
!258 = !{i64 70880}
!259 = !{i64 70896}
!260 = !{i64 70904}
!261 = !{i64 70924}
!262 = !{i64 70936}
!263 = !{i64 70940}
!264 = !{i64 70956}
!265 = !{i64 70976}
!266 = !{i64 70984}
!267 = !{i64 71000}
!268 = !{i64 71004}
!269 = !{i64 71008}
!270 = !{i64 71016}
!271 = !{i64 71020}
!272 = !{i64 71024}
!273 = !{i64 71028}
!274 = !{i64 71040}
!275 = !{i64 71044}
!276 = !{i64 71116}
!277 = !{i64 71032}
!278 = !{i64 71064}
!279 = !{i64 71076}
!280 = !{i64 71080}
!281 = !{i64 71092}
!282 = !{i64 71100}
!283 = !{i64 71132}
!284 = !{i64 71156}
!285 = !{i64 71172}
!286 = !{i64 71180}
!287 = !{i64 71188}
!288 = !{i64 71192}
!289 = !{i64 71208}
!290 = !{i64 71224}
!291 = !{i64 71244}
!292 = !{i64 71252}
!293 = !{i64 71264}
!294 = !{i64 71268}
!295 = !{i64 71280}
!296 = !{i64 71292}
!297 = !{i64 71308}
!298 = !{i64 71324}
!299 = !{i64 71564}
!300 = !{i64 71576}
!301 = !{i64 71364}
!302 = !{i64 71368}
!303 = !{i64 71376}
!304 = !{i64 71380}
!305 = !{i64 71384}
!306 = !{i64 71416}
!307 = !{i64 71420}
!308 = !{i64 71424}
!309 = !{i64 71428}
!310 = !{i64 71456}
!311 = !{i64 71460}
!312 = !{i64 71464}
!313 = !{i64 71468}
!314 = !{i64 71500}
!315 = !{i64 71504}
!316 = !{i64 71508}
!317 = !{i64 71524}
!318 = !{i64 71548}
!319 = !{i64 71556}
!320 = !{i64 71588}
!321 = !{i64 71592}
!322 = !{i64 71284}
!323 = !{i64 71296}
!324 = !{i64 71300}
!325 = !{i64 71312}
!326 = !{i64 71316}
!327 = !{i64 71328}
!328 = !{i64 71616}
!329 = !{i64 71636}
!330 = !{i64 71644}
!331 = !{i64 71660}
!332 = !{i64 71672}
!333 = !{i64 71676}
!334 = !{i64 71692}
!335 = !{i64 71712}
!336 = !{i64 71720}
!337 = !{i64 71728}
!338 = !{i64 71756}
!339 = !{i64 71784}
!340 = !{i64 71792}
!341 = !{i64 71808}
!342 = !{i64 71812}
!343 = !{i64 71820}
!344 = !{i64 71824}
!345 = !{i64 71836}
!346 = !{i64 71852}
!347 = !{i64 71868}
!348 = !{i64 71880}
!349 = !{i64 71884}
!350 = !{i64 71900}
!351 = !{i64 71920}
!352 = !{i64 71928}
!353 = !{i64 71948}
!354 = !{i64 71960}
!355 = !{i64 71964}
!356 = !{i64 71972}
!357 = !{i64 71988}
!358 = !{i64 71996}
!359 = !{i64 72004}
!360 = !{i64 72008}
!361 = !{i64 72028}
!362 = !{i64 72040}
!363 = !{i64 72044}
!364 = !{i64 72068}
!365 = !{i64 72076}
!366 = !{i64 72096}
!367 = !{i64 72108}
!368 = !{i64 72112}
!369 = !{i64 72128}
!370 = !{i64 72136}
!371 = !{i64 72164}
!372 = !{i64 72172}
!373 = !{i64 72176}
!374 = !{i64 72188}
!375 = !{i64 72196}
!376 = !{i64 72224}
!377 = !{i64 72244}
!378 = !{i64 72272}
!379 = !{i64 72308}
!380 = !{i64 72620}
!381 = !{i64 72504}
!382 = !{i64 72588}
!383 = !{i64 72340}
!384 = !{i64 72344}
!385 = !{i64 72352}
!386 = !{i64 72356}
!387 = !{i64 72360}
!388 = !{i64 72392}
!389 = !{i64 72396}
!390 = !{i64 72400}
!391 = !{i64 72404}
!392 = !{i64 72432}
!393 = !{i64 72436}
!394 = !{i64 72440}
!395 = !{i64 72444}
!396 = !{i64 72476}
!397 = !{i64 72480}
!398 = !{i64 72484}
!399 = !{i64 72500}
!400 = !{i64 72520}
!401 = !{i64 72552}
!402 = !{i64 72556}
!403 = !{i64 72592}
!404 = !{i64 72600}
!405 = !{i64 72692}
!406 = !{i64 72648}
!407 = !{i64 72652}
!408 = !{i64 72668}
!409 = !{i64 72688}
!410 = !{i64 72700}
!411 = !{i64 72704}
!412 = !{i64 72740}
!413 = !{i64 72768}
!414 = !{i64 72776}
!415 = !{i64 72804}
!416 = !{i64 72820}
!417 = !{i64 72848}
!418 = !{i64 72856}
!419 = !{i64 72920}
!420 = !{i64 72928}
!421 = !{i64 72932}
!422 = !{i64 72968}
!423 = !{i64 73004}
!424 = !{i64 73040}
!425 = !{i64 73064}
!426 = !{i64 73076}
!427 = !{i64 73080}
!428 = !{i64 73084}
!429 = !{i64 73100}
!430 = !{i64 73120}
!431 = !{i64 73132}
!432 = !{i64 73140}
!433 = !{i64 73152}
!434 = !{i64 73192}
!435 = !{i64 73216}
!436 = !{i64 73224}
!437 = !{i64 73228}
!438 = !{i64 73236}
!439 = !{i64 73244}
!440 = !{i64 73248}
!441 = !{i64 73260}
!442 = !{i64 73264}
!443 = !{i64 73280}
!444 = !{i64 73300}
!445 = !{i64 73308}
!446 = !{i64 73328}
!447 = !{i64 73348}
!448 = !{i64 73356}
!449 = !{i64 73360}
!450 = !{i64 73372}
!451 = !{i64 73380}
!452 = !{i64 73408}
!453 = !{i64 73416}
!454 = !{i64 73440}
!455 = !{i64 73460}
!456 = !{i64 73476}
!457 = !{i64 73480}
!458 = !{i64 73508}
!459 = !{i64 73540}
!460 = !{i64 73544}
!461 = !{i64 73548}
!462 = !{i64 73552}
!463 = !{i64 73556}
!464 = !{i64 73588}
!465 = !{i64 73608}
!466 = !{i64 73616}
!467 = !{i64 73636}
!468 = !{i64 73664}
!469 = !{i64 73724}
!470 = !{i64 73744}
!471 = !{i64 73748}
!472 = !{i64 73756}
!473 = !{i64 73764}
!474 = !{i64 73768}
!475 = !{i64 73780}
!476 = !{i64 73788}
!477 = !{i64 73800}
!478 = !{i64 73816}
!479 = !{i64 73824}
!480 = !{i64 73828}
!481 = !{i64 73836}
!482 = !{i64 73844}
!483 = !{i64 73848}
!484 = !{i64 73860}
!485 = !{i64 73868}
!486 = !{i64 73880}
!487 = !{i64 73896}
!488 = !{i64 73900}
!489 = !{i64 73920}
!490 = !{i64 73924}
!491 = !{i64 73932}
!492 = !{i64 73940}
!493 = !{i64 73944}
!494 = !{i64 73956}
!495 = !{i64 73964}
!496 = !{i64 73976}
!497 = !{i64 73992}
!498 = !{i64 73996}
!499 = !{i64 74020}
!500 = !{i64 74044}
!501 = !{i64 74064}
!502 = !{i64 74068}
!503 = !{i64 74072}
!504 = !{i64 74076}
!505 = !{i64 74084}
!506 = !{i64 74240}
!507 = !{i64 74260}
!508 = !{i64 74268}
!509 = !{i64 74280}
!510 = !{i64 74288}
!511 = !{i64 74292}
!512 = !{i64 74300}
!513 = !{i64 74312}
!514 = !{i64 74336}
!515 = !{i64 74352}
!516 = !{i64 74372}
!517 = !{i64 74404}
!518 = !{i64 74416}
!519 = !{i64 74420}
!520 = !{i64 74426}
!521 = !{i64 74436}
