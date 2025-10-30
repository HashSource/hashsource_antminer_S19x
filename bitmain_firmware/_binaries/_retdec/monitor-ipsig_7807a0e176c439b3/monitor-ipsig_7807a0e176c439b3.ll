source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%timeval = type { i32, i32 }
%sockaddr = type { i32, [14 x i8] }
%_IO_FILE = type { i32 }
%in_addr = type { i32 }
%_TYPEDEF_fd_set = type { [1 x i32] }
%timezone = type { i32, i32 }

@global_var_2200c = local_unnamed_addr global i32 67488
@global_var_22010 = local_unnamed_addr global i32 67488
@global_var_22014 = local_unnamed_addr global i32 67488
@global_var_22018 = local_unnamed_addr global i32 67488
@global_var_2201c = local_unnamed_addr global i32 67488
@global_var_22020 = local_unnamed_addr global i32 67488
@global_var_22024 = local_unnamed_addr global i32 67488
@global_var_22028 = local_unnamed_addr global i32 67488
@global_var_2202c = local_unnamed_addr global i32 67488
@global_var_22030 = local_unnamed_addr global i32 67488
@global_var_22034 = local_unnamed_addr global i32 67488
@global_var_22038 = local_unnamed_addr global i32 67488
@global_var_2203c = local_unnamed_addr global i32 67488
@global_var_22040 = local_unnamed_addr global i32 67488
@global_var_22044 = local_unnamed_addr global i32 67488
@global_var_22048 = local_unnamed_addr global i32 67488
@global_var_2204c = local_unnamed_addr global i32 67488
@global_var_22050 = local_unnamed_addr global i32 67488
@global_var_22054 = local_unnamed_addr global i32 67488
@global_var_22058 = local_unnamed_addr global i32 67488
@global_var_2205c = local_unnamed_addr global i32 67488
@global_var_22060 = local_unnamed_addr global i32 67488
@global_var_22064 = local_unnamed_addr global i32 67488
@global_var_22068 = local_unnamed_addr global i32 67488
@global_var_2206c = local_unnamed_addr global i32 67488
@global_var_22070 = local_unnamed_addr global i32 67488
@global_var_22074 = local_unnamed_addr global i32 67488
@global_var_22078 = local_unnamed_addr global i32 67488
@global_var_2207c = local_unnamed_addr global i32 67488
@global_var_22080 = local_unnamed_addr global i32 67488
@global_var_22084 = local_unnamed_addr global i32 67488
@global_var_22088 = local_unnamed_addr global i32 67488
@global_var_2208c = local_unnamed_addr global i32 67488
@global_var_22090 = local_unnamed_addr global i32 67488
@global_var_22094 = local_unnamed_addr global i32 67488
@global_var_11780 = constant [9 x i8] c"17:22:05\00"
@global_var_1178c = constant [12 x i8] c"Feb  5 2025\00"
@global_var_11798 = constant [30 x i8] c"monitor-ipsig compile %s--%s\0A\00"
@global_var_117b8 = constant [14 x i8] c"Key Down!!!!!\00"
@global_var_10a14 = local_unnamed_addr constant i32 71160
@global_var_115f8 = constant [15 x i8] c"o/gpio%d/value\00"
@global_var_10a18 = local_unnamed_addr constant i32 152
@global_var_10a08 = constant i32 -481165312
@global_var_11588 = constant [4 x i8] c"%ld\00"
@global_var_11594 = constant [21 x i8] c":No Such Device %s/n\00"
@global_var_1158c = constant [7 x i8] c"socket\00"
@global_var_115b4 = constant [30 x i8] c"%02X:%02X:%02X:%02X:%02X:%02X\00"
@global_var_115d4 = local_unnamed_addr constant [5 x i8] c"MAC=\00"
@global_var_115ac = constant [6 x i8] c"ioctl\00"
@global_var_115e0 = constant [39 x i8] c"echo %d > /sys/class/gpio/gpio%d/value\00"
@global_var_11608 = constant [23 x i8] c"/sys/class/gpio/gpio%d\00"
@global_var_11624 = constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_1161c = constant [3 x i8] c"%d\00"
@global_var_11668 = constant [29 x i8] c"/sys/class/gpio/gpio%d/value\00"
@global_var_1168c = constant [34 x i8] c"Open read recovery button failure\00"
@global_var_11654 = constant [18 x i8] c"File Write Error!\00"
@global_var_1163c = constant [22 x i8] c"Open read gpio/export\00"
@global_var_220a4 = local_unnamed_addr global i32 -1
@global_var_220d8 = local_unnamed_addr global i32 0
@global_var_220dc = local_unnamed_addr global i32 0
@global_var_220e0 = local_unnamed_addr global i32 0
@global_var_220ec = local_unnamed_addr global i32 0
@global_var_220f0 = local_unnamed_addr global i32 0
@global_var_220e8 = local_unnamed_addr global i32 0
@global_var_116c0 = constant [20 x i8] c"set socket error...\00"
@global_var_116b0 = constant [13 x i8] c"socket error\00"
@global_var_116d4 = constant [14 x i8] c"bind error...\00"
@global_var_116e4 = constant [5 x i8] c"eth0\00"
@global_var_1170c = constant [16 x i8] c"send ipmac:\0A%s\0A\00"
@global_var_116ec = constant [13 x i8] c"get IP error\00"
@global_var_116fc = constant [15 x i8] c"send error....\00"
@global_var_220cc = local_unnamed_addr global i32 0
@global_var_11774 = constant [9 x i8] c"Time Out\00"
@global_var_1172c = constant [15 x i8] c"read error....\00"
@global_var_1173c = constant [9 x i8] c"rev:\0A%s\09\00"
@global_var_11748 = constant [15 x i8] c"send_ack(\221\22);\00"
@global_var_11758 = constant [3 x i8] c"OK\00"
@global_var_1175c = constant [15 x i8] c"send_ack(\220\22);\00"
@global_var_1176c = constant [6 x i8] c"FAILD\00"
@global_var_11570 = local_unnamed_addr constant i32 68038
@global_var_11574 = local_unnamed_addr constant i32 68028
@global_var_21f10 = global i32 68229
@0 = external global i32
@global_var_109f0 = local_unnamed_addr constant void ()* inttoptr (i32 67928 to void ()*)
@global_var_109f4 = local_unnamed_addr constant void ()* inttoptr (i32 70973 to void ()*)
@global_var_220a8 = external local_unnamed_addr global i8*
@global_var_115dc = local_unnamed_addr constant i16 44
@1 = internal constant [2 x i8] c"w\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@global_var_220d4 = global %timeval* null
@global_var_220e4 = global %sockaddr* null
@global_var_220ac = external global i8*
@global_var_11620 = constant [2 x i8] c"w\00"
@global_var_11688 = constant [2 x i8] c"r\00"

