source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat64 = type { i64, i64, i32, i32, i32, i32, i64, i64, i64, i32, i32, i64, i32, i32, i32, i32, i32, i32, i32, i32 }

@global_var_2300c = local_unnamed_addr global i32 67528
@global_var_23010 = local_unnamed_addr global i32 67528
@global_var_23014 = local_unnamed_addr global i32 67528
@global_var_23018 = local_unnamed_addr global i32 67528
@global_var_2301c = local_unnamed_addr global i32 67528
@global_var_23020 = local_unnamed_addr global i32 67528
@global_var_23024 = local_unnamed_addr global i32 67528
@global_var_23028 = local_unnamed_addr global i32 67528
@global_var_2302c = local_unnamed_addr global i32 67528
@global_var_23030 = local_unnamed_addr global i32 67528
@global_var_23034 = local_unnamed_addr global i32 67528
@global_var_23038 = local_unnamed_addr global i32 67528
@global_var_2303c = local_unnamed_addr global i32 67528
@global_var_23040 = local_unnamed_addr global i32 67528
@global_var_23044 = local_unnamed_addr global i32 67528
@global_var_23048 = local_unnamed_addr global i32 67528
@global_var_2304c = local_unnamed_addr global i32 67528
@global_var_23050 = local_unnamed_addr global i32 67528
@global_var_23054 = local_unnamed_addr global i32 67528
@global_var_23058 = local_unnamed_addr global i32 67528
@global_var_2305c = local_unnamed_addr global i32 67528
@global_var_23060 = local_unnamed_addr global i32 67528
@global_var_23064 = local_unnamed_addr global i32 67528
@global_var_23068 = local_unnamed_addr global i32 67528
@global_var_2306c = local_unnamed_addr global i32 67528
@global_var_23070 = local_unnamed_addr global i32 67528
@global_var_23074 = local_unnamed_addr global i32 67528
@global_var_11cb0 = constant [13 x i8] c"1:8fr:qhw:xd\00"
@global_var_230a8 = local_unnamed_addr global i32 0
@global_var_23088 = local_unnamed_addr global i32 0
@global_var_11cc0 = constant [11 x i8] c"EEPROG_DEV\00"
@global_var_11ccc = constant [16 x i8] c"EEPROG_I2C_ADDR\00"
@global_var_11d78 = constant [36 x i8] c"Dummy mode selected, nothing done.\0A\00"
@global_var_11cdc = constant [6 x i8] c"0.7.5\00"
@global_var_11ce4 = constant [41 x i8] c"eeprog %s, a 24Cxx EEPROM reader/writer\0A\00"
@global_var_11d10 = constant [62 x i8] c"Copyright (c) 2003 by Stefano Barbato - All rights reserved.\0A\00"
@global_var_11d50 = constant [39 x i8] c"  Bus: %s, Address: 0x%x, Mode: %dbit\0A\00"
@global_var_11df4 = constant [30 x i8] c"  Reading %d bytes from 0x%x\0A\00"
@global_var_11e14 = constant [42 x i8] c"  Writing stdin starting at address 0x%x\0A\00"
@global_var_11c64 = constant [42 x i8] c"EEPROM type switch (-8 or -16) used twice\00"
@global_var_11c90 = constant [30 x i8] c"Both read and write requested\00"
@global_var_11d9c = constant [86 x i8] c"unable to open eeprom device file (check that the file exists and that it's readable)\00"
@global_var_10da4 = local_unnamed_addr constant i32 74344
@global_var_10da8 = local_unnamed_addr constant i32 120
@global_var_22f10 = global i32 1
@global_var_23000 = local_unnamed_addr global i32* @global_var_22f10
@global_var_23078 = local_unnamed_addr global i32 0
@global_var_1155c = constant [1221 x i8] c"eeprog 0.7.5, a 24Cxx EEPROM reader/writer\0ACopyright (c) 2003 by Stefano Barbato - All rights reserved.\0AUsage: eeprog [-fqxdh] [-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\0A\0A  Address modes:\0A\09-8\09\09Use 8bit address mode for 24c0x...24C16 [default]\0A\09-16\09\09Use 16bit address mode for 24c32...24C256\0A  Actions:\0A\09-r addr[:count]\09Read [count] (1 if omitted) bytes from [addr]\0A\09\09\09and print them to the standard output\0A\09-w addr\09\09Write input (stdin) at address [addr] of the EEPROM\0A\09-h\09\09Print this help\0A  Options:\0A\09-x\09\09Set hex output mode\0A\09-d\09\09Dummy mode, display what *would* have been done\0A\09-f\09\09Disable warnings and don't ask confirmation\0A\09-q\09\09Quiet mode\0A\0AThe following environment variables could be set instead of the command\0Aline arguments:\0A\09EEPROG_DEV\09\09device name(/dev/i2c-N)\0A\09EEPROG_I2C_ADDR\09\09i2c-address\0A\0A\09Examples\0A\091- read 64 bytes from the EEPROM at address 0x54 on bus 0 starting\0A\09   at address 123 (decimal)\0A\09\09eeprog /dev/i2c-0 0x54 -r 123:64\0A\092- prints the hex codes of the first 32 bytes read from bus 1\0A\09   at address 0x22\0A\09\09eeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\0A\093- write the current timestamp at address 0x200 of the EEPROM on\0A\09   bus 0 at address 0x33\0A\09\09date | eeprog /dev/i2c-0 0x33 -w 0x200\0A\00"
@global_var_11a24 = constant [14 x i8] c"%s\0A[line %d]\0A\00"
@global_var_11a34 = constant [22 x i8] c"Error at line %d: %s\0A\00"
@global_var_11a4c = constant [470 x i8] c"\0A____________________________WARNING____________________________\0AErroneously writing to a system EEPROM (like DIMM SPD modules)\0Acan break your system.  It will NOT boot anymore so you'll not\0Abe able to fix it.\0A\0AReading from 8bit EEPROMs (like that in your DIMM) without using\0Athe -8 switch can also UNEXPECTEDLY write to them, so be sure to\0Ause the -8 command param when required.\0A\0AUse -f to disable this warning message\0A\0APress ENTER to continue or hit CTRL-C to exit\0A\0A\00"
@global_var_11c30 = constant [15 x i8] c"\0A %.4x|  %.2x \00"
@global_var_11c50 = constant [6 x i8] c"%.2x \00"
@global_var_11c4c = constant [3 x i8] c"  \00"
@global_var_11c40 = constant [10 x i8] c"\0A %.4x|  \00"
@global_var_11c24 = constant [11 x i8] c"read error\00"
@global_var_1202c = constant [3 x i8] c"\0A\0A\00"
@global_var_11c58 = constant [12 x i8] c"write error\00"
@global_var_11e40 = constant [24 x i8] c"Error i2c_write_2b: %s\0A\00"
@global_var_11f90 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_11f40 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_11fe0 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_11e58 = constant [73 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE function is required. Program halted.\0A\0A\00"
@global_var_11ef0 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_11ea4 = constant [74 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE function is required. Program halted.\0A\0A\00"
@global_var_12030 = constant [24 x i8] c"Error i2c_write_1b: %s\0A\00"
@global_var_12048 = constant [26 x i8] c"ERR: unknown eeprom type\0A\00"
@global_var_12064 = constant [24 x i8] c"Error i2c_write_3b: %s\0A\00"
@global_var_11544 = local_unnamed_addr constant i32 72170
@global_var_119ea = constant [55 x i8] c"address 0x33\0A\09\09date | eeprog /dev/i2c-0 0x33 -w 0x200\0A\00"
@global_var_11548 = local_unnamed_addr constant i32 72160
@global_var_119e0 = local_unnamed_addr constant [65 x i8] c" bus 0 at address 0x33\0A\09\09date | eeprog /dev/i2c-0 0x33 -w 0x200\0A\00"
@global_var_22f08 = global i32 69141
@0 = external global i32
@global_var_230a0 = external local_unnamed_addr global i8*
@global_var_23090 = local_unnamed_addr global %_IO_FILE* null
@global_var_10d80 = local_unnamed_addr constant void ()* inttoptr (i32 67872 to void ()*)
@global_var_10d84 = local_unnamed_addr constant void ()* inttoptr (i32 70929 to void ()*)
@global_var_23098 = local_unnamed_addr global %_IO_FILE* null
@global_var_2309c = local_unnamed_addr global %_IO_FILE* null
@1 = internal constant [2 x i8] c"\0A\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_11fdc = constant [2 x i8] c"\0A\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_107bc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_107bc:
  %0 = call i32 @function_10d88(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_107dc(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107dc:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_107e8(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_107e8:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107f4(%_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_107f4:
  %0 = call i32 @_IO_getc(%_IO_FILE* %fp), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10800(i32 %c, %_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_10800:
  %0 = call i32 @_IO_putc(i32 %c, %_IO_FILE* %fp), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1080c(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_1080c:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_10818(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10818:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_10824(i32 %useconds) local_unnamed_addr {
dec_label_pc_10824:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_10830(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10830:
  %0 = call i32 @i2c_smbus_write_byte(i32 %arg1, i32 %arg2), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1083c(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_1083c:
  %0 = call i32 (i8*, i32, ...) @open64(i8* %file, i32 %oflag), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i8* @function_10848(i8* %name) local_unnamed_addr {
dec_label_pc_10848:
  %0 = call i8* @getenv(i8* %name), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define i32 @function_10854(i8* %s) local_unnamed_addr {
dec_label_pc_10854:
  %0 = call i32 @puts(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10860(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10860:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_1086c(i32 %errnum) local_unnamed_addr {
dec_label_pc_1086c:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define void @function_10878() local_unnamed_addr {
dec_label_pc_10878:
  call void @__gmon_start__(), !insn.addr !15
  ret void, !insn.addr !15
}

define void @function_10884(i32 %status) local_unnamed_addr {
dec_label_pc_10884:
  call void @exit(i32 %status), !insn.addr !16
  ret void, !insn.addr !16
}

define i32 @function_10890(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10890:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_1089c(i32 %arg1) local_unnamed_addr {
dec_label_pc_1089c:
  %0 = call i32 @i2c_smbus_read_byte(i32 %arg1), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_108a8(i8* %s) local_unnamed_addr {
dec_label_pc_108a8:
  %0 = call i32 @strlen(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_108b4(i32 %argc, i8** %argv, i8* %shortopts) local_unnamed_addr {
dec_label_pc_108b4:
  %0 = call i32 @getopt(i32 %argc, i8** %argv, i8* %shortopts), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_108c0(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108c0:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_108cc() local_unnamed_addr {
dec_label_pc_108cc:
  %0 = call i32 @i2c_smbus_write_byte_data(), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32* @function_108d8() local_unnamed_addr {
dec_label_pc_108d8:
  %0 = call i32* @__errno_location(), !insn.addr !23
  ret i32* %0, !insn.addr !23
}

define i32 @function_108e4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7) local_unnamed_addr {
dec_label_pc_108e4:
  %0 = call i32 @i2c_smbus_write_word_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108f0(i32 %c, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_108f0:
  %0 = call i32 @fputc(i32 %c, %_IO_FILE* %stream), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_108fc(i32 %ver, i8* %filename, %stat64* %stat_buf) local_unnamed_addr {
dec_label_pc_108fc:
  %0 = call i32 @__xstat64(i32 %ver, i8* %filename, %stat64* %stat_buf), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_10908() local_unnamed_addr {
dec_label_pc_10908:
  call void @abort(), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_10914(i32 %fd) local_unnamed_addr {
dec_label_pc_10914:
  %0 = call i32 @close(i32 %fd), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10920(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10920:
  %r4.0.reg2mem = alloca i32, !insn.addr !29
  %r0.0.reg2mem = alloca i32, !insn.addr !29
  %r7.0.ph16.be.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph20.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph18.reg2mem = alloca i32, !insn.addr !29
  %r7.0.ph16.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph14.reg2mem = alloca i32, !insn.addr !29
  %r7.0.ph12.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-176.0.ph11.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph9.reg2mem = alloca i32, !insn.addr !29
  %r7.0.ph7.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-176.0.ph6.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-180.0.ph5.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph.reg2mem = alloca i32, !insn.addr !29
  %sl.0.ph.reg2mem = alloca i32, !insn.addr !29
  %r7.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-176.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-180.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-172.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-144 = alloca i32, align 4
  %stack_var_-168 = alloca i32, align 4
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  store i32 0, i32* @global_var_230a8, align 4, !insn.addr !30
  %0 = inttoptr i32 %arg2 to i8**, !insn.addr !31
  store i32 0, i32* %stack_var_-172.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %stack_var_-180.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %stack_var_-176.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %r7.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %sl.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %fp.0.ph.reg2mem, !insn.addr !32
  br label %dec_label_pc_10968.outer, !insn.addr !32

dec_label_pc_10968.outer:                         ; preds = %dec_label_pc_109ac, %dec_label_pc_10920
  %fp.0.ph.reload = load i32, i32* %fp.0.ph.reg2mem
  %sl.0.ph.reload = load i32, i32* %sl.0.ph.reg2mem
  %r7.0.ph.reload = load i32, i32* %r7.0.ph.reg2mem
  %stack_var_-176.0.ph.reload = load i32, i32* %stack_var_-176.0.ph.reg2mem
  %stack_var_-180.0.ph.reload = load i32, i32* %stack_var_-180.0.ph.reg2mem
  %stack_var_-172.0.ph.reload = load i32, i32* %stack_var_-172.0.ph.reg2mem
  store i32 %stack_var_-180.0.ph.reload, i32* %stack_var_-180.0.ph5.reg2mem
  store i32 %stack_var_-176.0.ph.reload, i32* %stack_var_-176.0.ph6.reg2mem
  store i32 %r7.0.ph.reload, i32* %r7.0.ph7.reg2mem
  store i32 %fp.0.ph.reload, i32* %fp.0.ph9.reg2mem
  br label %dec_label_pc_10968.outer4

dec_label_pc_10968.outer4:                        ; preds = %dec_label_pc_10968.outer, %dec_label_pc_109dc
  %fp.0.ph9.reload = load i32, i32* %fp.0.ph9.reg2mem
  %r7.0.ph7.reload = load i32, i32* %r7.0.ph7.reg2mem
  %stack_var_-176.0.ph6.reload = load i32, i32* %stack_var_-176.0.ph6.reg2mem
  %stack_var_-180.0.ph5.reload = load i32, i32* %stack_var_-180.0.ph5.reg2mem
  store i32 %stack_var_-176.0.ph6.reload, i32* %stack_var_-176.0.ph11.reg2mem
  store i32 %r7.0.ph7.reload, i32* %r7.0.ph12.reg2mem
  store i32 %fp.0.ph9.reload, i32* %fp.0.ph14.reg2mem
  br label %dec_label_pc_10968.outer10

dec_label_pc_10968.outer10:                       ; preds = %dec_label_pc_10968.outer4, %dec_label_pc_109cc
  %fp.0.ph14.reload = load i32, i32* %fp.0.ph14.reg2mem
  %r7.0.ph12.reload = load i32, i32* %r7.0.ph12.reg2mem
  %stack_var_-176.0.ph11.reload = load i32, i32* %stack_var_-176.0.ph11.reg2mem
  store i32 %r7.0.ph12.reload, i32* %r7.0.ph16.reg2mem
  store i32 %fp.0.ph14.reload, i32* %fp.0.ph18.reg2mem
  br label %dec_label_pc_10968.outer15

dec_label_pc_10968.outer15:                       ; preds = %dec_label_pc_10968.outer15.backedge, %dec_label_pc_10968.outer10
  %fp.0.ph18.reload = load i32, i32* %fp.0.ph18.reg2mem
  %r7.0.ph16.reload = load i32, i32* %r7.0.ph16.reg2mem
  store i32 %fp.0.ph18.reload, i32* %fp.0.ph20.reg2mem
  br label %dec_label_pc_10968.outer19

dec_label_pc_10968.outer19:                       ; preds = %dec_label_pc_10968.outer15, %dec_label_pc_10a28
  %fp.0.ph20.reload = load i32, i32* %fp.0.ph20.reg2mem
  br label %dec_label_pc_10968

dec_label_pc_10968:                               ; preds = %dec_label_pc_10968.outer19, %dec_label_pc_109ec
  %1 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11cb0, i32 0, i32 0)), !insn.addr !31
  switch i32 %1, label %dec_label_pc_10988 [
    i32 -1, label %dec_label_pc_10a50
    i32 102, label %dec_label_pc_109dc
  ]

dec_label_pc_10988:                               ; preds = %dec_label_pc_10968
  %2 = icmp sgt i32 %1, 102, !insn.addr !33
  br i1 %2, label %dec_label_pc_109bc, label %dec_label_pc_1098c, !insn.addr !33

dec_label_pc_1098c:                               ; preds = %dec_label_pc_10988
  switch i32 %1, label %dec_label_pc_109a4 [
    i32 56, label %dec_label_pc_10a30
    i32 100, label %dec_label_pc_10a28
    i32 49, label %dec_label_pc_109fc
  ]

dec_label_pc_109a4:                               ; preds = %dec_label_pc_1098c, %dec_label_pc_109bc
  %3 = icmp eq i32 %sl.0.ph.reload, 0, !insn.addr !34
  br i1 %3, label %dec_label_pc_109ac, label %dec_label_pc_10d10, !insn.addr !35

dec_label_pc_109ac:                               ; preds = %dec_label_pc_109a4
  %4 = load i8*, i8** @global_var_230a0, align 4, !insn.addr !36
  %phitmp = ptrtoint i8* %4 to i32
  store i32 %phitmp, i32* %stack_var_-172.0.ph.reg2mem, !insn.addr !37
  store i32 %stack_var_-180.0.ph5.reload, i32* %stack_var_-180.0.ph.reg2mem, !insn.addr !37
  store i32 %stack_var_-176.0.ph11.reload, i32* %stack_var_-176.0.ph.reg2mem, !insn.addr !37
  store i32 %r7.0.ph16.reload, i32* %r7.0.ph.reg2mem, !insn.addr !37
  store i32 %1, i32* %sl.0.ph.reg2mem, !insn.addr !37
  store i32 %fp.0.ph20.reload, i32* %fp.0.ph.reg2mem, !insn.addr !37
  br label %dec_label_pc_10968.outer, !insn.addr !37

dec_label_pc_109bc:                               ; preds = %dec_label_pc_10988
  switch i32 %1, label %dec_label_pc_109a4 [
    i32 113, label %dec_label_pc_109ec
    i32 120, label %dec_label_pc_109cc
    i32 104, label %dec_label_pc_10a48
  ]

dec_label_pc_109cc:                               ; preds = %dec_label_pc_109bc
  %5 = add i32 %stack_var_-176.0.ph11.reload, 1, !insn.addr !38
  store i32 %5, i32* %stack_var_-176.0.ph11.reg2mem, !insn.addr !39
  store i32 %r7.0.ph16.reload, i32* %r7.0.ph12.reg2mem, !insn.addr !39
  store i32 %fp.0.ph20.reload, i32* %fp.0.ph14.reg2mem, !insn.addr !39
  br label %dec_label_pc_10968.outer10, !insn.addr !39

dec_label_pc_109dc:                               ; preds = %dec_label_pc_10968
  %6 = add i32 %stack_var_-180.0.ph5.reload, 1, !insn.addr !40
  store i32 %6, i32* %stack_var_-180.0.ph5.reg2mem, !insn.addr !41
  store i32 %stack_var_-176.0.ph11.reload, i32* %stack_var_-176.0.ph6.reg2mem, !insn.addr !41
  store i32 %r7.0.ph16.reload, i32* %r7.0.ph7.reg2mem, !insn.addr !41
  store i32 %fp.0.ph20.reload, i32* %fp.0.ph9.reg2mem, !insn.addr !41
  br label %dec_label_pc_10968.outer4, !insn.addr !41

dec_label_pc_109ec:                               ; preds = %dec_label_pc_109bc
  %7 = load i32, i32* @global_var_230a8, align 4, !insn.addr !42
  %8 = add i32 %7, 1, !insn.addr !43
  store i32 %8, i32* @global_var_230a8, align 4, !insn.addr !44
  br label %dec_label_pc_10968, !insn.addr !45

dec_label_pc_109fc:                               ; preds = %dec_label_pc_1098c
  %9 = load i8*, i8** @global_var_230a0, align 4, !insn.addr !46
  %10 = load i8, i8* %9, align 1, !insn.addr !47
  %11 = icmp eq i8 %10, 54, !insn.addr !48
  br i1 %11, label %dec_label_pc_10a0c, label %dec_label_pc_10d08, !insn.addr !49

dec_label_pc_10a0c:                               ; preds = %dec_label_pc_109fc
  %12 = call i32 @strlen(i8* %9), !insn.addr !50
  %13 = icmp eq i32 %12, 1, !insn.addr !51
  br i1 %13, label %dec_label_pc_10a18, label %dec_label_pc_10d08, !insn.addr !52

dec_label_pc_10a18:                               ; preds = %dec_label_pc_10a0c
  %14 = icmp eq i32 %r7.0.ph16.reload, 0, !insn.addr !53
  store i32 2, i32* %r7.0.ph16.be.reg2mem, !insn.addr !54
  br i1 %14, label %dec_label_pc_10968.outer15.backedge, label %dec_label_pc_10d20, !insn.addr !54

dec_label_pc_10968.outer15.backedge:              ; preds = %dec_label_pc_10a18, %dec_label_pc_10a30
  %r7.0.ph16.be.reload = load i32, i32* %r7.0.ph16.be.reg2mem
  store i32 %r7.0.ph16.be.reload, i32* %r7.0.ph16.reg2mem
  store i32 %fp.0.ph20.reload, i32* %fp.0.ph18.reg2mem
  br label %dec_label_pc_10968.outer15

dec_label_pc_10a28:                               ; preds = %dec_label_pc_1098c
  %15 = add i32 %fp.0.ph20.reload, 1, !insn.addr !55
  store i32 %15, i32* %fp.0.ph20.reg2mem, !insn.addr !56
  br label %dec_label_pc_10968.outer19, !insn.addr !56

dec_label_pc_10a30:                               ; preds = %dec_label_pc_1098c
  %16 = icmp eq i32 %r7.0.ph16.reload, 0, !insn.addr !57
  store i32 1, i32* %r7.0.ph16.be.reg2mem, !insn.addr !58
  br i1 %16, label %dec_label_pc_10968.outer15.backedge, label %dec_label_pc_10cf8, !insn.addr !58

dec_label_pc_10a48:                               ; preds = %dec_label_pc_109bc
  %17 = call i32 @function_10e18(i32 203), !insn.addr !59
  unreachable, !insn.addr !59

dec_label_pc_10a50:                               ; preds = %dec_label_pc_10968
  %18 = icmp eq i32 %sl.0.ph.reload, 0, !insn.addr !60
  br i1 %18, label %dec_label_pc_10d30, label %dec_label_pc_10a60, !insn.addr !61

dec_label_pc_10a60:                               ; preds = %dec_label_pc_10a50
  %19 = load i32, i32* @global_var_23088, align 4, !insn.addr !62
  %20 = sub i32 %arg1, %19, !insn.addr !63
  switch i32 %20, label %dec_label_pc_10a88 [
    i32 1, label %dec_label_pc_10c10
    i32 2, label %dec_label_pc_10a90
    i32 0, label %dec_label_pc_10b50
  ]

dec_label_pc_10a88:                               ; preds = %dec_label_pc_10a60
  %21 = call i32 @function_10e18(i32 238), !insn.addr !64
  unreachable, !insn.addr !64

dec_label_pc_10a90:                               ; preds = %dec_label_pc_10a60
  %22 = mul i32 %19, 4, !insn.addr !65
  %23 = add i32 %22, %arg2, !insn.addr !65
  %24 = add i32 %19, 1, !insn.addr !66
  %25 = inttoptr i32 %23 to i32*, !insn.addr !67
  %26 = load i32, i32* %25, align 4, !insn.addr !67
  %27 = add i32 %23, 4, !insn.addr !68
  %28 = inttoptr i32 %27 to i32*, !insn.addr !68
  %29 = load i32, i32* %28, align 4, !insn.addr !68
  store i32 %24, i32* @global_var_23088, align 4, !insn.addr !69
  store i32 %29, i32* %r0.0.reg2mem, !insn.addr !69
  store i32 %26, i32* %r4.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_10aa4, !insn.addr !69

dec_label_pc_10aa4:                               ; preds = %dec_label_pc_10cdc, %dec_label_pc_10c28, %dec_label_pc_10b50, %dec_label_pc_10a90
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %30 = icmp eq i32 %r4.0.reload, 0, !insn.addr !70
  %31 = icmp eq i1 %30, false, !insn.addr !71
  br i1 %31, label %dec_label_pc_10abc, label %dec_label_pc_10d50, !insn.addr !72

dec_label_pc_10abc:                               ; preds = %dec_label_pc_10aa4
  %32 = icmp eq i32 %r7.0.ph16.reload, 0, !insn.addr !73
  %spec.select2 = select i1 %32, i32 1, i32 %r7.0.ph16.reload
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %spec.select = zext i1 %30 to i32
  %33 = inttoptr i32 %r0.0.reload to i8*, !insn.addr !74
  %34 = inttoptr i32 %spec.select to i8**, !insn.addr !74
  %35 = call i32 @strtoul(i8* %33, i8** %34, i32 %spec.select), !insn.addr !74
  %36 = load i32, i32* @global_var_230a8, align 4, !insn.addr !75
  %37 = icmp eq i32 %36, 0, !insn.addr !76
  br i1 %37, label %dec_label_pc_10b94, label %dec_label_pc_10ad4, !insn.addr !77

dec_label_pc_10ad4:                               ; preds = %dec_label_pc_10bc0, %dec_label_pc_10b94, %dec_label_pc_10be4, %dec_label_pc_10abc
  %38 = icmp eq i32 %fp.0.ph20.reload, 0, !insn.addr !78
  br i1 %38, label %dec_label_pc_10adc, label %dec_label_pc_10b70, !insn.addr !79

dec_label_pc_10adc:                               ; preds = %dec_label_pc_10ad4
  %39 = call i32 @function_11190(i32 %r4.0.reload, i32 %35, i32 %spec.select2, i32* nonnull %stack_var_-160), !insn.addr !80
  %40 = icmp slt i32 %39, 0, !insn.addr !81
  br i1 %40, label %dec_label_pc_10d38, label %dec_label_pc_10af8, !insn.addr !82

dec_label_pc_10af8:                               ; preds = %dec_label_pc_10adc
  switch i32 %sl.0.ph.reload, label %dec_label_pc_10d48 [
    i32 114, label %dec_label_pc_10c40
    i32 119, label %dec_label_pc_10b08
  ]

dec_label_pc_10b08:                               ; preds = %dec_label_pc_10af8
  %41 = icmp eq i32 %stack_var_-180.0.ph5.reload, 0, !insn.addr !83
  br i1 %41, label %dec_label_pc_10cd4, label %dec_label_pc_10b14, !insn.addr !84

dec_label_pc_10b14:                               ; preds = %dec_label_pc_10cd4, %dec_label_pc_10b08
  %42 = call i32 @function_10ea0(i32 %stack_var_-172.0.ph.reload, i32* nonnull %stack_var_-168, i32* nonnull %stack_var_-164), !insn.addr !85
  %43 = load i32, i32* @global_var_230a8, align 4, !insn.addr !86
  %44 = icmp eq i32 %43, 0, !insn.addr !87
  br i1 %44, label %dec_label_pc_10cb4, label %dec_label_pc_10b30, !insn.addr !88

dec_label_pc_10b30:                               ; preds = %dec_label_pc_10cb4, %dec_label_pc_10b14
  %45 = load i32, i32* %stack_var_-168, align 4, !insn.addr !89
  %46 = call i32 @function_11074(i32* nonnull %stack_var_-160, i32 %45), !insn.addr !90
  br label %dec_label_pc_10b3c, !insn.addr !90

dec_label_pc_10b3c:                               ; preds = %dec_label_pc_10c70, %dec_label_pc_10b30
  %47 = call i32 @function_11314(i32* nonnull %stack_var_-160), !insn.addr !91
  br label %dec_label_pc_10b44, !insn.addr !91

dec_label_pc_10b44:                               ; preds = %dec_label_pc_10b70, %dec_label_pc_10b3c
  ret i32 0, !insn.addr !92

dec_label_pc_10b50:                               ; preds = %dec_label_pc_10a60
  %48 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11cc0, i32 0, i32 0)), !insn.addr !93
  %49 = ptrtoint i8* %48 to i32, !insn.addr !93
  %50 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11ccc, i32 0, i32 0)), !insn.addr !94
  %51 = ptrtoint i8* %50 to i32, !insn.addr !94
  store i32 %51, i32* %r0.0.reg2mem, !insn.addr !95
  store i32 %49, i32* %r4.0.reg2mem, !insn.addr !95
  br label %dec_label_pc_10aa4, !insn.addr !95

dec_label_pc_10b70:                               ; preds = %dec_label_pc_10ad4
  %52 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !96
  %53 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_11d78 to i32*), i32 1, i32 35, %_IO_FILE* %52), !insn.addr !97
  br label %dec_label_pc_10b44, !insn.addr !98

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10abc
  %54 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !99
  %55 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %54, i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_11ce4, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11cdc, i32 0, i32 0)), !insn.addr !100
  %56 = load i32, i32* @global_var_230a8, align 4, !insn.addr !101
  %57 = icmp eq i32 %56, 0, !insn.addr !102
  br i1 %57, label %dec_label_pc_10bc0, label %dec_label_pc_10ad4, !insn.addr !103

dec_label_pc_10bc0:                               ; preds = %dec_label_pc_10b94
  %58 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !104
  %59 = call i32 @fwrite(i32* bitcast ([62 x i8]* @global_var_11d10 to i32*), i32 1, i32 61, %_IO_FILE* %58), !insn.addr !105
  %60 = load i32, i32* @global_var_230a8, align 4, !insn.addr !106
  %61 = icmp eq i32 %60, 0, !insn.addr !107
  br i1 %61, label %dec_label_pc_10be4, label %dec_label_pc_10ad4, !insn.addr !108

dec_label_pc_10be4:                               ; preds = %dec_label_pc_10bc0
  %62 = icmp eq i32 %spec.select2, 1, !insn.addr !109
  %r3.1 = select i1 %62, i32 8, i32 16
  %63 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !110
  %64 = inttoptr i32 %r4.0.reload to i8*, !insn.addr !111
  %65 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %63, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11d50, i32 0, i32 0), i8* %64, i32 %35, i32 %r3.1), !insn.addr !111
  br label %dec_label_pc_10ad4, !insn.addr !112

dec_label_pc_10c10:                               ; preds = %dec_label_pc_10a60
  %66 = mul i32 %19, 4, !insn.addr !113
  %67 = add i32 %66, %arg2, !insn.addr !113
  %68 = inttoptr i32 %67 to i32*, !insn.addr !113
  %69 = load i32, i32* %68, align 4, !insn.addr !113
  %70 = inttoptr i32 %69 to i8*, !insn.addr !114
  %71 = bitcast i32* %stack_var_-144 to %stat64*, !insn.addr !114
  %72 = call i32 @__xstat64(i32 3, i8* %70, %stat64* nonnull %71), !insn.addr !114
  %73 = icmp eq i32 %72, -1, !insn.addr !115
  br i1 %73, label %dec_label_pc_10cdc, label %dec_label_pc_10c28, !insn.addr !116

dec_label_pc_10c28:                               ; preds = %dec_label_pc_10c10
  %74 = load i32, i32* @global_var_23088, align 4, !insn.addr !117
  %75 = mul i32 %74, 4, !insn.addr !118
  %76 = add i32 %75, %arg2, !insn.addr !118
  %77 = inttoptr i32 %76 to i32*, !insn.addr !118
  %78 = load i32, i32* %77, align 4, !insn.addr !118
  %79 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11ccc, i32 0, i32 0)), !insn.addr !119
  %80 = ptrtoint i8* %79 to i32, !insn.addr !119
  store i32 %80, i32* %r0.0.reg2mem, !insn.addr !120
  store i32 %78, i32* %r4.0.reg2mem, !insn.addr !120
  br label %dec_label_pc_10aa4, !insn.addr !120

dec_label_pc_10c40:                               ; preds = %dec_label_pc_10af8
  %81 = icmp eq i32 %stack_var_-180.0.ph5.reload, 0, !insn.addr !121
  br i1 %81, label %dec_label_pc_10cac, label %dec_label_pc_10c4c, !insn.addr !122

dec_label_pc_10c4c:                               ; preds = %dec_label_pc_10cac, %dec_label_pc_10c40
  store i32 1, i32* %stack_var_-164, align 4, !insn.addr !123
  %82 = call i32 @function_10ea0(i32 %stack_var_-172.0.ph.reload, i32* nonnull %stack_var_-168, i32* nonnull %stack_var_-164), !insn.addr !124
  %83 = load i32, i32* @global_var_230a8, align 4, !insn.addr !125
  %84 = icmp eq i32 %83, 0, !insn.addr !126
  br i1 %84, label %dec_label_pc_10c88, label %dec_label_pc_10c70, !insn.addr !127

dec_label_pc_10c70:                               ; preds = %dec_label_pc_10c88, %dec_label_pc_10c4c
  %85 = load i32, i32* %stack_var_-164, align 4, !insn.addr !128
  %86 = load i32, i32* %stack_var_-168, align 4, !insn.addr !129
  %87 = call i32 @function_10f38(i32* nonnull %stack_var_-160, i32 %86, i32 %85, i32 %stack_var_-176.0.ph11.reload), !insn.addr !130
  br label %dec_label_pc_10b3c, !insn.addr !131

dec_label_pc_10c88:                               ; preds = %dec_label_pc_10c4c
  %88 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !132
  %89 = load i32, i32* %stack_var_-164, align 4, !insn.addr !133
  %90 = load i32, i32* %stack_var_-168, align 4, !insn.addr !134
  %91 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %88, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11df4, i32 0, i32 0), i32 %89, i32 %90), !insn.addr !135
  br label %dec_label_pc_10c70, !insn.addr !136

dec_label_pc_10cac:                               ; preds = %dec_label_pc_10c40
  %92 = call i32 @function_10efc(), !insn.addr !137
  br label %dec_label_pc_10c4c, !insn.addr !138

dec_label_pc_10cb4:                               ; preds = %dec_label_pc_10b14
  %93 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !139
  %94 = load i32, i32* %stack_var_-168, align 4, !insn.addr !140
  %95 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %93, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11e14, i32 0, i32 0), i32 %94), !insn.addr !141
  br label %dec_label_pc_10b30, !insn.addr !142

dec_label_pc_10cd4:                               ; preds = %dec_label_pc_10b08
  %96 = call i32 @function_10efc(), !insn.addr !143
  br label %dec_label_pc_10b14, !insn.addr !144

dec_label_pc_10cdc:                               ; preds = %dec_label_pc_10c10
  %97 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11cc0, i32 0, i32 0)), !insn.addr !145
  %98 = ptrtoint i8* %97 to i32, !insn.addr !145
  %99 = load i32, i32* @global_var_23088, align 4, !insn.addr !146
  %100 = mul i32 %99, 4, !insn.addr !147
  %101 = add i32 %100, %arg2, !insn.addr !147
  %102 = inttoptr i32 %101 to i32*, !insn.addr !147
  %103 = load i32, i32* %102, align 4, !insn.addr !147
  store i32 %103, i32* %r0.0.reg2mem, !insn.addr !148
  store i32 %98, i32* %r4.0.reg2mem, !insn.addr !148
  br label %dec_label_pc_10aa4, !insn.addr !148

dec_label_pc_10cf8:                               ; preds = %dec_label_pc_10a30
  %104 = call i32 @function_10e48(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c64, i32 0, i32 0), i32 193), !insn.addr !149
  unreachable, !insn.addr !149

dec_label_pc_10d08:                               ; preds = %dec_label_pc_10a0c, %dec_label_pc_109fc
  %105 = call i32 @function_10e18(i32 182), !insn.addr !150
  unreachable, !insn.addr !150

dec_label_pc_10d10:                               ; preds = %dec_label_pc_109a4
  %106 = call i32 @function_10e48(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11c90, i32 0, i32 0), i32 206), !insn.addr !151
  unreachable, !insn.addr !151

dec_label_pc_10d20:                               ; preds = %dec_label_pc_10a18
  %107 = call i32 @function_10e48(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c64, i32 0, i32 0), i32 183), !insn.addr !152
  unreachable, !insn.addr !152

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10a50
  %108 = call i32 @function_10e18(i32 214), !insn.addr !153
  unreachable, !insn.addr !153

dec_label_pc_10d38:                               ; preds = %dec_label_pc_10adc
  %109 = call i32 @function_10e48(i8* getelementptr inbounds ([86 x i8], [86 x i8]* @global_var_11d9c, i32 0, i32 0), i32 254), !insn.addr !154
  unreachable, !insn.addr !154

dec_label_pc_10d48:                               ; preds = %dec_label_pc_10af8
  %110 = call i32 @function_10e18(i32 274), !insn.addr !155
  unreachable, !insn.addr !155

dec_label_pc_10d50:                               ; preds = %dec_label_pc_10aa4
  %111 = call i32 @function_10e18(i32 240), !insn.addr !156
  ret i32 %111, !insn.addr !156

; uselistorder directives
  uselistorder i32 %35, { 1, 0 }
  uselistorder i1 %30, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 2, 0 }
  uselistorder i32 %23, { 1, 0 }
  uselistorder i32 %19, { 0, 2, 1, 3 }
  uselistorder i32 %1, { 2, 0, 1, 4, 3 }
  uselistorder i32 %fp.0.ph20.reload, { 1, 0, 5, 3, 4, 2 }
  uselistorder i32 %r7.0.ph16.reload, { 2, 3, 1, 0, 5, 6, 4 }
  uselistorder i32 %stack_var_-176.0.ph11.reload, { 1, 3, 0, 2 }
  uselistorder i32 %stack_var_-180.0.ph5.reload, { 2, 1, 0, 3 }
  uselistorder i32 %sl.0.ph.reload, { 2, 1, 0 }
  uselistorder i32* %stack_var_-164, { 2, 3, 0, 4, 1 }
  uselistorder i32* %stack_var_-168, { 2, 3, 4, 0, 5, 1 }
  uselistorder i32* %stack_var_-172.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-180.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-176.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-180.0.ph5.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-176.0.ph6.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph7.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph9.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-176.0.ph11.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph12.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph16.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph20.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph16.be.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 4, 3, 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 4, 3, 1, 0, 2 }
  uselistorder i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c64, i32 0, i32 0), { 1, 0 }
  uselistorder i32 ()* @function_10efc, { 1, 0 }
  uselistorder i8* (i8*)* @getenv, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32, i32*, i32*)* @function_10ea0, { 1, 0 }
  uselistorder i32* @global_var_23088, { 1, 2, 0, 3 }
  uselistorder i8** @global_var_230a0, { 1, 0 }
  uselistorder i32 102, { 1, 0 }
  uselistorder label %dec_label_pc_10ad4, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_10968.outer15.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_109a4, { 1, 0 }
  uselistorder label %dec_label_pc_10968, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer19, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer10, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer4, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d58:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !157
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !157
  %2 = call i32 @__libc_start_main(i32 67872, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70929 to void ()*), void ()* inttoptr (i32 67872 to void ()*), void ()* %1), !insn.addr !157
  call void @abort(), !insn.addr !158
  unreachable, !insn.addr !158
}

