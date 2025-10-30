source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67496
@global_var_22010 = local_unnamed_addr global i32 67496
@global_var_22014 = local_unnamed_addr global i32 67496
@global_var_22018 = local_unnamed_addr global i32 67496
@global_var_2201c = local_unnamed_addr global i32 67496
@global_var_22020 = local_unnamed_addr global i32 67496
@global_var_22024 = local_unnamed_addr global i32 67496
@global_var_22028 = local_unnamed_addr global i32 67496
@global_var_2202c = local_unnamed_addr global i32 67496
@global_var_22030 = local_unnamed_addr global i32 67496
@global_var_22034 = local_unnamed_addr global i32 67496
@global_var_22038 = local_unnamed_addr global i32 67496
@global_var_2203c = local_unnamed_addr global i32 67496
@global_var_22040 = local_unnamed_addr global i32 67496
@global_var_22044 = local_unnamed_addr global i32 67496
@global_var_22048 = local_unnamed_addr global i32 67496
@global_var_2204c = local_unnamed_addr global i32 67496
@global_var_22050 = local_unnamed_addr global i32 67496
@global_var_22054 = local_unnamed_addr global i32 67496
@global_var_22058 = local_unnamed_addr global i32 67496
@global_var_2205c = local_unnamed_addr global i32 67496
@global_var_22060 = local_unnamed_addr global i32 67496
@global_var_22064 = local_unnamed_addr global i32 67496
@global_var_22068 = local_unnamed_addr global i32 67496
@global_var_2206c = local_unnamed_addr global i32 67496
@global_var_22070 = local_unnamed_addr global i32 67496
@global_var_22074 = local_unnamed_addr global i32 67496
@global_var_22078 = local_unnamed_addr global i32 67496
@global_var_2207c = local_unnamed_addr global i32 67496
@global_var_22080 = local_unnamed_addr global i32 67496
@global_var_22084 = local_unnamed_addr global i32 67496
@global_var_11540 = constant [8 x i8] c"daemonc\00"
@global_var_11548 = constant [8 x i8] c"daemons\00"
@global_var_11510 = constant [10 x i8] c"127.0.0.1\00"
@global_var_1151c = constant [6 x i8] c"22322\00"
@global_var_11574 = constant [29 x i8] c"Will Listening To Port[%d]\0D\0A\00"
@global_var_115b4 = constant [30 x i8] c"waiting for new connection...\00"
@global_var_115e4 = constant [25 x i8] c"A new connection occurs!\00"
@global_var_11600 = constant [23 x i8] c"pthread_create error!\0A\00"
@global_var_11624 = constant [18 x i8] c"Server shuts down\00"
@global_var_115d4 = constant [15 x i8] c"Accept error!\0A\00"
@global_var_11638 = constant [22 x i8] c"Cannot Find Command!\0D\00"
@global_var_11550 = constant [16 x i8] c"update-daemon.c\00"
@global_var_11618 = constant [10 x i8] c"ret != -1\00"
@global_var_10b7c = local_unnamed_addr constant i32 70684
@global_var_1141c = constant [14 x i8] c"ProcessServer\00"
@global_var_11560 = constant [20 x i8] c"sockfd_server != -1\00"
@global_var_115a4 = constant [15 x i8] c"listen error!\0A\00"
@global_var_11594 = constant [13 x i8] c"bind error!\0A\00"
@global_var_10bcc = local_unnamed_addr constant i32 70720
@global_var_11440 = constant [8 x i8] c":'%s'\0D\0A\00"
@global_var_10bd0 = local_unnamed_addr constant i32 136
@global_var_10bc0 = constant i32 -481165312
@global_var_1142c = constant [13 x i8] c"New Thread!\0D\00"
@global_var_1143c = constant [12 x i8] c"Recv:'%s'\0D\0A\00"
@global_var_11464 = constant [24 x i8] c"Invalid client content.\00"
@global_var_1101c = local_unnamed_addr constant [25 x i8] c"/usr/sbin/updateporc.sh \00"
@global_var_11020 = local_unnamed_addr constant [21 x i8] c"/sbin/updateporc.sh \00"
@global_var_11024 = local_unnamed_addr constant [17 x i8] c"n/updateporc.sh \00"
@global_var_11028 = local_unnamed_addr constant [13 x i8] c"dateporc.sh \00"
@global_var_1102c = local_unnamed_addr constant [9 x i8] c"porc.sh \00"
@global_var_11030 = local_unnamed_addr constant [5 x i8] c".sh \00"
@global_var_11500 = local_unnamed_addr constant [14 x i8] c"Come On WUHAN\00"
@global_var_11504 = local_unnamed_addr constant [10 x i8] c" On WUHAN\00"
@global_var_11508 = local_unnamed_addr constant [6 x i8] c"WUHAN\00"
@global_var_1148c = constant [21 x i8] c"system status:[%d]\0D\0A\00"
@global_var_114a4 = constant [26 x i8] c"Shell Exec Successfully!\0D\00"
@global_var_11448 = constant [25 x i8] c"File does not exist: %s\0A\00"
@global_var_114e4 = constant [21 x i8] c"Other Exit Ret[%d]\0D\0A\00"
@global_var_114fc = constant [4 x i8] c"6%d\00"
@global_var_1147c = constant [13 x i8] c"system err!\0D\00"
@global_var_114c0 = constant [32 x i8] c"Shell Execute Failed, Ret[%d]\0D\0A\00"
@global_var_114e0 = constant [3 x i8] c"%d\00"
@global_var_11524 = constant [12 x i8] c"socket err:\00"
@global_var_11530 = constant [13 x i8] c"connect err:\00"
@global_var_11004 = local_unnamed_addr constant i32 69418
@global_var_11008 = local_unnamed_addr constant i32 69408
@global_var_21f08 = global i32 68669
@0 = external global i32
@global_var_22098 = local_unnamed_addr global %_IO_FILE* null
@global_var_10ba8 = local_unnamed_addr constant void ()* inttoptr (i32 67888 to void ()*)
@global_var_10bac = local_unnamed_addr constant void ()* inttoptr (i32 69585 to void ()*)
@global_var_11034 = local_unnamed_addr constant i8 0
@global_var_1150c = local_unnamed_addr constant i16 78

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_1079c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1079c:
  %0 = call i32 @function_10bb0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i8* @function_107bc(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_107bc:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !2
  ret i8* %0, !insn.addr !2
}