define i32 @function_10794(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10794:
  %0 = call i32 @function_109f8(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_107b4(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_107b4:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_107c0(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_107c0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107cc(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107cc:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_107d8(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_107d8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* %stream, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_107e4(i32* %ptr) local_unnamed_addr {
dec_label_pc_107e4:
  call void @free(i32* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32* @function_107f0(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_107f0:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i8* @function_107fc(%in_addr %arg1) local_unnamed_addr {
dec_label_pc_107fc:
  %0 = call i8* @inet_ntoa(%in_addr %arg1), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10808(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @select(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @function_10814(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i8* @stpcpy(i8* %dest, i8* %src), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define i32 @function_10820(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32 @recvfrom(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_1082c(i8* %s) local_unnamed_addr {
dec_label_pc_1082c:
  call void @perror(i8* %s), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_10838(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10838:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10844(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10844:
  %0 = call i8* @strcat(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10850(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1085c(i32 %useconds) local_unnamed_addr {
dec_label_pc_1085c:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i8* @function_10868(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !17
  ret i8* %0, !insn.addr !17
}

define i32 @function_10874(%timeval* %tv, %timezone* %tz) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i32 @gettimeofday(%timeval* %tv, %timezone* %tz), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_10880(i8* %s) local_unnamed_addr {
dec_label_pc_10880:
  %0 = call i32 @puts(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1088c(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10898(i8* %command) local_unnamed_addr {
dec_label_pc_10898:
  %0 = call i32 @system(i8* %command), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @function_108a4() local_unnamed_addr {
dec_label_pc_108a4:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_108b0(i32 %status) local_unnamed_addr {
dec_label_pc_108b0:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_108bc(i8* %s) local_unnamed_addr {
dec_label_pc_108bc:
  %0 = call i32 @strlen(i8* %s), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108c8(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @function_108d4(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_108d4:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i8* @function_108e0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_108e0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_108ec(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_108ec:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_108f8(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_108f8:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_10904(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len) local_unnamed_addr {
dec_label_pc_10904:
  %0 = call i32 @sendto(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_10910(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10910:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define %_IO_FILE* @function_1091c(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_1091c:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !32
  ret %_IO_FILE* %0, !insn.addr !32
}

define i32 @function_10928(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10928:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_10934(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10934:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_10940() local_unnamed_addr {
dec_label_pc_10940:
  call void @abort(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_1094c(i32 %fd) local_unnamed_addr {
dec_label_pc_1094c:
  %0 = call i32 @close(i32 %fd), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10958() local_unnamed_addr {
dec_label_pc_10958:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11798, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_1178c, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11780, i32 0, i32 0)), !insn.addr !37
  %1 = call i32 @function_10fe8(), !insn.addr !38
  br label %dec_label_pc_1098c, !insn.addr !38

dec_label_pc_1098c:                               ; preds = %dec_label_pc_109ac, %dec_label_pc_10958
  %2 = call i32 @function_114a8(), !insn.addr !39
  %3 = icmp eq i32 %2, 1, !insn.addr !40
  br i1 %3, label %dec_label_pc_109ac.preheader, label %dec_label_pc_10998, !insn.addr !41

dec_label_pc_10998:                               ; preds = %dec_label_pc_1098c, %dec_label_pc_10998
  %4 = call i32 @usleep(i32 400000), !insn.addr !42
  %5 = call i32 @function_114a8(), !insn.addr !43
  %6 = icmp eq i32 %5, 1, !insn.addr !44
  br i1 %6, label %dec_label_pc_109ac.preheader, label %dec_label_pc_10998, !insn.addr !45

dec_label_pc_109ac.preheader:                     ; preds = %dec_label_pc_10998, %dec_label_pc_1098c
  br label %dec_label_pc_109ac

dec_label_pc_109ac:                               ; preds = %dec_label_pc_109ac.preheader, %dec_label_pc_109ac
  %7 = call i32 @puts(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_117b8, i32 0, i32 0)), !insn.addr !46
  %8 = call i32 @function_110ec(), !insn.addr !47
  %9 = call i32 @function_11274(), !insn.addr !48
  %10 = icmp eq i32 %9, 1, !insn.addr !49
  br i1 %10, label %dec_label_pc_1098c, label %dec_label_pc_109ac, !insn.addr !50

; uselistorder directives
  uselistorder i32 ()* @function_114a8, { 1, 0 }
  uselistorder label %dec_label_pc_109ac, { 1, 0 }
  uselistorder label %dec_label_pc_10998, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_109c8:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !51
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !51
  %2 = call i32 @__libc_start_main(i32 67928, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70973 to void ()*), void ()* inttoptr (i32 67928 to void ()*), void ()* %1), !insn.addr !51
  call void @abort(), !insn.addr !52
  unreachable, !insn.addr !52
}

define i32 @function_109ec(i32 %arg1) local_unnamed_addr {
dec_label_pc_109ec:
  ret i32 %arg1, !insn.addr !53
}

define i32 @function_109f8() local_unnamed_addr {
dec_label_pc_109f8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10a08 to i32), i32 ptrtoint ([15 x i8]* @global_var_115f8 to i32)), i32 152) to i32*), align 4, !insn.addr !54
  %3 = icmp eq i32 %2, 0, !insn.addr !55
  br i1 %3, label %4, label %dec_label_pc_10a10, !insn.addr !56

; <label>:4:                                      ; preds = %dec_label_pc_109f8
  ret i32 %1, !insn.addr !56

dec_label_pc_10a10:                               ; preds = %dec_label_pc_109f8
  call void @__gmon_start__(), !insn.addr !57
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !57
}

define i32 @function_10a1c(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10a1c:
  ret i32 %arg1, !insn.addr !58
}

define i32 @function_10a22(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a22:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = mul i32 %1, 16384, !insn.addr !59
  %3 = or i32 %2, 131072, !insn.addr !60
  ret i32 %3, !insn.addr !61
}

define i32 @function_10a3e() local_unnamed_addr {
dec_label_pc_10a3e:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %r0.0.reg2mem = alloca i32, !insn.addr !62
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
  %15 = call double @__asm_vmax.f32(double %13, double %14), !insn.addr !62
  %16 = call double @__asm_vhadd.s8(double %11, double %10), !insn.addr !63
  %17 = call fp128 @__asm_vaddw.s8(fp128 %8, double %10), !insn.addr !64
  %18 = call fp128 @__asm_vaddl.s8(double %14, double %13), !insn.addr !65
  br i1 %6, label %dec_label_pc_10a52, label %19, !insn.addr !66

; <label>:19:                                     ; preds = %dec_label_pc_10a3e
  %20 = call i32 @function_250e5e(), !insn.addr !66
  br label %dec_label_pc_10a52, !insn.addr !66

dec_label_pc_10a52:                               ; preds = %dec_label_pc_10a3e, %19
  %21 = call i32 @unknown_54c7e(), !insn.addr !67
  %22 = call double @__asm_vhadd.s8(double %14, double %12), !insn.addr !68
  %23 = call fp128 @__asm_vsubw.s8(fp128 %9, double %14), !insn.addr !69
  %24 = icmp eq i1 %7, %5, !insn.addr !70
  store i32 %21, i32* %r0.0.reg2mem, !insn.addr !70
  br i1 %24, label %27, label %25, !insn.addr !70

; <label>:25:                                     ; preds = %dec_label_pc_10a52
  %26 = call i32 @__asm_mrslt(i32 %4), !insn.addr !70
  store i32 %26, i32* %r0.0.reg2mem, !insn.addr !70
  br label %27, !insn.addr !70

; <label>:27:                                     ; preds = %dec_label_pc_10a52, %25
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !70

; uselistorder directives
  uselistorder double %14, { 2, 3, 1, 0 }
  uselistorder double %13, { 1, 0 }
  uselistorder double* %3, { 4, 3, 2, 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %27, { 1, 0 }
  uselistorder label %dec_label_pc_10a52, { 1, 0 }
}

define i32 @function_10a66() local_unnamed_addr {
dec_label_pc_10a66:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !71
}

define i32 @function_10a68() local_unnamed_addr {
dec_label_pc_10a68:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !72
}

define i32 @function_10a6c() local_unnamed_addr {
dec_label_pc_10a6c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !73
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_220a8 to i8*), align 4, !insn.addr !74
  %5 = icmp eq i8 %4, 0, !insn.addr !75
  br i1 %5, label %dec_label_pc_10a7a, label %dec_label_pc_10a82, !insn.addr !75

dec_label_pc_10a7a:                               ; preds = %dec_label_pc_10a6c
  %6 = call i32 @function_10a1c(i32 %3, i32 %2, i32 %1), !insn.addr !76
  store i8 1, i8* bitcast (i8** @global_var_220a8 to i8*), align 4, !insn.addr !77
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !77
  br label %dec_label_pc_10a82, !insn.addr !77

dec_label_pc_10a82:                               ; preds = %dec_label_pc_10a6c, %dec_label_pc_10a7a
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !78

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_10a82, { 1, 0 }
}

define i32 @function_10a84(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a84:
  %0 = alloca i32
  %1 = alloca i1
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i32, i32* %0
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %5 = icmp eq i1 %3, %2, !insn.addr !79
  br i1 %5, label %7, label %6, !insn.addr !79

; <label>:6:                                      ; preds = %dec_label_pc_10a84
  call void @__asm_svclt(i32 59356), !insn.addr !79
  br label %7, !insn.addr !79

; <label>:7:                                      ; preds = %dec_label_pc_10a84, %6
  %8 = bitcast i32* %stack_var_-16 to %timeval*, !insn.addr !80
  %9 = call i32 @gettimeofday(%timeval* nonnull %8, %timezone* null), !insn.addr !80
  %10 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !81
  %11 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %10, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_11588, i32 0, i32 0), i32 %4), !insn.addr !81
  %12 = inttoptr i32 %arg1 to i32*, !insn.addr !82
  store i32 0, i32* %12, align 4, !insn.addr !82
  %13 = add i32 %arg1, 4, !insn.addr !83
  %14 = inttoptr i32 %13 to i32*, !insn.addr !83
  store i32 0, i32* %14, align 4, !insn.addr !83
  %15 = add i32 %arg1, 8, !insn.addr !84
  %16 = inttoptr i32 %15 to i16*, !insn.addr !84
  store i16 0, i16* %16, align 2, !insn.addr !84
  %17 = call i32 @strlen(i8* nonnull %10), !insn.addr !85
  %18 = sub i32 6, %17, !insn.addr !86
  %19 = urem i32 %18, 256, !insn.addr !87
  %20 = icmp eq i32 %19, 0, !insn.addr !87
  br i1 %20, label %dec_label_pc_10ae4, label %dec_label_pc_10ad8, !insn.addr !88

dec_label_pc_10ad8:                               ; preds = %7
  %21 = call i32* @memset(i32* %12, i32 48, i32 %19), !insn.addr !89
  br label %dec_label_pc_10ae4, !insn.addr !89

dec_label_pc_10ae4:                               ; preds = %dec_label_pc_10ad8, %7
  %22 = inttoptr i32 %arg1 to i8*, !insn.addr !90
  %23 = call i8* @strcat(i8* %22, i8* nonnull %10), !insn.addr !90
  ret i32 %arg1, !insn.addr !91

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder i1* %1, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3, 4 }
  uselistorder label %7, { 1, 0 }
}

define i32 @function_10afc(i8* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_10afc:
  %0 = alloca i32
  %r4.0.reg2mem = alloca i32, !insn.addr !92
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !93
  %3 = icmp eq i32 %2, -1, !insn.addr !94
  br i1 %3, label %dec_label_pc_10bac, label %dec_label_pc_10b28, !insn.addr !95

dec_label_pc_10b28:                               ; preds = %dec_label_pc_10afc
  %4 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !96
  %5 = call i8* @strncpy(i8* nonnull %4, i8* %arg1, i32 20), !insn.addr !96
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 35093), !insn.addr !97
  %7 = icmp slt i32 %6, 0, !insn.addr !98
  br i1 %7, label %dec_label_pc_10b94, label %dec_label_pc_10b58, !insn.addr !99

dec_label_pc_10b58:                               ; preds = %dec_label_pc_10b28
  %8 = insertvalue %in_addr undef, i32 %1, 0, !insn.addr !100
  %9 = call i8* @inet_ntoa(%in_addr %8), !insn.addr !100
  %10 = bitcast i32* %arg2 to i8*, !insn.addr !101
  %11 = call i8* @strcpy(i8* %10, i8* %9), !insn.addr !101
  %12 = call i32 @close(i32 %2), !insn.addr !102
  store i32 1, i32* %r4.0.reg2mem, !insn.addr !102
  br label %dec_label_pc_10b88, !insn.addr !102

dec_label_pc_10b88:                               ; preds = %dec_label_pc_10bac, %dec_label_pc_10b94, %dec_label_pc_10b58
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !103

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10b28
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11594, i32 0, i32 0), i8* %arg1), !insn.addr !104
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_10b88, !insn.addr !105

dec_label_pc_10bac:                               ; preds = %dec_label_pc_10afc
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1158c, i32 0, i32 0)), !insn.addr !106
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_10b88, !insn.addr !107

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
}

define i32 @function_10bbc(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bbc:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !108
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !109
  %9 = icmp slt i32 %8, 0, !insn.addr !110
  br i1 %9, label %dec_label_pc_10cac, label %dec_label_pc_10bf4, !insn.addr !111

dec_label_pc_10bf4:                               ; preds = %dec_label_pc_10bbc
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !112
  %11 = inttoptr i32 %arg2 to i8*, !insn.addr !112
  %12 = call i8* @strcpy(i8* nonnull %10, i8* %11), !insn.addr !112
  %13 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !113
  %14 = icmp slt i32 %13, 0, !insn.addr !114
  br i1 %14, label %dec_label_pc_10c98, label %dec_label_pc_10c18, !insn.addr !115

dec_label_pc_10c18:                               ; preds = %dec_label_pc_10bf4
  %15 = call i32 @close(i32 %8), !insn.addr !116
  %16 = zext i8 %6 to i32, !insn.addr !117
  %17 = zext i8 %5 to i32, !insn.addr !118
  %18 = zext i8 %4 to i32, !insn.addr !119
  %19 = zext i8 %2 to i32, !insn.addr !120
  %20 = zext i8 %1 to i32, !insn.addr !121
  %21 = bitcast i32* %7 to i8*, !insn.addr !122
  %22 = sext i8 %3 to i32, !insn.addr !122
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115b4, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %17, i32 %16, i32 %18), !insn.addr !122
  %24 = inttoptr i32 %arg1 to i32*, !insn.addr !123
  store i32 1027817805, i32* %24, align 4, !insn.addr !123
  %25 = add i32 %arg1, 4, !insn.addr !123
  %26 = inttoptr i32 %25 to i8*, !insn.addr !124
  %27 = call i8* @stpcpy(i8* %26, i8* %21), !insn.addr !124
  %28 = bitcast i8* %27 to i16*, !insn.addr !125
  store i16 44, i16* %28, align 2, !insn.addr !125
  call void @free(i32* %7), !insn.addr !126
  ret i32 %arg1, !insn.addr !127

dec_label_pc_10c98:                               ; preds = %dec_label_pc_10bf4
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_115ac, i32 0, i32 0)), !insn.addr !128
  call void @exit(i32 0), !insn.addr !129
  unreachable, !insn.addr !129

dec_label_pc_10cac:                               ; preds = %dec_label_pc_10bbc
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1158c, i32 0, i32 0)), !insn.addr !130
  call void @exit(i32 0), !insn.addr !131
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !131

; uselistorder directives
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10cc0(i32* %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_10cc0:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !132
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !133
  %9 = icmp slt i32 %8, 0, !insn.addr !134
  br i1 %9, label %dec_label_pc_10d8c, label %dec_label_pc_10cf8, !insn.addr !135

dec_label_pc_10cf8:                               ; preds = %dec_label_pc_10cc0
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !136
  %11 = call i8* @strcpy(i8* nonnull %10, i8* %arg2), !insn.addr !136
  %12 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !137
  %13 = icmp slt i32 %12, 0, !insn.addr !138
  br i1 %13, label %dec_label_pc_10d78, label %dec_label_pc_10d1c, !insn.addr !139

dec_label_pc_10d1c:                               ; preds = %dec_label_pc_10cf8
  %14 = ptrtoint i32* %arg1 to i32
  %15 = call i32 @close(i32 %8), !insn.addr !140
  %16 = zext i8 %6 to i32, !insn.addr !141
  %17 = zext i8 %5 to i32, !insn.addr !142
  %18 = zext i8 %4 to i32, !insn.addr !143
  %19 = zext i8 %2 to i32, !insn.addr !144
  %20 = zext i8 %1 to i32, !insn.addr !145
  %21 = bitcast i32* %7 to i8*, !insn.addr !146
  %22 = sext i8 %3 to i32, !insn.addr !146
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_115b4, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %17, i32 %16, i32 %18), !insn.addr !146
  %24 = bitcast i32* %arg1 to i8*, !insn.addr !147
  %25 = call i8* @strcpy(i8* %24, i8* %21), !insn.addr !147
  call void @free(i32* %7), !insn.addr !148
  ret i32 %14, !insn.addr !149

dec_label_pc_10d78:                               ; preds = %dec_label_pc_10cf8
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_115ac, i32 0, i32 0)), !insn.addr !150
  call void @exit(i32 0), !insn.addr !151
  unreachable, !insn.addr !151

dec_label_pc_10d8c:                               ; preds = %dec_label_pc_10cc0
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1158c, i32 0, i32 0)), !insn.addr !152
  call void @exit(i32 0), !insn.addr !153
  unreachable, !insn.addr !153

; uselistorder directives
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder void (i8*)* @perror, { 2, 1, 4, 3, 0, 5 }
  uselistorder i32 (i32)* @close, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 3, 0, 4 }
}

define i32 @function_10da0(i32 %arg1) local_unnamed_addr {
dec_label_pc_10da0:
  %stack_var_-80 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-80, i32 0, i32 64), !insn.addr !154
  %1 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !155
  %2 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_115e0, i32 0, i32 0), i32 %arg1, i32 941), !insn.addr !155
  %3 = call i32 @system(i8* nonnull %1), !insn.addr !156
  %4 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_115e0, i32 0, i32 0), i32 %arg1, i32 942), !insn.addr !157
  %5 = call i32 @system(i8* nonnull %1), !insn.addr !158
  ret i32 %5, !insn.addr !159
}

define i32 @function_10e04() local_unnamed_addr {
dec_label_pc_10e04:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !160
  %3 = call i32 @access(i8* %2, i32 0), !insn.addr !160
  ret i32 0, !insn.addr !161
}

define i32 @function_10e1c() local_unnamed_addr {
dec_label_pc_10e1c:
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-72, i32 0, i32 64), !insn.addr !162
  %1 = bitcast i32* %stack_var_-72 to i8*, !insn.addr !163
  %2 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11608, i32 0, i32 0), i32 943), !insn.addr !163
  %3 = call i32 @access(i8* nonnull %1, i32 0), !insn.addr !164
  %4 = icmp eq i32 %3, 0, !insn.addr !165
  br i1 %4, label %dec_label_pc_10eb8, label %dec_label_pc_10e5c, !insn.addr !166

dec_label_pc_10e5c:                               ; preds = %dec_label_pc_10e1c
  %5 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11624, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11620, i32 0, i32 0)), !insn.addr !167
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !168
  br i1 %6, label %dec_label_pc_10f40, label %dec_label_pc_10e78, !insn.addr !169

dec_label_pc_10e78:                               ; preds = %dec_label_pc_10e5c
  %7 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1161c, i32 0, i32 0), i32 943), !insn.addr !170
  %8 = call i32 @strlen(i8* nonnull %1), !insn.addr !171
  %9 = call i32 @fwrite(i32* nonnull %stack_var_-72, i32 %8, i32 1, %_IO_FILE* nonnull %5), !insn.addr !172
  %10 = icmp eq i32 %9, 1, !insn.addr !173
  br i1 %10, label %dec_label_pc_10eb0, label %dec_label_pc_10f28, !insn.addr !174

dec_label_pc_10eb0:                               ; preds = %dec_label_pc_10e78
  %11 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !175
  br label %dec_label_pc_10eb8, !insn.addr !175

dec_label_pc_10eb8:                               ; preds = %dec_label_pc_10f28, %dec_label_pc_10eb0, %dec_label_pc_10e1c
  %12 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11668, i32 0, i32 0), i32 943), !insn.addr !176
  %13 = call %_IO_FILE* @fopen64(i8* nonnull %1, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11688, i32 0, i32 0)), !insn.addr !177
  %14 = icmp eq %_IO_FILE* %13, null, !insn.addr !178
  br i1 %14, label %dec_label_pc_10f10, label %dec_label_pc_10ee4, !insn.addr !179