define i32 @function_10d7c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d7c:
  ret i32 %arg1, !insn.addr !159
}

define i32 @function_10d88() local_unnamed_addr {
dec_label_pc_10d88:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_23078, align 4, !insn.addr !160
  %3 = icmp eq i32 %2, 0, !insn.addr !161
  br i1 %3, label %4, label %dec_label_pc_10da0, !insn.addr !162

; <label>:4:                                      ; preds = %dec_label_pc_10d88
  ret i32 %1, !insn.addr !162

dec_label_pc_10da0:                               ; preds = %dec_label_pc_10d88
  call void @__gmon_start__(), !insn.addr !163
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !163
}

define i32 @function_10dac(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10dac:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %cpsr_n.02.reg2mem = alloca i1, !insn.addr !164
  %spec.select3.reg2mem = alloca i32, !insn.addr !164
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i32, i32* %0
  %8 = load fp128, fp128* %2
  %9 = load fp128, fp128* %2
  %10 = load double, double* %3
  %11 = load double, double* %3
  br i1 %5, label %12, label %dec_label_pc_10dc8, !insn.addr !164

; <label>:12:                                     ; preds = %31, %28, %dec_label_pc_10dac
  ret i32 %arg1, !insn.addr !164

dec_label_pc_10dc8:                               ; preds = %dec_label_pc_10dac
  %13 = icmp eq i1 %6, %4, !insn.addr !165
  br i1 %13, label %dec_label_pc_10ddc, label %14, !insn.addr !165

; <label>:14:                                     ; preds = %dec_label_pc_10dc8
  call void @__asm_svclt(i32 18288), !insn.addr !165
  br label %dec_label_pc_10ddc, !insn.addr !165

dec_label_pc_10ddc:                               ; preds = %14, %dec_label_pc_10dc8
  %15 = mul i32 %7, 1048577, !insn.addr !166
  br i1 %4, label %.thread, label %16, !insn.addr !167

.thread:                                          ; preds = %dec_label_pc_10ddc
  %spec.select1 = select i1 %6, i32 %15, i32 0
  store i32 %spec.select1, i32* %spec.select3.reg2mem
  br label %dec_label_pc_10df4

; <label>:16:                                     ; preds = %dec_label_pc_10ddc
  %17 = mul i32 %7, 4194304, !insn.addr !167
  %18 = sub i32 0, %17
  %19 = sub i32 %18, 1
  %20 = and i32 %15, %19, !insn.addr !167
  %21 = icmp slt i32 %20, 0, !insn.addr !167
  %22 = icmp eq i32 %20, 0, !insn.addr !167
  %23 = icmp slt i32 %20, 1
  %spec.select = select i1 %23, i32 0, i32 %15
  store i32 %spec.select, i32* %spec.select3.reg2mem, !insn.addr !168
  store i1 %21, i1* %cpsr_n.02.reg2mem, !insn.addr !168
  br i1 %22, label %24, label %dec_label_pc_10df4, !insn.addr !168

; <label>:24:                                     ; preds = %16
  %25 = call i32 @unknown_240(), !insn.addr !168
  ret i32 %25, !insn.addr !168

dec_label_pc_10df4:                               ; preds = %.thread, %16
  %cpsr_n.02.reload = load i1, i1* %cpsr_n.02.reg2mem
  %spec.select3.reload = load i32, i32* %spec.select3.reg2mem
  %26 = icmp eq i1 %cpsr_n.02.reload, %4, !insn.addr !169
  br i1 %26, label %28, label %27, !insn.addr !169

; <label>:27:                                     ; preds = %dec_label_pc_10df4
  call void @__asm_svclt(i32 18288), !insn.addr !169
  br label %28, !insn.addr !169

; <label>:28:                                     ; preds = %dec_label_pc_10df4, %27
  %29 = call double @__asm_vqrshl.s8(double %11, double %10), !insn.addr !170
  %30 = call double @__asm_vaddhn.i16(fp128 %9, fp128 %8), !insn.addr !171
  br i1 %4, label %12, label %31, !insn.addr !172

; <label>:31:                                     ; preds = %28
  %32 = inttoptr i32 %arg4 to i32*, !insn.addr !172
  store i32 %spec.select3.reload, i32* %32, align 4, !insn.addr !172
  %33 = add i32 %arg4, -4, !insn.addr !172
  %34 = inttoptr i32 %33 to i32*, !insn.addr !172
  br label %12, !insn.addr !172

; uselistorder directives
  uselistorder i32 %15, { 1, 2, 0 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i1 %6, { 1, 0 }
  uselistorder i1 %4, { 3, 2, 1, 0 }
  uselistorder double* %3, { 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %28, { 1, 0 }
  uselistorder label %dec_label_pc_10df4, { 1, 0 }
}

define i32 @function_10e08(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10e08:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !173
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !173
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !173
  br i1 %2, label %dec_label_pc_10e0a, label %dec_label_pc_10e12, !insn.addr !173

dec_label_pc_10e0a:                               ; preds = %dec_label_pc_10e08
  %3 = call i32 @function_10dac(i32 %arg1, i32 %arg2, i32 %arg3, i32 0), !insn.addr !174
  %4 = inttoptr i32 %1 to i8*, !insn.addr !175
  store i8 1, i8* %4, align 1, !insn.addr !175
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_10e12, !insn.addr !175

dec_label_pc_10e12:                               ; preds = %dec_label_pc_10e08, %dec_label_pc_10e0a
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !176

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10e12, { 1, 0 }
}

define i32 @function_10e14() local_unnamed_addr {
dec_label_pc_10e14:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !177
}

define i32 @function_10e18(i32 %arg1) local_unnamed_addr {
dec_label_pc_10e18:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !178
  %1 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %0, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11a24, i32 0, i32 0), i8* getelementptr inbounds ([1221 x i8], [1221 x i8]* @global_var_1155c, i32 0, i32 0), i32 %arg1), !insn.addr !179
  call void @exit(i32 1), !insn.addr !180
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !180
}