define i32 @function_107c8(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107c8:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107d4(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_107d4:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_107e0(i8* %s) local_unnamed_addr {
dec_label_pc_107e0:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_107ec(i32 %fd, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_107ec:
  %0 = call i32 @accept(i32 %fd, %sockaddr* %addr, i32* %addr_len), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_107f8(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107f8:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_10804(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10804:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10810(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_10810:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1081c(i8* %s) local_unnamed_addr {
dec_label_pc_1081c:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10828(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10828:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10834(i8* %command) local_unnamed_addr {
dec_label_pc_10834:
  %0 = call i32 @system(i8* %command), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_10840() local_unnamed_addr {
dec_label_pc_10840:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define i16** @function_1084c() local_unnamed_addr {
dec_label_pc_1084c:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !14
  ret i16** %0, !insn.addr !14
}

define void @function_10858(i32 %status) local_unnamed_addr {
dec_label_pc_10858:
  call void @exit(i32 %status), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_10864(i8* %s) local_unnamed_addr {
dec_label_pc_10864:
  %0 = call i32 @strlen(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_10870(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10870:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_1087c(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1087c:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_10888(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_10888:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_10894(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_10894:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @function_108a0(i32* %retval) local_unnamed_addr {
dec_label_pc_108a0:
  call void @pthread_exit(i32* %retval), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_108ac(i32 %fd, i32 %how) local_unnamed_addr {
dec_label_pc_108ac:
  %0 = call i32 @shutdown(i32 %fd, i32 %how), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_108b8(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_108b8:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_108c4(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108c4:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108d0(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_108d0:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_108dc(i8* %cp) local_unnamed_addr {
dec_label_pc_108dc:
  %0 = call i32 @inet_addr(i8* %cp), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_108e8() local_unnamed_addr {
dec_label_pc_108e8:
  call void @abort(), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_108f4(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_108f4:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10900(i32 %fd) local_unnamed_addr {
dec_label_pc_10900:
  %0 = call i32 @close(i32 %fd), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_1090c(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_1090c:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_10918(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10918:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define void @function_10924(i8* %assertion, i8* %file, i32 %line, i8* %function) local_unnamed_addr {
dec_label_pc_10924:
  call void @__assert_fail(i8* %assertion, i8* %file, i32 %line, i8* %function), !insn.addr !32
  ret void, !insn.addr !32
}

define i32 @function_10930(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10930:
  %r0.0.reg2mem = alloca i32, !insn.addr !33
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-56 = alloca i16, align 2
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !34
  %1 = call i8* @strstr(i8* %0, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11540, i32 0, i32 0)), !insn.addr !34
  %2 = icmp eq i8* %1, null, !insn.addr !35
  br i1 %2, label %dec_label_pc_10958, label %dec_label_pc_10ab8, !insn.addr !36

dec_label_pc_10958:                               ; preds = %dec_label_pc_10930
  %3 = call i8* @strstr(i8* %0, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11548, i32 0, i32 0)), !insn.addr !37
  %4 = icmp eq i8* %3, null, !insn.addr !38
  br i1 %4, label %dec_label_pc_10ae0, label %dec_label_pc_10970, !insn.addr !39

dec_label_pc_10970:                               ; preds = %dec_label_pc_10958
  %5 = ptrtoint i8* %1 to i32, !insn.addr !34
  %6 = call i32 @socket(i32 2, i32 1, i32 %5), !insn.addr !40
  %7 = icmp eq i32 %6, -1, !insn.addr !41
  br i1 %7, label %dec_label_pc_10b10, label %dec_label_pc_1098c, !insn.addr !42

dec_label_pc_1098c:                               ; preds = %dec_label_pc_10970
  store i16 2, i16* %stack_var_-56, align 2, !insn.addr !43
  %8 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11510, i32 0, i32 0)), !insn.addr !44
  %9 = call i32 @function_10c40(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1151c, i32 0, i32 0)), !insn.addr !45
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11574, i32 0, i32 0), i32 %9), !insn.addr !46
  %11 = bitcast i16* %stack_var_-56 to %sockaddr*, !insn.addr !47
  %12 = call i32 @bind(i32 %6, %sockaddr* nonnull %11, i32 16), !insn.addr !47
  %13 = icmp eq i32 %12, -1, !insn.addr !48
  br i1 %13, label %dec_label_pc_10b54, label %dec_label_pc_109f0, !insn.addr !49

dec_label_pc_109f0:                               ; preds = %dec_label_pc_1098c
  %14 = call i32 @listen(i32 %6, i32 512), !insn.addr !50
  %15 = icmp eq i32 %14, -1, !insn.addr !51
  br i1 %15, label %dec_label_pc_10b2c, label %dec_label_pc_10a24.preheader, !insn.addr !52

dec_label_pc_10a24.preheader:                     ; preds = %dec_label_pc_109f0
  %16 = bitcast i32* %stack_var_-40 to %sockaddr*
  br label %dec_label_pc_10a24

dec_label_pc_10a24:                               ; preds = %dec_label_pc_10a24.backedge, %dec_label_pc_10a24.preheader
  %17 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115b4, i32 0, i32 0)), !insn.addr !53
  store i32 16, i32* %stack_var_-64, align 4, !insn.addr !54
  %18 = call i32 @accept(i32 %6, %sockaddr* nonnull %16, i32* nonnull %stack_var_-64), !insn.addr !55
  %19 = icmp eq i32 %18, -1, !insn.addr !56
  store i32 %18, i32* %stack_var_-68, align 4, !insn.addr !57
  br i1 %19, label %dec_label_pc_10ac4, label %dec_label_pc_10a50, !insn.addr !58

dec_label_pc_10a50:                               ; preds = %dec_label_pc_10a24
  %20 = call i32 @puts(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_115e4, i32 0, i32 0)), !insn.addr !59
  %21 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* inttoptr (i32 68748 to i32* (i32*)*), i32* nonnull %stack_var_-68), !insn.addr !60
  %22 = icmp eq i32 %21, -1, !insn.addr !61
  br i1 %22, label %dec_label_pc_10a74, label %dec_label_pc_10a24.backedge, !insn.addr !62

dec_label_pc_10a74:                               ; preds = %dec_label_pc_10a50
  %23 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !63
  %24 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_11600 to i32*), i32 1, i32 22, %_IO_FILE* %23), !insn.addr !64
  %25 = call i32 @shutdown(i32 %6, i32 1), !insn.addr !65
  %26 = icmp eq i32 %25, -1, !insn.addr !66
  br i1 %26, label %dec_label_pc_10af4, label %dec_label_pc_10aa0, !insn.addr !67

dec_label_pc_10aa0:                               ; preds = %dec_label_pc_10a74
  %27 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11624, i32 0, i32 0)), !insn.addr !68
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_10ab0, !insn.addr !69

dec_label_pc_10ab0:                               ; preds = %dec_label_pc_10ae0, %dec_label_pc_10ab8, %dec_label_pc_10aa0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !70

dec_label_pc_10ab8:                               ; preds = %dec_label_pc_10930
  %28 = add i32 %arg2, 4, !insn.addr !71
  %29 = inttoptr i32 %28 to i32*, !insn.addr !71
  %30 = load i32, i32* %29, align 4, !insn.addr !71
  %31 = call i32 @function_10eb8(i32 %30), !insn.addr !72
  store i32 %31, i32* %r0.0.reg2mem, !insn.addr !73
  br label %dec_label_pc_10ab0, !insn.addr !73

dec_label_pc_10ac4:                               ; preds = %dec_label_pc_10a24
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !74
  %33 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115d4 to i32*), i32 1, i32 14, %_IO_FILE* %32), !insn.addr !75
  br label %dec_label_pc_10a24.backedge, !insn.addr !76

dec_label_pc_10a24.backedge:                      ; preds = %dec_label_pc_10ac4, %dec_label_pc_10a50
  br label %dec_label_pc_10a24

dec_label_pc_10ae0:                               ; preds = %dec_label_pc_10958
  %34 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11638, i32 0, i32 0)), !insn.addr !77
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !78
  br label %dec_label_pc_10ab0, !insn.addr !78

dec_label_pc_10af4:                               ; preds = %dec_label_pc_10a74
  call void @__assert_fail(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11618, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11550, i32 0, i32 0), i32 204, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1141c, i32 0, i32 0)), !insn.addr !79
  br label %dec_label_pc_10b10, !insn.addr !79

dec_label_pc_10b10:                               ; preds = %dec_label_pc_10af4, %dec_label_pc_10970
  call void @__assert_fail(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11560, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11550, i32 0, i32 0), i32 162, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1141c, i32 0, i32 0)), !insn.addr !80
  br label %dec_label_pc_10b2c, !insn.addr !80

dec_label_pc_10b2c:                               ; preds = %dec_label_pc_10b10, %dec_label_pc_109f0
  %35 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !81
  %36 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_115a4 to i32*), i32 1, i32 14, %_IO_FILE* %35), !insn.addr !82
  call void @exit(i32 1), !insn.addr !83
  unreachable, !insn.addr !83

dec_label_pc_10b54:                               ; preds = %dec_label_pc_1098c
  %37 = load %_IO_FILE*, %_IO_FILE** @global_var_22098, align 4, !insn.addr !84
  %38 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_11594 to i32*), i32 1, i32 12, %_IO_FILE* %37), !insn.addr !85
  call void @exit(i32 1), !insn.addr !86
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !86

; uselistorder directives
  uselistorder i32 %18, { 1, 0 }
  uselistorder i8* %1, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder void (i32)* @exit, { 1, 0, 2 }
  uselistorder void (i8*, i8*, i32, i8*)* @__assert_fail, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 3, 2, 1, 0, 4 }
  uselistorder %_IO_FILE** @global_var_22098, { 3, 2, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strstr, { 1, 0, 2 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b80:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !87
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !87
  %2 = call i32 @__libc_start_main(i32 67888, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69585 to void ()*), void ()* inttoptr (i32 67888 to void ()*), void ()* %1), !insn.addr !87
  call void @abort(), !insn.addr !88
  unreachable, !insn.addr !88
}

define i32 @function_10ba4(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10ba4:
  ret i32 %arg1, !insn.addr !89
}

define i32 @function_10bb0() local_unnamed_addr {
dec_label_pc_10bb0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10bc0 to i32), i32 ptrtoint ([8 x i8]* @global_var_11440 to i32)), i32 136) to i32*), align 4, !insn.addr !90
  %3 = icmp eq i32 %2, 0, !insn.addr !91
  br i1 %3, label %4, label %dec_label_pc_10bc8, !insn.addr !92