dec_label_pc_10ee4:                               ; preds = %dec_label_pc_10eb8
  %15 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* nonnull %13, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1161c, i32 0, i32 0), i32* nonnull %stack_var_-76), !insn.addr !180
  %16 = call i32 @fclose(%_IO_FILE* nonnull %13), !insn.addr !181
  %17 = load i32, i32* %stack_var_-76, align 4, !insn.addr !182
  %18 = icmp ne i32 %17, 0, !insn.addr !183
  %spec.select = zext i1 %18 to i32
  ret i32 %spec.select, !insn.addr !184

dec_label_pc_10f10:                               ; preds = %dec_label_pc_10eb8
  %19 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_1168c, i32 0, i32 0)), !insn.addr !185
  ret i32 1, !insn.addr !186

dec_label_pc_10f28:                               ; preds = %dec_label_pc_10e78
  %20 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11654, i32 0, i32 0)), !insn.addr !187
  %21 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !188
  br label %dec_label_pc_10eb8, !insn.addr !189

dec_label_pc_10f40:                               ; preds = %dec_label_pc_10e5c
  %22 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_1163c, i32 0, i32 0)), !insn.addr !190
  ret i32 1, !insn.addr !191

; uselistorder directives
  uselistorder %_IO_FILE* %5, { 1, 0, 2, 3 }
  uselistorder i8* %1, { 2, 3, 0, 1, 4, 5 }
  uselistorder i32* %stack_var_-76, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 2 }
}