define i32 @function_10e48(i8* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10e48:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !181
  %1 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %0, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11a34, i32 0, i32 0), i32 %arg2, i8* %arg1), !insn.addr !182
  call void @exit(i32 1), !insn.addr !183
  unreachable, !insn.addr !183
}

define i32 @function_10e74(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10e74:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !184
  br i1 %0, label %1, label %dec_label_pc_10e7c, !insn.addr !185

; <label>:1:                                      ; preds = %dec_label_pc_10e74
  ret i32 0, !insn.addr !185

dec_label_pc_10e7c:                               ; preds = %dec_label_pc_10e74
  %2 = call i32 @function_10e18(i32 %arg2), !insn.addr !186
  unreachable, !insn.addr !186

; uselistorder directives
  uselistorder i32 (i32)* @function_10e18, { 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10e88(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10e88:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !187
  br i1 %0, label %1, label %dec_label_pc_10e90, !insn.addr !188

; <label>:1:                                      ; preds = %dec_label_pc_10e88
  ret i32 0, !insn.addr !188

dec_label_pc_10e90:                               ; preds = %dec_label_pc_10e88
  %2 = inttoptr i32 %arg2 to i8*, !insn.addr !189
  %3 = call i32 @function_10e48(i8* %2, i32 %arg3), !insn.addr !189
  ret i32 %3, !insn.addr !189
}

define i32 @function_10ea0(i32 %arg1, i32* %arg2, i32* %arg3) local_unnamed_addr {
dec_label_pc_10ea0:
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !190
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !190
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !191
  store i32 %1, i32* %arg2, align 4, !insn.addr !192
  %3 = load i8, i8* %2, align 1, !insn.addr !193
  %4 = icmp eq i8 %3, 58, !insn.addr !194
  br i1 %4, label %dec_label_pc_10ed8, label %dec_label_pc_10ed0, !insn.addr !195

dec_label_pc_10ed0:                               ; preds = %dec_label_pc_10ea0
  ret i32 %1, !insn.addr !196

dec_label_pc_10ed8:                               ; preds = %dec_label_pc_10ea0
  %5 = ptrtoint i8* %2 to i32, !insn.addr !191
  %6 = add i32 %5, 1, !insn.addr !197
  %7 = inttoptr i32 %6 to i8*, !insn.addr !198
  store i8* %7, i8** %stack_var_-20, align 4, !insn.addr !198
  %8 = call i32 @strtoul(i8* %7, i8** null, i32 0), !insn.addr !199
  store i32 %8, i32* %arg3, align 4, !insn.addr !200
  ret i32 %8, !insn.addr !201

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i8* %2, { 1, 0 }
  uselistorder i8** %stack_var_-20, { 1, 0, 2 }
  uselistorder i32 (i8*, i8**, i32)* @strtoul, { 1, 2, 0, 3 }
}

define i32 @function_10efc() local_unnamed_addr {
dec_label_pc_10efc:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !202
  %1 = call i32 @fwrite(i32* bitcast ([470 x i8]* @global_var_11a4c to i32*), i32 1, i32 469, %_IO_FILE* %0), !insn.addr !203
  %2 = load %_IO_FILE*, %_IO_FILE** @global_var_23098, align 4, !insn.addr !204
  %3 = call i32 @_IO_getc(%_IO_FILE* %2), !insn.addr !205
  ret i32 1, !insn.addr !206
}

define i32 @function_10f38(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10f38:
  %r6.1.reg2mem = alloca i32, !insn.addr !207
  %r5.1.reg2mem = alloca i32, !insn.addr !207
  %r4.1.in.reg2mem = alloca i32, !insn.addr !207
  %r4.010.reg2mem = alloca i32, !insn.addr !207
  %r5.011.reg2mem = alloca i32, !insn.addr !207
  %r6.012.reg2mem = alloca i32, !insn.addr !207
  %0 = ptrtoint i32* %arg1 to i32
  %1 = urem i32 %arg2, 65536, !insn.addr !208
  %2 = call i32 @function_11360(i32 %0, i32 %1), !insn.addr !209
  %3 = icmp slt i32 %2, 0, !insn.addr !210
  br i1 %3, label %dec_label_pc_11064, label %dec_label_pc_10f60, !insn.addr !211

dec_label_pc_10f60:                               ; preds = %dec_label_pc_10f38
  %4 = icmp eq i32 %arg4, 0, !insn.addr !212
  br i1 %4, label %dec_label_pc_11040, label %dec_label_pc_10f68, !insn.addr !213

dec_label_pc_10f68:                               ; preds = %dec_label_pc_10f60
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11c30, i32 0, i32 0), i32 %arg2, i32 %2), !insn.addr !214
  br label %dec_label_pc_10f78, !insn.addr !214

dec_label_pc_10f78:                               ; preds = %dec_label_pc_11040, %dec_label_pc_10f68
  %6 = icmp eq i32 %arg3, 1, !insn.addr !215
  store i32 %arg2, i32* %r6.012.reg2mem, !insn.addr !216
  store i32 1, i32* %r5.011.reg2mem, !insn.addr !216
  store i32 %arg3, i32* %r4.010.reg2mem, !insn.addr !216
  br i1 %6, label %dec_label_pc_10fe4, label %dec_label_pc_10fa0.preheader, !insn.addr !216

dec_label_pc_10fa0.preheader:                     ; preds = %dec_label_pc_10f78, %dec_label_pc_11014
  %r4.010.reload = load i32, i32* %r4.010.reg2mem
  %r5.011.reload = load i32, i32* %r5.011.reg2mem
  %r6.012.reload = load i32, i32* %r6.012.reg2mem
  store i32 %r4.010.reload, i32* %r4.1.in.reg2mem
  store i32 %r5.011.reload, i32* %r5.1.reg2mem
  store i32 %r6.012.reload, i32* %r6.1.reg2mem
  br label %dec_label_pc_10fa0

dec_label_pc_10fa0:                               ; preds = %dec_label_pc_10fa0.preheader, %dec_label_pc_10fcc
  %7 = call i32 @function_11340(i32 %0), !insn.addr !217
  %8 = icmp slt i32 %7, 0, !insn.addr !218
  br i1 %8, label %dec_label_pc_11054, label %dec_label_pc_10fb0, !insn.addr !219

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10fa0
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %r4.1 = add i32 %r4.1.in.reload, -1
  br i1 %4, label %dec_label_pc_11014, label %dec_label_pc_10fb8, !insn.addr !220

dec_label_pc_10fb8:                               ; preds = %dec_label_pc_10fb0
  %9 = urem i32 %r5.1.reload, 16, !insn.addr !221
  %10 = icmp eq i32 %9, 0, !insn.addr !221
  %11 = add i32 %r6.1.reload, 1, !insn.addr !222
  br i1 %10, label %dec_label_pc_11020, label %dec_label_pc_10fc4, !insn.addr !223

dec_label_pc_10fc4:                               ; preds = %dec_label_pc_10fb8
  %12 = urem i32 %r5.1.reload, 8, !insn.addr !224
  %13 = icmp eq i32 %12, 0, !insn.addr !224
  br i1 %13, label %dec_label_pc_11034, label %dec_label_pc_10fcc, !insn.addr !225

dec_label_pc_10fcc:                               ; preds = %dec_label_pc_11034, %dec_label_pc_11020, %dec_label_pc_10fc4
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11c50, i32 0, i32 0), i32 %7), !insn.addr !226
  %15 = icmp eq i32 %r4.1, 1, !insn.addr !227
  %16 = add i32 %r5.1.reload, 1, !insn.addr !228
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !229
  store i32 %16, i32* %r5.1.reg2mem, !insn.addr !229
  store i32 %11, i32* %r6.1.reg2mem, !insn.addr !229
  br i1 %15, label %dec_label_pc_10fec, label %dec_label_pc_10fa0, !insn.addr !229