; <label>:4:                                      ; preds = %dec_label_pc_10bb0
  ret i32 %1, !insn.addr !92

dec_label_pc_10bc8:                               ; preds = %dec_label_pc_10bb0
  call void @__gmon_start__(), !insn.addr !93
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !93
}

define i32 @function_10bd4(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_10bd4:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !94
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10bf0, !insn.addr !94

; <label>:9:                                      ; preds = %dec_label_pc_10bd4
  ret i32 %arg1, !insn.addr !94

dec_label_pc_10bf0:                               ; preds = %dec_label_pc_10bd4
  %10 = icmp eq i1 %5, %3, !insn.addr !95
  br i1 %10, label %dec_label_pc_10c04, label %11, !insn.addr !95

; <label>:11:                                     ; preds = %dec_label_pc_10bf0
  call void @__asm_svclt(i32 18288), !insn.addr !95
  br label %dec_label_pc_10c04, !insn.addr !95

dec_label_pc_10c04:                               ; preds = %11, %dec_label_pc_10bf0
  br i1 %3, label %dec_label_pc_10c1c, label %12, !insn.addr !96

; <label>:12:                                     ; preds = %dec_label_pc_10c04
  %13 = mul i32 %6, 1048577, !insn.addr !97
  %14 = mul i32 %6, 4194304, !insn.addr !96
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !96
  %18 = icmp slt i32 %17, 0, !insn.addr !96
  %19 = icmp eq i32 %17, 0, !insn.addr !96
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !98
  br i1 %19, label %20, label %dec_label_pc_10c1c, !insn.addr !98

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !98
  ret i32 %21, !insn.addr !98

dec_label_pc_10c1c:                               ; preds = %dec_label_pc_10c04, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !99
  br i1 %22, label %24, label %23, !insn.addr !99

; <label>:23:                                     ; preds = %dec_label_pc_10c1c
  call void @__asm_svclt(i32 18288), !insn.addr !99
  br label %24, !insn.addr !99

; <label>:24:                                     ; preds = %dec_label_pc_10c1c, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !100
  ret i32 %arg1, !insn.addr !100

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_10c1c, { 1, 0 }
}