define i32 @function_10f58(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f58:
  %r4.0.reg2mem = alloca i32, !insn.addr !192
  %stack_var_-80 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-80, i32 0, i32 64), !insn.addr !193
  %1 = icmp eq i32 %arg1, 0, !insn.addr !194
  %spec.select = select i1 %1, i32 941, i32 942
  %2 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !195
  store i32 3, i32* %r4.0.reg2mem, !insn.addr !196
  br label %dec_label_pc_10f90, !insn.addr !196

dec_label_pc_10f90:                               ; preds = %dec_label_pc_10f90, %dec_label_pc_10f58
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %3 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_115e0, i32 0, i32 0), i32 1, i32 %spec.select), !insn.addr !195
  %4 = call i32 @system(i8* nonnull %2), !insn.addr !197
  %5 = call i32 @usleep(i32 50000), !insn.addr !198
  %6 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_115e0, i32 0, i32 0), i32 0, i32 %spec.select), !insn.addr !199
  %7 = call i32 @system(i8* nonnull %2), !insn.addr !200
  %8 = call i32 @usleep(i32 50000), !insn.addr !201
  %9 = add nsw i32 %r4.0.reload, -1, !insn.addr !202
  %10 = icmp eq i32 %r4.0.reload, 1, !insn.addr !202
  store i32 %9, i32* %r4.0.reg2mem, !insn.addr !203
  br i1 %10, label %dec_label_pc_10fe0, label %dec_label_pc_10f90, !insn.addr !203

dec_label_pc_10fe0:                               ; preds = %dec_label_pc_10f90
  ret i32 %8, !insn.addr !204

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %spec.select, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*)* @system, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 9, 3, 6, 5, 4, 2, 1, 0, 8, 7, 10 }
}

define i32 @function_10fe8() local_unnamed_addr {
dec_label_pc_10fe8:
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !205
  %1 = icmp eq i32 %0, -1, !insn.addr !206
  store i32 %0, i32* @global_var_220a4, align 4, !insn.addr !207
  br i1 %1, label %dec_label_pc_110c0, label %dec_label_pc_11014, !insn.addr !208

dec_label_pc_11014:                               ; preds = %dec_label_pc_10fe8
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !209
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 6, i32* nonnull %stack_var_-20, i32 4), !insn.addr !210
  %3 = icmp eq i32 %2, -1, !insn.addr !211
  br i1 %3, label %dec_label_pc_110a8, label %dec_label_pc_1103c, !insn.addr !212

dec_label_pc_1103c:                               ; preds = %dec_label_pc_11014
  %4 = load i32, i32* @global_var_220a4, align 4, !insn.addr !213
  store i32 -1674117118, i32* bitcast (%timeval** @global_var_220d4 to i32*), align 4, !insn.addr !214
  store i32 0, i32* @global_var_220d8, align 4, !insn.addr !215
  store i32 0, i32* @global_var_220dc, align 4, !insn.addr !216
  store i32 0, i32* @global_var_220e0, align 4, !insn.addr !217
  store i32 0, i32* @global_var_220ec, align 4, !insn.addr !218
  store i32 0, i32* @global_var_220f0, align 4, !insn.addr !219
  store i32 -1690894334, i32* bitcast (%sockaddr** @global_var_220e4 to i32*), align 4, !insn.addr !220
  store i32 -1, i32* @global_var_220e8, align 4, !insn.addr !221
  %5 = call i32 @bind(i32 %4, %sockaddr* bitcast (%timeval** @global_var_220d4 to %sockaddr*), i32 16), !insn.addr !222
  %6 = icmp eq i32 %5, -1, !insn.addr !223
  br i1 %6, label %dec_label_pc_110dc, label %dec_label_pc_1109c, !insn.addr !224

dec_label_pc_1109c:                               ; preds = %dec_label_pc_110dc, %dec_label_pc_1103c
  ret i32 0, !insn.addr !225

dec_label_pc_110a8:                               ; preds = %dec_label_pc_11014
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_116c0, i32 0, i32 0)), !insn.addr !226
  ret i32 -1, !insn.addr !227

dec_label_pc_110c0:                               ; preds = %dec_label_pc_10fe8
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_116b0, i32 0, i32 0)), !insn.addr !228
  ret i32 -1, !insn.addr !229

dec_label_pc_110dc:                               ; preds = %dec_label_pc_1103c
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_116d4, i32 0, i32 0)), !insn.addr !230
  br label %dec_label_pc_1109c, !insn.addr !231

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32 (i32, i32, i32)* @socket, { 0, 2, 3, 1, 4 }
}

