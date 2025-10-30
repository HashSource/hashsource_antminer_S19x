source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%timeval = type { i32, i32 }
%sockaddr = type { i32, [14 x i8] }
%_IO_FILE = type { i32 }
%in_addr = type { i32 }
%_TYPEDEF_fd_set = type { [1 x i32] }
%timezone = type { i32, i32 }

@global_var_21948 = local_unnamed_addr global i32 67456
@global_var_2194c = local_unnamed_addr global i32 67456
@global_var_21950 = local_unnamed_addr global i32 67456
@global_var_21954 = local_unnamed_addr global i32 67456
@global_var_21958 = local_unnamed_addr global i32 67456
@global_var_2195c = local_unnamed_addr global i32 67456
@global_var_21960 = local_unnamed_addr global i32 67456
@global_var_21964 = local_unnamed_addr global i32 67456
@global_var_21968 = local_unnamed_addr global i32 67456
@global_var_2196c = local_unnamed_addr global i32 67456
@global_var_21970 = local_unnamed_addr global i32 67456
@global_var_21974 = local_unnamed_addr global i32 67456
@global_var_21978 = local_unnamed_addr global i32 67456
@global_var_2197c = local_unnamed_addr global i32 67456
@global_var_21980 = local_unnamed_addr global i32 67456
@global_var_21850 = local_unnamed_addr global i32 0
@global_var_21984 = local_unnamed_addr global i32 67456
@global_var_2185c = local_unnamed_addr global i32 12
@global_var_21988 = local_unnamed_addr global i32 67456
@global_var_21868 = local_unnamed_addr global i32 71152
@global_var_2198c = local_unnamed_addr global i32 67456
@global_var_21874 = local_unnamed_addr global i32 27
@global_var_21990 = local_unnamed_addr global i32 67456
@global_var_2184c = global i32 68165
@global_var_21880 = local_unnamed_addr global i32* @global_var_2184c
@global_var_21994 = local_unnamed_addr global i32 67456
@global_var_2188c = local_unnamed_addr global i32 4
@global_var_21998 = local_unnamed_addr global i32 67456
@global_var_104b0 = global i32 1651076096
@global_var_21898 = local_unnamed_addr global i32* @global_var_104b0
@global_var_2199c = local_unnamed_addr global i32 67456
@global_var_218a4 = local_unnamed_addr global i32 10
@global_var_219a0 = local_unnamed_addr global i32 67456
@global_var_218b0 = local_unnamed_addr global i32 16
@global_var_219a4 = local_unnamed_addr global i32 67456
@global_var_218bc = local_unnamed_addr global i32 3
@global_var_219a8 = local_unnamed_addr global i32 67456
@global_var_218c8 = local_unnamed_addr global i32 280
@global_var_219ac = local_unnamed_addr global i32 67456
@global_var_218d4 = local_unnamed_addr global i32 23
@global_var_219b0 = local_unnamed_addr global i32 67456
@global_var_10654 = global i32 137684
@global_var_218e0 = local_unnamed_addr global i32* @global_var_10654
@global_var_219b4 = local_unnamed_addr global i32 67456
@global_var_218ec = local_unnamed_addr global i32 19
@global_var_219b8 = local_unnamed_addr global i32 67456
@global_var_10624 = global i32 131073
@global_var_218f8 = local_unnamed_addr global i32* @global_var_10624
@global_var_219bc = local_unnamed_addr global i32 67456
@global_var_21904 = local_unnamed_addr global i32 1879048176
@global_var_219c0 = local_unnamed_addr global i32 67456
@global_var_21910 = local_unnamed_addr global i32 0
@global_var_219c4 = local_unnamed_addr global i32 67456
@global_var_2191c = local_unnamed_addr global i32 0
@global_var_219c8 = local_unnamed_addr global i32 67456
@global_var_21928 = local_unnamed_addr global i32 0
@global_var_219cc = local_unnamed_addr global i32 67456
@global_var_21934 = local_unnamed_addr global i32 0
@global_var_219d0 = local_unnamed_addr global i32 67456
@global_var_117f4 = constant [9 x i8] c"17:07:50\00"
@global_var_11800 = constant [12 x i8] c"Feb  5 2025\00"
@global_var_1180c = constant [30 x i8] c"monitor-ipsig compile %s--%s\0A\00"
@global_var_1182c = constant [14 x i8] c"Key Down!!!!!\00"
@global_var_109ec = local_unnamed_addr constant i32 69468
@global_var_109f0 = local_unnamed_addr constant i32 152
@global_var_21854 = global i32 1
@global_var_2193c = local_unnamed_addr global i32* @global_var_21854
@global_var_219d4 = local_unnamed_addr global i32 0
@global_var_10a14 = local_unnamed_addr constant i32 137703
@global_var_219e7 = local_unnamed_addr global i32 0
@global_var_115fc = constant [4 x i8] c"%ld\00"
@global_var_11600 = constant [7 x i8] c"socket\00"
@global_var_11608 = constant [21 x i8] c":No Such Device %s/n\00"
@global_var_11628 = constant [30 x i8] c"%02X:%02X:%02X:%02X:%02X:%02X\00"
@global_var_11648 = local_unnamed_addr constant [5 x i8] c"MAC=\00"
@global_var_11620 = constant [6 x i8] c"ioctl\00"
@global_var_11654 = constant [39 x i8] c"echo %d > /sys/class/gpio/gpio%d/value\00"
@global_var_1167c = constant [23 x i8] c"/sys/class/gpio/gpio%d\00"
@global_var_11698 = constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_11690 = constant [3 x i8] c"%d\00"
@global_var_116c8 = constant [18 x i8] c"File Write Error!\00"
@global_var_116dc = constant [29 x i8] c"/sys/class/gpio/gpio%d/value\00"
@global_var_116b0 = constant [22 x i8] c"Open read gpio/export\00"
@global_var_11700 = constant [34 x i8] c"Open read recovery button failure\00"
@global_var_219e0 = local_unnamed_addr global i32 -1
@global_var_21a22 = local_unnamed_addr global i32 0
@global_var_21a24 = local_unnamed_addr global i32 0
@global_var_21a28 = local_unnamed_addr global i32 0
@global_var_21a18 = local_unnamed_addr global i32 0
@global_var_21a2c = local_unnamed_addr global i32 0
@global_var_21a1c = local_unnamed_addr global i32 0
@global_var_21a12 = local_unnamed_addr global i32 0
@global_var_21a14 = local_unnamed_addr global i32 0
@global_var_11724 = constant [13 x i8] c"socket error\00"
@global_var_11734 = constant [20 x i8] c"set socket error...\00"
@global_var_11748 = constant [14 x i8] c"bind error...\00"
@global_var_11758 = constant [5 x i8] c"eth0\00"
@global_var_11780 = constant [16 x i8] c"send ipmac:\0A%s\0A\00"
@global_var_11760 = constant [13 x i8] c"get IP error\00"
@global_var_11770 = constant [15 x i8] c"send error....\00"
@global_var_21a08 = local_unnamed_addr global i32 0
@global_var_117e8 = constant [9 x i8] c"Time Out\00"
@global_var_117b0 = constant [9 x i8] c"rev:\0A%s\09\00"
@global_var_117bc = constant [15 x i8] c"send_ack(\221\22);\00"
@global_var_117cc = constant [3 x i8] c"OK\00"
@global_var_117d0 = constant [15 x i8] c"send_ack(\220\22);\00"
@global_var_117e0 = constant [6 x i8] c"FAILD\00"
@global_var_117a0 = constant [15 x i8] c"read error....\00"
@global_var_115e4 = local_unnamed_addr constant i32 66188
@global_var_1028c = local_unnamed_addr global i32 18
@global_var_115ec = local_unnamed_addr constant [3 x i8] c"pG\00"
@0 = external global i32
@global_var_109c8 = local_unnamed_addr constant void ()* inttoptr (i32 67896 to void ()*)
@global_var_109cc = local_unnamed_addr constant void ()* inttoptr (i32 71085 to void ()*)
@global_var_219e4 = external global i8*
@global_var_11650 = local_unnamed_addr constant i16 44
@1 = internal constant [2 x i8] c"w\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@global_var_21a10 = global %timeval* null
@global_var_21a20 = global %sockaddr* null
@global_var_219e8 = external global i8*
@global_var_11694 = constant [2 x i8] c"w\00"
@global_var_116fc = constant [2 x i8] c"r\00"

declare i32 @unknown_240(i32) local_unnamed_addr