dec_label_pc_10fe4:                               ; preds = %dec_label_pc_10f78
  br i1 %4, label %dec_label_pc_10ff8, label %dec_label_pc_10fec, !insn.addr !230

dec_label_pc_10fec:                               ; preds = %dec_label_pc_10fcc, %dec_label_pc_10fe4
  %17 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11fdc, i32 0, i32 0)), !insn.addr !231
  br label %dec_label_pc_10ff8, !insn.addr !231

dec_label_pc_10ff8:                               ; preds = %dec_label_pc_11014, %dec_label_pc_10fec, %dec_label_pc_10fe4
  %18 = load %_IO_FILE*, %_IO_FILE** @global_var_2309c, align 4, !insn.addr !232
  %19 = call i32 @fflush(%_IO_FILE* %18), !insn.addr !233
  ret i32 0, !insn.addr !234

dec_label_pc_11014:                               ; preds = %dec_label_pc_10fb0
  %20 = load %_IO_FILE*, %_IO_FILE** @global_var_2309c, align 4, !insn.addr !235
  %21 = call i32 @_IO_putc(i32 %7, %_IO_FILE* %20), !insn.addr !236
  %22 = icmp eq i32 %r4.1, 1, !insn.addr !215
  store i32 %r6.1.reload, i32* %r6.012.reg2mem, !insn.addr !216
  store i32 %r5.1.reload, i32* %r5.011.reg2mem, !insn.addr !216
  store i32 %r4.1, i32* %r4.010.reg2mem, !insn.addr !216
  br i1 %22, label %dec_label_pc_10ff8, label %dec_label_pc_10fa0.preheader, !insn.addr !216

