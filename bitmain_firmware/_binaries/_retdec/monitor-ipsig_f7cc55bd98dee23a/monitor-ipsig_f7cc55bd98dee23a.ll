source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%sockaddr = type { i32, [14 x i8] }
%timeval = type { i32, i32 }
%_IO_FILE = type { i32 }
%in_addr = type { i32 }
%_TYPEDEF_fd_set = type { [1 x i32] }
%timezone = type { i32, i32 }

@global_var_2200c = local_unnamed_addr global i32 67520
@global_var_22010 = local_unnamed_addr global i32 67520
@global_var_22014 = local_unnamed_addr global i32 67520
@global_var_22018 = local_unnamed_addr global i32 67520
@global_var_2201c = local_unnamed_addr global i32 67520
@global_var_22020 = local_unnamed_addr global i32 67520
@global_var_22024 = local_unnamed_addr global i32 67520
@global_var_22028 = local_unnamed_addr global i32 67520
@global_var_2202c = local_unnamed_addr global i32 67520
@global_var_22030 = local_unnamed_addr global i32 67520
@global_var_22034 = local_unnamed_addr global i32 67520
@global_var_22038 = local_unnamed_addr global i32 67520
@global_var_2203c = local_unnamed_addr global i32 67520
@global_var_22040 = local_unnamed_addr global i32 67520
@global_var_22044 = local_unnamed_addr global i32 67520
@global_var_22048 = local_unnamed_addr global i32 67520
@global_var_2204c = local_unnamed_addr global i32 67520
@global_var_22050 = local_unnamed_addr global i32 67520
@global_var_22054 = local_unnamed_addr global i32 67520
@global_var_22058 = local_unnamed_addr global i32 67520
@global_var_2205c = local_unnamed_addr global i32 67520
@global_var_22060 = local_unnamed_addr global i32 67520
@global_var_22064 = local_unnamed_addr global i32 67520
@global_var_22068 = local_unnamed_addr global i32 67520
@global_var_2206c = local_unnamed_addr global i32 67520
@global_var_22070 = local_unnamed_addr global i32 67520
@global_var_22074 = local_unnamed_addr global i32 67520
@global_var_22078 = local_unnamed_addr global i32 67520
@global_var_2207c = local_unnamed_addr global i32 67520
@global_var_22080 = local_unnamed_addr global i32 67520
@global_var_22084 = local_unnamed_addr global i32 67520
@global_var_22088 = local_unnamed_addr global i32 67520
@global_var_2208c = local_unnamed_addr global i32 67520
@global_var_22090 = local_unnamed_addr global i32 67520
@global_var_22094 = local_unnamed_addr global i32 67520
@global_var_22098 = local_unnamed_addr global i32 67520
@global_var_109d0 = local_unnamed_addr constant i32 71228
@global_var_109d4 = local_unnamed_addr constant i32 156
@global_var_21f18 = global i32 1
@global_var_22000 = local_unnamed_addr global i32* @global_var_21f18
@global_var_2209c = local_unnamed_addr global i32 0
@global_var_118e8 = constant [4 x i8] c"%ld\00"
@global_var_118ec = constant [7 x i8] c"socket\00"
@global_var_118f4 = constant [21 x i8] c":No Such Device %s/n\00"
@global_var_1190c = constant [6 x i8] c"ioctl\00"
@global_var_11914 = constant [30 x i8] c"%02X:%02X:%02X:%02X:%02X:%02X\00"
@global_var_11934 = local_unnamed_addr constant [5 x i8] c"MAC=\00"
@global_var_11940 = constant [38 x i8] c"echo 0 >/sys/class/gpio/gpio941/value\00"
@global_var_11968 = constant [38 x i8] c"echo 0 >/sys/class/gpio/gpio942/value\00"
@global_var_11990 = constant [38 x i8] c"echo 1 >/sys/class/gpio/gpio941/value\00"
@global_var_119b8 = constant [38 x i8] c"echo 1 >/sys/class/gpio/gpio942/value\00"
@global_var_119e0 = constant [24 x i8] c"/sys/class/gpio/gpio943\00"
@global_var_119fc = constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_11a14 = constant [22 x i8] c"Open read gpio/export\00"
@global_var_11a2c = constant [4 x i8] c"943\00"
@global_var_11a30 = constant [18 x i8] c"File Write Error!\00"
@global_var_11a48 = constant [30 x i8] c"/sys/class/gpio/gpio943/value\00"
@global_var_11a68 = constant [34 x i8] c"Open read recovery button failure\00"
@global_var_11a8c = constant [3 x i8] c"%d\00"
@global_var_220a8 = local_unnamed_addr global i32 -1
@global_var_11a90 = constant [13 x i8] c"socket error\00"
@global_var_11aa0 = constant [20 x i8] c"set socket error...\00"
@global_var_220ec = local_unnamed_addr global i32 0
@global_var_220ea = local_unnamed_addr global i32 0
@global_var_220dc = local_unnamed_addr global i32 0
@global_var_220da = local_unnamed_addr global i32 0
@global_var_11ab4 = constant [14 x i8] c"bind error...\00"
@global_var_11ac4 = constant [5 x i8] c"eth0\00"
@global_var_11acc = constant [13 x i8] c"get IP error\00"
@global_var_11ae0 = constant [15 x i8] c"send error....\00"
@global_var_11af0 = constant [16 x i8] c"send ipmac:\0A%s\0A\00"
@global_var_11b00 = constant [15 x i8] c"send ack OK!\0A \00"
@global_var_220d4 = local_unnamed_addr global i32 0
@global_var_11b10 = constant [15 x i8] c"read error....\00"
@global_var_11b20 = constant [9 x i8] c"rev:\0A%s\09\00"
@global_var_11b2c = constant [15 x i8] c"send_ack(\221\22);\00"
@global_var_11b3c = constant [3 x i8] c"OK\00"
@global_var_11b40 = constant [15 x i8] c"send_ack(\220\22);\00"
@global_var_11b50 = constant [6 x i8] c"FAILD\00"
@global_var_11b58 = constant [9 x i8] c"Time Out\00"
@global_var_11b64 = constant [9 x i8] c"18:22:32\00"
@global_var_11b70 = constant [12 x i8] c"Jan 14 2020\00"
@global_var_11b7c = constant [30 x i8] c"monitor-ipsig compile %s--%s\0A\00"
@global_var_11b9c = constant [14 x i8] c"Key Down!!!!!\00"
@global_var_118d0 = local_unnamed_addr constant i32 67174
@global_var_10666 = global i32 0
@global_var_118d4 = local_unnamed_addr constant i32 67164
@global_var_1065c = local_unnamed_addr global i32 131073
@global_var_21f10 = global i32 68161
@0 = external global i32
@global_var_109ac = local_unnamed_addr constant void ()* inttoptr (i32 71692 to void ()*)
@global_var_109b0 = local_unnamed_addr constant void ()* inttoptr (i32 71837 to void ()*)
@global_var_220ac = external local_unnamed_addr global i8*
@global_var_11938 = local_unnamed_addr constant i8 0
@global_var_1193c = local_unnamed_addr constant i16 44
@1 = internal constant [2 x i8] c"w\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@global_var_220e8 = global %sockaddr* null
@global_var_220d8 = global %timeval* null
@global_var_220b4 = external global i8*
@global_var_11adc = local_unnamed_addr constant i16 44
@global_var_119f8 = constant [2 x i8] c"w\00"
@global_var_11a44 = constant [2 x i8] c"r\00"