define i32 @function_10774(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10774:
  %0 = call i32 @function_109d0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_10794(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_10794:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_107a0(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_107a0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107ac(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107ac:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_107b8(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_107b8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* %stream, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_107c4(i32* %ptr) local_unnamed_addr {
dec_label_pc_107c4:
  call void @free(i32* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32* @function_107d0(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_107d0:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i8* @function_107dc(%in_addr %arg1) local_unnamed_addr {
dec_label_pc_107dc:
  %0 = call i8* @inet_ntoa(%in_addr %arg1), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_107e8(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout) local_unnamed_addr {
dec_label_pc_107e8:
  %0 = call i32 @select(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @function_107f4(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_107f4:
  %0 = call i8* @stpcpy(i8* %dest, i8* %src), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define i32 @function_10800(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_10800:
  %0 = call i32 @recvfrom(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_1080c(i8* %s) local_unnamed_addr {
dec_label_pc_1080c:
  call void @perror(i8* %s), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_10818(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10818:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10824(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10824:
  %0 = call i8* @strcat(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10830(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10830:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1083c(i32 %useconds) local_unnamed_addr {
dec_label_pc_1083c:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i8* @function_10848(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10848:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !17
  ret i8* %0, !insn.addr !17
}

define i32 @function_10854(%timeval* %tv, %timezone* %tz) local_unnamed_addr {
dec_label_pc_10854:
  %0 = call i32 @gettimeofday(%timeval* %tv, %timezone* %tz), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_10860(i8* %s) local_unnamed_addr {
dec_label_pc_10860:
  %0 = call i32 @puts(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1086c(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1086c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10878(i8* %command) local_unnamed_addr {
dec_label_pc_10878:
  %0 = call i32 @system(i8* %command), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @function_10884() local_unnamed_addr {
dec_label_pc_10884:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_10890(i32 %status) local_unnamed_addr {
dec_label_pc_10890:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_1089c(i8* %s) local_unnamed_addr {
dec_label_pc_1089c:
  %0 = call i32 @strlen(i8* %s), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108a8(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108a8:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @function_108b4(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_108b4:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i8* @function_108c0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_108c0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_108cc(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_108cc:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_108d8(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_108d8:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @function_108e4(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len) local_unnamed_addr {
dec_label_pc_108e4:
  %0 = call i32 @sendto(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @function_108f0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108f0:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define %_IO_FILE* @function_108fc(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_108fc:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !32
  ret %_IO_FILE* %0, !insn.addr !32
}

define i32 @function_10908(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10908:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @function_10914(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10914:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define void @function_10920() local_unnamed_addr {
dec_label_pc_10920:
  call void @abort(), !insn.addr !35
  ret void, !insn.addr !35
}

define i32 @function_1092c(i32 %fd) local_unnamed_addr {
dec_label_pc_1092c:
  %0 = call i32 @close(i32 %fd), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10938() local_unnamed_addr {
dec_label_pc_10938:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_1180c, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11800, i32 0, i32 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_117f4, i32 0, i32 0)), !insn.addr !37
  %1 = call i32 @function_11018(), !insn.addr !38
  br label %dec_label_pc_1095c, !insn.addr !38

dec_label_pc_1095c:                               ; preds = %dec_label_pc_10980, %dec_label_pc_10938
  %2 = call i32 @function_11514(), !insn.addr !39
  %3 = icmp eq i32 %2, 1, !insn.addr !40
  br i1 %3, label %dec_label_pc_10980.preheader, label %dec_label_pc_10968, !insn.addr !41

dec_label_pc_10968:                               ; preds = %dec_label_pc_1095c, %dec_label_pc_10968
  %4 = call i32 @usleep(i32 400000), !insn.addr !42
  %5 = call i32 @function_11514(), !insn.addr !43
  %6 = icmp eq i32 %5, 1, !insn.addr !44
  br i1 %6, label %dec_label_pc_10980.preheader, label %dec_label_pc_10968, !insn.addr !45

dec_label_pc_10980.preheader:                     ; preds = %dec_label_pc_10968, %dec_label_pc_1095c
  br label %dec_label_pc_10980

dec_label_pc_10980:                               ; preds = %dec_label_pc_10980.preheader, %dec_label_pc_10980
  %7 = call i32 @puts(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1182c, i32 0, i32 0)), !insn.addr !46
  %8 = call i32 @function_1111c(), !insn.addr !47
  %9 = call i32 @function_112cc(), !insn.addr !48
  %10 = icmp eq i32 %9, 1, !insn.addr !49
  br i1 %10, label %dec_label_pc_1095c, label %dec_label_pc_10980, !insn.addr !50

; uselistorder directives
  uselistorder i32 ()* @function_11514, { 1, 0 }
  uselistorder label %dec_label_pc_10980, { 1, 0 }
  uselistorder label %dec_label_pc_10968, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_109a0:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !51
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !51
  %2 = call i32 @__libc_start_main(i32 67896, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 71085 to void ()*), void ()* inttoptr (i32 67896 to void ()*), void ()* %1), !insn.addr !51
  call void @abort(), !insn.addr !52
  unreachable, !insn.addr !52
}

define i32 @function_109c4(i32 %arg1) local_unnamed_addr {
dec_label_pc_109c4:
  ret i32 %arg1, !insn.addr !53
}

define i32 @function_109d0() local_unnamed_addr {
dec_label_pc_109d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_219d4, align 4, !insn.addr !54
  %3 = icmp eq i32 %2, 0, !insn.addr !55
  br i1 %3, label %4, label %dec_label_pc_109e8, !insn.addr !56

; <label>:4:                                      ; preds = %dec_label_pc_109d0
  ret i32 %1, !insn.addr !56

dec_label_pc_109e8:                               ; preds = %dec_label_pc_109d0
  call void @__gmon_start__(), !insn.addr !57
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !57
}

define i32 @function_109f4() local_unnamed_addr {
dec_label_pc_109f4:
  ret i32 ptrtoint (i8** @global_var_219e4 to i32), !insn.addr !58
}

define i32 @function_10a18() local_unnamed_addr {
dec_label_pc_10a18:
  ret i32 ptrtoint (i8** @global_var_219e4 to i32), !insn.addr !59
}

define i32 @function_10a44() local_unnamed_addr {
dec_label_pc_10a44:
  %r0.0.reg2mem = alloca i32, !insn.addr !60
  %0 = load i8, i8* bitcast (i8** @global_var_219e4 to i8*), align 4, !insn.addr !61
  %1 = icmp eq i8 %0, 0, !insn.addr !62
  br i1 %1, label %dec_label_pc_10a52, label %dec_label_pc_10a5a, !insn.addr !62

dec_label_pc_10a52:                               ; preds = %dec_label_pc_10a44
  %2 = call i32 @function_109f4(), !insn.addr !63
  store i8 1, i8* bitcast (i8** @global_var_219e4 to i8*), align 4, !insn.addr !64
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !64
  br label %dec_label_pc_10a5a, !insn.addr !64

dec_label_pc_10a5a:                               ; preds = %dec_label_pc_10a44, %dec_label_pc_10a52
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !65

; uselistorder directives
  uselistorder i8** @global_var_219e4, { 1, 0 }
  uselistorder label %dec_label_pc_10a5a, { 1, 0 }
}

define i32 @function_10a5c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10a5c:
  ret i32 %arg1, !insn.addr !66
}

define i32 @function_10a62(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a62:
  %0 = alloca i32
  %1 = alloca i1
  %lr.0.off0.reg2mem = alloca i16, !insn.addr !67
  %r0.0.reg2mem = alloca i32, !insn.addr !67
  %merge.reg2mem = alloca i32, !insn.addr !67
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !67
  br i1 %3, label %7, label %dec_label_pc_10a66, !insn.addr !67

; <label>:7:                                      ; preds = %17, %16, %dec_label_pc_10a62
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !67

dec_label_pc_10a66:                               ; preds = %dec_label_pc_10a62
  %8 = icmp eq i1 %4, %2, !insn.addr !68
  %extract.t = trunc i32 %6 to i16
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !68
  store i16 %extract.t, i16* %lr.0.off0.reg2mem, !insn.addr !68
  br i1 %8, label %16, label %9, !insn.addr !68

; <label>:9:                                      ; preds = %dec_label_pc_10a66
  %10 = add i32 %arg4, -4, !insn.addr !68
  %11 = inttoptr i32 %10 to i32*, !insn.addr !68
  %12 = load i32, i32* %11, align 4, !insn.addr !68
  %13 = add i32 %arg4, -20, !insn.addr !68
  %14 = inttoptr i32 %13 to i32*, !insn.addr !68
  %15 = load i32, i32* %14, align 4, !insn.addr !68
  %extract.t1 = trunc i32 %15 to i16
  store i32 %12, i32* %r0.0.reg2mem, !insn.addr !68
  store i16 %extract.t1, i16* %lr.0.off0.reg2mem, !insn.addr !68
  br label %16, !insn.addr !68

; <label>:16:                                     ; preds = %dec_label_pc_10a66, %9
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !69
  br i1 %4, label %17, label %7, !insn.addr !69

; <label>:17:                                     ; preds = %16
  %lr.0.off0.reload = load i16, i16* %lr.0.off0.reg2mem
  %18 = inttoptr i32 %5 to i16*, !insn.addr !69
  store i16 %lr.0.off0.reload, i16* %18, align 2, !insn.addr !69
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !69
  br label %7, !insn.addr !69

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0 }
  uselistorder i32* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %16, { 1, 0 }
}

define i32 @function_10a6e() local_unnamed_addr {
dec_label_pc_10a6e:
  %0 = call i32 @function_10a18(), !insn.addr !70
  ret i32 %0, !insn.addr !70
}

define i32 @function_10a70(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a70:
  %0 = alloca i1
  %1 = load i1, i1* %0
  br i1 %1, label %2, label %dec_label_pc_10a78, !insn.addr !71

; <label>:2:                                      ; preds = %dec_label_pc_10a70
  %3 = call i32 @unknown_240(i32 %arg1), !insn.addr !71
  ret i32 %3, !insn.addr !71

dec_label_pc_10a78:                               ; preds = %dec_label_pc_10a70
  ret i32 %arg1, !insn.addr !72
}

define i32 @function_10a7c() local_unnamed_addr {
dec_label_pc_10a7c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !73
}

define i32 @function_10a80(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_-16 to %timeval*, !insn.addr !74
  %3 = call i32 @gettimeofday(%timeval* nonnull %2, %timezone* null), !insn.addr !74
  %4 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !75
  %5 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %4, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_115fc, i32 0, i32 0), i32 %1), !insn.addr !75
  %6 = inttoptr i32 %arg1 to i8*, !insn.addr !76
  store i8 0, i8* %6, align 1, !insn.addr !76
  %7 = add i32 %arg1, 2, !insn.addr !77
  %8 = add i32 %arg1, 1, !insn.addr !78
  %9 = inttoptr i32 %8 to i8*, !insn.addr !78
  store i8 0, i8* %9, align 1, !insn.addr !78
  %10 = inttoptr i32 %7 to i8*, !insn.addr !79
  store i8 0, i8* %10, align 1, !insn.addr !79
  %11 = add i32 %arg1, 3, !insn.addr !79
  %12 = inttoptr i32 %11 to i8*, !insn.addr !80
  store i8 0, i8* %12, align 1, !insn.addr !80
  %13 = add i32 %arg1, 4, !insn.addr !80
  %14 = inttoptr i32 %13 to i8*, !insn.addr !81
  store i8 0, i8* %14, align 1, !insn.addr !81
  %15 = add i32 %arg1, 5, !insn.addr !81
  %16 = inttoptr i32 %15 to i8*, !insn.addr !82
  store i8 0, i8* %16, align 1, !insn.addr !82
  %17 = add i32 %arg1, 6, !insn.addr !82
  %18 = inttoptr i32 %17 to i8*, !insn.addr !83
  store i8 0, i8* %18, align 1, !insn.addr !83
  %19 = add i32 %arg1, 7, !insn.addr !83
  %20 = inttoptr i32 %19 to i8*, !insn.addr !84
  store i8 0, i8* %20, align 1, !insn.addr !84
  %21 = add i32 %arg1, 8, !insn.addr !84
  %22 = inttoptr i32 %21 to i8*, !insn.addr !85
  store i8 0, i8* %22, align 1, !insn.addr !85
  %23 = add i32 %arg1, 9, !insn.addr !85
  %24 = inttoptr i32 %23 to i8*, !insn.addr !86
  store i8 0, i8* %24, align 1, !insn.addr !86
  %25 = call i32 @strlen(i8* nonnull %4), !insn.addr !87
  %26 = sub i32 6, %25, !insn.addr !88
  %27 = urem i32 %26, 256, !insn.addr !89
  %28 = icmp eq i32 %27, 0, !insn.addr !89
  br i1 %28, label %dec_label_pc_10b00, label %dec_label_pc_10af4, !insn.addr !90

dec_label_pc_10af4:                               ; preds = %dec_label_pc_10a80
  %29 = inttoptr i32 %arg1 to i32*, !insn.addr !91
  %30 = call i32* @memset(i32* %29, i32 48, i32 %27), !insn.addr !91
  br label %dec_label_pc_10b00, !insn.addr !91

dec_label_pc_10b00:                               ; preds = %dec_label_pc_10af4, %dec_label_pc_10a80
  %31 = call i8* @strcat(i8* %6, i8* nonnull %4), !insn.addr !92
  ret i32 %arg1, !insn.addr !93

; uselistorder directives
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3, 4, 5, 6, 7, 8, 11, 9, 10 }
}

define i32 @function_10b18(i8* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_10b18:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !94
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !95
  %3 = icmp eq i32 %2, -1, !insn.addr !96
  br i1 %3, label %dec_label_pc_10ba8, label %dec_label_pc_10b44, !insn.addr !97

dec_label_pc_10b44:                               ; preds = %dec_label_pc_10b18
  %4 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !98
  %5 = call i8* @strncpy(i8* nonnull %4, i8* %arg1, i32 20), !insn.addr !98
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 35093), !insn.addr !99
  %7 = icmp slt i32 %6, 0, !insn.addr !100
  br i1 %7, label %dec_label_pc_10bbc, label %dec_label_pc_10b74, !insn.addr !101

dec_label_pc_10b74:                               ; preds = %dec_label_pc_10b44
  %8 = insertvalue %in_addr undef, i32 %1, 0, !insn.addr !102
  %9 = call i8* @inet_ntoa(%in_addr %8), !insn.addr !102
  %10 = bitcast i32* %arg2 to i8*, !insn.addr !103
  %11 = call i8* @strcpy(i8* %10, i8* %9), !insn.addr !103
  %12 = call i32 @close(i32 %2), !insn.addr !104
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_10ba0, !insn.addr !105

dec_label_pc_10ba0:                               ; preds = %dec_label_pc_10bbc, %dec_label_pc_10ba8, %dec_label_pc_10b74
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !106

dec_label_pc_10ba8:                               ; preds = %dec_label_pc_10b18
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_11600, i32 0, i32 0)), !insn.addr !107
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !108
  br label %dec_label_pc_10ba0, !insn.addr !108

dec_label_pc_10bbc:                               ; preds = %dec_label_pc_10b44
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11608, i32 0, i32 0), i8* %arg1), !insn.addr !109
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !110
  br label %dec_label_pc_10ba0, !insn.addr !110

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 3, 0, 1 }
}

define i32 @function_10bd4(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bd4:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !111
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !112
  %9 = icmp slt i32 %8, 0, !insn.addr !113
  br i1 %9, label %dec_label_pc_10cb0, label %dec_label_pc_10c0c, !insn.addr !114

dec_label_pc_10c0c:                               ; preds = %dec_label_pc_10bd4
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !115
  %11 = inttoptr i32 %arg2 to i8*, !insn.addr !115
  %12 = call i8* @strcpy(i8* nonnull %10, i8* %11), !insn.addr !115
  %13 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !116
  %14 = icmp slt i32 %13, 0, !insn.addr !117
  br i1 %14, label %dec_label_pc_10cc4, label %dec_label_pc_10c30, !insn.addr !118

dec_label_pc_10c30:                               ; preds = %dec_label_pc_10c0c
  %15 = call i32 @close(i32 %8), !insn.addr !119
  %16 = zext i8 %6 to i32, !insn.addr !120
  %17 = zext i8 %4 to i32, !insn.addr !121
  %18 = zext i8 %3 to i32, !insn.addr !122
  %19 = zext i8 %2 to i32, !insn.addr !123
  %20 = zext i8 %1 to i32, !insn.addr !124
  %21 = bitcast i32* %7 to i8*, !insn.addr !125
  %22 = sext i8 %5 to i32, !insn.addr !125
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11628, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %16, i32 %17, i32 %18), !insn.addr !125
  %24 = inttoptr i32 %arg1 to i32*, !insn.addr !126
  store i32 1027817805, i32* %24, align 4, !insn.addr !126
  %25 = add i32 %arg1, 4, !insn.addr !126
  %26 = inttoptr i32 %25 to i8*, !insn.addr !127
  %27 = call i8* @stpcpy(i8* %26, i8* %21), !insn.addr !127
  %28 = bitcast i8* %27 to i16*, !insn.addr !128
  store i16 44, i16* %28, align 2, !insn.addr !128
  call void @free(i32* %7), !insn.addr !129
  ret i32 %arg1, !insn.addr !130

dec_label_pc_10cb0:                               ; preds = %dec_label_pc_10bd4
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_11600, i32 0, i32 0)), !insn.addr !131
  call void @exit(i32 0), !insn.addr !132
  unreachable, !insn.addr !132

dec_label_pc_10cc4:                               ; preds = %dec_label_pc_10c0c
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11620, i32 0, i32 0)), !insn.addr !133
  call void @exit(i32 0), !insn.addr !134
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !134

; uselistorder directives
  uselistorder i8* %21, { 1, 0 }
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10cd8(i32* %arg1, i8* %arg2) local_unnamed_addr {
dec_label_pc_10cd8:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %2 = load i8, i8* %0
  %3 = load i8, i8* %0
  %4 = load i8, i8* %0
  %5 = load i8, i8* %0
  %6 = load i8, i8* %0
  %stack_var_-56 = alloca i32, align 4
  %7 = call i32* @calloc(i32 40, i32 1), !insn.addr !135
  %8 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !136
  %9 = icmp slt i32 %8, 0, !insn.addr !137
  br i1 %9, label %dec_label_pc_10d90, label %dec_label_pc_10d10, !insn.addr !138

dec_label_pc_10d10:                               ; preds = %dec_label_pc_10cd8
  %10 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !139
  %11 = call i8* @strcpy(i8* nonnull %10, i8* %arg2), !insn.addr !139
  %12 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 35111), !insn.addr !140
  %13 = icmp slt i32 %12, 0, !insn.addr !141
  br i1 %13, label %dec_label_pc_10da4, label %dec_label_pc_10d34, !insn.addr !142

dec_label_pc_10d34:                               ; preds = %dec_label_pc_10d10
  %14 = ptrtoint i32* %arg1 to i32
  %15 = call i32 @close(i32 %8), !insn.addr !143
  %16 = zext i8 %6 to i32, !insn.addr !144
  %17 = zext i8 %4 to i32, !insn.addr !145
  %18 = zext i8 %3 to i32, !insn.addr !146
  %19 = zext i8 %2 to i32, !insn.addr !147
  %20 = zext i8 %1 to i32, !insn.addr !148
  %21 = bitcast i32* %7 to i8*, !insn.addr !149
  %22 = sext i8 %5 to i32, !insn.addr !149
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* %21, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11628, i32 0, i32 0), i32 %20, i32 %19, i32 %22, i32 %16, i32 %17, i32 %18), !insn.addr !149
  %24 = bitcast i32* %arg1 to i8*, !insn.addr !150
  %25 = call i8* @strcpy(i8* %24, i8* %21), !insn.addr !150
  call void @free(i32* %7), !insn.addr !151
  ret i32 %14, !insn.addr !152

dec_label_pc_10d90:                               ; preds = %dec_label_pc_10cd8
  call void @perror(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_11600, i32 0, i32 0)), !insn.addr !153
  call void @exit(i32 0), !insn.addr !154
  unreachable, !insn.addr !154

dec_label_pc_10da4:                               ; preds = %dec_label_pc_10d10
  call void @perror(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11620, i32 0, i32 0)), !insn.addr !155
  call void @exit(i32 0), !insn.addr !156
  unreachable, !insn.addr !156

; uselistorder directives
  uselistorder i8* %21, { 1, 0 }
  uselistorder i8* %0, { 5, 4, 3, 2, 1, 0 }
  uselistorder void (i8*)* @perror, { 2, 1, 4, 3, 0, 5 }
  uselistorder i32 (i32)* @close, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 0, 2, 1, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 2, 3, 0, 4 }
}

define i32 @function_10db8(i32 %arg1) local_unnamed_addr {
dec_label_pc_10db8:
  %stack_var_-80 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-80, i32 0, i32 64), !insn.addr !157
  %1 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !158
  %2 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), i32 %arg1, i32 434), !insn.addr !158
  %3 = call i32 @system(i8* nonnull %1), !insn.addr !159
  %4 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), i32 %arg1, i32 435), !insn.addr !160
  %5 = call i32 @system(i8* nonnull %1), !insn.addr !161
  ret i32 %5, !insn.addr !162
}

define i32 @function_10e1c() local_unnamed_addr {
dec_label_pc_10e1c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i8*, !insn.addr !163
  %3 = call i32 @access(i8* %2, i32 0), !insn.addr !163
  ret i32 0, !insn.addr !164
}

define i32 @function_10e34() local_unnamed_addr {
dec_label_pc_10e34:
  %r0.0.reg2mem = alloca i32, !insn.addr !165
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-72, i32 0, i32 64), !insn.addr !166
  %1 = bitcast i32* %stack_var_-72 to i8*, !insn.addr !167
  %2 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_1167c, i32 0, i32 0), i32 406), !insn.addr !167
  %3 = call i32 @access(i8* nonnull %1, i32 0), !insn.addr !168
  %4 = icmp eq i32 %3, 0, !insn.addr !169
  br i1 %4, label %dec_label_pc_10edc, label %dec_label_pc_10e74, !insn.addr !170

dec_label_pc_10e74:                               ; preds = %dec_label_pc_10e34
  %5 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11698, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11694, i32 0, i32 0)), !insn.addr !171
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !172
  br i1 %6, label %dec_label_pc_10f34, label %dec_label_pc_10e90, !insn.addr !173

dec_label_pc_10e90:                               ; preds = %dec_label_pc_10e74
  %7 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11690, i32 0, i32 0), i32 406), !insn.addr !174
  %8 = call i32 @strlen(i8* nonnull %1), !insn.addr !175
  %9 = call i32 @fwrite(i32* nonnull %stack_var_-72, i32 %8, i32 1, %_IO_FILE* nonnull %5), !insn.addr !176
  %10 = icmp eq i32 %9, 1, !insn.addr !177
  br i1 %10, label %dec_label_pc_10ed4, label %dec_label_pc_10ec8, !insn.addr !178

dec_label_pc_10ec8:                               ; preds = %dec_label_pc_10e90
  %11 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_116c8, i32 0, i32 0)), !insn.addr !179
  br label %dec_label_pc_10ed4, !insn.addr !179