dec_label_pc_11020:                               ; preds = %dec_label_pc_10fb8
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11c40, i32 0, i32 0), i32 %11), !insn.addr !237
  br label %dec_label_pc_10fcc, !insn.addr !238

dec_label_pc_11034:                               ; preds = %dec_label_pc_10fc4
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11c4c, i32 0, i32 0)), !insn.addr !239
  br label %dec_label_pc_10fcc, !insn.addr !240

dec_label_pc_11040:                               ; preds = %dec_label_pc_10f60
  %25 = load %_IO_FILE*, %_IO_FILE** @global_var_2309c, align 4, !insn.addr !241
  %26 = call i32 @_IO_putc(i32 %2, %_IO_FILE* %25), !insn.addr !242
  br label %dec_label_pc_10f78, !insn.addr !243

dec_label_pc_11054:                               ; preds = %dec_label_pc_10fa0
  %27 = call i32 @function_10e48(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11c24, i32 0, i32 0), i32 133), !insn.addr !244
  unreachable, !insn.addr !244

dec_label_pc_11064:                               ; preds = %dec_label_pc_10f38
  %28 = call i32 @function_10e48(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11c24, i32 0, i32 0), i32 125), !insn.addr !245
  ret i32 %28, !insn.addr !245

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i32 %r4.1, { 1, 2, 0, 3 }
  uselistorder i32 %r5.1.reload, { 3, 0, 2, 1 }
  uselistorder i32 %r6.1.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0, 2 }
  uselistorder i32* %r6.012.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.011.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.010.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, %_IO_FILE*)* @_IO_putc, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 3, 2, 1, 0, 4 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_10fec, { 1, 0 }
  uselistorder label %dec_label_pc_10fa0, { 1, 0 }
  uselistorder label %dec_label_pc_10fa0.preheader, { 1, 0 }
}