define i32 @function_107b4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_107b4:
  %0 = call i32 @function_109b4(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_107d4(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_107d4:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_107e0(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_107e0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107ec(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107ec:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_107f8(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_107f8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* %stream, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define %_IO_FILE* @function_10804(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10804:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !6
  ret %_IO_FILE* %0, !insn.addr !6
}

define void @function_10810(i32* %ptr) local_unnamed_addr {
dec_label_pc_10810:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define void @function_1081c(i32* %s, i32 %n) local_unnamed_addr {
dec_label_pc_1081c:
  call void @bzero(i32* %s, i32 %n), !insn.addr !8
  ret void, !insn.addr !8
}

define i8* @function_10828(%in_addr %arg1) local_unnamed_addr {
dec_label_pc_10828:
  %0 = call i8* @inet_ntoa(%in_addr %arg1), !insn.addr !9
  ret i8* %0, !insn.addr !9
}

define i32 @function_10834(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout) local_unnamed_addr {
dec_label_pc_10834:
  %0 = call i32 @select(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10840(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_10840:
  %0 = call i32 @recvfrom(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i16 @function_1084c(i16 %hostshort) local_unnamed_addr {
dec_label_pc_1084c:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !12
  ret i16 %0, !insn.addr !12
}

define void @function_10858(i8* %s) local_unnamed_addr {
dec_label_pc_10858:
  call void @perror(i8* %s), !insn.addr !13
  ret void, !insn.addr !13
}

define i32 @function_10864(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10864:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i8* @function_10870(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10870:
  %0 = call i8* @strcat(i8* %dest, i8* %src), !insn.addr !15
  ret i8* %0, !insn.addr !15
}

define i32 @function_1087c(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_1087c:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_10888(i32 %useconds) local_unnamed_addr {
dec_label_pc_10888:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i8* @function_10894(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10894:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !18
  ret i8* %0, !insn.addr !18
}

define i32 @function_108a0(%timeval* %tv, %timezone* %tz) local_unnamed_addr {
dec_label_pc_108a0:
  %0 = call i32 @gettimeofday(%timeval* %tv, %timezone* %tz), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_108ac(i8* %s) local_unnamed_addr {
dec_label_pc_108ac:
  %0 = call i32 @puts(i8* %s), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_108b8(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_108b8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_108c4(i8* %command) local_unnamed_addr {
dec_label_pc_108c4:
  %0 = call i32 @system(i8* %command), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_108d0() local_unnamed_addr {
dec_label_pc_108d0:
  call void @__gmon_start__(), !insn.addr !23
  ret void, !insn.addr !23
}

define void @function_108dc(i32 %status) local_unnamed_addr {
dec_label_pc_108dc:
  call void @exit(i32 %status), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @function_108e8(i8* %s) local_unnamed_addr {
dec_label_pc_108e8:
  %0 = call i32 @strlen(i8* %s), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_108f4(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108f4:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32* @function_10900(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10900:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !27
  ret i32* %0, !insn.addr !27
}

define i8* @function_1090c(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1090c:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !28
  ret i8* %0, !insn.addr !28
}

define i32 @function_10918(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_10918:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_10924(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10924:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_10930(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len) local_unnamed_addr {
dec_label_pc_10930:
  %0 = call i32 @sendto(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_1093c(i32 %hostlong) local_unnamed_addr {
dec_label_pc_1093c:
  %0 = call i32 @htonl(i32 %hostlong), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @function_10948(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10948:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_10954(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10954:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @function_10960(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10960:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define void @function_1096c() local_unnamed_addr {
dec_label_pc_1096c:
  call void @abort(), !insn.addr !36
  ret void, !insn.addr !36
}

define i32 @function_10978(i32 %fd) local_unnamed_addr {
dec_label_pc_10978:
  %0 = call i32 @close(i32 %fd), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10984:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !38
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !38
  %2 = call i32 @__libc_start_main(i32 71692, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 71837 to void ()*), void ()* inttoptr (i32 71692 to void ()*), void ()* %1), !insn.addr !38
  call void @abort(), !insn.addr !39
  unreachable, !insn.addr !39
}

define i32 @function_109a8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_109a8:
  ret i32 %arg1, !insn.addr !40
}

define i32 @function_109b4() local_unnamed_addr {
dec_label_pc_109b4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_2209c, align 4, !insn.addr !41
  %3 = icmp eq i32 %2, 0, !insn.addr !42
  br i1 %3, label %4, label %dec_label_pc_109cc, !insn.addr !43

; <label>:4:                                      ; preds = %dec_label_pc_109b4
  ret i32 %1, !insn.addr !43

dec_label_pc_109cc:                               ; preds = %dec_label_pc_109b4
  call void @__gmon_start__(), !insn.addr !44
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !44
}

define i32 @function_109d8(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_109d8:
  ret i32 %arg1, !insn.addr !45
}

define i32 @function_109de(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_109de:
  %0 = or i32 %arg1, 131072, !insn.addr !46
  ret i32 %0, !insn.addr !47
}

define i32 @function_109fa() local_unnamed_addr {
dec_label_pc_109fa:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %r0.0.reg2mem = alloca i32, !insn.addr !48
  %4 = load i32, i32* %0
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i1, i1* %1
  %8 = load fp128, fp128* %2
  %9 = load fp128, fp128* %2
  %10 = load double, double* %3
  %11 = load double, double* %3
  %12 = load double, double* %3
  %13 = load double, double* %3
  %14 = load double, double* %3
  %15 = call double @__asm_vmax.f32(double %13, double %14), !insn.addr !48
  %16 = call double @__asm_vhadd.s8(double %11, double %10), !insn.addr !49
  %17 = call fp128 @__asm_vaddw.s8(fp128 %8, double %10), !insn.addr !50
  %18 = call fp128 @__asm_vaddl.s8(double %14, double %13), !insn.addr !51
  br i1 %6, label %dec_label_pc_10a0e, label %19, !insn.addr !52

; <label>:19:                                     ; preds = %dec_label_pc_109fa
  %20 = call i32 @function_250e1a(), !insn.addr !52
  br label %dec_label_pc_10a0e, !insn.addr !52

dec_label_pc_10a0e:                               ; preds = %dec_label_pc_109fa, %19
  %21 = call i32 @unknown_54c3a(), !insn.addr !53
  %22 = call double @__asm_vhadd.s8(double %14, double %12), !insn.addr !54
  %23 = call fp128 @__asm_vsubw.s8(fp128 %9, double %14), !insn.addr !55
  %24 = icmp eq i1 %7, %5, !insn.addr !56
  store i32 %21, i32* %r0.0.reg2mem, !insn.addr !56
  br i1 %24, label %27, label %25, !insn.addr !56

; <label>:25:                                     ; preds = %dec_label_pc_10a0e
  %26 = call i32 @__asm_mrslt(i32 %4), !insn.addr !56
  store i32 %26, i32* %r0.0.reg2mem, !insn.addr !56
  br label %27, !insn.addr !56

; <label>:27:                                     ; preds = %dec_label_pc_10a0e, %25
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !56

; uselistorder directives
  uselistorder double %14, { 2, 3, 1, 0 }
  uselistorder double %13, { 1, 0 }
  uselistorder double* %3, { 4, 3, 2, 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %27, { 1, 0 }
  uselistorder label %dec_label_pc_10a0e, { 1, 0 }
}

define i32 @function_10a22() local_unnamed_addr {
dec_label_pc_10a22:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !57
}

define i32 @function_10a24() local_unnamed_addr {
dec_label_pc_10a24:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !58
}

define i32 @function_10a28() local_unnamed_addr {
dec_label_pc_10a28:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !59
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_220ac to i8*), align 4, !insn.addr !60
  %5 = icmp eq i8 %4, 0, !insn.addr !61
  br i1 %5, label %dec_label_pc_10a36, label %dec_label_pc_10a3e, !insn.addr !61

dec_label_pc_10a36:                               ; preds = %dec_label_pc_10a28
  %6 = call i32 @function_109d8(i32 %3, i32 %2, i32 %1), !insn.addr !62
  store i8 1, i8* bitcast (i8** @global_var_220ac to i8*), align 4, !insn.addr !63
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_10a3e, !insn.addr !63

dec_label_pc_10a3e:                               ; preds = %dec_label_pc_10a28, %dec_label_pc_10a36
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_10a3e, { 1, 0 }
}

define i32 @function_10a40(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a40:
  %0 = alloca i32
  %1 = alloca i1
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %stack_var_-20 = alloca i32, align 4
  %4 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %5 = icmp eq i1 %3, %2, !insn.addr !65
  br i1 %5, label %7, label %6, !insn.addr !65

; <label>:6:                                      ; preds = %dec_label_pc_10a40
  call void @__asm_svclt(i32 59356), !insn.addr !65
  br label %7, !insn.addr !65

; <label>:7:                                      ; preds = %dec_label_pc_10a40, %6
  %8 = bitcast i32* %stack_var_-28 to %timeval*, !insn.addr !66
  %9 = call i32 @gettimeofday(%timeval* nonnull %8, %timezone* null), !insn.addr !66
  %10 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !67
  %11 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %10, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_118e8, i32 0, i32 0), i32 %4), !insn.addr !67
  %12 = inttoptr i32 %arg1 to i32*, !insn.addr !68
  %13 = call i32* @memset(i32* %12, i32 0, i32 10), !insn.addr !68
  %14 = call i32 @strlen(i8* nonnull %10), !insn.addr !69
  %15 = sub i32 6, %14, !insn.addr !70
  %16 = urem i32 %15, 256, !insn.addr !71
  %17 = icmp eq i32 %16, 0, !insn.addr !72
  br i1 %17, label %dec_label_pc_10ad0, label %dec_label_pc_10abc, !insn.addr !73

dec_label_pc_10abc:                               ; preds = %7
  %18 = call i32* @memset(i32* %12, i32 48, i32 %16), !insn.addr !74
  br label %dec_label_pc_10ad0, !insn.addr !74

dec_label_pc_10ad0:                               ; preds = %dec_label_pc_10abc, %7
  %19 = inttoptr i32 %arg1 to i8*, !insn.addr !75
  %20 = call i8* @strcat(i8* %19, i8* nonnull %10), !insn.addr !75
  ret i32 %arg1, !insn.addr !76

; uselistorder directives
  uselistorder i32 %16, { 1, 0 }
  uselistorder i1* %1, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %7, { 1, 0 }
}

define i32 @function_10af0(i8* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_10af0:
  %0 = alloca i32
  %r3.0.reg2mem = alloca i32, !insn.addr !77
  %1 = load i32, i32* %0
  %stack_var_-60 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !78
  %3 = icmp eq i32 %2, -1, !insn.addr !79
  br i1 %3, label %dec_label_pc_10b24, label %dec_label_pc_10b38, !insn.addr !80

dec_label_pc_10b24:                               ; preds = %dec_label_pc_10af0
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_118ec, i32 0, i32 0)), !insn.addr !81
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !82
  br label %dec_label_pc_10bc0, !insn.addr !82

dec_label_pc_10b38:                               ; preds = %dec_label_pc_10af0
  %4 = bitcast i32* %stack_var_-60 to i8*, !insn.addr !83
  %5 = call i8* @strncpy(i8* nonnull %4, i8* %arg1, i32 20), !insn.addr !83
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 35093), !insn.addr !84
  %7 = icmp slt i32 %6, 0, !insn.addr !85
  br i1 %7, label %dec_label_pc_10b74, label %dec_label_pc_10b8c, !insn.addr !86

dec_label_pc_10b74:                               ; preds = %dec_label_pc_10b38
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_118f4, i32 0, i32 0), i8* %arg1), !insn.addr !87
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_10bc0, !insn.addr !88

dec_label_pc_10b8c:                               ; preds = %dec_label_pc_10b38
  %9 = insertvalue %in_addr undef, i32 %1, 0, !insn.addr !89
  %10 = call i8* @inet_ntoa(%in_addr %9), !insn.addr !89
  %11 = bitcast i32* %arg2 to i8*, !insn.addr !90
  %12 = call i8* @strcpy(i8* %11, i8* %10), !insn.addr !90
  %13 = call i32 @close(i32 %2), !insn.addr !91
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !92
  br label %dec_label_pc_10bc0, !insn.addr !92

dec_label_pc_10bc0:                               ; preds = %dec_label_pc_10b8c, %dec_label_pc_10b74, %dec_label_pc_10b24
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !93
}

define i32 @function_10bcc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bcc:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-48 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !94
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !95
  %9 = icmp slt i32 %8, 0, !insn.addr !96
  br i1 %9, label %dec_label_pc_10c14, label %dec_label_pc_10c28, !insn.addr !97

dec_label_pc_10c14:                               ; preds = %dec_label_pc_10bcc
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_118ec, i32 0, i32 0)), !insn.addr !98
  call void @exit(i32 0), !insn.addr !99
  unreachable, !insn.addr !99

dec_label_pc_10c28:                               ; preds = %dec_label_pc_10bcc
  %10 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !100
  %11 = inttoptr i32 %arg2 to i8*, !insn.addr !100
  %12 = call i8* @strcpy(i8* nonnull %10, i8* %11), !insn.addr !100
  %13 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !101
  %14 = icmp slt i32 %13, 0, !insn.addr !102
  br i1 %14, label %dec_label_pc_10c58, label %dec_label_pc_10c6c, !insn.addr !103

dec_label_pc_10c58:                               ; preds = %dec_label_pc_10c28
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1190c, i32 0, i32 0)), !insn.addr !104
  call void @exit(i32 0), !insn.addr !105
  unreachable, !insn.addr !105

dec_label_pc_10c6c:                               ; preds = %dec_label_pc_10c28
  %15 = bitcast i32* %7 to i8*
  %16 = call i32 @close(i32 %8), !insn.addr !106
  %17 = zext i8 %6 to i32, !insn.addr !107
  %18 = zext i8 %5 to i32, !insn.addr !108
  %19 = zext i8 %3 to i32, !insn.addr !109
  %20 = zext i8 %2 to i32, !insn.addr !110
  %21 = zext i8 %1 to i32, !insn.addr !111
  %22 = sext i8 %4 to i32, !insn.addr !112
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %15, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11914, i32 0, i32 0), i32 %17, i32 %18, i32 %22, i32 %19, i32 %20, i32 %21), !insn.addr !112
  %24 = inttoptr i32 %arg1 to i32*, !insn.addr !113
  store i32 1027817805, i32* %24, align 4, !insn.addr !113
  %25 = add i32 %arg1, 4, !insn.addr !114
  %26 = inttoptr i32 %25 to i8*, !insn.addr !114
  store i8 0, i8* %26, align 1, !insn.addr !114
  %27 = inttoptr i32 %arg1 to i8*, !insn.addr !115
  %28 = call i8* @strcat(i8* %27, i8* %15), !insn.addr !115
  %29 = call i32 @strlen(i8* %27), !insn.addr !116
  %30 = add i32 %29, %arg1, !insn.addr !117
  %31 = inttoptr i32 %30 to i16*, !insn.addr !118
  store i16 44, i16* %31, align 2, !insn.addr !118
  call void @free(i32* %7), !insn.addr !119
  ret i32 %arg1, !insn.addr !120

; uselistorder directives
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3, 4 }
}

define i32 @function_10d24(i32* %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_10d24:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-48 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !121
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !122
  %9 = icmp slt i32 %8, 0, !insn.addr !123
  br i1 %9, label %dec_label_pc_10d6c, label %dec_label_pc_10d80, !insn.addr !124

dec_label_pc_10d6c:                               ; preds = %dec_label_pc_10d24
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_118ec, i32 0, i32 0)), !insn.addr !125
  call void @exit(i32 0), !insn.addr !126
  unreachable, !insn.addr !126

dec_label_pc_10d80:                               ; preds = %dec_label_pc_10d24
  %10 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !127
  %11 = call i8* @strcpy(i8* nonnull %10, i8* %arg2), !insn.addr !127
  %12 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !128
  %13 = icmp slt i32 %12, 0, !insn.addr !129
  br i1 %13, label %dec_label_pc_10db0, label %dec_label_pc_10dc4, !insn.addr !130

dec_label_pc_10db0:                               ; preds = %dec_label_pc_10d80
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1190c, i32 0, i32 0)), !insn.addr !131
  call void @exit(i32 0), !insn.addr !132
  unreachable, !insn.addr !132

dec_label_pc_10dc4:                               ; preds = %dec_label_pc_10d80
  %14 = ptrtoint i32* %arg1 to i32
  %15 = bitcast i32* %7 to i8*
  %16 = call i32 @close(i32 %8), !insn.addr !133
  %17 = zext i8 %6 to i32, !insn.addr !134
  %18 = zext i8 %5 to i32, !insn.addr !135
  %19 = zext i8 %3 to i32, !insn.addr !136
  %20 = zext i8 %2 to i32, !insn.addr !137
  %21 = zext i8 %1 to i32, !insn.addr !138
  %22 = sext i8 %4 to i32, !insn.addr !139
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %15, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11914, i32 0, i32 0), i32 %17, i32 %18, i32 %22, i32 %19, i32 %20, i32 %21), !insn.addr !139
  %24 = bitcast i32* %arg1 to i8*, !insn.addr !140
  %25 = call i8* @strcpy(i8* %24, i8* %15), !insn.addr !140
  call void @free(i32* %7), !insn.addr !141
  ret i32 %14, !insn.addr !142

; uselistorder directives
  uselistorder i8* %15, { 1, 0 }
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 2, 1, 0, 3 }
  uselistorder i32 (i32)* @close, { 2, 1, 0, 3 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 2, 1, 0, 3 }
  uselistorder void (i8*)* @perror, { 4, 3, 2, 1, 0, 5 }
}

define i32 @function_10e38() local_unnamed_addr {
dec_label_pc_10e38:
  %0 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11940, i32 0, i32 0)), !insn.addr !143
  %1 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11968, i32 0, i32 0)), !insn.addr !144
  %2 = call i32 @__asm_nop(i32 %1), !insn.addr !145
  ret i32 %2, !insn.addr !146
}