dec_label_pc_10ed4:                               ; preds = %dec_label_pc_10ec8, %dec_label_pc_10e90
  %12 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !180
  br label %dec_label_pc_10edc, !insn.addr !180

dec_label_pc_10edc:                               ; preds = %dec_label_pc_10ed4, %dec_label_pc_10e34
  %13 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %1, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_116dc, i32 0, i32 0), i32 406), !insn.addr !181
  %14 = call %_IO_FILE* @fopen64(i8* nonnull %1, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_116fc, i32 0, i32 0)), !insn.addr !182
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !183
  br i1 %15, label %dec_label_pc_10f48, label %dec_label_pc_10f08, !insn.addr !184

dec_label_pc_10f08:                               ; preds = %dec_label_pc_10edc
  %16 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* nonnull %14, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11690, i32 0, i32 0), i32* nonnull %stack_var_-76), !insn.addr !185
  %17 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !186
  %18 = load i32, i32* %stack_var_-76, align 4, !insn.addr !187
  %19 = icmp ne i32 %18, 0, !insn.addr !188
  %spec.store.select = zext i1 %19 to i32
  store i32 %spec.store.select, i32* %r0.0.reg2mem
  br label %dec_label_pc_10f2c

dec_label_pc_10f2c:                               ; preds = %dec_label_pc_10f08, %dec_label_pc_10f48, %dec_label_pc_10f34
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !189