define i32 @function_10c28(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10c28:
  %r0.0.reg2mem = alloca i32, !insn.addr !101
  %0 = mul i32 %arg4, 262144, !insn.addr !101
  %1 = or i32 %0, 131072, !insn.addr !102
  %2 = inttoptr i32 %1 to i8*, !insn.addr !103
  %3 = load i8, i8* %2, align 131072, !insn.addr !103
  %4 = icmp eq i8 %3, 0, !insn.addr !104
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !104
  br i1 %4, label %dec_label_pc_10c32, label %dec_label_pc_10c3a, !insn.addr !104

dec_label_pc_10c32:                               ; preds = %dec_label_pc_10c28
  %5 = call i32 @function_10bd4(i32 %arg1, i32 %arg2, i32 %arg3, i8 0), !insn.addr !105
  store i8 1, i8* %2, align 131072, !insn.addr !106
  store i32 %5, i32* %r0.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_10c3a, !insn.addr !106

dec_label_pc_10c3a:                               ; preds = %dec_label_pc_10c28, %dec_label_pc_10c32
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !107

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c3a, { 1, 0 }
}

define i32 @function_10c3c() local_unnamed_addr {
dec_label_pc_10c3c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !108
}

define i32 @function_10c40(i8* %arg1) local_unnamed_addr {
dec_label_pc_10c40:
  %.lcssa.reg2mem = alloca i32, !insn.addr !109
  %r2.01.reg2mem = alloca i32, !insn.addr !109
  %.reg2mem = alloca i32, !insn.addr !109
  %0 = ptrtoint i8* %arg1 to i32
  %1 = call i32 @strlen(i8* %arg1), !insn.addr !110
  %2 = add i32 %0, -2, !insn.addr !111
  %3 = add i32 %2, %1, !insn.addr !112
  %4 = add i32 %0, -1
  %5 = icmp eq i32 %4, %3, !insn.addr !113
  store i32 -48, i32* %.reg2mem, !insn.addr !114
  store i32 %4, i32* %r2.01.reg2mem, !insn.addr !114
  store i32 -48, i32* %.lcssa.reg2mem, !insn.addr !114
  br i1 %5, label %dec_label_pc_10c80, label %dec_label_pc_10c64, !insn.addr !114

dec_label_pc_10c64:                               ; preds = %dec_label_pc_10c40, %dec_label_pc_10c64
  %r2.01.reload = load i32, i32* %r2.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = add i32 %r2.01.reload, 1, !insn.addr !115
  %7 = inttoptr i32 %6 to i8*, !insn.addr !115
  %8 = load i8, i8* %7, align 1, !insn.addr !115
  %9 = zext i8 %8 to i32, !insn.addr !115
  %10 = add i32 %.reload, %9, !insn.addr !116
  %11 = mul i32 %10, 10, !insn.addr !117
  %12 = icmp eq i32 %6, %3, !insn.addr !113
  %13 = add i32 %11, -48, !insn.addr !118
  store i32 %13, i32* %.reg2mem, !insn.addr !114
  store i32 %6, i32* %r2.01.reg2mem, !insn.addr !114
  store i32 %13, i32* %.lcssa.reg2mem, !insn.addr !114
  br i1 %12, label %dec_label_pc_10c80, label %dec_label_pc_10c64, !insn.addr !114

dec_label_pc_10c80:                               ; preds = %dec_label_pc_10c64, %dec_label_pc_10c40
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = add i32 %1, %4, !insn.addr !119
  %15 = inttoptr i32 %14 to i8*, !insn.addr !119
  %16 = load i8, i8* %15, align 1, !insn.addr !119
  %17 = zext i8 %16 to i32, !insn.addr !119
  %18 = add i32 %.lcssa.reload, %17, !insn.addr !120
  ret i32 %18, !insn.addr !121

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 2 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 -48, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10c64, { 1, 0 }
}