define i32 @function_10e60() local_unnamed_addr {
dec_label_pc_10e60:
  %0 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11990, i32 0, i32 0)), !insn.addr !147
  %1 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_119b8, i32 0, i32 0)), !insn.addr !148
  %2 = call i32 @__asm_nop(i32 %1), !insn.addr !149
  ret i32 %2, !insn.addr !150
}

define i32 @function_10e88() local_unnamed_addr {
dec_label_pc_10e88:
  %r3.0.reg2mem = alloca i32, !insn.addr !151
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @function_10fa8(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_119e0, i32 0, i32 0)), !insn.addr !152
  %1 = icmp eq i32 %0, 0, !insn.addr !153
  br i1 %1, label %dec_label_pc_10eb4, label %dec_label_pc_10f2c, !insn.addr !154

dec_label_pc_10eb4:                               ; preds = %dec_label_pc_10e88
  %2 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_119fc, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_119f8, i32 0, i32 0)), !insn.addr !155
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !156
  br i1 %3, label %dec_label_pc_10ee0, label %dec_label_pc_10ef4, !insn.addr !157

dec_label_pc_10ee0:                               ; preds = %dec_label_pc_10eb4
  %4 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11a14, i32 0, i32 0)), !insn.addr !158
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !159
  br label %dec_label_pc_10f9c, !insn.addr !159