dec_label_pc_10f34:                               ; preds = %dec_label_pc_10e74
  %20 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_116b0, i32 0, i32 0)), !insn.addr !190
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_10f2c, !insn.addr !191

dec_label_pc_10f48:                               ; preds = %dec_label_pc_10edc
  %21 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11700, i32 0, i32 0)), !insn.addr !192
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !193
  br label %dec_label_pc_10f2c, !insn.addr !193

; uselistorder directives
  uselistorder i8* %1, { 2, 3, 0, 1, 4, 5 }
  uselistorder i32* %stack_var_-76, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 1, 0, 2 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10f2c, { 1, 2, 0 }
}

define i32 @function_10f5c(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f5c:
  %storemerge.reg2mem = alloca i32, !insn.addr !194
  %r4.0.reg2mem = alloca i32, !insn.addr !194
  %stack_var_-80 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-80, i32 0, i32 64), !insn.addr !195
  %1 = icmp eq i32 %arg1, 0, !insn.addr !196
  %2 = bitcast i32* %stack_var_-80 to i8*
  store i32 3, i32* %r4.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_10f7c, !insn.addr !195

dec_label_pc_10f7c:                               ; preds = %dec_label_pc_10fb0, %dec_label_pc_10f5c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  br i1 %1, label %dec_label_pc_10fe8, label %dec_label_pc_10f98, !insn.addr !197

dec_label_pc_10f98:                               ; preds = %dec_label_pc_10f7c
  %3 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), i32 1, i32 435), !insn.addr !198
  %4 = call i32 @system(i8* nonnull %2), !insn.addr !199
  %5 = call i32 @usleep(i32 50000), !insn.addr !200
  store i32 435, i32* %storemerge.reg2mem, !insn.addr !201
  br label %dec_label_pc_10fb0, !insn.addr !201

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10fe8, %dec_label_pc_10f98
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %6 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), i32 0, i32 %storemerge.reload), !insn.addr !202
  %7 = call i32 @system(i8* nonnull %2), !insn.addr !203
  %8 = call i32 @usleep(i32 50000), !insn.addr !204
  %9 = add nsw i32 %r4.0.reload, -1, !insn.addr !205
  %10 = icmp eq i32 %r4.0.reload, 1, !insn.addr !205
  store i32 %9, i32* %r4.0.reg2mem, !insn.addr !206
  br i1 %10, label %dec_label_pc_10fdc, label %dec_label_pc_10f7c, !insn.addr !206

dec_label_pc_10fdc:                               ; preds = %dec_label_pc_10fb0
  ret i32 0, !insn.addr !207

dec_label_pc_10fe8:                               ; preds = %dec_label_pc_10f7c
  %11 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), i32 1, i32 434), !insn.addr !208
  %12 = call i32 @system(i8* nonnull %2), !insn.addr !209
  %13 = call i32 @usleep(i32 50000), !insn.addr !210
  store i32 434, i32* %storemerge.reg2mem, !insn.addr !211
  br label %dec_label_pc_10fb0, !insn.addr !211