define i32 @function_11074(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11074:
  %r5.0.reg2mem = alloca i32, !insn.addr !246
  %0 = ptrtoint i32* %arg1 to i32
  store i32 %arg2, i32* %r5.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_110c8, !insn.addr !247

dec_label_pc_110a4:                               ; preds = %dec_label_pc_110e0, %dec_label_pc_110e8
  %1 = load %_IO_FILE*, %_IO_FILE** @global_var_2309c, align 4, !insn.addr !248
  %2 = call i32 @fflush(%_IO_FILE* %1), !insn.addr !249
  %3 = urem i32 %r5.0.reload, 65536, !insn.addr !250
  %4 = urem i32 %9, 256, !insn.addr !251
  %5 = add i32 %r5.0.reload, 1, !insn.addr !252
  %6 = call i32 @function_11444(i32 %0, i32 %3, i32 %4), !insn.addr !253
  %7 = icmp eq i32 %6, 0, !insn.addr !254
  store i32 %5, i32* %r5.0.reg2mem, !insn.addr !255
  br i1 %7, label %dec_label_pc_110c8, label %dec_label_pc_11128, !insn.addr !255

dec_label_pc_110c8:                               ; preds = %dec_label_pc_110a4, %dec_label_pc_11074
  %8 = load %_IO_FILE*, %_IO_FILE** @global_var_23098, align 4, !insn.addr !256
  %9 = call i32 @_IO_getc(%_IO_FILE* %8), !insn.addr !257
  %10 = icmp eq i32 %9, -1, !insn.addr !258
  %11 = load i32, i32* @global_var_230a8, align 4, !insn.addr !259
  %12 = icmp eq i32 %11, 0
  br i1 %10, label %dec_label_pc_110f8, label %dec_label_pc_110e0, !insn.addr !260

dec_label_pc_110e0:                               ; preds = %dec_label_pc_110c8
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  br i1 %12, label %dec_label_pc_110e8, label %dec_label_pc_110a4, !insn.addr !261

dec_label_pc_110e8:                               ; preds = %dec_label_pc_110e0
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !262
  %14 = call i32 @fputc(i32 46, %_IO_FILE* %13), !insn.addr !263
  br label %dec_label_pc_110a4, !insn.addr !264

dec_label_pc_110f8:                               ; preds = %dec_label_pc_110c8
  br i1 %12, label %dec_label_pc_11100, label %dec_label_pc_11120, !insn.addr !265

dec_label_pc_11100:                               ; preds = %dec_label_pc_110f8
  %15 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !266
  %16 = call i32 @fwrite(i32* bitcast ([3 x i8]* @global_var_1202c to i32*), i32 1, i32 2, %_IO_FILE* %15), !insn.addr !267
  br label %dec_label_pc_11120, !insn.addr !267

dec_label_pc_11120:                               ; preds = %dec_label_pc_110f8, %dec_label_pc_11100
  ret i32 0, !insn.addr !268

dec_label_pc_11128:                               ; preds = %dec_label_pc_110a4
  %17 = call i32 @function_10e48(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11c58, i32 0, i32 0), i32 160), !insn.addr !269
  unreachable, !insn.addr !269

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 (i8*, i32)* @function_10e48, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* @global_var_230a8, { 2, 3, 4, 5, 6, 7, 0, 8, 1 }
  uselistorder i32 (%_IO_FILE*)* @_IO_getc, { 1, 0, 2 }
  uselistorder %_IO_FILE** @global_var_23098, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder %_IO_FILE** @global_var_2309c, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_11120, { 1, 0 }
  uselistorder label %dec_label_pc_110a4, { 1, 0 }
}

define i32 @function_11138(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11138:
  %0 = call i32 @i2c_smbus_write_byte_data(), !insn.addr !270
  %1 = icmp slt i32 %0, 0, !insn.addr !271
  br i1 %1, label %dec_label_pc_11160, label %dec_label_pc_11150, !insn.addr !272

dec_label_pc_11150:                               ; preds = %dec_label_pc_11160, %dec_label_pc_11138
  %2 = call i32 @usleep(i32 5000), !insn.addr !273
  ret i32 %0, !insn.addr !274

dec_label_pc_11160:                               ; preds = %dec_label_pc_11138
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !275
  %4 = call i32* @__errno_location(), !insn.addr !276
  %5 = load i32, i32* %4, align 4, !insn.addr !277
  %6 = call i8* @strerror(i32 %5), !insn.addr !278
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11e40, i32 0, i32 0), i8* %6), !insn.addr !279
  br label %dec_label_pc_11150, !insn.addr !280
}

define i32 @function_11190(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_11190:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !281
  %storemerge1.reg2mem = alloca i32, !insn.addr !281
  %r0.0.reg2mem = alloca i32, !insn.addr !281
  %1 = ptrtoint i32* %arg4 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %1, 4, !insn.addr !282
  %4 = inttoptr i32 %3 to i32*, !insn.addr !282
  store i32 0, i32* %4, align 4, !insn.addr !282
  %5 = add i32 %1, 8, !insn.addr !283
  %6 = inttoptr i32 %5 to i32*, !insn.addr !283
  store i32 0, i32* %6, align 4, !insn.addr !283
  store i32 0, i32* %arg4, align 4, !insn.addr !284
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !285
  %8 = call i32 (i8*, i32, ...) @open64(i8* %7, i32 2), !insn.addr !285
  %9 = icmp slt i32 %8, 1, !insn.addr !286
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !286
  br i1 %9, label %dec_label_pc_1123c, label %dec_label_pc_111c8, !insn.addr !286

dec_label_pc_111c8:                               ; preds = %dec_label_pc_11190
  %10 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1797), !insn.addr !287
  %11 = icmp slt i32 %10, 0, !insn.addr !288
  store i32 %10, i32* %r0.0.reg2mem, !insn.addr !289
  br i1 %11, label %dec_label_pc_1123c, label %dec_label_pc_111dc, !insn.addr !289

dec_label_pc_111dc:                               ; preds = %dec_label_pc_111c8
  %12 = and i32 %2, 131072, !insn.addr !290
  %13 = icmp eq i32 %12, 0, !insn.addr !290
  br i1 %13, label %dec_label_pc_112b0, label %dec_label_pc_111e8, !insn.addr !291

dec_label_pc_111e8:                               ; preds = %dec_label_pc_111dc
  %14 = and i32 %2, 262144, !insn.addr !292
  %15 = icmp eq i32 %14, 0, !insn.addr !292
  br i1 %15, label %dec_label_pc_112ec, label %dec_label_pc_111f0, !insn.addr !293

dec_label_pc_111f0:                               ; preds = %dec_label_pc_111e8
  %16 = and i32 %2, 524288, !insn.addr !294
  %17 = icmp eq i32 %16, 0, !insn.addr !294
  store i32 ptrtoint ([78 x i8]* @global_var_11ef0 to i32), i32* %storemerge1.reg2mem, !insn.addr !295
  br i1 %17, label %dec_label_pc_1125c, label %dec_label_pc_111f8, !insn.addr !295

dec_label_pc_111f8:                               ; preds = %dec_label_pc_111f0
  %18 = and i32 %2, 1048576, !insn.addr !296
  %19 = icmp eq i32 %18, 0, !insn.addr !296
  store i32 ptrtoint ([79 x i8]* @global_var_11f40 to i32), i32* %storemerge.reg2mem, !insn.addr !297
  br i1 %19, label %dec_label_pc_11284, label %dec_label_pc_11200, !insn.addr !297

dec_label_pc_11200:                               ; preds = %dec_label_pc_111f8
  %20 = and i32 %2, 2097152, !insn.addr !298
  %21 = icmp eq i32 %20, 0, !insn.addr !298
  store i32 ptrtoint ([78 x i8]* @global_var_11f90 to i32), i32* %storemerge1.reg2mem, !insn.addr !299
  br i1 %21, label %dec_label_pc_1125c, label %dec_label_pc_11208, !insn.addr !299

dec_label_pc_11208:                               ; preds = %dec_label_pc_11200
  %22 = and i32 %2, 4194304, !insn.addr !300
  %23 = icmp eq i32 %22, 0, !insn.addr !300
  store i32 ptrtoint ([79 x i8]* @global_var_11fe0 to i32), i32* %storemerge.reg2mem, !insn.addr !301
  br i1 %23, label %dec_label_pc_11284, label %dec_label_pc_11210, !insn.addr !301

dec_label_pc_11210:                               ; preds = %dec_label_pc_11208
  %24 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1795), !insn.addr !302
  %25 = icmp slt i32 %24, 0, !insn.addr !303
  store i32 %24, i32* %r0.0.reg2mem, !insn.addr !304
  br i1 %25, label %dec_label_pc_1123c, label %dec_label_pc_11228, !insn.addr !304

dec_label_pc_11228:                               ; preds = %dec_label_pc_11210
  store i32 %8, i32* %6, align 4, !insn.addr !305
  store i32 %arg2, i32* %4, align 4, !insn.addr !306
  store i32 %arg1, i32* %arg4, align 4, !insn.addr !307
  %26 = add i32 %1, 12, !insn.addr !308
  %27 = inttoptr i32 %26 to i32*, !insn.addr !308
  store i32 %arg3, i32* %27, align 4, !insn.addr !308
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !308
  br label %dec_label_pc_1123c, !insn.addr !308

dec_label_pc_1123c:                               ; preds = %dec_label_pc_11190, %dec_label_pc_11228, %dec_label_pc_11210, %dec_label_pc_111c8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !309

dec_label_pc_1125c:                               ; preds = %dec_label_pc_111f0, %dec_label_pc_11200
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4
  %29 = inttoptr i32 %storemerge1.reload to i32*, !insn.addr !310
  %30 = call i32 @fwrite(i32* %29, i32 1, i32 77, %_IO_FILE* %28), !insn.addr !310
  call void @exit(i32 1), !insn.addr !311
  unreachable, !insn.addr !311

dec_label_pc_11284:                               ; preds = %dec_label_pc_11208, %dec_label_pc_111f8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %31 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4
  %32 = inttoptr i32 %storemerge.reload to i32*, !insn.addr !312
  %33 = call i32 @fwrite(i32* %32, i32 1, i32 78, %_IO_FILE* %31), !insn.addr !312
  call void @exit(i32 1), !insn.addr !313
  unreachable, !insn.addr !313

dec_label_pc_112b0:                               ; preds = %dec_label_pc_111dc
  %34 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !314
  %35 = call i32 @fwrite(i32* bitcast ([73 x i8]* @global_var_11e58 to i32*), i32 1, i32 72, %_IO_FILE* %34), !insn.addr !315
  call void @exit(i32 1), !insn.addr !316
  unreachable, !insn.addr !316

dec_label_pc_112ec:                               ; preds = %dec_label_pc_111e8
  %36 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !317
  %37 = call i32 @fwrite(i32* bitcast ([74 x i8]* @global_var_11ea4 to i32*), i32 1, i32 73, %_IO_FILE* %36), !insn.addr !318
  call void @exit(i32 1), !insn.addr !319
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !319

; uselistorder directives
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder void (i32)* @exit, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 4194304, { 1, 0 }
  uselistorder i32 4, { 4, 0, 1, 2, 5, 3 }
  uselistorder label %dec_label_pc_1125c, { 1, 0 }
  uselistorder label %dec_label_pc_1123c, { 1, 2, 3, 0 }
}

define i32 @function_11314(i32* %arg1) local_unnamed_addr {
dec_label_pc_11314:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 8, !insn.addr !320
  %2 = inttoptr i32 %1 to i32*, !insn.addr !320
  %3 = load i32, i32* %2, align 4, !insn.addr !320
  %4 = call i32 @close(i32 %3), !insn.addr !321
  store i32 -1, i32* %2, align 4, !insn.addr !322
  store i32 0, i32* %arg1, align 4, !insn.addr !323
  %5 = add i32 %0, 12, !insn.addr !324
  %6 = inttoptr i32 %5 to i32*, !insn.addr !324
  store i32 0, i32* %6, align 4, !insn.addr !324
  ret i32 0, !insn.addr !325
}