dec_label_pc_10ef4:                               ; preds = %dec_label_pc_10eb4
  %5 = call i32 @fwrite(i32* bitcast ([4 x i8]* @global_var_11a2c to i32*), i32 3, i32 1, %_IO_FILE* nonnull %2), !insn.addr !160
  %6 = icmp eq i32 %5, 1, !insn.addr !161
  br i1 %6, label %dec_label_pc_10f24, label %dec_label_pc_10f18, !insn.addr !162

dec_label_pc_10f18:                               ; preds = %dec_label_pc_10ef4
  %7 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11a30, i32 0, i32 0)), !insn.addr !163
  br label %dec_label_pc_10f24, !insn.addr !163

dec_label_pc_10f24:                               ; preds = %dec_label_pc_10f18, %dec_label_pc_10ef4
  %8 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !164
  br label %dec_label_pc_10f2c, !insn.addr !164

dec_label_pc_10f2c:                               ; preds = %dec_label_pc_10e88, %dec_label_pc_10f24
  %9 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11a48, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11a44, i32 0, i32 0)), !insn.addr !165
  %10 = icmp eq %_IO_FILE* %9, null, !insn.addr !166
  br i1 %10, label %dec_label_pc_10f50, label %dec_label_pc_10f64, !insn.addr !167

dec_label_pc_10f50:                               ; preds = %dec_label_pc_10f2c
  %11 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11a68, i32 0, i32 0)), !insn.addr !168
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_10f9c, !insn.addr !169

dec_label_pc_10f64:                               ; preds = %dec_label_pc_10f2c
  %12 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* nonnull %9, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11a8c, i32 0, i32 0), i32* nonnull %stack_var_-20), !insn.addr !170
  %13 = call i32 @fclose(%_IO_FILE* nonnull %9), !insn.addr !171
  %14 = load i32, i32* %stack_var_-20, align 4, !insn.addr !172
  %15 = icmp ne i32 %14, 0, !insn.addr !173
  %. = zext i1 %15 to i32
  store i32 %., i32* %r3.0.reg2mem, !insn.addr !174
  br label %dec_label_pc_10f9c, !insn.addr !174

dec_label_pc_10f9c:                               ; preds = %dec_label_pc_10f64, %dec_label_pc_10f50, %dec_label_pc_10ee0
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !175

; uselistorder directives
  uselistorder %_IO_FILE* %9, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 1, 0, 2 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10f2c, { 1, 0 }
}

define i32 @function_10fa8(i8* %arg1) local_unnamed_addr {
dec_label_pc_10fa8:
  %0 = call i32 @access(i8* %arg1, i32 0), !insn.addr !176
  %1 = icmp eq i32 %0, 0, !insn.addr !177
  %r3.1 = zext i1 %1 to i32
  ret i32 %r3.1, !insn.addr !178
}

define i32 @function_10fe4() local_unnamed_addr {
dec_label_pc_10fe4:
  %storemerge1.reg2mem = alloca i32, !insn.addr !179
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_11004

dec_label_pc_11004:                               ; preds = %dec_label_pc_10fe4, %dec_label_pc_11004
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %0 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_119b8, i32 0, i32 0)), !insn.addr !180
  %1 = call i32 @usleep(i32 50000), !insn.addr !181
  %2 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11968, i32 0, i32 0)), !insn.addr !182
  %3 = call i32 @usleep(i32 50000), !insn.addr !183
  %4 = add i32 %storemerge1.reload, 1, !insn.addr !184
  %5 = icmp ult i32 %4, 2, !insn.addr !185
  %6 = icmp ne i1 %5, true, !insn.addr !185
  %7 = icmp eq i32 %4, 2, !insn.addr !185
  %8 = icmp ne i1 %6, true, !insn.addr !186
  %9 = or i1 %7, %8, !insn.addr !186
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !186
  br i1 %9, label %dec_label_pc_11004, label %dec_label_pc_11044, !insn.addr !186

dec_label_pc_11044:                               ; preds = %dec_label_pc_11004
  %10 = call i32 @__asm_nop(i32 %3), !insn.addr !187
  ret i32 %4, !insn.addr !188

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 3, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11004, { 1, 0 }
}

define i32 @function_11054() local_unnamed_addr {
dec_label_pc_11054:
  %storemerge1.reg2mem = alloca i32, !insn.addr !189
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_1106c

dec_label_pc_1106c:                               ; preds = %dec_label_pc_11054, %dec_label_pc_1106c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %0 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11990, i32 0, i32 0)), !insn.addr !190
  %1 = call i32 @usleep(i32 50000), !insn.addr !191
  %2 = call i32 @system(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11940, i32 0, i32 0)), !insn.addr !192
  %3 = call i32 @usleep(i32 50000), !insn.addr !193
  %4 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !194
  %5 = icmp ult i32 %4, 3, !insn.addr !195
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !195
  br i1 %5, label %dec_label_pc_1106c, label %dec_label_pc_110ac, !insn.addr !195

dec_label_pc_110ac:                               ; preds = %dec_label_pc_1106c
  %6 = call i32 @__asm_nop(i32 %3), !insn.addr !196
  ret i32 3, !insn.addr !197

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*)* @system, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_1106c, { 1, 0 }
}

define i32 @function_110bc() local_unnamed_addr {
dec_label_pc_110bc:
  %r3.0.reg2mem = alloca i32, !insn.addr !198
  %stack_var_-16 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !199
  store i32 %0, i32* @global_var_220a8, align 4, !insn.addr !200
  %1 = icmp eq i32 %0, -1, !insn.addr !201
  br i1 %1, label %dec_label_pc_110fc, label %dec_label_pc_11110, !insn.addr !202

dec_label_pc_110fc:                               ; preds = %dec_label_pc_110bc
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11a90, i32 0, i32 0)), !insn.addr !203
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !204
  br label %dec_label_pc_11254, !insn.addr !204

dec_label_pc_11110:                               ; preds = %dec_label_pc_110bc
  store i32 1, i32* %stack_var_-16, align 4, !insn.addr !205
  %3 = call i32 @setsockopt(i32 %0, i32 1, i32 6, i32* nonnull %stack_var_-16, i32 4), !insn.addr !206
  %4 = icmp eq i32 %3, -1, !insn.addr !207
  br i1 %4, label %dec_label_pc_11158, label %dec_label_pc_1116c, !insn.addr !208

dec_label_pc_11158:                               ; preds = %dec_label_pc_11110
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11aa0, i32 0, i32 0)), !insn.addr !209
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_11254, !insn.addr !210

dec_label_pc_1116c:                               ; preds = %dec_label_pc_11110
  call void @bzero(i32* bitcast (%sockaddr** @global_var_220e8 to i32*), i32 16), !insn.addr !211
  store i16 2, i16* bitcast (%sockaddr** @global_var_220e8 to i16*), align 4, !insn.addr !212
  %6 = call i32 @htonl(i32 -1), !insn.addr !213
  store i32 %6, i32* @global_var_220ec, align 4, !insn.addr !214
  %7 = call i16 @htons(i16 14235), !insn.addr !215
  store i16 %7, i16* bitcast (i32* @global_var_220ea to i16*), align 4, !insn.addr !216
  call void @bzero(i32* bitcast (%timeval** @global_var_220d8 to i32*), i32 16), !insn.addr !217
  store i16 2, i16* bitcast (%timeval** @global_var_220d8 to i16*), align 4, !insn.addr !218
  %8 = call i32 @htonl(i32 0), !insn.addr !219
  store i32 %8, i32* @global_var_220dc, align 4, !insn.addr !220
  %9 = call i16 @htons(i16 14236), !insn.addr !221
  store i16 %9, i16* bitcast (i32* @global_var_220da to i16*), align 4, !insn.addr !222
  %10 = load i32, i32* @global_var_220a8, align 4, !insn.addr !223
  %11 = call i32 @bind(i32 %10, %sockaddr* bitcast (%timeval** @global_var_220d8 to %sockaddr*), i32 16), !insn.addr !224
  %12 = icmp eq i32 %11, -1, !insn.addr !225
  store i32 %11, i32* %r3.0.reg2mem, !insn.addr !226
  br i1 %12, label %dec_label_pc_11240, label %dec_label_pc_11254, !insn.addr !226

dec_label_pc_11240:                               ; preds = %dec_label_pc_1116c
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11ab4, i32 0, i32 0)), !insn.addr !227
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_11254, !insn.addr !228

dec_label_pc_11254:                               ; preds = %dec_label_pc_1116c, %dec_label_pc_11240, %dec_label_pc_11158, %dec_label_pc_110fc
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !229

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder i16 (i16)* @htons, { 1, 0, 2 }
  uselistorder i32 (i32)* @htonl, { 1, 0, 2 }
  uselistorder void (i32*, i32)* @bzero, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 2, 0, 3, 4 }
  uselistorder label %dec_label_pc_11254, { 1, 0, 2, 3 }
}