; uselistorder directives
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i8* %2, { 4, 5, 2, 1, 0, 3 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i8*)* @system, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 10, 4, 3, 7, 6, 5, 2, 1, 0, 9, 8, 11 }
  uselistorder i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11654, i32 0, i32 0), { 1, 2, 0, 3, 4 }
}

define i32 @function_11018() local_unnamed_addr {
dec_label_pc_11018:
  %merge.reg2mem = alloca i32, !insn.addr !212
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !213
  %1 = icmp eq i32 %0, -1, !insn.addr !214
  store i32 %0, i32* @global_var_219e0, align 4, !insn.addr !215
  br i1 %1, label %dec_label_pc_110e4, label %dec_label_pc_11048, !insn.addr !216

dec_label_pc_11048:                               ; preds = %dec_label_pc_11018
  store i32 1, i32* %stack_var_-20, align 4, !insn.addr !217
  %2 = call i32 @setsockopt(i32 %0, i32 1, i32 6, i32* nonnull %stack_var_-20, i32 4), !insn.addr !218
  %3 = icmp eq i32 %2, -1, !insn.addr !219
  br i1 %3, label %dec_label_pc_110fc, label %dec_label_pc_11070, !insn.addr !220

dec_label_pc_11070:                               ; preds = %dec_label_pc_11048
  %4 = load i32, i32* @global_var_219e0, align 4, !insn.addr !221
  store i16 -25801, i16* bitcast (i32* @global_var_21a22 to i16*), align 4, !insn.addr !222
  store i32 -1, i32* @global_var_21a24, align 4, !insn.addr !223
  store i32 0, i32* @global_var_21a28, align 4, !insn.addr !224
  store i32 0, i32* @global_var_21a18, align 4, !insn.addr !225
  store i32 0, i32* @global_var_21a2c, align 4, !insn.addr !226
  store i32 0, i32* @global_var_21a1c, align 4, !insn.addr !227
  store i16 -25545, i16* bitcast (i32* @global_var_21a12 to i16*), align 4, !insn.addr !228
  store i32 0, i32* @global_var_21a14, align 4, !insn.addr !229
  store i16 2, i16* bitcast (%sockaddr** @global_var_21a20 to i16*), align 4, !insn.addr !230
  store i16 2, i16* bitcast (%timeval** @global_var_21a10 to i16*), align 4, !insn.addr !231
  %5 = call i32 @bind(i32 %4, %sockaddr* bitcast (%timeval** @global_var_21a10 to %sockaddr*), i32 16), !insn.addr !232
  %6 = icmp eq i32 %5, -1, !insn.addr !233
  store i32 %5, i32* %merge.reg2mem, !insn.addr !234
  br i1 %6, label %dec_label_pc_1110c, label %dec_label_pc_110dc, !insn.addr !234

dec_label_pc_110dc:                               ; preds = %dec_label_pc_110e4, %dec_label_pc_110fc, %dec_label_pc_1110c, %dec_label_pc_11070
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !235

dec_label_pc_110e4:                               ; preds = %dec_label_pc_11018
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11724, i32 0, i32 0)), !insn.addr !236
  store i32 -1, i32* %merge.reg2mem, !insn.addr !236
  br label %dec_label_pc_110dc, !insn.addr !236

dec_label_pc_110fc:                               ; preds = %dec_label_pc_11048
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11734, i32 0, i32 0)), !insn.addr !237
  store i32 -1, i32* %merge.reg2mem, !insn.addr !238
  br label %dec_label_pc_110dc, !insn.addr !238

dec_label_pc_1110c:                               ; preds = %dec_label_pc_11070
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11748, i32 0, i32 0)), !insn.addr !239
  store i32 0, i32* %merge.reg2mem, !insn.addr !240
  br label %dec_label_pc_110dc, !insn.addr !240

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32* %merge.reg2mem, { 1, 2, 3, 0, 4 }
  uselistorder i32 6, { 1, 2, 0 }
  uselistorder i32 (i32, i32, i32)* @socket, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_110dc, { 2, 1, 0, 3 }
}

define i32 @function_1111c() local_unnamed_addr {
dec_label_pc_1111c:
  %stack_var_-156 = alloca i32, align 4
  %stack_var_-188 = alloca i32, align 4
  %stack_var_-116 = alloca i32, align 4
  store i32 0, i32* %stack_var_-188, align 4, !insn.addr !241
  store i32 0, i32* %stack_var_-156, align 4, !insn.addr !242
  %0 = call i32* @memset(i32* nonnull %stack_var_-116, i32 0, i32 100), !insn.addr !243
  %1 = call i32 @function_10b18(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11758, i32 0, i32 0), i32* nonnull %stack_var_-156), !insn.addr !244
  %2 = icmp eq i32 %1, 0, !insn.addr !245
  br i1 %2, label %dec_label_pc_1124c, label %dec_label_pc_1119c, !insn.addr !246

dec_label_pc_1119c:                               ; preds = %dec_label_pc_1124c, %dec_label_pc_1111c
  %3 = ptrtoint i32* %stack_var_-116 to i32, !insn.addr !247
  %4 = call i32 @function_10cd8(i32* nonnull %stack_var_-188, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_11758, i32 0, i32 0)), !insn.addr !248
  %5 = bitcast i32* %stack_var_-188 to i8*, !insn.addr !249
  %6 = call i32 @strlen(i8* nonnull %5), !insn.addr !249
  %7 = add i32 %6, 1, !insn.addr !250
  %8 = call i8* @strncpy(i8* bitcast (i8** @global_var_219e8 to i8*), i8* nonnull %5, i32 %6), !insn.addr !251
  %9 = bitcast i32* %stack_var_-116 to i8*, !insn.addr !252
  %10 = bitcast i32* %stack_var_-156 to i8*, !insn.addr !252
  %11 = call i8* @stpcpy(i8* nonnull %9, i8* nonnull %10), !insn.addr !252
  %12 = ptrtoint i8* %11 to i32, !insn.addr !252
  store i8 44, i8* %11, align 1, !insn.addr !253
  %13 = add i32 %12, 1, !insn.addr !254
  %14 = inttoptr i32 %13 to i32*, !insn.addr !255
  %15 = call i32* @memcpy(i32* %14, i32* nonnull %stack_var_-188, i32 %7), !insn.addr !255
  %16 = load i32, i32* @global_var_219e0, align 4, !insn.addr !256
  %17 = sub i32 %7, %3, !insn.addr !257
  %18 = add i32 %17, %12, !insn.addr !258
  %19 = call i32 @sendto(i32 %16, i32* nonnull %stack_var_-116, i32 %18, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_21a20 to %sockaddr*), i32 16), !insn.addr !259
  %20 = icmp slt i32 %19, 0, !insn.addr !260
  br i1 %20, label %dec_label_pc_1125c, label %dec_label_pc_11230, !insn.addr !261

dec_label_pc_11230:                               ; preds = %dec_label_pc_1119c
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11780, i32 0, i32 0), i32* nonnull %stack_var_-116), !insn.addr !262
  ret i32 1, !insn.addr !263

dec_label_pc_1124c:                               ; preds = %dec_label_pc_1111c
  %22 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11760, i32 0, i32 0)), !insn.addr !264
  br label %dec_label_pc_1119c, !insn.addr !265

dec_label_pc_1125c:                               ; preds = %dec_label_pc_1119c
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11770, i32 0, i32 0)), !insn.addr !266
  ret i32 1, !insn.addr !267

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %stack_var_-116, { 0, 1, 2, 4, 3 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 2, 0, 4, 3, 5 }
}

define i32 @function_11274(i8* %arg1) local_unnamed_addr {
dec_label_pc_11274:
  %0 = load i32, i32* @global_var_219e0, align 4, !insn.addr !268
  %1 = bitcast i8* %arg1 to i32*, !insn.addr !269
  %2 = call i32 @sendto(i32 %0, i32* %1, i32 10, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_21a20 to %sockaddr*), i32 16), !insn.addr !269
  %3 = icmp slt i32 %2, 0, !insn.addr !270
  %4 = icmp eq i1 %3, false, !insn.addr !271
  %.op = urem i32 %2, 65536
  %.op.op = or i32 %.op, 65536
  %spec.select.op.op = select i1 %3, i32 71536, i32 %.op.op
  %5 = inttoptr i32 %spec.select.op.op to i8*
  %6 = select i1 %4, i8* inttoptr (i32 71568 to i8*), i8* %5, !insn.addr !272
  %7 = call i32 (i8*, ...) @printf(i8* nonnull %6), !insn.addr !272
  ret i32 %7, !insn.addr !272

; uselistorder directives
  uselistorder i32 65536, { 1, 0 }
  uselistorder i32 (i32, i32*, i32, i32, %sockaddr*, i32)* @sendto, { 1, 0, 2 }
}