define i32 @function_11340(i32 %arg1) local_unnamed_addr {
dec_label_pc_11340:
  %0 = add i32 %arg1, 8, !insn.addr !326
  %1 = inttoptr i32 %0 to i32*, !insn.addr !326
  %2 = load i32, i32* %1, align 4, !insn.addr !326
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 4705), !insn.addr !327
  %4 = load i32, i32* %1, align 4, !insn.addr !328
  %5 = call i32 @i2c_smbus_read_byte(i32 %4), !insn.addr !329
  ret i32 %5, !insn.addr !329
}

define i32 @function_11360(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11360:
  %r5.1.reg2mem = alloca i32, !insn.addr !330
  %r5.0.reg2mem = alloca i32, !insn.addr !330
  %0 = add i32 %arg1, 8, !insn.addr !331
  %1 = inttoptr i32 %0 to i32*, !insn.addr !331
  %2 = load i32, i32* %1, align 4, !insn.addr !331
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 4705), !insn.addr !332
  %4 = add i32 %arg1, 12, !insn.addr !333
  %5 = inttoptr i32 %4 to i32*, !insn.addr !333
  %6 = load i32, i32* %5, align 4, !insn.addr !333
  switch i32 %6, label %dec_label_pc_1141c [
    i32 1, label %dec_label_pc_113cc
    i32 2, label %dec_label_pc_11390
  ]

dec_label_pc_11390:                               ; preds = %dec_label_pc_11360
  %7 = load i32, i32* %1, align 4, !insn.addr !334
  store i32 %7, i32* %r5.0.reg2mem, !insn.addr !335
  br label %dec_label_pc_113ac, !insn.addr !335

dec_label_pc_113ac:                               ; preds = %dec_label_pc_113e0, %dec_label_pc_11390
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %8 = icmp slt i32 %r5.0.reload, 0, !insn.addr !336
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !337
  br i1 %8, label %dec_label_pc_113c0, label %dec_label_pc_113b4, !insn.addr !337

dec_label_pc_113b4:                               ; preds = %dec_label_pc_113ac
  %9 = load i32, i32* %1, align 4, !insn.addr !338
  %10 = call i32 @i2c_smbus_read_byte(i32 %9), !insn.addr !339
  store i32 %10, i32* %r5.1.reg2mem, !insn.addr !340
  br label %dec_label_pc_113c0, !insn.addr !340

dec_label_pc_113c0:                               ; preds = %dec_label_pc_1141c, %dec_label_pc_113b4, %dec_label_pc_113ac
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !341

dec_label_pc_113cc:                               ; preds = %dec_label_pc_11360
  %11 = urem i32 %arg2, 256, !insn.addr !342
  %12 = load i32, i32* %1, align 4, !insn.addr !343
  %13 = call i32 @i2c_smbus_write_byte(i32 %12, i32 %11), !insn.addr !344
  %14 = icmp slt i32 %13, 0, !insn.addr !345
  br i1 %14, label %dec_label_pc_113ec, label %dec_label_pc_113e0, !insn.addr !346

dec_label_pc_113e0:                               ; preds = %dec_label_pc_113ec, %dec_label_pc_113cc
  %15 = call i32 @usleep(i32 5000), !insn.addr !347
  store i32 %13, i32* %r5.0.reg2mem, !insn.addr !348
  br label %dec_label_pc_113ac, !insn.addr !348

dec_label_pc_113ec:                               ; preds = %dec_label_pc_113cc
  %16 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !349
  %17 = call i32* @__errno_location(), !insn.addr !350
  %18 = load i32, i32* %17, align 4, !insn.addr !351
  %19 = call i8* @strerror(i32 %18), !insn.addr !352
  %20 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %16, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12030, i32 0, i32 0), i8* %19), !insn.addr !353
  br label %dec_label_pc_113e0, !insn.addr !354

dec_label_pc_1141c:                               ; preds = %dec_label_pc_11360
  %21 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !355
  %22 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_12048 to i32*), i32 1, i32 25, %_IO_FILE* %21), !insn.addr !356
  store i32 -1, i32* %r5.1.reg2mem, !insn.addr !357
  br label %dec_label_pc_113c0, !insn.addr !357

; uselistorder directives
  uselistorder i32* %1, { 2, 1, 0, 3 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 1, 0, 2, 3 }
  uselistorder i32 (i32)* @i2c_smbus_read_byte, { 1, 0, 2 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 0, 3, 2, 4 }
}

define i32 @function_11444(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_11444:
  %0 = alloca i32
  %r4.0.reg2mem = alloca i32, !insn.addr !358
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = add i32 %arg1, 12, !insn.addr !358
  %5 = inttoptr i32 %4 to i32*, !insn.addr !358
  %6 = load i32, i32* %5, align 4, !insn.addr !358
  switch i32 %6, label %dec_label_pc_114e8 [
    i32 1, label %dec_label_pc_114c4
    i32 2, label %dec_label_pc_11464
  ]

dec_label_pc_11464:                               ; preds = %dec_label_pc_11444
  %7 = urem i32 %arg2, 256, !insn.addr !359
  %8 = add i32 %arg1, 8, !insn.addr !360
  %9 = inttoptr i32 %8 to i32*, !insn.addr !360
  %10 = load i32, i32* %9, align 4, !insn.addr !360
  %11 = udiv i32 %arg2, 256, !insn.addr !361
  %12 = mul i32 %arg3, 256, !insn.addr !362
  %13 = or i32 %12, %7, !insn.addr !362
  %14 = call i32 @i2c_smbus_write_word_data(i32 %10, i32 %11, i32 %13, i32 %7, i32 %2, i32 %1, i32 %3), !insn.addr !363
  %15 = icmp slt i32 %14, 0, !insn.addr !364
  br i1 %15, label %dec_label_pc_11494, label %dec_label_pc_11480, !insn.addr !365

dec_label_pc_11480:                               ; preds = %dec_label_pc_11494, %dec_label_pc_11464
  %16 = call i32 @usleep(i32 5000), !insn.addr !366
  store i32 %14, i32* %r4.0.reg2mem, !insn.addr !366
  br label %dec_label_pc_11488, !insn.addr !366

dec_label_pc_11488:                               ; preds = %dec_label_pc_114e8, %dec_label_pc_11480
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !367

dec_label_pc_11494:                               ; preds = %dec_label_pc_11464
  %17 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !368
  %18 = call i32* @__errno_location(), !insn.addr !369
  %19 = load i32, i32* %18, align 4, !insn.addr !370
  %20 = call i8* @strerror(i32 %19), !insn.addr !371
  %21 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %17, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12064, i32 0, i32 0), i8* %20), !insn.addr !372
  br label %dec_label_pc_11480, !insn.addr !373

dec_label_pc_114c4:                               ; preds = %dec_label_pc_11444
  %22 = add i32 %arg1, 8, !insn.addr !374
  %23 = inttoptr i32 %22 to i32*, !insn.addr !374
  %24 = load i32, i32* %23, align 4, !insn.addr !374
  ret i32 %24, !insn.addr !375