define i32 @function_110ec() local_unnamed_addr {
dec_label_pc_110ec:
  %stack_var_-156 = alloca i32, align 4
  %stack_var_-116 = alloca i32, align 4
  %stack_var_-188 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-188, i32 0, i32 30), !insn.addr !232
  %1 = call i32* @memset(i32* nonnull %stack_var_-156, i32 0, i32 40), !insn.addr !233
  %2 = call i32* @memset(i32* nonnull %stack_var_-116, i32 0, i32 100), !insn.addr !234
  %3 = call i32 @function_10afc(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_116e4, i32 0, i32 0), i32* nonnull %stack_var_-156), !insn.addr !235
  %4 = icmp eq i32 %3, 0, !insn.addr !236
  br i1 %4, label %dec_label_pc_111f4, label %dec_label_pc_11140, !insn.addr !237

dec_label_pc_11140:                               ; preds = %dec_label_pc_111f4, %dec_label_pc_110ec
  %5 = ptrtoint i32* %stack_var_-116 to i32, !insn.addr !238
  %6 = call i32 @function_10cc0(i32* nonnull %stack_var_-188, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_116e4, i32 0, i32 0)), !insn.addr !239
  %7 = bitcast i32* %stack_var_-188 to i8*, !insn.addr !240
  %8 = call i32 @strlen(i8* nonnull %7), !insn.addr !240
  %9 = call i8* @strncpy(i8* bitcast (i8** @global_var_220ac to i8*), i8* nonnull %7, i32 %8), !insn.addr !241
  %10 = bitcast i32* %stack_var_-116 to i8*, !insn.addr !242
  %11 = bitcast i32* %stack_var_-156 to i8*, !insn.addr !242
  %12 = call i8* @stpcpy(i8* nonnull %10, i8* nonnull %11), !insn.addr !242
  %13 = ptrtoint i8* %12 to i32, !insn.addr !242
  store i8 44, i8* %12, align 1, !insn.addr !243
  %14 = add i32 %8, 1
  %15 = add i32 %13, 1, !insn.addr !244
  %16 = inttoptr i32 %15 to i32*, !insn.addr !245
  %17 = call i32* @memcpy(i32* %16, i32* nonnull %stack_var_-188, i32 %14), !insn.addr !245
  %18 = load i32, i32* @global_var_220a4, align 4, !insn.addr !246
  %19 = sub i32 %14, %5, !insn.addr !247
  %20 = add i32 %19, %13, !insn.addr !248
  %21 = call i32 @sendto(i32 %18, i32* nonnull %stack_var_-116, i32 %20, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e4 to %sockaddr*), i32 16), !insn.addr !249
  %22 = icmp slt i32 %21, 0, !insn.addr !250
  br i1 %22, label %dec_label_pc_11204, label %dec_label_pc_111d8, !insn.addr !251

dec_label_pc_111d8:                               ; preds = %dec_label_pc_11140
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1170c, i32 0, i32 0), i32* nonnull %stack_var_-116), !insn.addr !252
  ret i32 1, !insn.addr !253

dec_label_pc_111f4:                               ; preds = %dec_label_pc_110ec
  %24 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_116ec, i32 0, i32 0)), !insn.addr !254
  br label %dec_label_pc_11140, !insn.addr !255

dec_label_pc_11204:                               ; preds = %dec_label_pc_11140
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_116fc, i32 0, i32 0)), !insn.addr !256
  ret i32 1, !insn.addr !257

; uselistorder directives
  uselistorder i32* %stack_var_-116, { 0, 1, 2, 4, 3 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 3, 2, 1, 0, 5, 4, 6, 7 }
}

define i32 @function_1121c(i8* %arg1) local_unnamed_addr {
dec_label_pc_1121c:
  %0 = load i32, i32* @global_var_220a4, align 4, !insn.addr !258
  %1 = bitcast i8* %arg1 to i32*, !insn.addr !259
  %2 = call i32 @sendto(i32 %0, i32* %1, i32 10, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_220e4 to %sockaddr*), i32 16), !insn.addr !259
  %3 = icmp slt i32 %2, 0, !insn.addr !260
  %4 = icmp eq i1 %3, false, !insn.addr !261
  %.op = urem i32 %2, 65536
  %.op.op = or i32 %.op, 65536
  %spec.select.op.op = select i1 %3, i32 71420, i32 %.op.op
  %5 = inttoptr i32 %spec.select.op.op to i8*
  %6 = select i1 %4, i8* inttoptr (i32 71452 to i8*), i8* %5, !insn.addr !262
  %7 = call i32 (i8*, ...) @printf(i8* nonnull %6), !insn.addr !262
  ret i32 %7, !insn.addr !262

; uselistorder directives
  uselistorder i32 65536, { 1, 0 }
  uselistorder i32 (i32, i32*, i32, i32, %sockaddr*, i32)* @sendto, { 1, 0, 2 }
}

define i32 @function_11274() local_unnamed_addr {
dec_label_pc_11274:
  %r0.0.reg2mem = alloca i32, !insn.addr !263
  %r3.0.reg2mem = alloca i32, !insn.addr !263
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-156 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !264
  store i32 0, i32* %stack_var_-156, align 4, !insn.addr !265
  %1 = ptrtoint i32* %stack_var_-156 to i32, !insn.addr !265
  store i32 2, i32* %stack_var_-160, align 4, !insn.addr !266
  store i32 %1, i32* %r3.0.reg2mem, !insn.addr !266
  br label %dec_label_pc_11298, !insn.addr !266

dec_label_pc_11298:                               ; preds = %dec_label_pc_11298, %dec_label_pc_11274
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %2 = add i32 %r3.0.reload, 4, !insn.addr !267
  %3 = inttoptr i32 %2 to i32*, !insn.addr !267
  store i32 0, i32* %3, align 4, !insn.addr !267
  %4 = icmp eq i32 %2, %0, !insn.addr !268
  store i32 %2, i32* %r3.0.reg2mem, !insn.addr !269
  br i1 %4, label %dec_label_pc_112a4, label %dec_label_pc_11298, !insn.addr !269

dec_label_pc_112a4:                               ; preds = %dec_label_pc_11298
  %5 = load i32, i32* @global_var_220a4, align 4, !insn.addr !270
  %6 = icmp slt i32 %5, 0, !insn.addr !271
  %7 = add i32 %5, 31, !insn.addr !272
  %spec.select = select i1 %6, i32 %7, i32 %5
  %8 = sub i32 0, %5, !insn.addr !273
  %9 = icmp slt i32 %8, 0, !insn.addr !273
  %10 = ashr i32 %spec.select, 5, !insn.addr !274
  %11 = urem i32 %5, 32, !insn.addr !275
  %12 = urem i32 %8, 32
  %13 = sub nsw i32 0, %12
  %ip.0 = select i1 %9, i32 %11, i32 %13
  %14 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !276
  %15 = mul i32 %10, 4, !insn.addr !277
  %16 = add i32 %14, -128
  %17 = add i32 %15, %16, !insn.addr !278
  %18 = inttoptr i32 %17 to i32*, !insn.addr !278
  %19 = load i32, i32* %18, align 4, !insn.addr !278
  %20 = shl i32 1, %ip.0, !insn.addr !279
  %21 = or i32 %20, %19, !insn.addr !279
  store i32 %21, i32* %18, align 4, !insn.addr !280
  %22 = call i32* @calloc(i32 30, i32 1), !insn.addr !281
  %23 = bitcast i32* %stack_var_-160 to %timeval*
  %24 = add i32 %5, 1, !insn.addr !282
  %25 = bitcast i32* %stack_var_-152 to %_TYPEDEF_fd_set*, !insn.addr !283
  %26 = call i32 @select(i32 %24, %_TYPEDEF_fd_set* nonnull %25, %_TYPEDEF_fd_set* null, %_TYPEDEF_fd_set* null, %timeval* nonnull %23), !insn.addr !283
  switch i32 %26, label %dec_label_pc_11324 [
    i32 -1, label %dec_label_pc_114a4
    i32 0, label %dec_label_pc_113a4
  ]

dec_label_pc_11324:                               ; preds = %dec_label_pc_112a4
  %27 = load i32, i32* @global_var_220a4, align 4, !insn.addr !284
  %28 = icmp slt i32 %27, 0, !insn.addr !285
  %29 = add i32 %27, 31, !insn.addr !286
  %spec.select2 = select i1 %28, i32 %29, i32 %27
  %30 = sub i32 0, %27, !insn.addr !287
  %31 = icmp slt i32 %30, 0, !insn.addr !287
  %32 = ashr i32 %spec.select2, 5, !insn.addr !288
  %33 = urem i32 %27, 32, !insn.addr !289
  %34 = urem i32 %30, 32
  %35 = sub nsw i32 0, %34
  %r2.0 = select i1 %31, i32 %33, i32 %35
  %36 = mul i32 %32, 4, !insn.addr !290
  %37 = add i32 %36, %16, !insn.addr !291
  %38 = inttoptr i32 %37 to i32*, !insn.addr !291
  %39 = load i32, i32* %38, align 4, !insn.addr !291
  %40 = shl i32 1, %r2.0, !insn.addr !292
  %41 = and i32 %40, %39, !insn.addr !292
  %42 = icmp eq i32 %41, 0, !insn.addr !292
  br i1 %42, label %dec_label_pc_1135c, label %dec_label_pc_113d4, !insn.addr !293

dec_label_pc_1135c:                               ; preds = %dec_label_pc_11324
  %43 = load i32, i32* @global_var_220cc, align 4, !insn.addr !294
  %44 = icmp eq i32 %43, 5, !insn.addr !295
  br i1 %44, label %dec_label_pc_11370, label %dec_label_pc_113c0, !insn.addr !296

dec_label_pc_11370:                               ; preds = %dec_label_pc_1135c, %dec_label_pc_113a4
  store i32 0, i32* inttoptr (i32 add (i32 ptrtoint (i8** @global_var_220ac to i32), i32 32) to i32*), align 4, !insn.addr !297
  %45 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11774, i32 0, i32 0)), !insn.addr !298
  call void @free(i32* %22), !insn.addr !299
  ret i32 1, !insn.addr !300