define i32 @function_112cc() local_unnamed_addr {
dec_label_pc_112cc:
  %r0.0.reg2mem = alloca i32, !insn.addr !273
  %r3.0.reg2mem = alloca i32, !insn.addr !273
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-156 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !274
  store i32 0, i32* %stack_var_-156, align 4, !insn.addr !275
  %1 = ptrtoint i32* %stack_var_-156 to i32, !insn.addr !275
  store i32 2, i32* %stack_var_-160, align 4, !insn.addr !276
  store i32 %1, i32* %r3.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_112f0, !insn.addr !276

dec_label_pc_112f0:                               ; preds = %dec_label_pc_112f0, %dec_label_pc_112cc
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %2 = add i32 %r3.0.reload, 4, !insn.addr !277
  %3 = inttoptr i32 %2 to i32*, !insn.addr !277
  store i32 0, i32* %3, align 4, !insn.addr !277
  %4 = icmp eq i32 %2, %0, !insn.addr !278
  store i32 %2, i32* %r3.0.reg2mem, !insn.addr !279
  br i1 %4, label %dec_label_pc_11300, label %dec_label_pc_112f0, !insn.addr !279

dec_label_pc_11300:                               ; preds = %dec_label_pc_112f0
  %5 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !280
  %6 = load i32, i32* @global_var_219e0, align 4, !insn.addr !281
  %7 = add i32 %6, 31, !insn.addr !282
  %8 = icmp slt i32 %6, 0, !insn.addr !283
  %spec.select = select i1 %8, i32 %7, i32 %6
  %9 = ashr i32 %spec.select, 5, !insn.addr !284
  %10 = mul i32 %9, 4, !insn.addr !285
  %11 = add i32 %5, -128
  %12 = add i32 %10, %11, !insn.addr !286
  %13 = inttoptr i32 %12 to i32*, !insn.addr !286
  %14 = load i32, i32* %13, align 4, !insn.addr !286
  %15 = urem i32 %6, 32
  %16 = shl i32 1, %15, !insn.addr !287
  %17 = or i32 %16, %14, !insn.addr !287
  store i32 %17, i32* %13, align 4, !insn.addr !288
  %18 = call i32* @calloc(i32 30, i32 1), !insn.addr !289
  %19 = bitcast i32* %stack_var_-160 to %timeval*
  %20 = add i32 %6, 1, !insn.addr !290
  %21 = bitcast i32* %stack_var_-152 to %_TYPEDEF_fd_set*, !insn.addr !291
  %22 = call i32 @select(i32 %20, %_TYPEDEF_fd_set* nonnull %21, %_TYPEDEF_fd_set* null, %_TYPEDEF_fd_set* null, %timeval* nonnull %19), !insn.addr !291
  switch i32 %22, label %dec_label_pc_113b4 [
    i32 -1, label %dec_label_pc_11430
    i32 0, label %dec_label_pc_11384
  ]

dec_label_pc_11384:                               ; preds = %dec_label_pc_11300, %dec_label_pc_11504
  %23 = load i32, i32* @global_var_21a08, align 4, !insn.addr !292
  %24 = add i32 %23, 1, !insn.addr !293
  store i32 %24, i32* @global_var_21a08, align 4, !insn.addr !294
  %25 = icmp eq i32 %24, 5, !insn.addr !295
  br i1 %25, label %dec_label_pc_11408, label %dec_label_pc_113a0, !insn.addr !296

dec_label_pc_113a0:                               ; preds = %dec_label_pc_113f4, %dec_label_pc_11384
  call void @free(i32* %18), !insn.addr !297
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !298
  br label %dec_label_pc_113ac, !insn.addr !298

dec_label_pc_113ac:                               ; preds = %dec_label_pc_114d4, %dec_label_pc_114a4, %dec_label_pc_113a0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !299

dec_label_pc_113b4:                               ; preds = %dec_label_pc_11300
  %26 = load i32, i32* @global_var_219e0, align 4, !insn.addr !300
  %27 = icmp slt i32 %26, 0, !insn.addr !301
  %28 = add i32 %26, 31, !insn.addr !302
  %spec.select2 = select i1 %27, i32 %28, i32 %26
  %29 = ashr i32 %spec.select2, 5, !insn.addr !303
  %30 = mul i32 %29, 4, !insn.addr !304
  %31 = add i32 %30, %11, !insn.addr !305
  %32 = inttoptr i32 %31 to i32*, !insn.addr !305
  %33 = load i32, i32* %32, align 4, !insn.addr !305
  %34 = urem i32 %26, 32
  %35 = shl i32 1, %34
  %36 = and i32 %35, %33
  %37 = icmp eq i32 %36, 0, !insn.addr !306
  br i1 %37, label %dec_label_pc_113f4, label %dec_label_pc_11434, !insn.addr !307

dec_label_pc_113f4:                               ; preds = %dec_label_pc_113b4
  %38 = load i32, i32* @global_var_21a08, align 4, !insn.addr !308
  %39 = icmp eq i32 %38, 5, !insn.addr !309
  br i1 %39, label %dec_label_pc_11408, label %dec_label_pc_113a0, !insn.addr !310

dec_label_pc_11408:                               ; preds = %dec_label_pc_113f4, %dec_label_pc_11384
  store i32 0, i32* @global_var_21a08, align 4, !insn.addr !311
  %40 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_117e8, i32 0, i32 0)), !insn.addr !312
  call void @free(i32* %18), !insn.addr !313
  ret i32 1, !insn.addr !314

dec_label_pc_11430:                               ; preds = %dec_label_pc_11300
  call void @exit(i32 -1), !insn.addr !315
  unreachable, !insn.addr !315

dec_label_pc_11434:                               ; preds = %dec_label_pc_113b4
  store i32 16, i32* %stack_var_-164, align 4, !insn.addr !316
  %41 = call i32 @recvfrom(i32 %26, i32* %18, i32 30, i32 0, %sockaddr* bitcast (%timeval** @global_var_21a10 to %sockaddr*), i32* nonnull %stack_var_-164), !insn.addr !317
  %42 = icmp slt i32 %41, 1, !insn.addr !318
  br i1 %42, label %dec_label_pc_11504, label %dec_label_pc_11468, !insn.addr !318

dec_label_pc_11468:                               ; preds = %dec_label_pc_11434
  %43 = bitcast i32* %18 to i8*, !insn.addr !319
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_117b0, i32 0, i32 0), i32* %18), !insn.addr !319
  store i32 0, i32* @global_var_21a08, align 4, !insn.addr !320
  %45 = call i32 @strlen(i8* bitcast (i8** @global_var_219e8 to i8*)), !insn.addr !321
  %46 = call i32 @strncmp(i8* %43, i8* bitcast (i8** @global_var_219e8 to i8*), i32 %45), !insn.addr !322
  %47 = icmp eq i32 %46, 0, !insn.addr !323
  br i1 %47, label %dec_label_pc_114a4, label %dec_label_pc_114d4, !insn.addr !324

dec_label_pc_114a4:                               ; preds = %dec_label_pc_11468
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_117bc, i32 0, i32 0)), !insn.addr !325
  %49 = call i32 @function_10f5c(i32 1), !insn.addr !326
  %50 = call i32 @function_11274(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_117cc, i32 0, i32 0)), !insn.addr !327
  call void @free(i32* %18), !insn.addr !328
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !329
  br label %dec_label_pc_113ac, !insn.addr !329

dec_label_pc_114d4:                               ; preds = %dec_label_pc_11468
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_117d0, i32 0, i32 0)), !insn.addr !330
  %52 = call i32 @function_10f5c(i32 0), !insn.addr !331
  %53 = call i32 @function_11274(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_117e0, i32 0, i32 0)), !insn.addr !332
  call void @free(i32* %18), !insn.addr !333
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_113ac, !insn.addr !334

dec_label_pc_11504:                               ; preds = %dec_label_pc_11434
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_117a0, i32 0, i32 0)), !insn.addr !335
  br label %dec_label_pc_11384, !insn.addr !336

; uselistorder directives
  uselistorder i32 %26, { 2, 0, 1, 4, 3 }
  uselistorder i32 %24, { 1, 0 }
  uselistorder i32* %18, { 3, 2, 4, 5, 6, 0, 1 }
  uselistorder i32 %6, { 2, 0, 1, 3, 4 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 1, 2, 0, 3 }
  uselistorder i32 (i8*)* @function_11274, { 1, 0 }
  uselistorder i32 (i32)* @function_10f5c, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2, 3, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 10, 9, 8, 7, 11, 5, 4, 3, 2, 1, 6, 0, 12 }
  uselistorder void (i32)* @exit, { 2, 1, 0, 4, 3, 5 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 5, 4, 3, 0, 6 }
  uselistorder void (i32*)* @free, { 4, 3, 2, 1, 0, 5, 6 }
  uselistorder %_TYPEDEF_fd_set* null, { 1, 0 }
  uselistorder i32* (i32, i32)* @calloc, { 1, 0, 2, 3 }
  uselistorder i32 30, { 1, 0 }
  uselistorder i32* @global_var_219e0, { 1, 2, 3, 4, 5, 0 }
  uselistorder i32 4, { 0, 1, 6, 2, 5, 3, 4 }
  uselistorder label %dec_label_pc_11384, { 1, 0 }
}