define i32 @function_11260() local_unnamed_addr {
dec_label_pc_11260:
  %stack_var_-120 = alloca i32, align 4
  %stack_var_-192 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-152, i32 0, i32 30), !insn.addr !230
  %1 = call i32* @memset(i32* nonnull %stack_var_-192, i32 0, i32 40), !insn.addr !231
  %2 = call i32* @memset(i32* nonnull %stack_var_-120, i32 0, i32 100), !insn.addr !232
  %3 = call i32 @function_10af0(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11ac4, i32 0, i32 0), i32* nonnull %stack_var_-192), !insn.addr !233
  %4 = icmp eq i32 %3, 0, !insn.addr !234
  br i1 %4, label %dec_label_pc_112c8, label %dec_label_pc_112d4, !insn.addr !235

dec_label_pc_112c8:                               ; preds = %dec_label_pc_11260
  %5 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11acc, i32 0, i32 0)), !insn.addr !236
  br label %dec_label_pc_112d4, !insn.addr !236

dec_label_pc_112d4:                               ; preds = %dec_label_pc_11260, %dec_label_pc_112c8
  %6 = call i32 @function_10d24(i32* nonnull %stack_var_-152, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11ac4, i32 0, i32 0)), !insn.addr !237
  %7 = bitcast i32* %stack_var_-152 to i8*, !insn.addr !238
  %8 = call i32 @strlen(i8* nonnull %7), !insn.addr !238
  %9 = call i8* @strncpy(i8* bitcast (i8** @global_var_220b4 to i8*), i8* nonnull %7, i32 %8), !insn.addr !239
  %10 = bitcast i32* %stack_var_-120 to i8*, !insn.addr !240
  %11 = bitcast i32* %stack_var_-192 to i8*, !insn.addr !240
  %12 = call i8* @strcpy(i8* nonnull %10, i8* nonnull %11), !insn.addr !240
  %13 = call i32 @strlen(i8* nonnull %10), !insn.addr !241
  %14 = ptrtoint i32* %stack_var_-120 to i32, !insn.addr !242
  %15 = add i32 %13, %14, !insn.addr !243
  %16 = inttoptr i32 %15 to i16*, !insn.addr !244
  store i16 44, i16* %16, align 2, !insn.addr !244
  %17 = call i8* @strcat(i8* nonnull %10, i8* nonnull %7), !insn.addr !245
  %18 = load i32, i32* @global_var_220a8, align 4, !insn.addr !246
  %19 = call i32 @strlen(i8* nonnull %10), !insn.addr !247
  %20 = call i32 @sendto(i32 %18, i32* nonnull %stack_var_-120, i32 %19, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e8 to %sockaddr*), i32 16), !insn.addr !248
  %21 = icmp slt i32 %20, 0, !insn.addr !249
  br i1 %21, label %dec_label_pc_113b0, label %dec_label_pc_113c0, !insn.addr !250

dec_label_pc_113b0:                               ; preds = %dec_label_pc_112d4
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11ae0, i32 0, i32 0)), !insn.addr !251
  br label %dec_label_pc_113d4, !insn.addr !252

dec_label_pc_113c0:                               ; preds = %dec_label_pc_112d4
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11af0, i32 0, i32 0), i32* nonnull %stack_var_-120), !insn.addr !253
  br label %dec_label_pc_113d4, !insn.addr !253

dec_label_pc_113d4:                               ; preds = %dec_label_pc_113c0, %dec_label_pc_113b0
  ret i32 1, !insn.addr !254

; uselistorder directives
  uselistorder i32* %stack_var_-120, { 0, 1, 4, 2, 3 }
  uselistorder i8* (i8*, i8*)* @strcat, { 2, 1, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 4, 3, 2, 1, 0, 5 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 1, 0, 2 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_112d4, { 1, 0 }
}

define i32 @function_113e4(i8* %arg1) local_unnamed_addr {
dec_label_pc_113e4:
  %storemerge.reg2mem = alloca i32, !insn.addr !255
  %0 = load i32, i32* @global_var_220a8, align 4, !insn.addr !256
  %1 = bitcast i8* %arg1 to i32*, !insn.addr !257
  %2 = call i32 @sendto(i32 %0, i32* %1, i32 10, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e8 to %sockaddr*), i32 16), !insn.addr !257
  %3 = icmp slt i32 %2, 0, !insn.addr !258
  br i1 %3, label %dec_label_pc_11434, label %dec_label_pc_11444, !insn.addr !259

dec_label_pc_11434:                               ; preds = %dec_label_pc_113e4
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11ae0, i32 0, i32 0)), !insn.addr !260
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !261
  br label %dec_label_pc_11450, !insn.addr !261

dec_label_pc_11444:                               ; preds = %dec_label_pc_113e4
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11b00, i32 0, i32 0)), !insn.addr !262
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !262
  br label %dec_label_pc_11450, !insn.addr !262

dec_label_pc_11450:                               ; preds = %dec_label_pc_11444, %dec_label_pc_11434
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %6 = call i32 @__asm_nop(i32 %storemerge.reload), !insn.addr !263
  ret i32 %2, !insn.addr !264

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, i32*, i32, i32, %sockaddr*, i32)* @sendto, { 1, 0, 2 }
}

define i32 @function_11460() local_unnamed_addr {
dec_label_pc_11460:
  %r3.4.reg2mem = alloca i32, !insn.addr !265
  %.reg2mem = alloca i32, !insn.addr !265
  %r0.0.reg2mem = alloca i32, !insn.addr !265
  %storemerge4.reg2mem = alloca i32, !insn.addr !265
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-8 = alloca i32, align 4
  store i32 2, i32* %stack_var_-160, align 4, !insn.addr !266
  %0 = ptrtoint i32* %stack_var_-152 to i32, !insn.addr !267
  store i32 0, i32* %storemerge4.reg2mem
  br label %dec_label_pc_11490

dec_label_pc_11490:                               ; preds = %dec_label_pc_11460, %dec_label_pc_11490
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = mul i32 %storemerge4.reload, 4, !insn.addr !268
  %2 = add i32 %1, %0, !insn.addr !268
  %3 = inttoptr i32 %2 to i32*, !insn.addr !268
  store i32 0, i32* %3, align 4, !insn.addr !268
  %4 = add i32 %storemerge4.reload, 1, !insn.addr !269
  %5 = icmp ult i32 %4, 31, !insn.addr !270
  %6 = icmp ne i1 %5, true, !insn.addr !270
  %7 = icmp eq i32 %4, 31, !insn.addr !270
  %8 = icmp ne i1 %6, true, !insn.addr !271
  %9 = or i1 %7, %8, !insn.addr !271
  store i32 %4, i32* %storemerge4.reg2mem, !insn.addr !271
  br i1 %9, label %dec_label_pc_11490, label %dec_label_pc_114b8, !insn.addr !271

dec_label_pc_114b8:                               ; preds = %dec_label_pc_11490
  %10 = load i32, i32* @global_var_220a8, align 4, !insn.addr !272
  %11 = icmp slt i32 %10, 0, !insn.addr !273
  %12 = add i32 %10, 31
  %spec.select = select i1 %11, i32 %12, i32 %10
  %13 = ashr i32 %spec.select, 5, !insn.addr !274
  %14 = mul i32 %13, 4, !insn.addr !275
  %15 = ptrtoint i32* %stack_var_-8 to i32, !insn.addr !276
  %16 = add i32 %15, -144
  %17 = add i32 %14, %16, !insn.addr !277
  %18 = inttoptr i32 %17 to i32*, !insn.addr !277
  %19 = load i32, i32* %18, align 4, !insn.addr !277
  %20 = sub i32 0, %10, !insn.addr !278
  %21 = icmp slt i32 %20, 0, !insn.addr !278
  %22 = urem i32 %10, 32, !insn.addr !279
  %23 = urem i32 %20, 32
  %24 = sub nsw i32 0, %23
  %r3.1 = select i1 %21, i32 %22, i32 %24
  %25 = shl i32 1, %r3.1, !insn.addr !280
  %26 = or i32 %25, %19, !insn.addr !281
  store i32 %26, i32* %18, align 4, !insn.addr !282
  %27 = call i32* @calloc(i32 30, i32 1), !insn.addr !283
  %28 = load i32, i32* @global_var_220a8, align 4, !insn.addr !284
  %29 = add i32 %28, 1, !insn.addr !285
  %30 = bitcast i32* %stack_var_-160 to %timeval*
  %31 = bitcast i32* %stack_var_-152 to %_TYPEDEF_fd_set*, !insn.addr !286
  %32 = call i32 @select(i32 %29, %_TYPEDEF_fd_set* nonnull %31, %_TYPEDEF_fd_set* null, %_TYPEDEF_fd_set* null, %timeval* nonnull %30), !insn.addr !286
  switch i32 %32, label %dec_label_pc_115a8 [
    i32 -1, label %dec_label_pc_11580
    i32 0, label %dec_label_pc_11588
  ]

dec_label_pc_11580:                               ; preds = %dec_label_pc_114b8
  call void @exit(i32 -1), !insn.addr !287
  unreachable, !insn.addr !287

dec_label_pc_11588:                               ; preds = %dec_label_pc_114b8
  %33 = load i32, i32* @global_var_220d4, align 4, !insn.addr !288
  %34 = add i32 %33, 1, !insn.addr !289
  store i32 %34, i32* @global_var_220d4, align 4, !insn.addr !290
  store i32 %34, i32* %.reg2mem, !insn.addr !291
  br label %dec_label_pc_11728, !insn.addr !291

dec_label_pc_115a8:                               ; preds = %dec_label_pc_114b8
  %35 = load i32, i32* @global_var_220a8, align 4, !insn.addr !292
  %36 = icmp slt i32 %35, 0, !insn.addr !293
  %37 = add i32 %35, 31
  %spec.select3 = select i1 %36, i32 %37, i32 %35
  %38 = ashr i32 %spec.select3, 5, !insn.addr !294
  %39 = mul i32 %38, 4, !insn.addr !295
  %40 = add i32 %39, %16, !insn.addr !296
  %41 = inttoptr i32 %40 to i32*, !insn.addr !296
  %42 = load i32, i32* %41, align 4, !insn.addr !296
  %43 = sub i32 0, %35, !insn.addr !297
  %44 = icmp slt i32 %43, 0, !insn.addr !297
  %45 = urem i32 %35, 32, !insn.addr !298
  %46 = urem i32 %43, 32
  %47 = sub nsw i32 0, %46
  %r3.3 = select i1 %44, i32 %45, i32 %47
  %48 = shl i32 1, %r3.3, !insn.addr !299
  %49 = and i32 %48, %42, !insn.addr !300
  %50 = icmp eq i32 %49, 0, !insn.addr !301
  store i32 %32, i32* %r0.0.reg2mem, !insn.addr !302
  br i1 %50, label %dec_label_pc_11724, label %dec_label_pc_11608, !insn.addr !302

dec_label_pc_11608:                               ; preds = %dec_label_pc_115a8
  store i32 16, i32* %stack_var_-164, align 4, !insn.addr !303
  %51 = call i32 @recvfrom(i32 %35, i32* %27, i32 30, i32 0, %sockaddr* bitcast (%timeval** @global_var_220d8 to %sockaddr*), i32* nonnull %stack_var_-164), !insn.addr !304
  %52 = icmp sgt i32 %51, 0, !insn.addr !305
  br i1 %52, label %dec_label_pc_1167c, label %dec_label_pc_11650, !insn.addr !305

dec_label_pc_11650:                               ; preds = %dec_label_pc_11608
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11b10, i32 0, i32 0)), !insn.addr !306
  %54 = load i32, i32* @global_var_220d4, align 4, !insn.addr !307
  %55 = add i32 %54, 1, !insn.addr !308
  store i32 %55, i32* @global_var_220d4, align 4, !insn.addr !309
  store i32 %53, i32* %r0.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_11724, !insn.addr !310