dec_label_pc_114e8:                               ; preds = %dec_label_pc_11444
  %25 = load %_IO_FILE*, %_IO_FILE** @global_var_23090, align 4, !insn.addr !376
  %26 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_12048 to i32*), i32 1, i32 25, %_IO_FILE* %25), !insn.addr !377
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !378
  br label %dec_label_pc_11488, !insn.addr !378

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 -1, { 0, 1, 7, 2, 5, 4, 6, 3 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 6, 5, 4, 7, 3, 2, 1, 8, 0, 9 }
  uselistorder i8* (i32)* @strerror, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE** @global_var_23090, { 19, 18, 17, 16, 15, 14, 0, 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32 8, { 2, 3, 4, 5, 6, 7, 0, 1 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @function_11510(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11510:
  %0 = call i32 @function_107bc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !379
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint ([55 x i8]* @global_var_119ea to i32), i32 70944), i32 ptrtoint (i32* @global_var_22f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !380

; uselistorder directives
  uselistorder i32 0, { 24, 25, 26, 83, 27, 28, 84, 85, 8, 70, 69, 0, 86, 87, 88, 89, 90, 91, 92, 93, 73, 72, 71, 29, 30, 94, 31, 32, 9, 95, 96, 33, 34, 37, 38, 35, 36, 10, 14, 15, 20, 21, 97, 98, 99, 39, 40, 100, 101, 74, 75, 11, 102, 12, 103, 41, 42, 43, 44, 45, 46, 17, 80, 18, 81, 82, 7, 16, 119, 53, 54, 65, 66, 63, 64, 57, 58, 55, 56, 104, 105, 47, 48, 106, 107, 49, 50, 51, 52, 59, 60, 61, 62, 13, 108, 109, 110, 111, 112, 115, 113, 19, 114, 116, 117, 118, 22, 23, 1, 2, 3, 4, 5, 6, 76, 67, 68, 77, 78, 79 }
  uselistorder i32 2, { 4, 1, 2, 5, 6, 3, 0 }
}

define i32 @function_1154c() local_unnamed_addr {
dec_label_pc_1154c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !381

; uselistorder directives
  uselistorder i32 1, { 6, 57, 51, 10, 5, 58, 52, 12, 11, 59, 60, 61, 62, 63, 64, 65, 66, 55, 15, 14, 13, 4, 67, 80, 16, 84, 81, 82, 83, 21, 50, 23, 22, 20, 19, 18, 17, 48, 68, 85, 56, 69, 70, 3, 24, 2, 49, 47, 26, 25, 9, 8, 7, 1, 0, 75, 71, 86, 72, 73, 54, 87, 53, 29, 88, 89, 90, 91, 92, 79, 78, 77, 76, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 28, 27, 74 }
}

define i32 @function_11550(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11550:
  ret i32 %arg1, !insn.addr !382
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare i32 @_IO_getc(%_IO_FILE*) local_unnamed_addr

declare i32 @_IO_putc(i32, %_IO_FILE*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i32 @i2c_smbus_write_byte(i32, i32) local_unnamed_addr

declare i32 @open64(i8*, i32, ...) local_unnamed_addr

declare i8* @getenv(i8*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32 @i2c_smbus_read_byte(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @getopt(i32, i8**, i8*) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32 @i2c_smbus_write_byte_data() local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @i2c_smbus_write_word_data(i32, i32, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @fputc(i32, %_IO_FILE*) local_unnamed_addr

declare i32 @__xstat64(i32, i8*, %stat64*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare double @__asm_vaddhn.i16(fp128, fp128) local_unnamed_addr

!0 = !{i64 67520}
!1 = !{i64 67524}
!2 = !{i64 67556}
!3 = !{i64 67568}
!4 = !{i64 67580}
!5 = !{i64 67592}
!6 = !{i64 67604}
!7 = !{i64 67616}
!8 = !{i64 67628}
!9 = !{i64 67640}
!10 = !{i64 67652}
!11 = !{i64 67664}
!12 = !{i64 67676}
!13 = !{i64 67688}
!14 = !{i64 67700}
!15 = !{i64 67712}
!16 = !{i64 67724}
!17 = !{i64 67736}
!18 = !{i64 67748}
!19 = !{i64 67760}
!20 = !{i64 67772}
!21 = !{i64 67784}
!22 = !{i64 67796}
!23 = !{i64 67808}
!24 = !{i64 67820}
!25 = !{i64 67832}
!26 = !{i64 67844}
!27 = !{i64 67856}
!28 = !{i64 67868}
!29 = !{i64 67872}
!30 = !{i64 67928}
!31 = !{i64 67956}
!32 = !{i64 67940}
!33 = !{i64 67976}
!34 = !{i64 68004}
!35 = !{i64 68008}
!36 = !{i64 68012}
!37 = !{i64 68024}
!38 = !{i64 68048}
!39 = !{i64 68056}
!40 = !{i64 68064}
!41 = !{i64 68072}
!42 = !{i64 68076}
!43 = !{i64 68080}
!44 = !{i64 68084}
!45 = !{i64 68088}
!46 = !{i64 68092}
!47 = !{i64 68096}
!48 = !{i64 68100}
!49 = !{i64 68104}
!50 = !{i64 68108}
!51 = !{i64 68112}
!52 = !{i64 68116}
!53 = !{i64 68120}
!54 = !{i64 68124}
!55 = !{i64 68136}
!56 = !{i64 68140}
!57 = !{i64 68144}
!58 = !{i64 68148}
!59 = !{i64 68172}
!60 = !{i64 68184}
!61 = !{i64 68188}
!62 = !{i64 68200}
!63 = !{i64 68204}
!64 = !{i64 68236}
!65 = !{i64 68240}
!66 = !{i64 68244}
!67 = !{i64 68248}
!68 = !{i64 68252}
!69 = !{i64 68256}
!70 = !{i64 68264}
!71 = !{i64 68276}
!72 = !{i64 68280}
!73 = !{i64 68176}
!74 = !{i64 68288}
!75 = !{i64 68292}
!76 = !{i64 68300}
!77 = !{i64 68304}
!78 = !{i64 68308}
!79 = !{i64 68312}
!80 = !{i64 68332}
!81 = !{i64 68336}
!82 = !{i64 68340}
!83 = !{i64 68364}
!84 = !{i64 68368}
!85 = !{i64 68384}
!86 = !{i64 68388}
!87 = !{i64 68392}
!88 = !{i64 68396}
!89 = !{i64 68400}
!90 = !{i64 68408}
!91 = !{i64 68416}
!92 = !{i64 68428}
!93 = !{i64 68440}
!94 = !{i64 68456}
!95 = !{i64 68460}
!96 = !{i64 68480}
!97 = !{i64 68492}
!98 = !{i64 68496}
!99 = !{i64 68516}
!100 = !{i64 68528}
!101 = !{i64 68532}
!102 = !{i64 68536}
!103 = !{i64 68540}
!104 = !{i64 68548}
!105 = !{i64 68564}
!106 = !{i64 68568}
!107 = !{i64 68572}
!108 = !{i64 68576}
!109 = !{i64 68580}
!110 = !{i64 68596}
!111 = !{i64 68616}
!112 = !{i64 68620}
!113 = !{i64 68624}
!114 = !{i64 68636}
!115 = !{i64 68640}
!116 = !{i64 68644}
!117 = !{i64 68648}
!118 = !{i64 68660}
!119 = !{i64 68664}
!120 = !{i64 68668}
!121 = !{i64 68676}
!122 = !{i64 68680}
!123 = !{i64 68692}
!124 = !{i64 68704}
!125 = !{i64 68708}
!126 = !{i64 68712}
!127 = !{i64 68716}
!128 = !{i64 68728}
!129 = !{i64 68732}
!130 = !{i64 68736}
!131 = !{i64 68740}
!132 = !{i64 68760}
!133 = !{i64 68764}
!134 = !{i64 68768}
!135 = !{i64 68772}
!136 = !{i64 68776}
!137 = !{i64 68780}
!138 = !{i64 68784}
!139 = !{i64 68804}
!140 = !{i64 68808}
!141 = !{i64 68812}
!142 = !{i64 68816}
!143 = !{i64 68820}
!144 = !{i64 68824}
!145 = !{i64 68836}
!146 = !{i64 68840}
!147 = !{i64 68848}
!148 = !{i64 68852}
!149 = !{i64 68868}
!150 = !{i64 68876}
!151 = !{i64 68892}
!152 = !{i64 68908}
!153 = !{i64 68916}
!154 = !{i64 68932}
!155 = !{i64 68940}
!156 = !{i64 68948}
!157 = !{i64 68980}
!158 = !{i64 68984}
!159 = !{i64 68990}
!160 = !{i64 69012}
!161 = !{i64 69016}
!162 = !{i64 69020}
!163 = !{i64 69024}
!164 = !{i64 69036}
!165 = !{i64 69068}
!166 = !{i64 69088}
!167 = !{i64 69092}
!168 = !{i64 69100}
!169 = !{i64 69112}
!170 = !{i64 69116}
!171 = !{i64 69120}
!172 = !{i64 69124}
!173 = !{i64 69128}
!174 = !{i64 69130}
!175 = !{i64 69136}
!176 = !{i64 69138}
!177 = !{i64 69140}
!178 = !{i64 69172}
!179 = !{i64 69180}
!180 = !{i64 69188}
!181 = !{i64 69220}
!182 = !{i64 69224}
!183 = !{i64 69232}
!184 = !{i64 69236}
!185 = !{i64 69240}
!186 = !{i64 69252}
!187 = !{i64 69256}
!188 = !{i64 69260}
!189 = !{i64 69276}
!190 = !{i64 69304}
!191 = !{i64 69308}
!192 = !{i64 69312}
!193 = !{i64 69316}
!194 = !{i64 69320}
!195 = !{i64 69324}
!196 = !{i64 69332}
!197 = !{i64 69336}
!198 = !{i64 69352}
!199 = !{i64 69356}
!200 = !{i64 69360}
!201 = !{i64 69368}
!202 = !{i64 69400}
!203 = !{i64 69404}
!204 = !{i64 69416}
!205 = !{i64 69420}
!206 = !{i64 69428}
!207 = !{i64 69432}
!208 = !{i64 69444}
!209 = !{i64 69460}
!210 = !{i64 69464}
!211 = !{i64 69468}
!212 = !{i64 69472}
!213 = !{i64 69476}
!214 = !{i64 69492}
!215 = !{i64 69528}
!216 = !{i64 69532}
!217 = !{i64 69540}
!218 = !{i64 69544}
!219 = !{i64 69548}
!220 = !{i64 69556}
!221 = !{i64 69560}
!222 = !{i64 69564}
!223 = !{i64 69568}
!224 = !{i64 69572}
!225 = !{i64 69576}
!226 = !{i64 69588}
!227 = !{i64 69592}
!228 = !{i64 69596}
!229 = !{i64 69600}
!230 = !{i64 69608}
!231 = !{i64 69620}
!232 = !{i64 69632}
!233 = !{i64 69636}
!234 = !{i64 69648}
!235 = !{i64 69652}
!236 = !{i64 69656}
!237 = !{i64 69676}
!238 = !{i64 69680}
!239 = !{i64 69688}
!240 = !{i64 69692}
!241 = !{i64 69704}
!242 = !{i64 69708}
!243 = !{i64 69712}
!244 = !{i64 69728}
!245 = !{i64 69744}
!246 = !{i64 69748}
!247 = !{i64 69792}
!248 = !{i64 69796}
!249 = !{i64 69800}
!250 = !{i64 69804}
!251 = !{i64 69808}
!252 = !{i64 69816}
!253 = !{i64 69820}
!254 = !{i64 69824}
!255 = !{i64 69828}
!256 = !{i64 69832}
!257 = !{i64 69836}
!258 = !{i64 69840}
!259 = !{i64 69848}
!260 = !{i64 69852}
!261 = !{i64 69860}
!262 = !{i64 69864}
!263 = !{i64 69872}
!264 = !{i64 69876}
!265 = !{i64 69884}
!266 = !{i64 69904}
!267 = !{i64 69916}
!268 = !{i64 69924}
!269 = !{i64 69940}
!270 = !{i64 69956}
!271 = !{i64 69960}
!272 = !{i64 69964}
!273 = !{i64 69972}
!274 = !{i64 69980}
!275 = !{i64 69992}
!276 = !{i64 69996}
!277 = !{i64 70000}
!278 = !{i64 70004}
!279 = !{i64 70024}
!280 = !{i64 70028}
!281 = !{i64 70032}
!282 = !{i64 70056}
!283 = !{i64 70064}
!284 = !{i64 70072}
!285 = !{i64 70076}
!286 = !{i64 70084}
!287 = !{i64 70096}
!288 = !{i64 70100}
!289 = !{i64 70104}
!290 = !{i64 70112}
!291 = !{i64 70116}
!292 = !{i64 70120}
!293 = !{i64 70124}
!294 = !{i64 70128}
!295 = !{i64 70132}
!296 = !{i64 70136}
!297 = !{i64 70140}
!298 = !{i64 70144}
!299 = !{i64 70148}
!300 = !{i64 70152}
!301 = !{i64 70156}
!302 = !{i64 70172}
!303 = !{i64 70176}
!304 = !{i64 70180}
!305 = !{i64 70188}
!306 = !{i64 70192}
!307 = !{i64 70196}
!308 = !{i64 70200}
!309 = !{i64 70208}
!310 = !{i64 70248}
!311 = !{i64 70256}
!312 = !{i64 70288}
!313 = !{i64 70296}
!314 = !{i64 70336}
!315 = !{i64 70348}
!316 = !{i64 70356}
!317 = !{i64 70396}
!318 = !{i64 70408}
!319 = !{i64 70416}
!320 = !{i64 70428}
!321 = !{i64 70432}
!322 = !{i64 70444}
!323 = !{i64 70452}
!324 = !{i64 70456}
!325 = !{i64 70460}
!326 = !{i64 70476}
!327 = !{i64 70480}
!328 = !{i64 70484}
!329 = !{i64 70492}
!330 = !{i64 70496}
!331 = !{i64 70516}
!332 = !{i64 70520}
!333 = !{i64 70524}
!334 = !{i64 70552}
!335 = !{i64 70568}
!336 = !{i64 70572}
!337 = !{i64 70576}
!338 = !{i64 70580}
!339 = !{i64 70584}
!340 = !{i64 70588}
!341 = !{i64 70600}
!342 = !{i64 70604}
!343 = !{i64 70608}
!344 = !{i64 70612}
!345 = !{i64 70616}
!346 = !{i64 70620}
!347 = !{i64 70628}
!348 = !{i64 70632}
!349 = !{i64 70644}
!350 = !{i64 70648}
!351 = !{i64 70652}
!352 = !{i64 70656}
!353 = !{i64 70676}
!354 = !{i64 70680}
!355 = !{i64 70700}
!356 = !{i64 70716}
!357 = !{i64 70720}
!358 = !{i64 70724}
!359 = !{i64 70756}
!360 = !{i64 70760}
!361 = !{i64 70764}
!362 = !{i64 70768}
!363 = !{i64 70772}
!364 = !{i64 70776}
!365 = !{i64 70780}
!366 = !{i64 70788}
!367 = !{i64 70800}
!368 = !{i64 70812}
!369 = !{i64 70816}
!370 = !{i64 70820}
!371 = !{i64 70824}
!372 = !{i64 70844}
!373 = !{i64 70848}
!374 = !{i64 70856}
!375 = !{i64 70884}
!376 = !{i64 70904}
!377 = !{i64 70920}
!378 = !{i64 70924}
!379 = !{i64 70944}
!380 = !{i64 70976}
!381 = !{i64 70988}
!382 = !{i64 70996}