define i32 @function_10c8c(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c8c:
  %r5.3.reg2mem = alloca i32, !insn.addr !122
  %r4.3.reg2mem = alloca i32, !insn.addr !122
  %r5.2.reg2mem = alloca i32, !insn.addr !122
  %r4.2.reg2mem = alloca i32, !insn.addr !122
  %r5.1.reg2mem = alloca i32, !insn.addr !122
  %r4.1.reg2mem = alloca i32, !insn.addr !122
  %r5.0.reg2mem = alloca i32, !insn.addr !122
  %r4.0.reg2mem = alloca i32, !insn.addr !122
  %r2.0.reg2mem = alloca i32, !insn.addr !122
  %stack_var_-1015 = alloca i32, align 4
  %stack_var_-1016 = alloca i8, align 1
  %stack_var_-1040 = alloca i8*, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-2060 = alloca i32, align 4
  %stack_var_-2080 = alloca i32, align 4
  %0 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1142c, i32 0, i32 0)), !insn.addr !123
  store i32 0, i32* %stack_var_-2064, align 4, !insn.addr !124
  %1 = call i32* @memset(i32* nonnull %stack_var_-2060, i32 0, i32 1020), !insn.addr !125
  %2 = ptrtoint i32* %1 to i32, !insn.addr !125
  %3 = call i32 @read(i32 %2, i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !126
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_1143c, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !127
  %5 = bitcast i32* %stack_var_-2064 to i8*, !insn.addr !128
  %6 = call i32 @access(i8* nonnull %5, i32 0), !insn.addr !128
  %7 = icmp eq i32 %6, 0, !insn.addr !129
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !130
  store i32 %arg1, i32* %r5.2.reg2mem, !insn.addr !130
  br i1 %7, label %dec_label_pc_10cf4, label %dec_label_pc_10e2c, !insn.addr !130

dec_label_pc_10cf4:                               ; preds = %dec_label_pc_10c8c
  %8 = load i32, i32* %stack_var_-2064, align 4, !insn.addr !131
  %9 = urem i32 %8, 256, !insn.addr !131
  %10 = icmp eq i32 %9, 0, !insn.addr !132
  store i32 %arg1, i32* %r5.0.reg2mem, !insn.addr !133
  br i1 %10, label %dec_label_pc_10d58, label %dec_label_pc_10d00, !insn.addr !133

dec_label_pc_10d00:                               ; preds = %dec_label_pc_10cf4
  %11 = call i16** @__ctype_b_loc(), !insn.addr !134
  %12 = load i16*, i16** %11, align 4, !insn.addr !135
  %13 = ptrtoint i16* %12 to i32, !insn.addr !135
  %14 = ptrtoint i32* %stack_var_-2064 to i32, !insn.addr !136
  store i32 %14, i32* %r2.0.reg2mem, !insn.addr !136
  store i32 %9, i32* %r4.0.reg2mem, !insn.addr !136
  br label %dec_label_pc_10d0c, !insn.addr !136

dec_label_pc_10d0c:                               ; preds = %dec_label_pc_10d4c, %dec_label_pc_10d00
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %15 = mul i32 %r4.0.reload, 2, !insn.addr !137
  %16 = add i32 %15, %13, !insn.addr !138
  %17 = inttoptr i32 %16 to i16*, !insn.addr !138
  %18 = load i16, i16* %17, align 2, !insn.addr !138
  %19 = and i16 %18, 8
  %20 = zext i16 %19 to i32, !insn.addr !139
  %21 = icmp ne i16 %19, 0, !insn.addr !139
  %22 = icmp eq i32 %r4.0.reload, 95, !insn.addr !140
  %or.cond = or i1 %22, %21
  br i1 %or.cond, label %dec_label_pc_10d4c, label %dec_label_pc_10d24, !insn.addr !141

dec_label_pc_10d24:                               ; preds = %dec_label_pc_10d0c
  %23 = add nsw i32 %r4.0.reload, -45, !insn.addr !142
  %24 = icmp ult i32 %23, 2, !insn.addr !143
  %25 = icmp ne i1 %24, true, !insn.addr !143
  %26 = icmp eq i32 %23, 2, !insn.addr !143
  %27 = icmp ne i1 %25, true, !insn.addr !144
  %28 = or i1 %26, %27, !insn.addr !144
  br i1 %28, label %dec_label_pc_10d4c, label %dec_label_pc_10d30, !insn.addr !144

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10d24
  %29 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11464, i32 0, i32 0)), !insn.addr !145
  %30 = call i32 @close(i32 %2), !insn.addr !146
  %31 = inttoptr i32 %20 to i32*, !insn.addr !147
  call void @pthread_exit(i32* %31), !insn.addr !147
  br label %dec_label_pc_10d4c, !insn.addr !147

dec_label_pc_10d4c:                               ; preds = %dec_label_pc_10d0c, %dec_label_pc_10d30, %dec_label_pc_10d24
  %32 = add i32 %r2.0.reload, 1, !insn.addr !148
  %33 = inttoptr i32 %32 to i8*, !insn.addr !148
  %34 = load i8, i8* %33, align 1, !insn.addr !148
  %35 = zext i8 %34 to i32, !insn.addr !148
  %36 = icmp eq i8 %34, 0, !insn.addr !149
  store i32 %32, i32* %r2.0.reg2mem, !insn.addr !150
  store i32 %35, i32* %r4.0.reg2mem, !insn.addr !150
  store i32 %20, i32* %r5.0.reg2mem, !insn.addr !150
  br i1 %36, label %dec_label_pc_10d58, label %dec_label_pc_10d0c, !insn.addr !150

dec_label_pc_10d58:                               ; preds = %dec_label_pc_10d4c, %dec_label_pc_10cf4
  store i8* inttoptr (i32 1920169263 to i8*), i8** %stack_var_-1040, align 4, !insn.addr !151
  store i8 0, i8* %stack_var_-1016, align 1, !insn.addr !152
  %37 = call i32* @memset(i32* nonnull %stack_var_-1015, i32 0, i32 999), !insn.addr !153
  %38 = call i8* @strcpy(i8* nonnull %stack_var_-1016, i8* nonnull %5), !insn.addr !154
  store i32 1701670723, i32* %stack_var_-2080, align 4, !insn.addr !155
  %39 = bitcast i8** %stack_var_-1040 to i8*, !insn.addr !156
  %40 = call i32 @system(i8* nonnull %39), !insn.addr !156
  %41 = icmp eq i32 %40, -1, !insn.addr !157
  br i1 %41, label %dec_label_pc_10e74, label %dec_label_pc_10dc8, !insn.addr !158

dec_label_pc_10dc8:                               ; preds = %dec_label_pc_10d58
  %42 = call i32 @__asm_ubfx(i32 %40, i32 8, i32 8), !insn.addr !159
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_1148c, i32 0, i32 0)), !insn.addr !160
  %44 = urem i32 %40, 128, !insn.addr !161
  %45 = icmp eq i32 %44, 0, !insn.addr !161
  store i32 %40, i32* %r4.3.reg2mem, !insn.addr !162
  store i32 %42, i32* %r5.3.reg2mem, !insn.addr !162
  br i1 %45, label %dec_label_pc_10de4, label %dec_label_pc_10e4c, !insn.addr !162