dec_label_pc_1167c:                               ; preds = %dec_label_pc_11608
  %56 = bitcast i32* %27 to i8*
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11b20, i32 0, i32 0), i32* %27), !insn.addr !311
  store i32 0, i32* @global_var_220d4, align 4, !insn.addr !312
  %58 = call i32 @strlen(i8* bitcast (i8** @global_var_220b4 to i8*)), !insn.addr !313
  %59 = call i32 @strncmp(i8* %56, i8* bitcast (i8** @global_var_220b4 to i8*), i32 %58), !insn.addr !314
  %60 = icmp eq i32 %59, 0, !insn.addr !315
  br i1 %60, label %dec_label_pc_116cc, label %dec_label_pc_116f8, !insn.addr !316

dec_label_pc_116cc:                               ; preds = %dec_label_pc_1167c
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11b2c, i32 0, i32 0)), !insn.addr !317
  %62 = call i32 @function_10fe4(), !insn.addr !318
  %63 = call i32 @function_113e4(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11b3c, i32 0, i32 0)), !insn.addr !319
  call void @free(i32* %27), !insn.addr !320
  store i32 1, i32* %r3.4.reg2mem, !insn.addr !321
  br label %dec_label_pc_11774, !insn.addr !321

dec_label_pc_116f8:                               ; preds = %dec_label_pc_1167c
  %64 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11b40, i32 0, i32 0)), !insn.addr !322
  %65 = call i32 @function_11054(), !insn.addr !323
  %66 = call i32 @function_113e4(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11b50, i32 0, i32 0)), !insn.addr !324
  call void @free(i32* %27), !insn.addr !325
  store i32 0, i32* %r3.4.reg2mem, !insn.addr !326
  br label %dec_label_pc_11774, !insn.addr !326

dec_label_pc_11724:                               ; preds = %dec_label_pc_11650, %dec_label_pc_115a8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %67 = call i32 @__asm_nop(i32 %r0.0.reload), !insn.addr !327
  %.pr = load i32, i32* @global_var_220d4, align 4
  store i32 %.pr, i32* %.reg2mem, !insn.addr !327
  br label %dec_label_pc_11728, !insn.addr !327

dec_label_pc_11728:                               ; preds = %dec_label_pc_11724, %dec_label_pc_11588
  %.reload = load i32, i32* %.reg2mem, !insn.addr !328
  %68 = icmp eq i32 %.reload, 5, !insn.addr !329
  br i1 %68, label %dec_label_pc_1173c, label %dec_label_pc_11768, !insn.addr !330

dec_label_pc_1173c:                               ; preds = %dec_label_pc_11728
  store i32 0, i32* @global_var_220d4, align 4, !insn.addr !331
  %69 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11b58, i32 0, i32 0)), !insn.addr !332
  call void @free(i32* %27), !insn.addr !333
  store i32 1, i32* %r3.4.reg2mem, !insn.addr !334
  br label %dec_label_pc_11774, !insn.addr !334

dec_label_pc_11768:                               ; preds = %dec_label_pc_11728
  call void @free(i32* %27), !insn.addr !335
  store i32 0, i32* %r3.4.reg2mem, !insn.addr !336
  br label %dec_label_pc_11774, !insn.addr !336

dec_label_pc_11774:                               ; preds = %dec_label_pc_11768, %dec_label_pc_1173c, %dec_label_pc_116f8, %dec_label_pc_116cc
  %r3.4.reload = load i32, i32* %r3.4.reg2mem
  ret i32 %r3.4.reload, !insn.addr !337

; uselistorder directives
  uselistorder i32 %35, { 1, 0, 2, 3, 4, 5 }
  uselistorder i32* %27, { 4, 3, 1, 0, 2, 6, 5 }
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.4.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder void (i32*)* @free, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @function_113e4, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32* @global_var_220d4, { 3, 0, 2, 4, 5, 1, 6 }
  uselistorder void (i32)* @exit, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32, i32)* @calloc, { 2, 1, 0, 3 }
  uselistorder i32 -1, { 11, 6, 7, 12, 0, 8, 1, 9, 2, 3, 4, 5, 10, 13 }
  uselistorder i32* @global_var_220a8, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder label %dec_label_pc_11490, { 1, 0 }
}

define i32 @function_11780() local_unnamed_addr {
dec_label_pc_11780:
  %storemerge.reg2mem = alloca i32, !insn.addr !338
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !338
  %stack_var_-16.12.reg2mem = alloca i32, !insn.addr !338
  %storemerge13.reg2mem = alloca i32, !insn.addr !338
  store i32 0, i32* %storemerge13.reg2mem
  store i32 0, i32* %stack_var_-16.12.reg2mem
  br label %dec_label_pc_117a8

dec_label_pc_117a8:                               ; preds = %dec_label_pc_11780, %dec_label_pc_117cc
  %stack_var_-16.12.reload = load i32, i32* %stack_var_-16.12.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %0 = call i32 @function_10e88(), !insn.addr !339
  %1 = icmp eq i32 %0, 0, !insn.addr !340
  store i32 %stack_var_-16.12.reload, i32* %stack_var_-16.0.reg2mem, !insn.addr !341
  br i1 %1, label %dec_label_pc_117b8, label %dec_label_pc_117cc, !insn.addr !341

dec_label_pc_117b8:                               ; preds = %dec_label_pc_117a8
  %2 = call i32 @usleep(i32 20000), !insn.addr !342
  %3 = add i32 %stack_var_-16.12.reload, 1, !insn.addr !343
  store i32 %3, i32* %stack_var_-16.0.reg2mem, !insn.addr !344
  br label %dec_label_pc_117cc, !insn.addr !344

dec_label_pc_117cc:                               ; preds = %dec_label_pc_117a8, %dec_label_pc_117b8
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  %4 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !345
  %5 = icmp ult i32 %4, 5, !insn.addr !346
  store i32 %4, i32* %storemerge13.reg2mem, !insn.addr !346
  store i32 %stack_var_-16.0.reload, i32* %stack_var_-16.12.reg2mem, !insn.addr !346
  br i1 %5, label %dec_label_pc_117a8, label %dec_label_pc_117e4, !insn.addr !346

dec_label_pc_117e4:                               ; preds = %dec_label_pc_117cc
  %6 = icmp eq i32 %stack_var_-16.0.reload, 5, !insn.addr !347
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !348
  br i1 %6, label %dec_label_pc_117f0, label %dec_label_pc_11800, !insn.addr !348

dec_label_pc_117f0:                               ; preds = %dec_label_pc_117e4
  %7 = call i32 @function_10e60(), !insn.addr !349
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !350
  br label %dec_label_pc_11800, !insn.addr !350

dec_label_pc_11800:                               ; preds = %dec_label_pc_117e4, %dec_label_pc_117f0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !351

; uselistorder directives
  uselistorder i32 %stack_var_-16.12.reload, { 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.12.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_11800, { 1, 0 }
  uselistorder label %dec_label_pc_117cc, { 1, 0 }
  uselistorder label %dec_label_pc_117a8, { 1, 0 }
}

define i32 @function_1180c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1180c:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11b7c, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11b70, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11b64, i32 0, i32 0)), !insn.addr !352
  %1 = call i32 @function_110bc(), !insn.addr !353
  br label %dec_label_pc_11850, !insn.addr !353