dec_label_pc_11398:                               ; preds = %dec_label_pc_113d4
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1172c, i32 0, i32 0)), !insn.addr !301
  br label %dec_label_pc_113a4, !insn.addr !301

dec_label_pc_113a4:                               ; preds = %dec_label_pc_112a4, %dec_label_pc_11398
  %47 = load i32, i32* @global_var_220cc, align 4, !insn.addr !302
  %48 = add i32 %47, 1, !insn.addr !303
  %49 = icmp eq i32 %48, 5, !insn.addr !304
  store i32 %48, i32* @global_var_220cc, align 4, !insn.addr !305
  br i1 %49, label %dec_label_pc_11370, label %dec_label_pc_113c0, !insn.addr !306

dec_label_pc_113c0:                               ; preds = %dec_label_pc_1135c, %dec_label_pc_113a4
  call void @free(i32* %22), !insn.addr !307
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !308
  br label %dec_label_pc_113cc, !insn.addr !308

dec_label_pc_113cc:                               ; preds = %dec_label_pc_11474, %dec_label_pc_11444, %dec_label_pc_113c0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !309

dec_label_pc_113d4:                               ; preds = %dec_label_pc_11324
  store i32 16, i32* %stack_var_-164, align 4, !insn.addr !310
  %50 = call i32 @recvfrom(i32 %27, i32* %22, i32 30, i32 0, %sockaddr* bitcast (%timeval** @global_var_220d4 to %sockaddr*), i32* nonnull %stack_var_-164), !insn.addr !311
  %51 = icmp slt i32 %50, 1, !insn.addr !312
  br i1 %51, label %dec_label_pc_11398, label %dec_label_pc_11408, !insn.addr !312

dec_label_pc_11408:                               ; preds = %dec_label_pc_113d4
  %52 = bitcast i32* %22 to i8*, !insn.addr !313
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_1173c, i32 0, i32 0), i32* %22), !insn.addr !313
  store i32 0, i32* @global_var_220cc, align 4, !insn.addr !314
  %54 = call i32 @strlen(i8* bitcast (i8** @global_var_220ac to i8*)), !insn.addr !315
  %55 = call i32 @strncmp(i8* %52, i8* bitcast (i8** @global_var_220ac to i8*), i32 %54), !insn.addr !316
  %56 = icmp eq i32 %55, 0, !insn.addr !317
  br i1 %56, label %dec_label_pc_11444, label %dec_label_pc_11474, !insn.addr !318

dec_label_pc_11444:                               ; preds = %dec_label_pc_11408
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11748, i32 0, i32 0)), !insn.addr !319
  %58 = call i32 @function_10f58(i32 1), !insn.addr !320
  %59 = call i32 @function_1121c(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11758, i32 0, i32 0)), !insn.addr !321
  call void @free(i32* %22), !insn.addr !322
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !323
  br label %dec_label_pc_113cc, !insn.addr !323

dec_label_pc_11474:                               ; preds = %dec_label_pc_11408
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1175c, i32 0, i32 0)), !insn.addr !324
  %61 = call i32 @function_10f58(i32 0), !insn.addr !325
  %62 = call i32 @function_1121c(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_1176c, i32 0, i32 0)), !insn.addr !326
  call void @free(i32* %22), !insn.addr !327
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !328
  br label %dec_label_pc_113cc, !insn.addr !328

dec_label_pc_114a4:                               ; preds = %dec_label_pc_112a4
  call void @exit(i32 -1), !insn.addr !329
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !329

; uselistorder directives
  uselistorder i32 %48, { 1, 0 }
  uselistorder i32 %27, { 2, 0, 3, 1, 5, 4 }
  uselistorder i32* %22, { 3, 2, 4, 5, 6, 1, 0 }
  uselistorder i32 %5, { 2, 0, 3, 1, 5, 4 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 1, 2, 0, 3 }
  uselistorder void (i32)* @exit, { 2, 1, 0, 4, 3, 5 }
  uselistorder i32 (i8*)* @function_1121c, { 1, 0 }
  uselistorder i32 (i32)* @function_10f58, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2, 3, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 10, 8, 7, 9, 11, 5, 4, 3, 2, 1, 6, 0, 12 }
  uselistorder void (i32*)* @free, { 4, 3, 2, 1, 0, 5, 6 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 5, 4, 3, 0, 6 }
  uselistorder i8** @global_var_220ac, { 1, 0 }
  uselistorder i32* (i32, i32)* @calloc, { 1, 0, 2, 3 }
  uselistorder i32 30, { 1, 0, 2 }
  uselistorder i32 32, { 4, 0, 1, 2, 3 }
  uselistorder i32* @global_var_220a4, { 1, 2, 3, 4, 5, 0 }
  uselistorder i32 4, { 0, 1, 5, 2, 3, 4 }
  uselistorder label %dec_label_pc_113c0, { 1, 0 }
  uselistorder label %dec_label_pc_113a4, { 1, 0 }
  uselistorder label %dec_label_pc_11370, { 1, 0 }
}