dec_label_pc_10de4:                               ; preds = %dec_label_pc_10dc8
  %46 = icmp eq i32 %42, 0, !insn.addr !163
  br i1 %46, label %dec_label_pc_10dec, label %dec_label_pc_10e90, !insn.addr !164

dec_label_pc_10dec:                               ; preds = %dec_label_pc_10de4
  %47 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_114a4, i32 0, i32 0)), !insn.addr !165
  store i32 3158066, i32* %stack_var_-2080, align 4, !insn.addr !166
  store i32 %40, i32* %r4.1.reg2mem, !insn.addr !166
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !166
  br label %dec_label_pc_10e04, !insn.addr !166

dec_label_pc_10e04:                               ; preds = %dec_label_pc_10e90, %dec_label_pc_10e74, %dec_label_pc_10e4c, %dec_label_pc_10dec
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %48 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !167
  %49 = call i32 @strlen(i8* nonnull %48), !insn.addr !167
  %50 = add i32 %49, 1, !insn.addr !168
  %51 = call i32 @write(i32 %2, i32* nonnull %stack_var_-2080, i32 %50), !insn.addr !169
  %52 = call i32 @close(i32 %2), !insn.addr !170
  call void @pthread_exit(i32* null), !insn.addr !171
  store i32 %r4.1.reload, i32* %r4.2.reg2mem, !insn.addr !171
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !171
  br label %dec_label_pc_10e2c, !insn.addr !171

dec_label_pc_10e2c:                               ; preds = %dec_label_pc_10c8c, %dec_label_pc_10e04
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_11448, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !172
  %54 = call i32 @close(i32 %2), !insn.addr !173
  %55 = inttoptr i32 %r4.2.reload to i32*, !insn.addr !174
  call void @pthread_exit(i32* %55), !insn.addr !174
  store i32 %r4.2.reload, i32* %r4.3.reg2mem, !insn.addr !174
  store i32 %r5.2.reload, i32* %r5.3.reg2mem, !insn.addr !174
  br label %dec_label_pc_10e4c, !insn.addr !174

dec_label_pc_10e4c:                               ; preds = %dec_label_pc_10dc8, %dec_label_pc_10e2c
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r4.3.reload = load i32, i32* %r4.3.reg2mem
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_114e4, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !175
  %57 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !176
  %58 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %57, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_114fc, i32 0, i32 0), i32 %r5.3.reload), !insn.addr !176
  store i32 %r4.3.reload, i32* %r4.1.reg2mem, !insn.addr !177
  store i32 %r5.3.reload, i32* %r5.1.reg2mem, !insn.addr !177
  br label %dec_label_pc_10e04, !insn.addr !177

dec_label_pc_10e74:                               ; preds = %dec_label_pc_10d58
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %59 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1147c, i32 0, i32 0)), !insn.addr !178
  store i32 3158069, i32* %stack_var_-2080, align 4, !insn.addr !179
  store i32 -1, i32* %r4.1.reg2mem, !insn.addr !180
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !180
  br label %dec_label_pc_10e04, !insn.addr !180

dec_label_pc_10e90:                               ; preds = %dec_label_pc_10de4
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_114c0, i32 0, i32 0), i32 %42), !insn.addr !181
  %61 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !182
  %62 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_114e0, i32 0, i32 0), i32 %42), !insn.addr !182
  store i32 %40, i32* %r4.1.reg2mem, !insn.addr !183
  store i32 %42, i32* %r5.1.reg2mem, !insn.addr !183
  br label %dec_label_pc_10e04, !insn.addr !183

; uselistorder directives
  uselistorder i32 %r5.3.reload, { 2, 0, 1 }
  uselistorder i32 %42, { 1, 3, 4, 2, 0 }
  uselistorder i32 %40, { 1, 2, 0, 3, 4, 5 }
  uselistorder i32 %2, { 1, 3, 2, 0, 4 }
  uselistorder i32* %stack_var_-2080, { 0, 4, 1, 2, 3, 5, 6 }
  uselistorder i32* %stack_var_-2064, { 0, 4, 5, 2, 1, 3, 6 }
  uselistorder i8** %stack_var_-1040, { 1, 0 }
  uselistorder i8* %stack_var_-1016, { 1, 0 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 1, 4, 3, 0, 2 }
  uselistorder i32* %r4.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.3.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 1, 0, 2 }
  uselistorder void (i32*)* @pthread_exit, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @close, { 2, 1, 0, 3 }
  uselistorder i32 (i8*, ...)* @printf, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @puts, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10e4c, { 1, 0 }
  uselistorder label %dec_label_pc_10e2c, { 1, 0 }
  uselistorder label %dec_label_pc_10d4c, { 1, 2, 0 }
}

define i32 @function_10eb8(i32 %arg1) local_unnamed_addr {
dec_label_pc_10eb8:
  %r0.0.reg2mem = alloca i32, !insn.addr !184
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1036 = alloca i32, align 4
  %stack_var_-1056 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = icmp eq i32 %arg1, 0, !insn.addr !185
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !186
  br i1 %0, label %dec_label_pc_10f98, label %dec_label_pc_10ec8, !insn.addr !186

dec_label_pc_10ec8:                               ; preds = %dec_label_pc_10eb8
  store i32 2, i32* %stack_var_-1056, align 4, !insn.addr !187
  %1 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11510, i32 0, i32 0)), !insn.addr !188
  %2 = call i32 @function_10c40(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1151c, i32 0, i32 0)), !insn.addr !189
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !190
  %4 = icmp slt i32 %3, 0, !insn.addr !191
  br i1 %4, label %dec_label_pc_10fa8, label %dec_label_pc_10f1c, !insn.addr !192

dec_label_pc_10f1c:                               ; preds = %dec_label_pc_10ec8
  %5 = bitcast i32* %stack_var_-1056 to %sockaddr*, !insn.addr !193
  %6 = call i32 @connect(i32 %3, %sockaddr* nonnull %5, i32 16), !insn.addr !193
  %7 = icmp slt i32 %6, 0, !insn.addr !194
  br i1 %7, label %dec_label_pc_10fbc, label %dec_label_pc_10f30, !insn.addr !195