dec_label_pc_11850:                               ; preds = %dec_label_pc_11850.backedge, %dec_label_pc_1180c
  %2 = call i32 @function_11780(), !insn.addr !354
  %3 = icmp eq i32 %2, 1, !insn.addr !355
  br i1 %3, label %dec_label_pc_11860, label %dec_label_pc_11884, !insn.addr !356

dec_label_pc_11860:                               ; preds = %dec_label_pc_11850, %dec_label_pc_11860
  %4 = call i32 @puts(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11b9c, i32 0, i32 0)), !insn.addr !357
  %5 = call i32 @function_11260(), !insn.addr !358
  %6 = call i32 @function_11460(), !insn.addr !359
  %7 = icmp eq i32 %6, 1, !insn.addr !360
  br i1 %7, label %dec_label_pc_11894, label %dec_label_pc_11860, !insn.addr !361

dec_label_pc_11884:                               ; preds = %dec_label_pc_11850
  %8 = call i32 @usleep(i32 400000), !insn.addr !362
  br label %dec_label_pc_11850.backedge, !insn.addr !363

dec_label_pc_11850.backedge:                      ; preds = %dec_label_pc_11884, %dec_label_pc_11894
  br label %dec_label_pc_11850

dec_label_pc_11894:                               ; preds = %dec_label_pc_11860
  %9 = call i32 @__asm_nop(i32 1), !insn.addr !364
  br label %dec_label_pc_11850.backedge, !insn.addr !365

; uselistorder directives
  uselistorder i32 (i32)* @__asm_nop, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32)* @usleep, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @puts, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
  uselistorder label %dec_label_pc_11850.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_11860, { 1, 0 }
}

define i32 @function_1189c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1189c:
  %0 = call i32 @function_107b4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !366
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_10666 to i32), i32 71852), i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !367

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2, 8, 9, 4, 5, 7, 6 }
  uselistorder i32 0, { 14, 15, 16, 17, 18, 19, 20, 21, 22, 0, 117, 1, 2, 4, 33, 34, 89, 3, 23, 24, 25, 26, 27, 28, 29, 30, 118, 90, 31, 32, 35, 36, 91, 92, 119, 120, 121, 122, 123, 13, 124, 125, 126, 127, 93, 5, 37, 38, 128, 94, 39, 40, 41, 42, 129, 95, 43, 44, 130, 45, 46, 96, 97, 98, 6, 47, 48, 99, 49, 50, 51, 52, 100, 7, 8, 131, 101, 132, 53, 54, 55, 56, 9, 10, 57, 58, 59, 60, 61, 62, 11, 12, 63, 64, 133, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 102, 134, 103, 135, 104, 75, 76, 105, 77, 78, 136, 106, 137, 107, 79, 80, 138, 81, 82, 108, 139, 109, 83, 84, 140, 85, 86, 87, 88, 110, 111, 112, 113, 114, 115, 116 }
}

define i32 @function_118d8() local_unnamed_addr {
dec_label_pc_118d8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !368
}

define i32 @function_118dc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_118dc:
  ret i32 %arg1, !insn.addr !369
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fscanf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare void @bzero(i32*, i32) local_unnamed_addr

declare i8* @inet_ntoa(%in_addr) local_unnamed_addr

declare i32 @select(i32, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %timeval*) local_unnamed_addr