define i32 @function_114a8() local_unnamed_addr {
dec_label_pc_114a8:
  %r4.1.reg2mem = alloca i32, !insn.addr !330
  %merge.reg2mem = alloca i32, !insn.addr !330
  %r5.1.reg2mem = alloca i32, !insn.addr !330
  %r5.0.reg2mem = alloca i32, !insn.addr !330
  %r4.0.reg2mem = alloca i32, !insn.addr !330
  store i32 5, i32* %r4.0.reg2mem, !insn.addr !331
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !331
  br label %dec_label_pc_114b4, !insn.addr !331

dec_label_pc_114b4:                               ; preds = %dec_label_pc_114c0, %dec_label_pc_114a8
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %0 = call i32 @function_10e1c(), !insn.addr !332
  %1 = icmp eq i32 %0, 0, !insn.addr !333
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !334
  br i1 %1, label %dec_label_pc_1152c, label %dec_label_pc_114c0, !insn.addr !334

dec_label_pc_114c0:                               ; preds = %dec_label_pc_1152c, %dec_label_pc_114b4
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %2 = add nsw i32 %r4.0.reload, -1, !insn.addr !335
  %3 = icmp eq i32 %r4.0.reload, 1, !insn.addr !335
  store i32 %2, i32* %r4.0.reg2mem, !insn.addr !336
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !336
  br i1 %3, label %dec_label_pc_114c8, label %dec_label_pc_114b4, !insn.addr !336

dec_label_pc_114c8:                               ; preds = %dec_label_pc_114c0
  %4 = icmp eq i32 %r5.1.reload, 5, !insn.addr !337
  store i32 0, i32* %merge.reg2mem, !insn.addr !338
  br i1 %4, label %dec_label_pc_114e0.preheader, label %dec_label_pc_11524, !insn.addr !338

dec_label_pc_114e0.preheader:                     ; preds = %dec_label_pc_114c8
  %5 = call i32 @function_10e1c(), !insn.addr !339
  %6 = icmp eq i32 %5, 0, !insn.addr !340
  br i1 %6, label %dec_label_pc_114dc, label %dec_label_pc_114fc.preheader, !insn.addr !341

dec_label_pc_11524:                               ; preds = %dec_label_pc_114fc, %dec_label_pc_114c8
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !338

dec_label_pc_114dc:                               ; preds = %dec_label_pc_114e0.preheader, %dec_label_pc_114dc
  %7 = call i32 @usleep(i32 1000), !insn.addr !342
  %8 = call i32 @function_10e1c(), !insn.addr !339
  %9 = icmp eq i32 %8, 0, !insn.addr !340
  br i1 %9, label %dec_label_pc_114dc, label %dec_label_pc_114fc.preheader, !insn.addr !341

dec_label_pc_114fc.preheader:                     ; preds = %dec_label_pc_114dc, %dec_label_pc_114e0.preheader
  store i32 5, i32* %r4.1.reg2mem
  br label %dec_label_pc_114fc

dec_label_pc_114fc:                               ; preds = %dec_label_pc_114fc.preheader, %dec_label_pc_114fc
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %10 = call i32 @usleep(i32 100000), !insn.addr !343
  %11 = call i32 @usleep(i32 100000), !insn.addr !344
  %12 = add nsw i32 %r4.1.reload, -1, !insn.addr !345
  %13 = icmp eq i32 %r4.1.reload, 1, !insn.addr !345
  store i32 1, i32* %merge.reg2mem, !insn.addr !346
  store i32 %12, i32* %r4.1.reg2mem, !insn.addr !346
  br i1 %13, label %dec_label_pc_11524, label %dec_label_pc_114fc, !insn.addr !346

dec_label_pc_1152c:                               ; preds = %dec_label_pc_114b4
  %14 = add i32 %r5.0.reload, 1, !insn.addr !347
  %15 = call i32 @usleep(i32 20000), !insn.addr !348
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !349
  br label %dec_label_pc_114c0, !insn.addr !349

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 100000, { 1, 0 }
  uselistorder i32 (i32)* @usleep, { 6, 4, 3, 5, 2, 1, 0, 7 }
  uselistorder i32 -1, { 6, 7, 4, 5, 2, 3, 13, 12, 8, 9, 10, 1, 0, 11, 14 }
  uselistorder i32 ()* @function_10e1c, { 2, 0, 1 }
  uselistorder i32 5, { 0, 2, 1, 3, 4, 5, 6 }
  uselistorder label %dec_label_pc_114fc, { 1, 0 }
  uselistorder label %dec_label_pc_114dc, { 1, 0 }
}

define i32 @function_1153c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1153c:
  %0 = call i32 @function_10794(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !350
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139026, i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !351

; uselistorder directives
  uselistorder i32 0, { 16, 123, 10, 0, 124, 1, 2, 19, 20, 81, 21, 22, 23, 24, 25, 26, 127, 14, 27, 28, 82, 3, 17, 18, 29, 30, 83, 128, 129, 130, 131, 132, 11, 133, 134, 135, 136, 15, 84, 125, 85, 33, 34, 31, 32, 35, 36, 140, 86, 141, 37, 38, 87, 88, 89, 43, 44, 39, 40, 41, 42, 4, 94, 93, 92, 91, 90, 95, 96, 126, 97, 45, 46, 47, 48, 49, 50, 121, 6, 7, 51, 52, 53, 54, 8, 9, 55, 56, 122, 98, 57, 58, 99, 5, 100, 59, 60, 101, 102, 103, 137, 138, 104, 105, 106, 61, 62, 63, 64, 118, 119, 107, 65, 66, 67, 68, 139, 108, 120, 110, 109, 69, 70, 142, 12, 13, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 111, 112, 113, 114, 115, 116, 117 }
  uselistorder i32 2, { 0, 1, 3, 2, 4, 5, 7, 6 }
}

define i32 @function_11578() local_unnamed_addr {
dec_label_pc_11578:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !352
}

define i32 @function_1157c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1157c:
  ret i32 %arg1, !insn.addr !353
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fscanf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i8* @inet_ntoa(%in_addr) local_unnamed_addr

declare i32 @select(i32, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %timeval*) local_unnamed_addr

declare i8* @stpcpy(i8*, i8*) local_unnamed_addr

declare i32 @recvfrom(i32, i32*, i32, i32, %sockaddr*, i32*) local_unnamed_addr

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

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @unknown_54c7e() local_unnamed_addr

define i32 @function_250e5e() local_unnamed_addr {
dec_label_pc_250e5e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 10, 9, 71, 18, 72, 73, 22, 21, 20, 19, 17, 23, 36, 41, 75, 31, 37, 38, 39, 40, 55, 54, 53, 52, 51, 50, 25, 24, 32, 33, 76, 77, 58, 57, 56, 43, 42, 59, 74, 44, 60, 26, 34, 35, 70, 45, 62, 61, 8, 63, 46, 47, 64, 12, 48, 49, 65, 11, 27, 66, 28, 7, 68, 67, 14, 6, 29, 5, 4, 3, 30, 16, 15, 13, 2, 1, 0, 69, 78, 79, 80 }
}

declare double @__asm_vmax.f32(double, double) local_unnamed_addr

declare double @__asm_vhadd.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vaddw.s8(fp128, double) local_unnamed_addr

declare fp128 @__asm_vaddl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vsubw.s8(fp128, double) local_unnamed_addr