define i32 @function_11514() local_unnamed_addr {
dec_label_pc_11514:
  %r4.1.reg2mem = alloca i32, !insn.addr !337
  %merge.reg2mem = alloca i32, !insn.addr !337
  %r5.1.reg2mem = alloca i32, !insn.addr !337
  %r5.0.reg2mem = alloca i32, !insn.addr !337
  %r4.0.reg2mem = alloca i32, !insn.addr !337
  store i32 5, i32* %r4.0.reg2mem, !insn.addr !338
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !338
  br label %dec_label_pc_11520, !insn.addr !338

dec_label_pc_11520:                               ; preds = %dec_label_pc_1152c, %dec_label_pc_11514
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %0 = call i32 @function_10e34(), !insn.addr !339
  %1 = icmp eq i32 %0, 0, !insn.addr !340
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !341
  br i1 %1, label %dec_label_pc_11544, label %dec_label_pc_1152c, !insn.addr !341

dec_label_pc_1152c:                               ; preds = %dec_label_pc_11544, %dec_label_pc_11520
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %2 = add nsw i32 %r4.0.reload, -1, !insn.addr !342
  %3 = icmp eq i32 %r4.0.reload, 1, !insn.addr !342
  store i32 %2, i32* %r4.0.reg2mem, !insn.addr !343
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !343
  br i1 %3, label %dec_label_pc_11534, label %dec_label_pc_11520, !insn.addr !343

dec_label_pc_11534:                               ; preds = %dec_label_pc_1152c
  %4 = icmp eq i32 %r5.1.reload, 5, !insn.addr !344
  store i32 0, i32* %merge.reg2mem, !insn.addr !345
  br i1 %4, label %dec_label_pc_11560.preheader, label %dec_label_pc_11540, !insn.addr !345

dec_label_pc_11560.preheader:                     ; preds = %dec_label_pc_11534
  %5 = call i32 @function_10e34(), !insn.addr !346
  %6 = icmp eq i32 %5, 0, !insn.addr !347
  br i1 %6, label %dec_label_pc_1155c, label %dec_label_pc_11574.preheader, !insn.addr !348

dec_label_pc_11540:                               ; preds = %dec_label_pc_11574, %dec_label_pc_11534
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !349

dec_label_pc_11544:                               ; preds = %dec_label_pc_11520
  %7 = add i32 %r5.0.reload, 1, !insn.addr !350
  %8 = call i32 @usleep(i32 20000), !insn.addr !351
  store i32 %7, i32* %r5.1.reg2mem, !insn.addr !352
  br label %dec_label_pc_1152c, !insn.addr !352

dec_label_pc_1155c:                               ; preds = %dec_label_pc_11560.preheader, %dec_label_pc_1155c
  %9 = call i32 @usleep(i32 1000), !insn.addr !353
  %10 = call i32 @function_10e34(), !insn.addr !346
  %11 = icmp eq i32 %10, 0, !insn.addr !347
  br i1 %11, label %dec_label_pc_1155c, label %dec_label_pc_11574.preheader, !insn.addr !348

dec_label_pc_11574.preheader:                     ; preds = %dec_label_pc_1155c, %dec_label_pc_11560.preheader
  store i32 5, i32* %r4.1.reg2mem
  br label %dec_label_pc_11574

dec_label_pc_11574:                               ; preds = %dec_label_pc_11574.preheader, %dec_label_pc_11574
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %12 = call i32 @usleep(i32 100000), !insn.addr !354
  %13 = call i32 @usleep(i32 100000), !insn.addr !355
  %14 = add nsw i32 %r4.1.reload, -1, !insn.addr !356
  %15 = icmp eq i32 %r4.1.reload, 1, !insn.addr !356
  store i32 1, i32* %merge.reg2mem, !insn.addr !357
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !357
  br i1 %15, label %dec_label_pc_11540, label %dec_label_pc_11574, !insn.addr !357

; uselistorder directives
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %merge.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @usleep, { 6, 5, 7, 4, 3, 2, 1, 0, 8 }
  uselistorder i32 -1, { 6, 7, 4, 5, 0, 1, 8, 13, 9, 10, 11, 2, 3, 12, 14 }
  uselistorder i32 ()* @function_10e34, { 2, 0, 1 }
  uselistorder i32 5, { 0, 3, 1, 4, 5, 6, 7, 2 }
  uselistorder i32 1, { 11, 72, 73, 74, 15, 14, 13, 12, 10, 16, 34, 39, 31, 40, 76, 35, 36, 37, 55, 54, 53, 52, 51, 50, 18, 17, 32, 33, 77, 78, 58, 57, 56, 42, 41, 59, 19, 43, 75, 38, 60, 21, 20, 23, 22, 71, 44, 62, 61, 24, 5, 63, 45, 46, 64, 7, 47, 48, 65, 6, 25, 66, 26, 4, 70, 68, 67, 3, 2, 9, 29, 28, 27, 8, 1, 30, 0, 69, 79, 80, 81, 49 }
  uselistorder label %dec_label_pc_11574, { 1, 0 }
  uselistorder label %dec_label_pc_1155c, { 1, 0 }
}

define i32 @function_115ac(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_115ac:
  %0 = call i32 @function_10774(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !358
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_2184c to i32), i32 89396), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !359

; uselistorder directives
  uselistorder i32 0, { 18, 132, 11, 0, 133, 1, 19, 20, 2, 21, 22, 13, 23, 24, 25, 26, 27, 28, 136, 14, 29, 30, 15, 31, 32, 85, 137, 138, 3, 12, 16, 17, 86, 134, 87, 35, 36, 33, 34, 37, 38, 142, 88, 143, 39, 40, 89, 90, 91, 4, 45, 46, 43, 44, 41, 42, 96, 95, 94, 93, 92, 97, 5, 98, 135, 99, 49, 50, 47, 48, 130, 7, 8, 51, 52, 53, 54, 55, 56, 9, 10, 57, 58, 131, 100, 59, 60, 101, 6, 102, 61, 62, 103, 104, 105, 139, 140, 106, 107, 63, 64, 108, 65, 66, 127, 128, 109, 69, 70, 67, 68, 141, 110, 129, 71, 72, 144, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126 }
  uselistorder i32 2, { 0, 2, 4, 3, 5, 6, 8, 7, 1 }
}

define i32 @function_115f0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_115f0:
  ret i32 %arg1, !insn.addr !360
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