declare i32 @recvfrom(i32, i32*, i32, i32, %sockaddr*, i32*) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcat(i8*, i8*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @gettimeofday(%timeval*, %timezone*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @access(i8*, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @sendto(i32, i32*, i32, i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @htonl(i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @unknown_54c3a() local_unnamed_addr

define i32 @function_250e1a() local_unnamed_addr {
dec_label_pc_250e1a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 8, 7, 36, 63, 64, 15, 65, 66, 19, 18, 17, 16, 21, 20, 67, 37, 68, 70, 38, 39, 69, 51, 50, 49, 48, 25, 24, 23, 22, 26, 35, 54, 53, 52, 40, 41, 55, 27, 71, 28, 72, 29, 73, 42, 56, 30, 43, 44, 57, 10, 45, 46, 58, 9, 31, 59, 32, 6, 61, 60, 12, 5, 33, 4, 3, 2, 34, 14, 13, 11, 1, 0, 62, 47 }
}

declare double @__asm_vmax.f32(double, double) local_unnamed_addr

declare double @__asm_vhadd.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vaddw.s8(fp128, double) local_unnamed_addr

declare fp128 @__asm_vaddl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vsubw.s8(fp128, double) local_unnamed_addr

declare i32 @__asm_mrslt(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare i32 @__asm_nop(i32) local_unnamed_addr

!0 = !{i64 67512}
!1 = !{i64 67516}
!2 = !{i64 67548}
!3 = !{i64 67560}
!4 = !{i64 67572}
!5 = !{i64 67584}
!6 = !{i64 67596}
!7 = !{i64 67608}
!8 = !{i64 67620}
!9 = !{i64 67632}
!10 = !{i64 67644}
!11 = !{i64 67656}
!12 = !{i64 67668}
!13 = !{i64 67680}
!14 = !{i64 67692}
!15 = !{i64 67704}
!16 = !{i64 67716}
!17 = !{i64 67728}
!18 = !{i64 67740}
!19 = !{i64 67752}
!20 = !{i64 67764}
!21 = !{i64 67776}
!22 = !{i64 67788}
!23 = !{i64 67800}
!24 = !{i64 67812}
!25 = !{i64 67824}
!26 = !{i64 67836}
!27 = !{i64 67848}
!28 = !{i64 67860}
!29 = !{i64 67872}
!30 = !{i64 67884}
!31 = !{i64 67896}
!32 = !{i64 67908}
!33 = !{i64 67920}
!34 = !{i64 67932}
!35 = !{i64 67944}
!36 = !{i64 67956}
!37 = !{i64 67968}
!38 = !{i64 68000}
!39 = !{i64 68004}
!40 = !{i64 68010}
!41 = !{i64 68032}
!42 = !{i64 68036}
!43 = !{i64 68040}
!44 = !{i64 68044}
!45 = !{i64 68056}
!46 = !{i64 68064}
!47 = !{i64 68088}
!48 = !{i64 68090}
!49 = !{i64 68094}
!50 = !{i64 68098}
!51 = !{i64 68102}
!52 = !{i64 68106}
!53 = !{i64 68110}
!54 = !{i64 68118}
!55 = !{i64 68122}
!56 = !{i64 68126}
!57 = !{i64 68130}
!58 = !{i64 68132}
!59 = !{i64 68136}
!60 = !{i64 68146}
!61 = !{i64 68148}
!62 = !{i64 68150}
!63 = !{i64 68156}
!64 = !{i64 68158}
!65 = !{i64 68160}
!66 = !{i64 68192}
!67 = !{i64 68216}
!68 = !{i64 68232}
!69 = !{i64 68244}
!70 = !{i64 68264}
!71 = !{i64 68272}
!72 = !{i64 68276}
!73 = !{i64 68280}
!74 = !{i64 68300}
!75 = !{i64 68316}
!76 = !{i64 68332}
!77 = !{i64 68336}
!78 = !{i64 68368}
!79 = !{i64 68380}
!80 = !{i64 68384}
!81 = !{i64 68396}
!82 = !{i64 68404}
!83 = !{i64 68424}
!84 = !{i64 68452}
!85 = !{i64 68460}
!86 = !{i64 68464}
!87 = !{i64 68480}
!88 = !{i64 68488}
!89 = !{i64 68512}
!90 = !{i64 68528}
!91 = !{i64 68536}
!92 = !{i64 68540}
!93 = !{i64 68552}
!94 = !{i64 68584}
!95 = !{i64 68608}
!96 = !{i64 68620}
!97 = !{i64 68624}
!98 = !{i64 68636}
!99 = !{i64 68644}
!100 = !{i64 68660}
!101 = !{i64 68680}
!102 = !{i64 68688}
!103 = !{i64 68692}
!104 = !{i64 68704}
!105 = !{i64 68712}
!106 = !{i64 68720}
!107 = !{i64 68724}
!108 = !{i64 68732}
!109 = !{i64 68744}
!110 = !{i64 68748}
!111 = !{i64 68752}
!112 = !{i64 68792}
!113 = !{i64 68812}
!114 = !{i64 68820}
!115 = !{i64 68832}
!116 = !{i64 68840}
!117 = !{i64 68856}
!118 = !{i64 68872}
!119 = !{i64 68880}
!120 = !{i64 68896}
!121 = !{i64 68928}
!122 = !{i64 68952}
!123 = !{i64 68964}
!124 = !{i64 68968}
!125 = !{i64 68980}
!126 = !{i64 68988}
!127 = !{i64 69004}
!128 = !{i64 69024}
!129 = !{i64 69032}
!130 = !{i64 69036}
!131 = !{i64 69048}
!132 = !{i64 69056}
!133 = !{i64 69064}
!134 = !{i64 69068}
!135 = !{i64 69076}
!136 = !{i64 69088}
!137 = !{i64 69092}
!138 = !{i64 69096}
!139 = !{i64 69136}
!140 = !{i64 69148}
!141 = !{i64 69156}
!142 = !{i64 69172}
!143 = !{i64 69192}
!144 = !{i64 69204}
!145 = !{i64 69208}
!146 = !{i64 69212}
!147 = !{i64 69232}
!148 = !{i64 69244}
!149 = !{i64 69248}
!150 = !{i64 69252}
!151 = !{i64 69256}
!152 = !{i64 69284}
!153 = !{i64 69292}
!154 = !{i64 69296}
!155 = !{i64 69324}
!156 = !{i64 69336}
!157 = !{i64 69340}
!158 = !{i64 69352}
!159 = !{i64 69360}
!160 = !{i64 69384}
!161 = !{i64 69392}
!162 = !{i64 69396}
!163 = !{i64 69408}
!164 = !{i64 69416}
!165 = !{i64 69436}
!166 = !{i64 69448}
!167 = !{i64 69452}
!168 = !{i64 69464}
!169 = !{i64 69472}
!170 = !{i64 69496}
!171 = !{i64 69504}
!172 = !{i64 69508}
!173 = !{i64 69512}
!174 = !{i64 69528}
!175 = !{i64 69540}
!176 = !{i64 69568}
!177 = !{i64 69576}
!178 = !{i64 69600}
!179 = !{i64 69604}
!180 = !{i64 69644}
!181 = !{i64 69652}
!182 = !{i64 69664}
!183 = !{i64 69672}
!184 = !{i64 69680}
!185 = !{i64 69692}
!186 = !{i64 69696}
!187 = !{i64 69700}
!188 = !{i64 69712}
!189 = !{i64 69716}
!190 = !{i64 69748}
!191 = !{i64 69756}
!192 = !{i64 69768}
!193 = !{i64 69776}
!194 = !{i64 69784}
!195 = !{i64 69800}
!196 = !{i64 69804}
!197 = !{i64 69816}
!198 = !{i64 69820}
!199 = !{i64 69844}
!200 = !{i64 69860}
!201 = !{i64 69876}
!202 = !{i64 69880}
!203 = !{i64 69892}
!204 = !{i64 69900}
!205 = !{i64 69908}
!206 = !{i64 69956}
!207 = !{i64 69968}
!208 = !{i64 69972}
!209 = !{i64 69984}
!210 = !{i64 69992}
!211 = !{i64 70008}
!212 = !{i64 70024}
!213 = !{i64 70032}
!214 = !{i64 70048}
!215 = !{i64 70056}
!216 = !{i64 70076}
!217 = !{i64 70092}
!218 = !{i64 70108}
!219 = !{i64 70116}
!220 = !{i64 70132}
!221 = !{i64 70140}
!222 = !{i64 70160}
!223 = !{i64 70172}
!224 = !{i64 70192}
!225 = !{i64 70200}
!226 = !{i64 70204}
!227 = !{i64 70216}
!228 = !{i64 70224}
!229 = !{i64 70236}
!230 = !{i64 70268}
!231 = !{i64 70288}
!232 = !{i64 70308}
!233 = !{i64 70328}
!234 = !{i64 70336}
!235 = !{i64 70340}
!236 = !{i64 70352}
!237 = !{i64 70372}
!238 = !{i64 70384}
!239 = !{i64 70408}
!240 = !{i64 70428}
!241 = !{i64 70440}
!242 = !{i64 70452}
!243 = !{i64 70456}
!244 = !{i64 70472}
!245 = !{i64 70492}
!246 = !{i64 70504}
!247 = !{i64 70516}
!248 = !{i64 70556}
!249 = !{i64 70568}
!250 = !{i64 70572}
!251 = !{i64 70584}
!252 = !{i64 70588}
!253 = !{i64 70608}
!254 = !{i64 70624}
!255 = !{i64 70628}
!256 = !{i64 70652}
!257 = !{i64 70688}
!258 = !{i64 70700}
!259 = !{i64 70704}
!260 = !{i64 70716}
!261 = !{i64 70720}
!262 = !{i64 70732}
!263 = !{i64 70736}
!264 = !{i64 70748}
!265 = !{i64 70752}
!266 = !{i64 70768}
!267 = !{i64 70784}
!268 = !{i64 70812}
!269 = !{i64 70820}
!270 = !{i64 70832}
!271 = !{i64 70836}
!272 = !{i64 70848}
!273 = !{i64 70856}
!274 = !{i64 70868}
!275 = !{i64 70876}
!276 = !{i64 70880}
!277 = !{i64 70888}
!278 = !{i64 70904}
!279 = !{i64 70908}
!280 = !{i64 70924}
!281 = !{i64 70928}
!282 = !{i64 70944}
!283 = !{i64 70964}
!284 = !{i64 70984}
!285 = !{i64 70988}
!286 = !{i64 71012}
!287 = !{i64 71044}
!288 = !{i64 71056}
!289 = !{i64 71060}
!290 = !{i64 71072}
!291 = !{i64 71076}
!292 = !{i64 71088}
!293 = !{i64 71096}
!294 = !{i64 71108}
!295 = !{i64 71112}
!296 = !{i64 71124}
!297 = !{i64 71140}
!298 = !{i64 71144}
!299 = !{i64 71160}
!300 = !{i64 71164}
!301 = !{i64 71168}
!302 = !{i64 71172}
!303 = !{i64 71180}
!304 = !{i64 71228}
!305 = !{i64 71244}
!306 = !{i64 71256}
!307 = !{i64 71268}
!308 = !{i64 71272}
!309 = !{i64 71284}
!310 = !{i64 71288}
!311 = !{i64 71304}
!312 = !{i64 71320}
!313 = !{i64 71332}
!314 = !{i64 71356}
!315 = !{i64 71364}
!316 = !{i64 71368}
!317 = !{i64 71380}
!318 = !{i64 71384}
!319 = !{i64 71396}
!320 = !{i64 71404}
!321 = !{i64 71412}
!322 = !{i64 71424}
!323 = !{i64 71428}
!324 = !{i64 71440}
!325 = !{i64 71448}
!326 = !{i64 71456}
!327 = !{i64 71460}
!328 = !{i64 71472}
!329 = !{i64 71476}
!330 = !{i64 71480}
!331 = !{i64 71496}
!332 = !{i64 71508}
!333 = !{i64 71516}
!334 = !{i64 71524}
!335 = !{i64 71532}
!336 = !{i64 71536}
!337 = !{i64 71548}
!338 = !{i64 71552}
!339 = !{i64 71592}
!340 = !{i64 71600}
!341 = !{i64 71604}
!342 = !{i64 71612}
!343 = !{i64 71620}
!344 = !{i64 71624}
!345 = !{i64 71632}
!346 = !{i64 71648}
!347 = !{i64 71656}
!348 = !{i64 71660}
!349 = !{i64 71664}
!350 = !{i64 71672}
!351 = !{i64 71688}
!352 = !{i64 71752}
!353 = !{i64 71756}
!354 = !{i64 71760}
!355 = !{i64 71768}
!356 = !{i64 71772}
!357 = !{i64 71784}
!358 = !{i64 71788}
!359 = !{i64 71792}
!360 = !{i64 71800}
!361 = !{i64 71804}
!362 = !{i64 71820}
!363 = !{i64 71824}
!364 = !{i64 71828}
!365 = !{i64 71832}
!366 = !{i64 71852}
!367 = !{i64 71884}
!368 = !{i64 71896}
!369 = !{i64 71904}