dec_label_pc_10f30:                               ; preds = %dec_label_pc_10f1c
  %8 = inttoptr i32 %arg1 to i8*, !insn.addr !196
  %9 = call i32 @strlen(i8* %8), !insn.addr !196
  %10 = add i32 %9, 1, !insn.addr !197
  %11 = inttoptr i32 %arg1 to i32*, !insn.addr !198
  %12 = call i32 @send(i32 %3, i32* %11, i32 %10, i32 0), !insn.addr !198
  store i32 0, i32* %stack_var_-1040, align 4, !insn.addr !199
  %13 = call i32* @memset(i32* nonnull %stack_var_-1036, i32 0, i32 1020), !insn.addr !200
  %14 = call i32 @recv(i32 %3, i32* nonnull %stack_var_-1040, i32 1024, i32 0), !insn.addr !201
  %15 = icmp slt i32 %14, 1, !insn.addr !202
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !202
  br i1 %15, label %dec_label_pc_10f98, label %dec_label_pc_10f7c, !insn.addr !202

dec_label_pc_10f7c:                               ; preds = %dec_label_pc_10f30
  %16 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !203
  %17 = add i32 %16, -1024, !insn.addr !204
  %18 = add i32 %17, %14, !insn.addr !205
  %19 = inttoptr i32 %18 to i8*, !insn.addr !205
  store i8 0, i8* %19, align 1, !insn.addr !205
  %20 = bitcast i32* %stack_var_-1040 to i8*, !insn.addr !206
  %21 = call i32 @function_10c40(i8* nonnull %20), !insn.addr !206
  %22 = icmp eq i32 %21, 200, !insn.addr !207
  %spec.store.select = select i1 %22, i32 0, i32 %21
  store i32 %spec.store.select, i32* %r0.0.reg2mem
  br label %dec_label_pc_10f98

dec_label_pc_10f98:                               ; preds = %dec_label_pc_10eb8, %dec_label_pc_10f30, %dec_label_pc_10f7c, %dec_label_pc_10fbc, %dec_label_pc_10fa8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !208

dec_label_pc_10fa8:                               ; preds = %dec_label_pc_10ec8
  call void @perror(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11524, i32 0, i32 0)), !insn.addr !209
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_10f98, !insn.addr !210

dec_label_pc_10fbc:                               ; preds = %dec_label_pc_10f1c
  call void @perror(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11530, i32 0, i32 0)), !insn.addr !211
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !212
  br label %dec_label_pc_10f98, !insn.addr !212

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2, 3 }
  uselistorder i32* %r0.0.reg2mem, { 4, 5, 0, 3, 2, 1 }
  uselistorder i32 -1, { 0, 1, 3, 4, 2, 5, 6, 7, 8, 9, 10 }
  uselistorder void (i8*)* @perror, { 1, 0, 2 }
  uselistorder i8 0, { 1, 3, 2, 0, 4, 5 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 0, 2 }
  uselistorder i32 (i8*)* @function_10c40, { 2, 1, 0 }
  uselistorder i32 (i8*)* @inet_addr, { 1, 0, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10f98, { 3, 4, 2, 1, 0 }
}

define i32 @function_10fd0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10fd0:
  %0 = call i32 @function_1079c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !213
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139018, i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !214

; uselistorder directives
  uselistorder i32 0, { 13, 16, 17, 14, 15, 12, 8, 10, 11, 9, 73, 74, 62, 75, 20, 21, 22, 23, 18, 19, 24, 25, 26, 27, 28, 29, 1, 30, 31, 68, 69, 32, 33, 63, 34, 35, 70, 0, 67, 64, 36, 37, 65, 66, 38, 39, 71, 72, 3, 76, 42, 43, 44, 45, 46, 47, 48, 49, 40, 41, 2, 50, 51, 4, 5, 6, 7, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61 }
  uselistorder i32 2, { 1, 3, 2, 5, 6, 0, 4 }
}

define i32 @function_1100c() local_unnamed_addr {
dec_label_pc_1100c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !215

; uselistorder directives
  uselistorder i32 1, { 3, 23, 51, 26, 38, 37, 36, 35, 6, 49, 50, 42, 41, 40, 25, 24, 39, 15, 14, 13, 12, 11, 10, 9, 8, 7, 52, 18, 17, 16, 2, 19, 22, 20, 5, 4, 1, 0, 43, 27, 28, 29, 30, 31, 32, 33, 34, 48, 47, 46, 45, 44, 21 }
}