!0 = !{i64 67448}
!1 = !{i64 67452}
!2 = !{i64 67484}
!3 = !{i64 67496}
!4 = !{i64 67508}
!5 = !{i64 67520}
!6 = !{i64 67532}
!7 = !{i64 67544}
!8 = !{i64 67556}
!9 = !{i64 67568}
!10 = !{i64 67580}
!11 = !{i64 67592}
!12 = !{i64 67604}
!13 = !{i64 67616}
!14 = !{i64 67628}
!15 = !{i64 67640}
!16 = !{i64 67652}
!17 = !{i64 67664}
!18 = !{i64 67676}
!19 = !{i64 67688}
!20 = !{i64 67700}
!21 = !{i64 67712}
!22 = !{i64 67724}
!23 = !{i64 67736}
!24 = !{i64 67748}
!25 = !{i64 67760}
!26 = !{i64 67772}
!27 = !{i64 67784}
!28 = !{i64 67796}
!29 = !{i64 67808}
!30 = !{i64 67820}
!31 = !{i64 67832}
!32 = !{i64 67844}
!33 = !{i64 67856}
!34 = !{i64 67868}
!35 = !{i64 67880}
!36 = !{i64 67892}
!37 = !{i64 67924}
!38 = !{i64 67928}
!39 = !{i64 67932}
!40 = !{i64 67936}
!41 = !{i64 67940}
!42 = !{i64 67952}
!43 = !{i64 67956}
!44 = !{i64 67960}
!45 = !{i64 67964}
!46 = !{i64 67976}
!47 = !{i64 67980}
!48 = !{i64 67984}
!49 = !{i64 67988}
!50 = !{i64 67992}
!51 = !{i64 68028}
!52 = !{i64 68032}
!53 = !{i64 68038}
!54 = !{i64 68060}
!55 = !{i64 68064}
!56 = !{i64 68068}
!57 = !{i64 68072}
!58 = !{i64 68112}
!59 = !{i64 68160}
!60 = !{i64 68164}
!61 = !{i64 68174}
!62 = !{i64 68176}
!63 = !{i64 68178}
!64 = !{i64 68184}
!65 = !{i64 68186}
!66 = !{i64 68188}
!67 = !{i64 68194}
!68 = !{i64 68198}
!69 = !{i64 68202}
!70 = !{i64 68206}
!71 = !{i64 68208}
!72 = !{i64 68216}
!73 = !{i64 68222}
!74 = !{i64 68244}
!75 = !{i64 68264}
!76 = !{i64 68276}
!77 = !{i64 68280}
!78 = !{i64 68284}
!79 = !{i64 68292}
!80 = !{i64 68296}
!81 = !{i64 68300}
!82 = !{i64 68304}
!83 = !{i64 68308}
!84 = !{i64 68312}
!85 = !{i64 68316}
!86 = !{i64 68320}
!87 = !{i64 68324}
!88 = !{i64 68328}
!89 = !{i64 68332}
!90 = !{i64 68336}
!91 = !{i64 68348}
!92 = !{i64 68360}
!93 = !{i64 68372}
!94 = !{i64 68376}
!95 = !{i64 68404}
!96 = !{i64 68408}
!97 = !{i64 68416}
!98 = !{i64 68432}
!99 = !{i64 68456}
!100 = !{i64 68460}
!101 = !{i64 68464}
!102 = !{i64 68484}
!103 = !{i64 68496}
!104 = !{i64 68504}
!105 = !{i64 68508}
!106 = !{i64 68516}
!107 = !{i64 68528}
!108 = !{i64 68536}
!109 = !{i64 68552}
!110 = !{i64 68560}
!111 = !{i64 68588}
!112 = !{i64 68608}
!113 = !{i64 68612}
!114 = !{i64 68616}
!115 = !{i64 68628}
!116 = !{i64 68644}
!117 = !{i64 68648}
!118 = !{i64 68652}
!119 = !{i64 68660}
!120 = !{i64 68664}
!121 = !{i64 68676}
!122 = !{i64 68684}
!123 = !{i64 68692}
!124 = !{i64 68696}
!125 = !{i64 68712}
!126 = !{i64 68736}
!127 = !{i64 68744}
!128 = !{i64 68760}
!129 = !{i64 68768}
!130 = !{i64 68780}
!131 = !{i64 68792}
!132 = !{i64 68800}
!133 = !{i64 68812}
!134 = !{i64 68820}
!135 = !{i64 68848}
!136 = !{i64 68868}
!137 = !{i64 68872}
!138 = !{i64 68876}
!139 = !{i64 68888}
!140 = !{i64 68904}
!141 = !{i64 68908}
!142 = !{i64 68912}
!143 = !{i64 68920}
!144 = !{i64 68924}
!145 = !{i64 68936}
!146 = !{i64 68944}
!147 = !{i64 68948}
!148 = !{i64 68952}
!149 = !{i64 68972}
!150 = !{i64 68984}
!151 = !{i64 68992}
!152 = !{i64 69004}
!153 = !{i64 69016}
!154 = !{i64 69024}
!155 = !{i64 69036}
!156 = !{i64 69044}
!157 = !{i64 69080}
!158 = !{i64 69100}
!159 = !{i64 69108}
!160 = !{i64 69128}
!161 = !{i64 69136}
!162 = !{i64 69144}
!163 = !{i64 69156}
!164 = !{i64 69168}
!165 = !{i64 69172}
!166 = !{i64 69192}
!167 = !{i64 69212}
!168 = !{i64 69224}
!169 = !{i64 69228}
!170 = !{i64 69232}
!171 = !{i64 69252}
!172 = !{i64 69256}
!173 = !{i64 69260}
!174 = !{i64 69280}
!175 = !{i64 69288}
!176 = !{i64 69308}
!177 = !{i64 69312}
!178 = !{i64 69316}
!179 = !{i64 69328}
!180 = !{i64 69336}
!181 = !{i64 69356}
!182 = !{i64 69372}
!183 = !{i64 69376}
!184 = !{i64 69380}
!185 = !{i64 69396}
!186 = !{i64 69404}
!187 = !{i64 69408}
!188 = !{i64 69412}
!189 = !{i64 69424}
!190 = !{i64 69436}
!191 = !{i64 69444}
!192 = !{i64 69456}
!193 = !{i64 69464}
!194 = !{i64 69468}
!195 = !{i64 69496}
!196 = !{i64 69500}
!197 = !{i64 69524}
!198 = !{i64 69528}
!199 = !{i64 69536}
!200 = !{i64 69544}
!201 = !{i64 69548}
!202 = !{i64 69568}
!203 = !{i64 69576}
!204 = !{i64 69584}
!205 = !{i64 69588}
!206 = !{i64 69592}
!207 = !{i64 69604}
!208 = !{i64 69628}
!209 = !{i64 69636}
!210 = !{i64 69644}
!211 = !{i64 69652}
!212 = !{i64 69656}
!213 = !{i64 69680}
!214 = !{i64 69688}
!215 = !{i64 69696}
!216 = !{i64 69700}
!217 = !{i64 69720}
!218 = !{i64 69728}
!219 = !{i64 69732}
!220 = !{i64 69740}
!221 = !{i64 69768}
!222 = !{i64 69780}
!223 = !{i64 69784}
!224 = !{i64 69792}
!225 = !{i64 69800}
!226 = !{i64 69808}
!227 = !{i64 69816}
!228 = !{i64 69820}
!229 = !{i64 69828}
!230 = !{i64 69832}
!231 = !{i64 69836}
!232 = !{i64 69840}
!233 = !{i64 69844}
!234 = !{i64 69848}
!235 = !{i64 69856}
!236 = !{i64 69868}
!237 = !{i64 69892}
!238 = !{i64 69896}
!239 = !{i64 69908}
!240 = !{i64 69912}
!241 = !{i64 69944}
!242 = !{i64 69976}
!243 = !{i64 70016}
!244 = !{i64 70032}
!245 = !{i64 70036}
!246 = !{i64 70040}
!247 = !{i64 69924}
!248 = !{i64 70056}
!249 = !{i64 70064}
!250 = !{i64 70084}
!251 = !{i64 70088}
!252 = !{i64 70100}
!253 = !{i64 70120}
!254 = !{i64 70124}
!255 = !{i64 70132}
!256 = !{i64 70152}
!257 = !{i64 70128}
!258 = !{i64 70164}
!259 = !{i64 70180}
!260 = !{i64 70184}
!261 = !{i64 70188}
!262 = !{i64 70204}
!263 = !{i64 70216}
!264 = !{i64 70228}
!265 = !{i64 70232}
!266 = !{i64 70244}
!267 = !{i64 70256}
!268 = !{i64 70288}
!269 = !{i64 70312}
!270 = !{i64 70316}
!271 = !{i64 70324}
!272 = !{i64 70344}
!273 = !{i64 70348}
!274 = !{i64 70360}
!275 = !{i64 70372}
!276 = !{i64 70380}
!277 = !{i64 70384}
!278 = !{i64 70388}
!279 = !{i64 70396}
!280 = !{i64 70404}
!281 = !{i64 70416}
!282 = !{i64 70432}
!283 = !{i64 70440}
!284 = !{i64 70444}
!285 = !{i64 70456}
!286 = !{i64 70468}
!287 = !{i64 70472}
!288 = !{i64 70476}
!289 = !{i64 70480}
!290 = !{i64 70508}
!291 = !{i64 70512}
!292 = !{i64 70540}
!293 = !{i64 70544}
!294 = !{i64 70548}
!295 = !{i64 70552}
!296 = !{i64 70556}
!297 = !{i64 70564}
!298 = !{i64 70568}
!299 = !{i64 70576}
!300 = !{i64 70580}
!301 = !{i64 70588}
!302 = !{i64 70592}
!303 = !{i64 70604}
!304 = !{i64 70616}
!305 = !{i64 70628}
!306 = !{i64 70636}
!307 = !{i64 70640}
!308 = !{i64 70652}
!309 = !{i64 70656}
!310 = !{i64 70660}
!311 = !{i64 70676}
!312 = !{i64 70680}
!313 = !{i64 70688}
!314 = !{i64 70700}
!315 = !{i64 70704}
!316 = !{i64 70724}
!317 = !{i64 70748}
!318 = !{i64 70756}
!319 = !{i64 70780}
!320 = !{i64 70788}
!321 = !{i64 70792}
!322 = !{i64 70808}
!323 = !{i64 70812}
!324 = !{i64 70816}
!325 = !{i64 70828}
!326 = !{i64 70836}
!327 = !{i64 70848}
!328 = !{i64 70856}
!329 = !{i64 70864}
!330 = !{i64 70876}
!331 = !{i64 70884}
!332 = !{i64 70896}
!333 = !{i64 70904}
!334 = !{i64 70912}
!335 = !{i64 70924}
!336 = !{i64 70928}
!337 = !{i64 70932}
!338 = !{i64 70940}
!339 = !{i64 70944}
!340 = !{i64 70948}
!341 = !{i64 70952}
!342 = !{i64 70956}
!343 = !{i64 70960}
!344 = !{i64 70964}
!345 = !{i64 70972}
!346 = !{i64 71008}
!347 = !{i64 71012}
!348 = !{i64 71020}
!349 = !{i64 70976}
!350 = !{i64 70984}
!351 = !{i64 70988}
!352 = !{i64 70992}
!353 = !{i64 71004}
!354 = !{i64 71044}
!355 = !{i64 71064}
!356 = !{i64 71068}
!357 = !{i64 71072}
!358 = !{i64 71102}
!359 = !{i64 71136}
!360 = !{i64 71156}