declare i32 @__asm_mrslt(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

!0 = !{i64 67480}
!1 = !{i64 67484}
!2 = !{i64 67516}
!3 = !{i64 67528}
!4 = !{i64 67540}
!5 = !{i64 67552}
!6 = !{i64 67564}
!7 = !{i64 67576}
!8 = !{i64 67588}
!9 = !{i64 67600}
!10 = !{i64 67612}
!11 = !{i64 67624}
!12 = !{i64 67636}
!13 = !{i64 67648}
!14 = !{i64 67660}
!15 = !{i64 67672}
!16 = !{i64 67684}
!17 = !{i64 67696}
!18 = !{i64 67708}
!19 = !{i64 67720}
!20 = !{i64 67732}
!21 = !{i64 67744}
!22 = !{i64 67756}
!23 = !{i64 67768}
!24 = !{i64 67780}
!25 = !{i64 67792}
!26 = !{i64 67804}
!27 = !{i64 67816}
!28 = !{i64 67828}
!29 = !{i64 67840}
!30 = !{i64 67852}
!31 = !{i64 67864}
!32 = !{i64 67876}
!33 = !{i64 67888}
!34 = !{i64 67900}
!35 = !{i64 67912}
!36 = !{i64 67924}
!37 = !{i64 67972}
!38 = !{i64 67976}
!39 = !{i64 67980}
!40 = !{i64 67984}
!41 = !{i64 67988}
!42 = !{i64 67996}
!43 = !{i64 68000}
!44 = !{i64 68004}
!45 = !{i64 68008}
!46 = !{i64 68016}
!47 = !{i64 68020}
!48 = !{i64 68024}
!49 = !{i64 68028}
!50 = !{i64 68032}
!51 = !{i64 68068}
!52 = !{i64 68072}
!53 = !{i64 68078}
!54 = !{i64 68100}
!55 = !{i64 68104}
!56 = !{i64 68108}
!57 = !{i64 68112}
!58 = !{i64 68124}
!59 = !{i64 68130}
!60 = !{i64 68132}
!61 = !{i64 68156}
!62 = !{i64 68158}
!63 = !{i64 68162}
!64 = !{i64 68166}
!65 = !{i64 68170}
!66 = !{i64 68174}
!67 = !{i64 68178}
!68 = !{i64 68186}
!69 = !{i64 68190}
!70 = !{i64 68194}
!71 = !{i64 68198}
!72 = !{i64 68200}
!73 = !{i64 68204}
!74 = !{i64 68214}
!75 = !{i64 68216}
!76 = !{i64 68218}
!77 = !{i64 68224}
!78 = !{i64 68226}
!79 = !{i64 68228}
!80 = !{i64 68252}
!81 = !{i64 68272}
!82 = !{i64 68284}
!83 = !{i64 68288}
!84 = !{i64 68292}
!85 = !{i64 68296}
!86 = !{i64 68300}
!87 = !{i64 68304}
!88 = !{i64 68308}
!89 = !{i64 68320}
!90 = !{i64 68332}
!91 = !{i64 68344}
!92 = !{i64 68348}
!93 = !{i64 68376}
!94 = !{i64 68380}
!95 = !{i64 68388}
!96 = !{i64 68404}
!97 = !{i64 68428}
!98 = !{i64 68432}
!99 = !{i64 68436}
!100 = !{i64 68460}
!101 = !{i64 68472}
!102 = !{i64 68484}
!103 = !{i64 68496}
!104 = !{i64 68516}
!105 = !{i64 68520}
!106 = !{i64 68532}
!107 = !{i64 68536}
!108 = !{i64 68564}
!109 = !{i64 68584}
!110 = !{i64 68588}
!111 = !{i64 68592}
!112 = !{i64 68604}
!113 = !{i64 68620}
!114 = !{i64 68624}
!115 = !{i64 68628}
!116 = !{i64 68636}
!117 = !{i64 68640}
!118 = !{i64 68648}
!119 = !{i64 68656}
!120 = !{i64 68672}
!121 = !{i64 68676}
!122 = !{i64 68688}
!123 = !{i64 68712}
!124 = !{i64 68720}
!125 = !{i64 68736}
!126 = !{i64 68744}
!127 = !{i64 68756}
!128 = !{i64 68768}
!129 = !{i64 68776}
!130 = !{i64 68788}
!131 = !{i64 68796}
!132 = !{i64 68824}
!133 = !{i64 68844}
!134 = !{i64 68848}
!135 = !{i64 68852}
!136 = !{i64 68864}
!137 = !{i64 68880}
!138 = !{i64 68884}
!139 = !{i64 68888}
!140 = !{i64 68896}
!141 = !{i64 68900}
!142 = !{i64 68908}
!143 = !{i64 68916}
!144 = !{i64 68932}
!145 = !{i64 68936}
!146 = !{i64 68948}
!147 = !{i64 68960}
!148 = !{i64 68968}
!149 = !{i64 68980}
!150 = !{i64 68992}
!151 = !{i64 69000}
!152 = !{i64 69012}
!153 = !{i64 69020}
!154 = !{i64 69056}
!155 = !{i64 69076}
!156 = !{i64 69084}
!157 = !{i64 69104}
!158 = !{i64 69112}
!159 = !{i64 69120}
!160 = !{i64 69132}
!161 = !{i64 69144}
!162 = !{i64 69168}
!163 = !{i64 69188}
!164 = !{i64 69200}
!165 = !{i64 69204}
!166 = !{i64 69208}
!167 = !{i64 69228}
!168 = !{i64 69232}
!169 = !{i64 69236}
!170 = !{i64 69256}
!171 = !{i64 69264}
!172 = !{i64 69284}
!173 = !{i64 69288}
!174 = !{i64 69292}
!175 = !{i64 69300}
!176 = !{i64 69320}
!177 = !{i64 69336}
!178 = !{i64 69340}
!179 = !{i64 69344}
!180 = !{i64 69360}
!181 = !{i64 69368}
!182 = !{i64 69372}
!183 = !{i64 69376}
!184 = !{i64 69388}
!185 = !{i64 69400}
!186 = !{i64 69412}
!187 = !{i64 69424}
!188 = !{i64 69432}
!189 = !{i64 69436}
!190 = !{i64 69448}
!191 = !{i64 69460}
!192 = !{i64 69464}
!193 = !{i64 69488}
!194 = !{i64 69496}
!195 = !{i64 69536}
!196 = !{i64 69516}
!197 = !{i64 69544}
!198 = !{i64 69552}
!199 = !{i64 69572}
!200 = !{i64 69580}
!201 = !{i64 69588}
!202 = !{i64 69592}
!203 = !{i64 69596}
!204 = !{i64 69604}
!205 = !{i64 69632}
!206 = !{i64 69636}
!207 = !{i64 69644}
!208 = !{i64 69648}
!209 = !{i64 69664}
!210 = !{i64 69676}
!211 = !{i64 69680}
!212 = !{i64 69688}
!213 = !{i64 69724}
!214 = !{i64 69732}
!215 = !{i64 69744}
!216 = !{i64 69748}
!217 = !{i64 69756}
!218 = !{i64 69760}
!219 = !{i64 69764}
!220 = !{i64 69768}
!221 = !{i64 69772}
!222 = !{i64 69776}
!223 = !{i64 69780}
!224 = !{i64 69784}
!225 = !{i64 69796}
!226 = !{i64 69808}
!227 = !{i64 69820}
!228 = !{i64 69836}
!229 = !{i64 69848}
!230 = !{i64 69860}
!231 = !{i64 69864}
!232 = !{i64 69892}
!233 = !{i64 69908}
!234 = !{i64 69924}
!235 = !{i64 69940}
!236 = !{i64 69944}
!237 = !{i64 69948}
!238 = !{i64 69888}
!239 = !{i64 69964}
!240 = !{i64 69972}
!241 = !{i64 69996}
!242 = !{i64 70008}
!243 = !{i64 70020}
!244 = !{i64 70032}
!245 = !{i64 70036}
!246 = !{i64 70056}
!247 = !{i64 70068}
!248 = !{i64 70076}
!249 = !{i64 70092}
!250 = !{i64 70096}
!251 = !{i64 70100}
!252 = !{i64 70116}
!253 = !{i64 70128}
!254 = !{i64 70140}
!255 = !{i64 70144}
!256 = !{i64 70156}
!257 = !{i64 70168}
!258 = !{i64 70188}
!259 = !{i64 70224}
!260 = !{i64 70228}
!261 = !{i64 70236}
!262 = !{i64 70256}
!263 = !{i64 70260}
!264 = !{i64 70276}
!265 = !{i64 70288}
!266 = !{i64 70292}
!267 = !{i64 70296}
!268 = !{i64 70300}
!269 = !{i64 70304}
!270 = !{i64 70324}
!271 = !{i64 70332}
!272 = !{i64 70336}
!273 = !{i64 70344}
!274 = !{i64 70352}
!275 = !{i64 70356}
!276 = !{i64 70364}
!277 = !{i64 70368}
!278 = !{i64 70372}
!279 = !{i64 70376}
!280 = !{i64 70380}
!281 = !{i64 70384}
!282 = !{i64 70408}
!283 = !{i64 70416}
!284 = !{i64 70436}
!285 = !{i64 70440}
!286 = !{i64 70444}
!287 = !{i64 70452}
!288 = !{i64 70460}
!289 = !{i64 70464}
!290 = !{i64 70476}
!291 = !{i64 70480}
!292 = !{i64 70484}
!293 = !{i64 70488}
!294 = !{i64 70500}
!295 = !{i64 70504}
!296 = !{i64 70508}
!297 = !{i64 70524}
!298 = !{i64 70528}
!299 = !{i64 70536}
!300 = !{i64 70548}
!301 = !{i64 70560}
!302 = !{i64 70572}
!303 = !{i64 70576}
!304 = !{i64 70580}
!305 = !{i64 70584}
!306 = !{i64 70588}
!307 = !{i64 70596}
!308 = !{i64 70600}
!309 = !{i64 70608}
!310 = !{i64 70636}
!311 = !{i64 70652}
!312 = !{i64 70660}
!313 = !{i64 70684}
!314 = !{i64 70692}
!315 = !{i64 70696}
!316 = !{i64 70712}
!317 = !{i64 70716}
!318 = !{i64 70720}
!319 = !{i64 70732}
!320 = !{i64 70740}
!321 = !{i64 70752}
!322 = !{i64 70760}
!323 = !{i64 70768}
!324 = !{i64 70780}
!325 = !{i64 70788}
!326 = !{i64 70800}
!327 = !{i64 70808}
!328 = !{i64 70816}
!329 = !{i64 70820}
!330 = !{i64 70824}
!331 = !{i64 70832}
!332 = !{i64 70836}
!333 = !{i64 70840}
!334 = !{i64 70844}
!335 = !{i64 70848}
!336 = !{i64 70852}
!337 = !{i64 70856}
!338 = !{i64 70864}
!339 = !{i64 70880}
!340 = !{i64 70884}
!341 = !{i64 70892}
!342 = !{i64 70876}
!343 = !{i64 70920}
!344 = !{i64 70936}
!345 = !{i64 70940}
!346 = !{i64 70944}
!347 = !{i64 70960}
!348 = !{i64 70964}
!349 = !{i64 70968}
!350 = !{i64 70988}
!351 = !{i64 71020}
!352 = !{i64 71032}
!353 = !{i64 71040}