define i32 @function_11010(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11010:
  ret i32 %arg1, !insn.addr !216
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @accept(i32, %sockaddr*, i32*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare i32 @access(i8*, i32) local_unnamed_addr

declare void @pthread_exit(i32*) local_unnamed_addr

declare i32 @shutdown(i32, i32) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @inet_addr(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare void @__assert_fail(i8*, i8*, i32, i8*) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 67488}
!1 = !{i64 67492}
!2 = !{i64 67524}
!3 = !{i64 67536}
!4 = !{i64 67548}
!5 = !{i64 67560}
!6 = !{i64 67572}
!7 = !{i64 67584}
!8 = !{i64 67596}
!9 = !{i64 67608}
!10 = !{i64 67620}
!11 = !{i64 67632}
!12 = !{i64 67644}
!13 = !{i64 67656}
!14 = !{i64 67668}
!15 = !{i64 67680}
!16 = !{i64 67692}
!17 = !{i64 67704}
!18 = !{i64 67716}
!19 = !{i64 67728}
!20 = !{i64 67740}
!21 = !{i64 67752}
!22 = !{i64 67764}
!23 = !{i64 67776}
!24 = !{i64 67788}
!25 = !{i64 67800}
!26 = !{i64 67812}
!27 = !{i64 67824}
!28 = !{i64 67836}
!29 = !{i64 67848}
!30 = !{i64 67860}
!31 = !{i64 67872}
!32 = !{i64 67884}
!33 = !{i64 67888}
!34 = !{i64 67916}
!35 = !{i64 67920}
!36 = !{i64 67924}
!37 = !{i64 67940}
!38 = !{i64 67944}
!39 = !{i64 67948}
!40 = !{i64 67964}
!41 = !{i64 67968}
!42 = !{i64 67976}
!43 = !{i64 67992}
!44 = !{i64 68012}
!45 = !{i64 68028}
!46 = !{i64 68048}
!47 = !{i64 68068}
!48 = !{i64 68072}
!49 = !{i64 68076}
!50 = !{i64 68088}
!51 = !{i64 68092}
!52 = !{i64 68096}
!53 = !{i64 68136}
!54 = !{i64 68156}
!55 = !{i64 68160}
!56 = !{i64 68164}
!57 = !{i64 68168}
!58 = !{i64 68172}
!59 = !{i64 68180}
!60 = !{i64 68200}
!61 = !{i64 68204}
!62 = !{i64 68208}
!63 = !{i64 68216}
!64 = !{i64 68232}
!65 = !{i64 68244}
!66 = !{i64 68248}
!67 = !{i64 68252}
!68 = !{i64 68264}
!69 = !{i64 68268}
!70 = !{i64 68276}
!71 = !{i64 68280}
!72 = !{i64 68284}
!73 = !{i64 68288}
!74 = !{i64 68296}
!75 = !{i64 68312}
!76 = !{i64 68316}
!77 = !{i64 68328}
!78 = !{i64 68336}
!79 = !{i64 68364}
!80 = !{i64 68392}
!81 = !{i64 68412}
!82 = !{i64 68424}
!83 = !{i64 68432}
!84 = !{i64 68452}
!85 = !{i64 68464}
!86 = !{i64 68472}
!87 = !{i64 68508}
!88 = !{i64 68512}
!89 = !{i64 68518}
!90 = !{i64 68540}
!91 = !{i64 68544}
!92 = !{i64 68548}
!93 = !{i64 68552}
!94 = !{i64 68564}
!95 = !{i64 68596}
!96 = !{i64 68620}
!97 = !{i64 68616}
!98 = !{i64 68628}
!99 = !{i64 68640}
!100 = !{i64 68644}
!101 = !{i64 68648}
!102 = !{i64 68650}
!103 = !{i64 68654}
!104 = !{i64 68656}
!105 = !{i64 68658}
!106 = !{i64 68664}
!107 = !{i64 68666}
!108 = !{i64 68668}
!109 = !{i64 68672}
!110 = !{i64 68680}
!111 = !{i64 68684}
!112 = !{i64 68692}
!113 = !{i64 68724}
!114 = !{i64 68732}
!115 = !{i64 68708}
!116 = !{i64 68712}
!117 = !{i64 68720}
!118 = !{i64 68728}
!119 = !{i64 68736}
!120 = !{i64 68740}
!121 = !{i64 68744}
!122 = !{i64 68748}
!123 = !{i64 68772}
!124 = !{i64 68788}
!125 = !{i64 68792}
!126 = !{i64 68812}
!127 = !{i64 68828}
!128 = !{i64 68840}
!129 = !{i64 68844}
!130 = !{i64 68848}
!131 = !{i64 68852}
!132 = !{i64 68856}
!133 = !{i64 68860}
!134 = !{i64 68864}
!135 = !{i64 68868}
!136 = !{i64 68872}
!137 = !{i64 68876}
!138 = !{i64 68880}
!139 = !{i64 68884}
!140 = !{i64 68892}
!141 = !{i64 68888}
!142 = !{i64 68900}
!143 = !{i64 68904}
!144 = !{i64 68908}
!145 = !{i64 68920}
!146 = !{i64 68928}
!147 = !{i64 68936}
!148 = !{i64 68940}
!149 = !{i64 68944}
!150 = !{i64 68948}
!151 = !{i64 68968}
!152 = !{i64 68984}
!153 = !{i64 69000}
!154 = !{i64 69016}
!155 = !{i64 69036}
!156 = !{i64 69048}
!157 = !{i64 69052}
!158 = !{i64 69060}
!159 = !{i64 69076}
!160 = !{i64 69080}
!161 = !{i64 69084}
!162 = !{i64 69088}
!163 = !{i64 69092}
!164 = !{i64 69096}
!165 = !{i64 69108}
!166 = !{i64 69120}
!167 = !{i64 69128}
!168 = !{i64 69136}
!169 = !{i64 69144}
!170 = !{i64 69152}
!171 = !{i64 69160}
!172 = !{i64 69176}
!173 = !{i64 69184}
!174 = !{i64 69192}
!175 = !{i64 69208}
!176 = !{i64 69228}
!177 = !{i64 69232}
!178 = !{i64 69244}
!179 = !{i64 69256}
!180 = !{i64 69260}
!181 = !{i64 69276}
!182 = !{i64 69296}
!183 = !{i64 69300}
!184 = !{i64 69304}
!185 = !{i64 69308}
!186 = !{i64 69316}
!187 = !{i64 69336}
!188 = !{i64 69356}
!189 = !{i64 69372}
!190 = !{i64 69392}
!191 = !{i64 69396}
!192 = !{i64 69400}
!193 = !{i64 69412}
!194 = !{i64 69416}
!195 = !{i64 69420}
!196 = !{i64 69428}
!197 = !{i64 69436}
!198 = !{i64 69448}
!199 = !{i64 69464}
!200 = !{i64 69468}
!201 = !{i64 69488}
!202 = !{i64 69496}
!203 = !{i64 69500}
!204 = !{i64 69504}
!205 = !{i64 69512}
!206 = !{i64 69516}
!207 = !{i64 69520}
!208 = !{i64 69532}
!209 = !{i64 69552}
!210 = !{i64 69560}
!211 = !{i64 69572}
!212 = !{i64 69580}
!213 = !{i64 69600}
!214 = !{i64 69632}
!215 = !{i64 69644}
!216 = !{i64 69652}
