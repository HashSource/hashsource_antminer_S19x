source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat64 = type { i64, i64, i32, i32, i32, i32, i64, i64, i64, i32, i32, i64, i32, i32, i32, i32, i32, i32, i32, i32 }

@global_var_221a4 = local_unnamed_addr global i32 67536
@global_var_221a8 = local_unnamed_addr global i32 67536
@global_var_221ac = local_unnamed_addr global i32 67536
@global_var_221b0 = local_unnamed_addr global i32 67536
@global_var_221b4 = local_unnamed_addr global i32 67536
@global_var_221b8 = local_unnamed_addr global i32 67536
@global_var_221bc = local_unnamed_addr global i32 67536
@global_var_221c0 = local_unnamed_addr global i32 67536
@global_var_221c4 = local_unnamed_addr global i32 67536
@global_var_221c8 = local_unnamed_addr global i32 67536
@global_var_221cc = local_unnamed_addr global i32 67536
@global_var_221d0 = local_unnamed_addr global i32 67536
@global_var_221d4 = local_unnamed_addr global i32 67536
@global_var_221d8 = local_unnamed_addr global i32 67536
@global_var_221dc = local_unnamed_addr global i32 67536
@global_var_221e0 = local_unnamed_addr global i32 67536
@global_var_221e4 = local_unnamed_addr global i32 67536
@global_var_221e8 = local_unnamed_addr global i32 67536
@global_var_221ec = local_unnamed_addr global i32 67536
@global_var_221f0 = local_unnamed_addr global i32 67536
@global_var_221f4 = local_unnamed_addr global i32 67536
@global_var_221f8 = local_unnamed_addr global i32 67536
@global_var_221fc = local_unnamed_addr global i32 67536
@global_var_22200 = local_unnamed_addr global i32 67536
@global_var_22204 = local_unnamed_addr global i32 67536
@global_var_22208 = local_unnamed_addr global i32 67536
@global_var_2220c = local_unnamed_addr global i32 67536
@global_var_22240 = local_unnamed_addr global i32 0
@global_var_11cc4 = constant [13 x i8] c"1:8fr:qhw:xd\00"
@global_var_11cd4 = constant [11 x i8] c"EEPROG_DEV\00"
@global_var_11ce0 = constant [16 x i8] c"EEPROG_I2C_ADDR\00"
@global_var_11d8c = constant [36 x i8] c"Dummy mode selected, nothing done.\0A\00"
@global_var_11cf0 = constant [6 x i8] c"0.7.5\00"
@global_var_11cf8 = constant [41 x i8] c"eeprog %s, a 24Cxx EEPROM reader/writer\0A\00"
@global_var_11d24 = constant [62 x i8] c"Copyright (c) 2003 by Stefano Barbato - All rights reserved.\0A\00"
@global_var_11d64 = constant [39 x i8] c"  Bus: %s, Address: 0x%x, Mode: %dbit\0A\00"
@global_var_11e28 = constant [42 x i8] c"  Writing stdin starting at address 0x%x\0A\00"
@global_var_11e08 = constant [30 x i8] c"  Reading %d bytes from 0x%x\0A\00"
@global_var_11db0 = constant [86 x i8] c"unable to open eeprom device file (check that the file exists and that it's readable)\00"
@global_var_11c78 = constant [42 x i8] c"EEPROM type switch (-8 or -16) used twice\00"
@global_var_11ca4 = constant [30 x i8] c"Both read and write requested\00"
@global_var_10dbc = local_unnamed_addr constant i32 70632
@global_var_10dc0 = local_unnamed_addr constant i32 120
@global_var_220a8 = global i32 1
@global_var_22198 = local_unnamed_addr global i32* @global_var_220a8
@global_var_22210 = local_unnamed_addr global i32 0
@global_var_10de4 = local_unnamed_addr constant i32 139807
@global_var_11570 = constant [1221 x i8] c"eeprog 0.7.5, a 24Cxx EEPROM reader/writer\0ACopyright (c) 2003 by Stefano Barbato - All rights reserved.\0AUsage: eeprog [-fqxdh] [-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\0A\0A  Address modes:\0A\09-8\09\09Use 8bit address mode for 24c0x...24C16 [default]\0A\09-16\09\09Use 16bit address mode for 24c32...24C256\0A  Actions:\0A\09-r addr[:count]\09Read [count] (1 if omitted) bytes from [addr]\0A\09\09\09and print them to the standard output\0A\09-w addr\09\09Write input (stdin) at address [addr] of the EEPROM\0A\09-h\09\09Print this help\0A  Options:\0A\09-x\09\09Set hex output mode\0A\09-d\09\09Dummy mode, display what *would* have been done\0A\09-f\09\09Disable warnings and don't ask confirmation\0A\09-q\09\09Quiet mode\0A\0AThe following environment variables could be set instead of the command\0Aline arguments:\0A\09EEPROG_DEV\09\09device name(/dev/i2c-N)\0A\09EEPROG_I2C_ADDR\09\09i2c-address\0A\0A\09Examples\0A\091- read 64 bytes from the EEPROM at address 0x54 on bus 0 starting\0A\09   at address 123 (decimal)\0A\09\09eeprog /dev/i2c-0 0x54 -r 123:64\0A\092- prints the hex codes of the first 32 bytes read from bus 1\0A\09   at address 0x22\0A\09\09eeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\0A\093- write the current timestamp at address 0x200 of the EEPROM on\0A\09   bus 0 at address 0x33\0A\09\09date | eeprog /dev/i2c-0 0x33 -w 0x200\0A\00"
@global_var_11a38 = constant [14 x i8] c"%s\0A[line %d]\0A\00"
@global_var_11a48 = constant [22 x i8] c"Error at line %d: %s\0A\00"
@global_var_11a60 = constant [470 x i8] c"\0A____________________________WARNING____________________________\0AErroneously writing to a system EEPROM (like DIMM SPD modules)\0Acan break your system.  It will NOT boot anymore so you'll not\0Abe able to fix it.\0A\0AReading from 8bit EEPROMs (like that in your DIMM) without using\0Athe -8 switch can also UNEXPECTEDLY write to them, so be sure to\0Ause the -8 command param when required.\0A\0AUse -f to disable this warning message\0A\0APress ENTER to continue or hit CTRL-C to exit\0A\0A\00"
@global_var_11c44 = constant [15 x i8] c"\0A %.4x|  %.2x \00"
@global_var_11c64 = constant [6 x i8] c"%.2x \00"
@global_var_11c54 = constant [10 x i8] c"\0A %.4x|  \00"
@global_var_11c60 = constant [3 x i8] c"  \00"
@global_var_11c38 = constant [11 x i8] c"read error\00"
@global_var_12040 = constant [3 x i8] c"\0A\0A\00"
@global_var_11c6c = constant [12 x i8] c"write error\00"
@global_var_11e54 = constant [24 x i8] c"Error i2c_write_2b: %s\0A\00"
@global_var_11ff4 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_11fa4 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_11f54 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_11f04 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_11eb8 = constant [74 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE function is required. Program halted.\0A\0A\00"
@global_var_11e6c = constant [73 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE function is required. Program halted.\0A\0A\00"
@global_var_1205c = constant [26 x i8] c"ERR: unknown eeprom type\0A\00"
@global_var_12044 = constant [24 x i8] c"Error i2c_write_1b: %s\0A\00"
@global_var_12078 = constant [24 x i8] c"Error i2c_write_3b: %s\0A\00"
@global_var_11558 = local_unnamed_addr constant i32 68460
@global_var_11560 = local_unnamed_addr constant [3 x i8] c"pG\00"
@global_var_220a0 = global i32 69141
@0 = external global i32
@global_var_22238 = external local_unnamed_addr global i8*
@global_var_22220 = local_unnamed_addr global i8** null
@global_var_22228 = local_unnamed_addr global %_IO_FILE* null
@global_var_10d98 = local_unnamed_addr constant void ()* inttoptr (i32 67880 to void ()*)
@global_var_10d9c = local_unnamed_addr constant void ()* inttoptr (i32 70945 to void ()*)
@global_var_22230 = local_unnamed_addr global %_IO_FILE* null
@global_var_22234 = local_unnamed_addr global %_IO_FILE* null
@1 = internal constant [2 x i8] c"\0A\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_11ff0 = constant [2 x i8] c"\0A\00"

declare i32 @unknown_240(i32) local_unnamed_addr

declare i32 @unknown_22c0() local_unnamed_addr

define i32 @function_107c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_107c4:
  %0 = call i32 @function_10da0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_107e4(i8* %format, ...) local_unnamed_addr {
dec_label_pc_107e4:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_107f0(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_107f0:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_107fc(%_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_107fc:
  %0 = call i32 @_IO_getc(%_IO_FILE* %fp), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10808(i32 %c, %_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @_IO_putc(i32 %c, %_IO_FILE* %fp), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10814(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_10820(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1082c(i32 %useconds) local_unnamed_addr {
dec_label_pc_1082c:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_10838(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10838:
  %0 = call i32 @i2c_smbus_write_byte(i32 %arg1, i32 %arg2), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10844(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_10844:
  %0 = call i32 (i8*, i32, ...) @open64(i8* %file, i32 %oflag), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i8* @function_10850(i8* %name) local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i8* @getenv(i8* %name), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define i32 @function_1085c(i8* %s) local_unnamed_addr {
dec_label_pc_1085c:
  %0 = call i32 @puts(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10868(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10874(i32 %errnum) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define void @function_10880() local_unnamed_addr {
dec_label_pc_10880:
  call void @__gmon_start__(), !insn.addr !15
  ret void, !insn.addr !15
}

define void @function_1088c(i32 %status) local_unnamed_addr {
dec_label_pc_1088c:
  call void @exit(i32 %status), !insn.addr !16
  ret void, !insn.addr !16
}

define i32 @function_10898(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10898:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_108a4(i32 %arg1) local_unnamed_addr {
dec_label_pc_108a4:
  %0 = call i32 @i2c_smbus_read_byte(i32 %arg1), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_108b0(i8* %s) local_unnamed_addr {
dec_label_pc_108b0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_108bc(i32 %argc, i8** %argv, i8* %shortopts) local_unnamed_addr {
dec_label_pc_108bc:
  %0 = call i32 @getopt(i32 %argc, i8** %argv, i8* %shortopts), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_108c8(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_108d4() local_unnamed_addr {
dec_label_pc_108d4:
  %0 = call i32 @i2c_smbus_write_byte_data(), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32* @function_108e0() local_unnamed_addr {
dec_label_pc_108e0:
  %0 = call i32* @__errno_location(), !insn.addr !23
  ret i32* %0, !insn.addr !23
}

define i32 @function_108ec(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7) local_unnamed_addr {
dec_label_pc_108ec:
  %0 = call i32 @i2c_smbus_write_word_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_108f8(i32 %c, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_108f8:
  %0 = call i32 @fputc(i32 %c, %_IO_FILE* %stream), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10904(i32 %ver, i8* %filename, %stat64* %stat_buf) local_unnamed_addr {
dec_label_pc_10904:
  %0 = call i32 @__xstat64(i32 %ver, i8* %filename, %stat64* %stat_buf), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define void @function_10910() local_unnamed_addr {
dec_label_pc_10910:
  call void @abort(), !insn.addr !27
  ret void, !insn.addr !27
}

define i32 @function_1091c(i32 %fd) local_unnamed_addr {
dec_label_pc_1091c:
  %0 = call i32 @close(i32 %fd), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10928(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10928:
  %r4.1.reg2mem = alloca i32, !insn.addr !29
  %r0.0.reg2mem = alloca i32, !insn.addr !29
  %r4.0.ph13.be.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph21.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph19.reg2mem = alloca i32, !insn.addr !29
  %sl.0.ph18.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph16.reg2mem = alloca i32, !insn.addr !29
  %sl.0.ph15.reg2mem = alloca i32, !insn.addr !29
  %r4.0.ph13.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph11.reg2mem = alloca i32, !insn.addr !29
  %sl.0.ph10.reg2mem = alloca i32, !insn.addr !29
  %r4.0.ph8.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-180.0.ph7.reg2mem = alloca i32, !insn.addr !29
  %fp.0.ph.reg2mem = alloca i32, !insn.addr !29
  %sl.0.ph.reg2mem = alloca i32, !insn.addr !29
  %sb.0.ph.reg2mem = alloca i32, !insn.addr !29
  %r4.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-180.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-176.0.ph.reg2mem = alloca i32, !insn.addr !29
  %stack_var_-144 = alloca i32, align 4
  %stack_var_-168 = alloca i32, align 4
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  store i32 0, i32* @global_var_22240, align 4, !insn.addr !30
  %0 = inttoptr i32 %arg2 to i8**, !insn.addr !31
  store i32 0, i32* %stack_var_-176.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %stack_var_-180.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %r4.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %sb.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %sl.0.ph.reg2mem, !insn.addr !32
  store i32 0, i32* %fp.0.ph.reg2mem, !insn.addr !32
  br label %dec_label_pc_10968.outer, !insn.addr !32

dec_label_pc_10968.outer:                         ; preds = %dec_label_pc_109b0, %dec_label_pc_10928
  %fp.0.ph.reload = load i32, i32* %fp.0.ph.reg2mem
  %sl.0.ph.reload = load i32, i32* %sl.0.ph.reg2mem
  %sb.0.ph.reload = load i32, i32* %sb.0.ph.reg2mem
  %r4.0.ph.reload = load i32, i32* %r4.0.ph.reg2mem
  %stack_var_-180.0.ph.reload = load i32, i32* %stack_var_-180.0.ph.reg2mem
  %stack_var_-176.0.ph.reload = load i32, i32* %stack_var_-176.0.ph.reg2mem
  store i32 %stack_var_-180.0.ph.reload, i32* %stack_var_-180.0.ph7.reg2mem
  store i32 %r4.0.ph.reload, i32* %r4.0.ph8.reg2mem
  store i32 %sl.0.ph.reload, i32* %sl.0.ph10.reg2mem
  store i32 %fp.0.ph.reload, i32* %fp.0.ph11.reg2mem
  br label %dec_label_pc_10968.outer6

dec_label_pc_10968.outer6:                        ; preds = %dec_label_pc_10968.outer, %dec_label_pc_10a2c
  %fp.0.ph11.reload = load i32, i32* %fp.0.ph11.reg2mem
  %sl.0.ph10.reload = load i32, i32* %sl.0.ph10.reg2mem
  %r4.0.ph8.reload = load i32, i32* %r4.0.ph8.reg2mem
  %stack_var_-180.0.ph7.reload = load i32, i32* %stack_var_-180.0.ph7.reg2mem
  store i32 %r4.0.ph8.reload, i32* %r4.0.ph13.reg2mem
  store i32 %sl.0.ph10.reload, i32* %sl.0.ph15.reg2mem
  store i32 %fp.0.ph11.reload, i32* %fp.0.ph16.reg2mem
  br label %dec_label_pc_10968.outer12

dec_label_pc_10968.outer12:                       ; preds = %dec_label_pc_10968.outer12.backedge, %dec_label_pc_10968.outer6
  %fp.0.ph16.reload = load i32, i32* %fp.0.ph16.reg2mem
  %sl.0.ph15.reload = load i32, i32* %sl.0.ph15.reg2mem
  %r4.0.ph13.reload = load i32, i32* %r4.0.ph13.reg2mem
  store i32 %sl.0.ph15.reload, i32* %sl.0.ph18.reg2mem
  store i32 %fp.0.ph16.reload, i32* %fp.0.ph19.reg2mem
  br label %dec_label_pc_10968.outer17

dec_label_pc_10968.outer17:                       ; preds = %dec_label_pc_10968.outer12, %dec_label_pc_10a14
  %fp.0.ph19.reload = load i32, i32* %fp.0.ph19.reg2mem
  %sl.0.ph18.reload = load i32, i32* %sl.0.ph18.reg2mem
  store i32 %fp.0.ph19.reload, i32* %fp.0.ph21.reg2mem
  br label %dec_label_pc_10968.outer20

dec_label_pc_10968.outer20:                       ; preds = %dec_label_pc_10968.outer17, %dec_label_pc_109e0
  %fp.0.ph21.reload = load i32, i32* %fp.0.ph21.reg2mem
  br label %dec_label_pc_10968

dec_label_pc_10968:                               ; preds = %dec_label_pc_10968.outer20, %dec_label_pc_10a3c
  %1 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11cc4, i32 0, i32 0)), !insn.addr !31
  switch i32 %1, label %dec_label_pc_1098c [
    i32 -1, label %dec_label_pc_10a54
    i32 102, label %dec_label_pc_109e0
  ]

dec_label_pc_1098c:                               ; preds = %dec_label_pc_10968
  %2 = icmp sgt i32 %1, 102, !insn.addr !33
  br i1 %2, label %dec_label_pc_109c0, label %dec_label_pc_10990, !insn.addr !33

dec_label_pc_10990:                               ; preds = %dec_label_pc_1098c
  switch i32 %1, label %dec_label_pc_109a8 [
    i32 56, label %dec_label_pc_10a1c
    i32 100, label %dec_label_pc_10a14
    i32 49, label %dec_label_pc_109e8
  ]

dec_label_pc_109a8:                               ; preds = %dec_label_pc_10990, %dec_label_pc_109c0
  %3 = icmp eq i32 %sb.0.ph.reload, 0, !insn.addr !34
  br i1 %3, label %dec_label_pc_109b0, label %dec_label_pc_10d60, !insn.addr !35

dec_label_pc_109b0:                               ; preds = %dec_label_pc_109a8
  %4 = load i8*, i8** @global_var_22238, align 4, !insn.addr !36
  %phitmp = ptrtoint i8* %4 to i32
  store i32 %phitmp, i32* %stack_var_-176.0.ph.reg2mem, !insn.addr !37
  store i32 %stack_var_-180.0.ph7.reload, i32* %stack_var_-180.0.ph.reg2mem, !insn.addr !37
  store i32 %r4.0.ph13.reload, i32* %r4.0.ph.reg2mem, !insn.addr !37
  store i32 %1, i32* %sb.0.ph.reg2mem, !insn.addr !37
  store i32 %sl.0.ph18.reload, i32* %sl.0.ph.reg2mem, !insn.addr !37
  store i32 %fp.0.ph21.reload, i32* %fp.0.ph.reg2mem, !insn.addr !37
  br label %dec_label_pc_10968.outer, !insn.addr !37

dec_label_pc_109c0:                               ; preds = %dec_label_pc_1098c
  switch i32 %1, label %dec_label_pc_109a8 [
    i32 113, label %dec_label_pc_10a3c
    i32 120, label %dec_label_pc_10a2c
    i32 104, label %dec_label_pc_109d8
  ]

dec_label_pc_109d8:                               ; preds = %dec_label_pc_109c0
  %5 = call i32 @function_10e50(i32 203), !insn.addr !38
  unreachable, !insn.addr !38

dec_label_pc_109e0:                               ; preds = %dec_label_pc_10968
  %6 = add i32 %fp.0.ph21.reload, 1, !insn.addr !39
  store i32 %6, i32* %fp.0.ph21.reg2mem, !insn.addr !40
  br label %dec_label_pc_10968.outer20, !insn.addr !40

dec_label_pc_109e8:                               ; preds = %dec_label_pc_10990
  %7 = load i8*, i8** @global_var_22238, align 4, !insn.addr !41
  %8 = load i8, i8* %7, align 1, !insn.addr !42
  %9 = icmp eq i8 %8, 54, !insn.addr !43
  br i1 %9, label %dec_label_pc_109f8, label %dec_label_pc_10a4c, !insn.addr !44

dec_label_pc_109f8:                               ; preds = %dec_label_pc_109e8
  %10 = call i32 @strlen(i8* %7), !insn.addr !45
  %11 = icmp eq i32 %10, 1, !insn.addr !46
  br i1 %11, label %dec_label_pc_10a04, label %dec_label_pc_10a4c, !insn.addr !47

dec_label_pc_10a04:                               ; preds = %dec_label_pc_109f8
  %12 = icmp eq i32 %r4.0.ph13.reload, 0, !insn.addr !48
  store i32 2, i32* %r4.0.ph13.be.reg2mem, !insn.addr !49
  br i1 %12, label %dec_label_pc_10968.outer12.backedge, label %dec_label_pc_10d50, !insn.addr !49

dec_label_pc_10968.outer12.backedge:              ; preds = %dec_label_pc_10a04, %dec_label_pc_10a1c
  %r4.0.ph13.be.reload = load i32, i32* %r4.0.ph13.be.reg2mem
  store i32 %r4.0.ph13.be.reload, i32* %r4.0.ph13.reg2mem
  store i32 %sl.0.ph18.reload, i32* %sl.0.ph15.reg2mem
  store i32 %fp.0.ph21.reload, i32* %fp.0.ph16.reg2mem
  br label %dec_label_pc_10968.outer12

dec_label_pc_10a14:                               ; preds = %dec_label_pc_10990
  %13 = add i32 %sl.0.ph18.reload, 1, !insn.addr !50
  store i32 %13, i32* %sl.0.ph18.reg2mem, !insn.addr !51
  store i32 %fp.0.ph21.reload, i32* %fp.0.ph19.reg2mem, !insn.addr !51
  br label %dec_label_pc_10968.outer17, !insn.addr !51

dec_label_pc_10a1c:                               ; preds = %dec_label_pc_10990
  %14 = icmp eq i32 %r4.0.ph13.reload, 0, !insn.addr !52
  store i32 1, i32* %r4.0.ph13.be.reg2mem, !insn.addr !53
  br i1 %14, label %dec_label_pc_10968.outer12.backedge, label %dec_label_pc_10d40, !insn.addr !53

dec_label_pc_10a2c:                               ; preds = %dec_label_pc_109c0
  %15 = add i32 %stack_var_-180.0.ph7.reload, 1, !insn.addr !54
  store i32 %15, i32* %stack_var_-180.0.ph7.reg2mem, !insn.addr !55
  store i32 %r4.0.ph13.reload, i32* %r4.0.ph8.reg2mem, !insn.addr !55
  store i32 %sl.0.ph18.reload, i32* %sl.0.ph10.reg2mem, !insn.addr !55
  store i32 %fp.0.ph21.reload, i32* %fp.0.ph11.reg2mem, !insn.addr !55
  br label %dec_label_pc_10968.outer6, !insn.addr !55

dec_label_pc_10a3c:                               ; preds = %dec_label_pc_109c0
  %16 = load i32, i32* @global_var_22240, align 4, !insn.addr !56
  %17 = add i32 %16, 1, !insn.addr !57
  store i32 %17, i32* @global_var_22240, align 4, !insn.addr !58
  br label %dec_label_pc_10968, !insn.addr !59

dec_label_pc_10a4c:                               ; preds = %dec_label_pc_109f8, %dec_label_pc_109e8
  %18 = call i32 @function_10e50(i32 182), !insn.addr !60
  unreachable, !insn.addr !60

dec_label_pc_10a54:                               ; preds = %dec_label_pc_10968
  %19 = icmp eq i32 %sb.0.ph.reload, 0, !insn.addr !61
  br i1 %19, label %dec_label_pc_10d38, label %dec_label_pc_10a68, !insn.addr !62

dec_label_pc_10a68:                               ; preds = %dec_label_pc_10a54
  %20 = load i8**, i8*** @global_var_22220, align 4, !insn.addr !63
  %21 = ptrtoint i8** %20 to i32, !insn.addr !63
  %22 = sub i32 %arg1, %21, !insn.addr !64
  switch i32 %22, label %dec_label_pc_10a90 [
    i32 1, label %dec_label_pc_10b9c
    i32 2, label %dec_label_pc_10b84
    i32 0, label %dec_label_pc_10a98
  ]

dec_label_pc_10a90:                               ; preds = %dec_label_pc_10a68
  %23 = call i32 @function_10e50(i32 238), !insn.addr !65
  unreachable, !insn.addr !65

dec_label_pc_10a98:                               ; preds = %dec_label_pc_10a68
  %24 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11cd4, i32 0, i32 0)), !insn.addr !66
  %25 = ptrtoint i8* %24 to i32, !insn.addr !66
  %26 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11ce0, i32 0, i32 0)), !insn.addr !67
  %27 = ptrtoint i8* %26 to i32, !insn.addr !67
  store i32 %27, i32* %r0.0.reg2mem, !insn.addr !67
  store i32 %25, i32* %r4.1.reg2mem, !insn.addr !67
  br label %dec_label_pc_10ab4, !insn.addr !67

dec_label_pc_10ab4:                               ; preds = %dec_label_pc_10ca8, %dec_label_pc_10bbc, %dec_label_pc_10b84, %dec_label_pc_10a98
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %28 = icmp eq i32 %r4.1.reload, 0, !insn.addr !68
  %29 = icmp eq i32 %r0.0.reload, 0
  %spec.select3 = or i1 %29, %28
  br i1 %spec.select3, label %dec_label_pc_10d30, label %dec_label_pc_10ac8, !insn.addr !69

dec_label_pc_10ac8:                               ; preds = %dec_label_pc_10ab4
  %30 = icmp eq i32 %r4.0.ph13.reload, 0, !insn.addr !70
  %r8.1 = select i1 %30, i32 1, i32 %r4.0.ph13.reload
  %spec.select4 = zext i1 %spec.select3 to i32
  %31 = inttoptr i32 %r0.0.reload to i8*, !insn.addr !71
  %32 = inttoptr i32 %spec.select4 to i8**, !insn.addr !71
  %33 = call i32 @strtoul(i8* %31, i8** %32, i32 %spec.select4), !insn.addr !71
  %34 = load i32, i32* @global_var_22240, align 4, !insn.addr !72
  %35 = icmp eq i32 %34, 0, !insn.addr !73
  br i1 %35, label %dec_label_pc_10bd4, label %dec_label_pc_10ae8, !insn.addr !74

dec_label_pc_10ae8:                               ; preds = %dec_label_pc_10c04, %dec_label_pc_10bd4, %dec_label_pc_10c2c, %dec_label_pc_10ac8
  %36 = icmp eq i32 %sl.0.ph18.reload, 0, !insn.addr !75
  br i1 %36, label %dec_label_pc_10af0, label %dec_label_pc_10b60, !insn.addr !76

dec_label_pc_10af0:                               ; preds = %dec_label_pc_10ae8
  %37 = call i32 @function_111b0(i32 %r4.1.reload, i32 %33, i32 %r8.1, i32* nonnull %stack_var_-160), !insn.addr !77
  %38 = icmp slt i32 %37, 0, !insn.addr !78
  br i1 %38, label %dec_label_pc_10d20, label %dec_label_pc_10b0c, !insn.addr !79

dec_label_pc_10b0c:                               ; preds = %dec_label_pc_10af0
  switch i32 %sb.0.ph.reload, label %dec_label_pc_10c5c [
    i32 114, label %dec_label_pc_10c64
    i32 119, label %dec_label_pc_10b1c
  ]

dec_label_pc_10b1c:                               ; preds = %dec_label_pc_10b0c
  %39 = icmp eq i32 %fp.0.ph21.reload, 0, !insn.addr !80
  br i1 %39, label %dec_label_pc_10ccc, label %dec_label_pc_10b24, !insn.addr !81

dec_label_pc_10b24:                               ; preds = %dec_label_pc_10ccc, %dec_label_pc_10b1c
  %40 = call i32 @function_10ed8(i32 %stack_var_-176.0.ph.reload, i32* nonnull %stack_var_-168, i32* nonnull %stack_var_-164), !insn.addr !82
  %41 = load i32, i32* @global_var_22240, align 4, !insn.addr !83
  %42 = icmp eq i32 %41, 0, !insn.addr !84
  br i1 %42, label %dec_label_pc_10cd4, label %dec_label_pc_10b40, !insn.addr !85

dec_label_pc_10b40:                               ; preds = %dec_label_pc_10cd4, %dec_label_pc_10b24
  %43 = load i32, i32* %stack_var_-168, align 4, !insn.addr !86
  %44 = call i32 @function_11094(i32* nonnull %stack_var_-160, i32 %43), !insn.addr !87
  br label %dec_label_pc_10b4c, !insn.addr !87

dec_label_pc_10b4c:                               ; preds = %dec_label_pc_10c90, %dec_label_pc_10b40
  %45 = call i32 @function_11334(i32* nonnull %stack_var_-160), !insn.addr !88
  br label %dec_label_pc_10b54, !insn.addr !88

dec_label_pc_10b54:                               ; preds = %dec_label_pc_10b60, %dec_label_pc_10b4c
  ret i32 0, !insn.addr !89

dec_label_pc_10b60:                               ; preds = %dec_label_pc_10ae8
  %46 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !90
  %47 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_11d8c to i32*), i32 1, i32 35, %_IO_FILE* %46), !insn.addr !91
  br label %dec_label_pc_10b54, !insn.addr !92

dec_label_pc_10b84:                               ; preds = %dec_label_pc_10a68
  %48 = mul i32 %21, 4, !insn.addr !93
  %49 = add i32 %48, %arg2, !insn.addr !93
  %50 = inttoptr i32 %49 to i32*, !insn.addr !94
  %51 = load i32, i32* %50, align 4, !insn.addr !94
  %52 = add i32 %21, 1, !insn.addr !95
  store i32 %52, i32* bitcast (i8*** @global_var_22220 to i32*), align 4, !insn.addr !96
  %53 = add i32 %49, 4, !insn.addr !97
  %54 = inttoptr i32 %53 to i32*, !insn.addr !97
  %55 = load i32, i32* %54, align 4, !insn.addr !97
  store i32 %55, i32* %r0.0.reg2mem, !insn.addr !98
  store i32 %51, i32* %r4.1.reg2mem, !insn.addr !98
  br label %dec_label_pc_10ab4, !insn.addr !98

dec_label_pc_10b9c:                               ; preds = %dec_label_pc_10a68
  %56 = mul i32 %21, 4, !insn.addr !99
  %57 = add i32 %56, %arg2, !insn.addr !99
  %58 = inttoptr i32 %57 to i32*, !insn.addr !99
  %59 = load i32, i32* %58, align 4, !insn.addr !99
  %60 = inttoptr i32 %59 to i8*, !insn.addr !100
  %61 = bitcast i32* %stack_var_-144 to %stat64*, !insn.addr !100
  %62 = call i32 @__xstat64(i32 3, i8* %60, %stat64* nonnull %61), !insn.addr !100
  %63 = icmp eq i32 %62, -1, !insn.addr !101
  br i1 %63, label %dec_label_pc_10ca8, label %dec_label_pc_10bbc, !insn.addr !102

dec_label_pc_10bbc:                               ; preds = %dec_label_pc_10b9c
  %64 = load i8**, i8*** @global_var_22220, align 4, !insn.addr !103
  %65 = ptrtoint i8** %64 to i32, !insn.addr !103
  %66 = mul i32 %65, 4, !insn.addr !104
  %67 = add i32 %66, %arg2, !insn.addr !104
  %68 = inttoptr i32 %67 to i32*, !insn.addr !104
  %69 = load i32, i32* %68, align 4, !insn.addr !104
  %70 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11ce0, i32 0, i32 0)), !insn.addr !105
  %71 = ptrtoint i8* %70 to i32, !insn.addr !105
  store i32 %71, i32* %r0.0.reg2mem, !insn.addr !106
  store i32 %69, i32* %r4.1.reg2mem, !insn.addr !106
  br label %dec_label_pc_10ab4, !insn.addr !106

dec_label_pc_10bd4:                               ; preds = %dec_label_pc_10ac8
  %72 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !107
  %73 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %72, i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_11cf8, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11cf0, i32 0, i32 0)), !insn.addr !108
  %74 = load i32, i32* @global_var_22240, align 4, !insn.addr !109
  %75 = icmp eq i32 %74, 0, !insn.addr !110
  br i1 %75, label %dec_label_pc_10c04, label %dec_label_pc_10ae8, !insn.addr !111

dec_label_pc_10c04:                               ; preds = %dec_label_pc_10bd4
  %76 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !112
  %77 = call i32 @fwrite(i32* bitcast ([62 x i8]* @global_var_11d24 to i32*), i32 1, i32 61, %_IO_FILE* %76), !insn.addr !113
  %78 = load i32, i32* @global_var_22240, align 4, !insn.addr !114
  %79 = icmp eq i32 %78, 0, !insn.addr !115
  br i1 %79, label %dec_label_pc_10c2c, label %dec_label_pc_10ae8, !insn.addr !116

dec_label_pc_10c2c:                               ; preds = %dec_label_pc_10c04
  %80 = icmp eq i32 %r8.1, 1, !insn.addr !117
  %r2.4 = select i1 %80, i32 8, i32 16
  %81 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !118
  %82 = inttoptr i32 %r4.1.reload to i8*, !insn.addr !119
  %83 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %81, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11d64, i32 0, i32 0), i8* %82, i32 %33, i32 %r2.4), !insn.addr !119
  br label %dec_label_pc_10ae8, !insn.addr !120

dec_label_pc_10c5c:                               ; preds = %dec_label_pc_10b0c
  %84 = call i32 @function_10e50(i32 274), !insn.addr !121
  unreachable, !insn.addr !121

dec_label_pc_10c64:                               ; preds = %dec_label_pc_10b0c
  %85 = icmp eq i32 %fp.0.ph21.reload, 0, !insn.addr !122
  br i1 %85, label %dec_label_pc_10d18, label %dec_label_pc_10c6c, !insn.addr !123

dec_label_pc_10c6c:                               ; preds = %dec_label_pc_10d18, %dec_label_pc_10c64
  store i32 1, i32* %stack_var_-164, align 4, !insn.addr !124
  %86 = call i32 @function_10ed8(i32 %stack_var_-176.0.ph.reload, i32* nonnull %stack_var_-168, i32* nonnull %stack_var_-164), !insn.addr !125
  %87 = load i32, i32* @global_var_22240, align 4, !insn.addr !126
  %88 = icmp eq i32 %87, 0, !insn.addr !127
  br i1 %88, label %dec_label_pc_10cf4, label %dec_label_pc_10c90, !insn.addr !128

dec_label_pc_10c90:                               ; preds = %dec_label_pc_10cf4, %dec_label_pc_10c6c
  %89 = load i32, i32* %stack_var_-164, align 4, !insn.addr !129
  %90 = load i32, i32* %stack_var_-168, align 4, !insn.addr !130
  %91 = call i32 @function_10f6c(i32* nonnull %stack_var_-160, i32 %90, i32 %89, i32 %stack_var_-180.0.ph7.reload), !insn.addr !131
  br label %dec_label_pc_10b4c, !insn.addr !132

dec_label_pc_10ca8:                               ; preds = %dec_label_pc_10b9c
  %92 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11cd4, i32 0, i32 0)), !insn.addr !133
  %93 = ptrtoint i8* %92 to i32, !insn.addr !133
  %94 = load i8**, i8*** @global_var_22220, align 4, !insn.addr !134
  %95 = ptrtoint i8** %94 to i32, !insn.addr !134
  %96 = mul i32 %95, 4, !insn.addr !135
  %97 = add i32 %96, %arg2, !insn.addr !135
  %98 = inttoptr i32 %97 to i32*, !insn.addr !135
  %99 = load i32, i32* %98, align 4, !insn.addr !135
  store i32 %99, i32* %r0.0.reg2mem, !insn.addr !136
  store i32 %93, i32* %r4.1.reg2mem, !insn.addr !136
  br label %dec_label_pc_10ab4, !insn.addr !136

dec_label_pc_10ccc:                               ; preds = %dec_label_pc_10b1c
  %100 = call i32 @function_10f30(), !insn.addr !137
  br label %dec_label_pc_10b24, !insn.addr !138

dec_label_pc_10cd4:                               ; preds = %dec_label_pc_10b24
  %101 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !139
  %102 = load i32, i32* %stack_var_-168, align 4, !insn.addr !140
  %103 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %101, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11e28, i32 0, i32 0), i32 %102), !insn.addr !141
  br label %dec_label_pc_10b40, !insn.addr !142

dec_label_pc_10cf4:                               ; preds = %dec_label_pc_10c6c
  %104 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !143
  %105 = load i32, i32* %stack_var_-164, align 4, !insn.addr !144
  %106 = load i32, i32* %stack_var_-168, align 4, !insn.addr !145
  %107 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %104, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11e08, i32 0, i32 0), i32 %105, i32 %106), !insn.addr !146
  br label %dec_label_pc_10c90, !insn.addr !147

dec_label_pc_10d18:                               ; preds = %dec_label_pc_10c64
  %108 = call i32 @function_10f30(), !insn.addr !148
  br label %dec_label_pc_10c6c, !insn.addr !149

dec_label_pc_10d20:                               ; preds = %dec_label_pc_10af0
  %109 = call i32 @function_10e80(i8* getelementptr inbounds ([86 x i8], [86 x i8]* @global_var_11db0, i32 0, i32 0), i32 254), !insn.addr !150
  unreachable, !insn.addr !150

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10ab4
  %110 = call i32 @function_10e50(i32 240), !insn.addr !151
  unreachable, !insn.addr !151

dec_label_pc_10d38:                               ; preds = %dec_label_pc_10a54
  %111 = call i32 @function_10e50(i32 214), !insn.addr !152
  unreachable, !insn.addr !152

dec_label_pc_10d40:                               ; preds = %dec_label_pc_10a1c
  %112 = call i32 @function_10e80(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c78, i32 0, i32 0), i32 193), !insn.addr !153
  unreachable, !insn.addr !153

dec_label_pc_10d50:                               ; preds = %dec_label_pc_10a04
  %113 = call i32 @function_10e80(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c78, i32 0, i32 0), i32 183), !insn.addr !154
  unreachable, !insn.addr !154

dec_label_pc_10d60:                               ; preds = %dec_label_pc_109a8
  %114 = call i32 @function_10e80(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11ca4, i32 0, i32 0), i32 206), !insn.addr !155
  ret i32 %114, !insn.addr !155

; uselistorder directives
  uselistorder i32 %49, { 1, 0 }
  uselistorder i32 %33, { 1, 0 }
  uselistorder i32 %spec.select4, { 1, 0 }
  uselistorder i32 %r4.1.reload, { 1, 2, 0 }
  uselistorder i32 %21, { 0, 2, 1, 3 }
  uselistorder i32 %1, { 2, 0, 1, 4, 3 }
  uselistorder i32 %fp.0.ph21.reload, { 2, 1, 4, 6, 5, 0, 3 }
  uselistorder i32 %sl.0.ph18.reload, { 1, 3, 0, 4, 2 }
  uselistorder i32 %r4.0.ph13.reload, { 2, 3, 5, 1, 0, 4 }
  uselistorder i32 %stack_var_-180.0.ph7.reload, { 1, 0, 2 }
  uselistorder i32 %sb.0.ph.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-164, { 2, 3, 0, 4, 1 }
  uselistorder i32* %stack_var_-168, { 2, 3, 4, 0, 5, 1 }
  uselistorder i32* %stack_var_-176.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-180.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-180.0.ph7.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph8.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph10.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph11.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph15.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph16.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph19.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.0.ph21.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph13.be.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_11c78, i32 0, i32 0), { 1, 0 }
  uselistorder i32 ()* @function_10f30, { 1, 0 }
  uselistorder i32 (i32, i32*, i32*)* @function_10ed8, { 1, 0 }
  uselistorder i8* (i8*)* @getenv, { 3, 2, 0, 1, 4 }
  uselistorder i8*** @global_var_22220, { 3, 2, 0, 1 }
  uselistorder i8** @global_var_22238, { 1, 0 }
  uselistorder i32 102, { 1, 0 }
  uselistorder label %dec_label_pc_10ae8, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_10968.outer12.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_109a8, { 1, 0 }
  uselistorder label %dec_label_pc_10968, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer20, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer17, { 1, 0 }
  uselistorder label %dec_label_pc_10968.outer6, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d70:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !156
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !156
  %2 = call i32 @__libc_start_main(i32 67880, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70945 to void ()*), void ()* inttoptr (i32 67880 to void ()*), void ()* %1), !insn.addr !156
  call void @abort(), !insn.addr !157
  unreachable, !insn.addr !157
}

define i32 @function_10d94(i32 %arg1) local_unnamed_addr {
dec_label_pc_10d94:
  ret i32 %arg1, !insn.addr !158
}

define i32 @function_10da0() local_unnamed_addr {
dec_label_pc_10da0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_22210, align 4, !insn.addr !159
  %3 = icmp eq i32 %2, 0, !insn.addr !160
  br i1 %3, label %4, label %dec_label_pc_10db8, !insn.addr !161

; <label>:4:                                      ; preds = %dec_label_pc_10da0
  ret i32 %1, !insn.addr !161

dec_label_pc_10db8:                               ; preds = %dec_label_pc_10da0
  call void @__gmon_start__(), !insn.addr !162
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !162
}

define i32 @function_10dc4() local_unnamed_addr {
dec_label_pc_10dc4:
  ret i32 139804, !insn.addr !163
}

define i32 @function_10de8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10de8:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.12.reg2mem = alloca i1, !insn.addr !164
  %spec.select3.reg2mem = alloca i32, !insn.addr !164
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i32, i32* %0
  %8 = load i32, i32* %0
  %9 = load double, double* %2
  %10 = load double, double* %2
  br i1 %4, label %11, label %dec_label_pc_10df0, !insn.addr !165

; <label>:11:                                     ; preds = %31, %28, %dec_label_pc_10de8
  ret i32 %arg1, !insn.addr !165

dec_label_pc_10df0:                               ; preds = %dec_label_pc_10de8
  br i1 %5, label %12, label %dec_label_pc_10df8, !insn.addr !166

; <label>:12:                                     ; preds = %dec_label_pc_10df0
  %13 = call i32 @unknown_22c0(), !insn.addr !166
  ret i32 %13, !insn.addr !166

dec_label_pc_10df8:                               ; preds = %dec_label_pc_10df0
  %14 = shl i32 %8, %7, !insn.addr !167
  %15 = add i32 %14, %8, !insn.addr !167
  br i1 %3, label %.thread, label %16, !insn.addr !168

.thread:                                          ; preds = %dec_label_pc_10df8
  %not. = icmp ne i1 %4, true
  %cpsr_n.0 = icmp eq i1 %6, %not.
  %spec.select1 = select i1 %cpsr_n.0, i32 %15, i32 0
  store i32 %spec.select1, i32* %spec.select3.reg2mem
  br label %dec_label_pc_10e0c

; <label>:16:                                     ; preds = %dec_label_pc_10df8
  %17 = mul i32 %15, 4194304, !insn.addr !168
  %18 = sub i32 0, %17
  %19 = sub i32 %18, 1
  %20 = and i32 %15, %19, !insn.addr !168
  %21 = icmp slt i32 %20, 0, !insn.addr !168
  %22 = icmp eq i32 %20, 0, !insn.addr !168
  %23 = icmp slt i32 %20, 1
  %spec.select = select i1 %23, i32 0, i32 %15
  store i32 %spec.select, i32* %spec.select3.reg2mem, !insn.addr !169
  store i1 %21, i1* %cpsr_n.12.reg2mem, !insn.addr !169
  br i1 %22, label %24, label %dec_label_pc_10e0c, !insn.addr !169

; <label>:24:                                     ; preds = %16
  %25 = call i32 @unknown_240(i32 ptrtoint (i32* @0 to i32)), !insn.addr !169
  ret i32 %25, !insn.addr !169

dec_label_pc_10e0c:                               ; preds = %.thread, %16
  %cpsr_n.12.reload = load i1, i1* %cpsr_n.12.reg2mem
  %spec.select3.reload = load i32, i32* %spec.select3.reg2mem
  %26 = icmp eq i1 %cpsr_n.12.reload, %3, !insn.addr !170
  br i1 %26, label %28, label %27, !insn.addr !170

; <label>:27:                                     ; preds = %dec_label_pc_10e0c
  call void @__asm_svclt(i32 18288), !insn.addr !170
  br label %28, !insn.addr !170

; <label>:28:                                     ; preds = %dec_label_pc_10e0c, %27
  %29 = call double @__asm_vqrshl.s8(double %10, double %9), !insn.addr !171
  %30 = call double @__asm_vmvn.i32(i32 786432), !insn.addr !172
  br i1 %3, label %11, label %31, !insn.addr !173

; <label>:31:                                     ; preds = %28
  %32 = inttoptr i32 %arg4 to i32*, !insn.addr !173
  store i32 %spec.select3.reload, i32* %32, align 4, !insn.addr !173
  %33 = add i32 %arg4, -4, !insn.addr !173
  %34 = inttoptr i32 %33 to i32*, !insn.addr !173
  br label %11, !insn.addr !173

; uselistorder directives
  uselistorder i32 %15, { 3, 1, 0, 2 }
  uselistorder i32 %8, { 1, 0 }
  uselistorder i1 %4, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 3, 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %28, { 1, 0 }
  uselistorder label %dec_label_pc_10e0c, { 1, 0 }
}

define i32 @function_10e20(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10e20:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !174
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !174
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !174
  br i1 %2, label %dec_label_pc_10e22, label %dec_label_pc_10e2a, !insn.addr !174

dec_label_pc_10e22:                               ; preds = %dec_label_pc_10e20
  %3 = call i32 @function_10dc4(), !insn.addr !175
  %4 = inttoptr i32 %1 to i8*, !insn.addr !176
  store i8 1, i8* %4, align 1, !insn.addr !176
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_10e2a, !insn.addr !176

dec_label_pc_10e2a:                               ; preds = %dec_label_pc_10e20, %dec_label_pc_10e22
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !177

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_10e2a, { 1, 0 }
}

define i32 @function_10e2c(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10e2c:
  ret i32 %arg1, !insn.addr !178
}

define i32 @function_10e32(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10e32:
  %0 = alloca i32
  %1 = alloca i1
  %lr.0.off0.reg2mem = alloca i16, !insn.addr !179
  %r0.0.reg2mem = alloca i32, !insn.addr !179
  %merge.reg2mem = alloca i32, !insn.addr !179
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !179
  br i1 %3, label %7, label %dec_label_pc_10e36, !insn.addr !179

; <label>:7:                                      ; preds = %17, %16, %dec_label_pc_10e32
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !179

dec_label_pc_10e36:                               ; preds = %dec_label_pc_10e32
  %8 = icmp eq i1 %4, %2, !insn.addr !180
  %extract.t = trunc i32 %6 to i16
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !180
  store i16 %extract.t, i16* %lr.0.off0.reg2mem, !insn.addr !180
  br i1 %8, label %16, label %9, !insn.addr !180

; <label>:9:                                      ; preds = %dec_label_pc_10e36
  %10 = add i32 %arg4, -4, !insn.addr !180
  %11 = inttoptr i32 %10 to i32*, !insn.addr !180
  %12 = load i32, i32* %11, align 4, !insn.addr !180
  %13 = add i32 %arg4, -20, !insn.addr !180
  %14 = inttoptr i32 %13 to i32*, !insn.addr !180
  %15 = load i32, i32* %14, align 4, !insn.addr !180
  %extract.t1 = trunc i32 %15 to i16
  store i32 %12, i32* %r0.0.reg2mem, !insn.addr !180
  store i16 %extract.t1, i16* %lr.0.off0.reg2mem, !insn.addr !180
  br label %16, !insn.addr !180

; <label>:16:                                     ; preds = %dec_label_pc_10e36, %9
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !181
  br i1 %4, label %17, label %7, !insn.addr !181

; <label>:17:                                     ; preds = %16
  %lr.0.off0.reload = load i16, i16* %lr.0.off0.reg2mem
  %18 = inttoptr i32 %5 to i16*, !insn.addr !181
  store i16 %lr.0.off0.reload, i16* %18, align 2, !insn.addr !181
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !181
  br label %7, !insn.addr !181

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0 }
  uselistorder i32* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %16, { 1, 0 }
}

define i32 @function_10e3e() local_unnamed_addr {
dec_label_pc_10e3e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @function_10de8(i32 %4, i32 %3, i32 %2, i32 %1), !insn.addr !182
  ret i32 %5, !insn.addr !182

; uselistorder directives
  uselistorder i32* %0, { 3, 2, 1, 0 }
}

define i32 @function_10e40(i32 %arg1) local_unnamed_addr {
dec_label_pc_10e40:
  %0 = alloca i1
  %1 = load i1, i1* %0
  br i1 %1, label %2, label %dec_label_pc_10e48, !insn.addr !183

; <label>:2:                                      ; preds = %dec_label_pc_10e40
  %3 = call i32 @unknown_240(i32 %arg1), !insn.addr !183
  ret i32 %3, !insn.addr !183

dec_label_pc_10e48:                               ; preds = %dec_label_pc_10e40
  ret i32 %arg1, !insn.addr !184

; uselistorder directives
  uselistorder i32 (i32)* @unknown_240, { 1, 0 }
}

define i32 @function_10e4c() local_unnamed_addr {
dec_label_pc_10e4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !185
}

define i32 @function_10e50(i32 %arg1) local_unnamed_addr {
dec_label_pc_10e50:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !186
  %1 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %0, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_11a38, i32 0, i32 0), i8* getelementptr inbounds ([1221 x i8], [1221 x i8]* @global_var_11570, i32 0, i32 0), i32 %arg1), !insn.addr !187
  call void @exit(i32 1), !insn.addr !188
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !188
}

define i32 @function_10e80(i8* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10e80:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !189
  %1 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %0, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11a48, i32 0, i32 0), i32 %arg2, i8* %arg1), !insn.addr !190
  call void @exit(i32 1), !insn.addr !191
  unreachable, !insn.addr !191
}

define i32 @function_10eac(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10eac:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !192
  br i1 %0, label %1, label %dec_label_pc_10eb4, !insn.addr !193

; <label>:1:                                      ; preds = %dec_label_pc_10eac
  ret i32 0, !insn.addr !193

dec_label_pc_10eb4:                               ; preds = %dec_label_pc_10eac
  %2 = call i32 @function_10e50(i32 %arg2), !insn.addr !194
  unreachable, !insn.addr !194

; uselistorder directives
  uselistorder i32 (i32)* @function_10e50, { 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_10ec0(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10ec0:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !195
  br i1 %0, label %1, label %dec_label_pc_10ec8, !insn.addr !196

; <label>:1:                                      ; preds = %dec_label_pc_10ec0
  ret i32 0, !insn.addr !196

dec_label_pc_10ec8:                               ; preds = %dec_label_pc_10ec0
  %2 = inttoptr i32 %arg2 to i8*, !insn.addr !197
  %3 = call i32 @function_10e80(i8* %2, i32 %arg3), !insn.addr !197
  ret i32 %3, !insn.addr !197
}

define i32 @function_10ed8(i32 %arg1, i32* %arg2, i32* %arg3) local_unnamed_addr {
dec_label_pc_10ed8:
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !198
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !198
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !199
  store i32 %1, i32* %arg2, align 4, !insn.addr !200
  %3 = load i8, i8* %2, align 1, !insn.addr !201
  %4 = icmp eq i8 %3, 58, !insn.addr !202
  br i1 %4, label %dec_label_pc_10f10, label %dec_label_pc_10f08, !insn.addr !203

dec_label_pc_10f08:                               ; preds = %dec_label_pc_10ed8
  ret i32 %1, !insn.addr !204

dec_label_pc_10f10:                               ; preds = %dec_label_pc_10ed8
  %5 = ptrtoint i8* %2 to i32, !insn.addr !199
  %6 = add i32 %5, 1, !insn.addr !205
  %7 = inttoptr i32 %6 to i8*, !insn.addr !206
  store i8* %7, i8** %stack_var_-20, align 4, !insn.addr !206
  %8 = call i32 @strtoul(i8* %7, i8** null, i32 0), !insn.addr !207
  store i32 %8, i32* %arg3, align 4, !insn.addr !208
  ret i32 %8, !insn.addr !209

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i8* %2, { 1, 0 }
  uselistorder i8** %stack_var_-20, { 1, 0, 2 }
}

define i32 @function_10f30() local_unnamed_addr {
dec_label_pc_10f30:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !210
  %1 = call i32 @fwrite(i32* bitcast ([470 x i8]* @global_var_11a60 to i32*), i32 1, i32 469, %_IO_FILE* %0), !insn.addr !211
  %2 = load %_IO_FILE*, %_IO_FILE** @global_var_22230, align 4, !insn.addr !212
  %3 = call i32 @_IO_getc(%_IO_FILE* %2), !insn.addr !213
  ret i32 1, !insn.addr !214
}

define i32 @function_10f6c(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10f6c:
  %r6.1.reg2mem = alloca i32, !insn.addr !215
  %r5.1.reg2mem = alloca i32, !insn.addr !215
  %r4.1.in.reg2mem = alloca i32, !insn.addr !215
  %r4.09.reg2mem = alloca i32, !insn.addr !215
  %r5.010.reg2mem = alloca i32, !insn.addr !215
  %r6.011.reg2mem = alloca i32, !insn.addr !215
  %0 = ptrtoint i32* %arg1 to i32
  %1 = urem i32 %arg2, 65536, !insn.addr !216
  %2 = call i32 @function_11380(i32 %0, i32 %1), !insn.addr !217
  %3 = icmp slt i32 %2, 0, !insn.addr !218
  br i1 %3, label %dec_label_pc_11084, label %dec_label_pc_10f90, !insn.addr !219

dec_label_pc_10f90:                               ; preds = %dec_label_pc_10f6c
  %4 = icmp eq i32 %arg4, 0, !insn.addr !220
  br i1 %4, label %dec_label_pc_11060, label %dec_label_pc_10f98, !insn.addr !221

dec_label_pc_10f98:                               ; preds = %dec_label_pc_10f90
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11c44, i32 0, i32 0), i32 %arg2, i32 %2), !insn.addr !222
  br label %dec_label_pc_10fa8, !insn.addr !222

dec_label_pc_10fa8:                               ; preds = %dec_label_pc_11060, %dec_label_pc_10f98
  %6 = icmp eq i32 %arg3, 1, !insn.addr !223
  store i32 %arg2, i32* %r6.011.reg2mem, !insn.addr !224
  store i32 1, i32* %r5.010.reg2mem, !insn.addr !224
  store i32 %arg3, i32* %r4.09.reg2mem, !insn.addr !224
  br i1 %6, label %dec_label_pc_11004, label %dec_label_pc_10fbc.preheader, !insn.addr !224

dec_label_pc_10fbc.preheader:                     ; preds = %dec_label_pc_10fa8, %dec_label_pc_11030
  %r4.09.reload = load i32, i32* %r4.09.reg2mem
  %r5.010.reload = load i32, i32* %r5.010.reg2mem
  %r6.011.reload = load i32, i32* %r6.011.reg2mem
  store i32 %r4.09.reload, i32* %r4.1.in.reg2mem
  store i32 %r5.010.reload, i32* %r5.1.reg2mem
  store i32 %r6.011.reload, i32* %r6.1.reg2mem
  br label %dec_label_pc_10fbc

dec_label_pc_10fbc:                               ; preds = %dec_label_pc_10fbc.preheader, %dec_label_pc_10fe8
  %7 = call i32 @function_11360(i32 %0), !insn.addr !225
  %8 = icmp slt i32 %7, 0, !insn.addr !226
  br i1 %8, label %dec_label_pc_11074, label %dec_label_pc_10fcc, !insn.addr !227

dec_label_pc_10fcc:                               ; preds = %dec_label_pc_10fbc
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %r4.1 = add i32 %r4.1.in.reload, -1
  br i1 %4, label %dec_label_pc_11030, label %dec_label_pc_10fd4, !insn.addr !228

dec_label_pc_10fd4:                               ; preds = %dec_label_pc_10fcc
  %9 = urem i32 %r5.1.reload, 16, !insn.addr !229
  %10 = icmp eq i32 %9, 0, !insn.addr !229
  %11 = add i32 %r6.1.reload, 1, !insn.addr !230
  br i1 %10, label %dec_label_pc_1103c, label %dec_label_pc_10fe0, !insn.addr !231

dec_label_pc_10fe0:                               ; preds = %dec_label_pc_10fd4
  %12 = urem i32 %r5.1.reload, 8, !insn.addr !232
  %13 = icmp eq i32 %12, 0, !insn.addr !232
  br i1 %13, label %dec_label_pc_11050, label %dec_label_pc_10fe8, !insn.addr !233

dec_label_pc_10fe8:                               ; preds = %dec_label_pc_11050, %dec_label_pc_1103c, %dec_label_pc_10fe0
  %14 = add i32 %r5.1.reload, 1, !insn.addr !234
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_11c64, i32 0, i32 0), i32 %7), !insn.addr !235
  %16 = icmp eq i32 %r4.1, 1, !insn.addr !236
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !237
  store i32 %14, i32* %r5.1.reg2mem, !insn.addr !237
  store i32 %11, i32* %r6.1.reg2mem, !insn.addr !237
  br i1 %16, label %dec_label_pc_1100c, label %dec_label_pc_10fbc, !insn.addr !237

dec_label_pc_11004:                               ; preds = %dec_label_pc_10fa8
  br i1 %4, label %dec_label_pc_11018, label %dec_label_pc_1100c, !insn.addr !238

dec_label_pc_1100c:                               ; preds = %dec_label_pc_10fe8, %dec_label_pc_11004
  %17 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11ff0, i32 0, i32 0)), !insn.addr !239
  br label %dec_label_pc_11018, !insn.addr !239

dec_label_pc_11018:                               ; preds = %dec_label_pc_11030, %dec_label_pc_1100c, %dec_label_pc_11004
  %18 = load %_IO_FILE*, %_IO_FILE** @global_var_22234, align 4, !insn.addr !240
  %19 = call i32 @fflush(%_IO_FILE* %18), !insn.addr !241
  ret i32 0, !insn.addr !242

dec_label_pc_11030:                               ; preds = %dec_label_pc_10fcc
  %20 = load %_IO_FILE*, %_IO_FILE** @global_var_22234, align 4, !insn.addr !243
  %21 = call i32 @_IO_putc(i32 %7, %_IO_FILE* %20), !insn.addr !244
  %22 = icmp eq i32 %r4.1, 1, !insn.addr !223
  store i32 %r6.1.reload, i32* %r6.011.reg2mem, !insn.addr !224
  store i32 %r5.1.reload, i32* %r5.010.reg2mem, !insn.addr !224
  store i32 %r4.1, i32* %r4.09.reg2mem, !insn.addr !224
  br i1 %22, label %dec_label_pc_11018, label %dec_label_pc_10fbc.preheader, !insn.addr !224

dec_label_pc_1103c:                               ; preds = %dec_label_pc_10fd4
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11c54, i32 0, i32 0), i32 %11), !insn.addr !245
  br label %dec_label_pc_10fe8, !insn.addr !246

dec_label_pc_11050:                               ; preds = %dec_label_pc_10fe0
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11c60, i32 0, i32 0)), !insn.addr !247
  br label %dec_label_pc_10fe8, !insn.addr !248

dec_label_pc_11060:                               ; preds = %dec_label_pc_10f90
  %25 = load %_IO_FILE*, %_IO_FILE** @global_var_22234, align 4, !insn.addr !249
  %26 = call i32 @_IO_putc(i32 %2, %_IO_FILE* %25), !insn.addr !250
  br label %dec_label_pc_10fa8, !insn.addr !251

dec_label_pc_11074:                               ; preds = %dec_label_pc_10fbc
  %27 = call i32 @function_10e80(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11c38, i32 0, i32 0), i32 133), !insn.addr !252
  unreachable, !insn.addr !252

dec_label_pc_11084:                               ; preds = %dec_label_pc_10f6c
  %28 = call i32 @function_10e80(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11c38, i32 0, i32 0), i32 125), !insn.addr !253
  ret i32 %28, !insn.addr !253

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i32 %r4.1, { 1, 2, 0, 3 }
  uselistorder i32 %r5.1.reload, { 3, 0, 2, 1 }
  uselistorder i32 %r6.1.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0, 2 }
  uselistorder i32* %r6.011.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.010.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.09.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, %_IO_FILE*)* @_IO_putc, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 3, 2, 1, 0, 4 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1100c, { 1, 0 }
  uselistorder label %dec_label_pc_10fbc, { 1, 0 }
  uselistorder label %dec_label_pc_10fbc.preheader, { 1, 0 }
}

define i32 @function_11094(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11094:
  %r5.0.reg2mem = alloca i32, !insn.addr !254
  %0 = ptrtoint i32* %arg1 to i32
  store i32 %arg2, i32* %r5.0.reg2mem, !insn.addr !255
  br label %dec_label_pc_110e8, !insn.addr !255

dec_label_pc_110c4:                               ; preds = %dec_label_pc_11100, %dec_label_pc_11108
  %1 = load %_IO_FILE*, %_IO_FILE** @global_var_22234, align 4, !insn.addr !256
  %2 = call i32 @fflush(%_IO_FILE* %1), !insn.addr !257
  %3 = urem i32 %r5.0.reload, 65536, !insn.addr !258
  %4 = urem i32 %9, 256, !insn.addr !259
  %5 = call i32 @function_11460(i32 %0, i32 %3, i32 %4), !insn.addr !260
  %6 = add i32 %r5.0.reload, 1, !insn.addr !261
  %7 = icmp eq i32 %5, 0, !insn.addr !262
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !263
  br i1 %7, label %dec_label_pc_110e8, label %dec_label_pc_11148, !insn.addr !263

dec_label_pc_110e8:                               ; preds = %dec_label_pc_110c4, %dec_label_pc_11094
  %8 = load %_IO_FILE*, %_IO_FILE** @global_var_22230, align 4, !insn.addr !264
  %9 = call i32 @_IO_getc(%_IO_FILE* %8), !insn.addr !265
  %10 = load i32, i32* @global_var_22240, align 4, !insn.addr !266
  %11 = icmp eq i32 %9, -1, !insn.addr !267
  %12 = icmp eq i32 %10, 0
  br i1 %11, label %dec_label_pc_11118, label %dec_label_pc_11100, !insn.addr !268

dec_label_pc_11100:                               ; preds = %dec_label_pc_110e8
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  br i1 %12, label %dec_label_pc_11108, label %dec_label_pc_110c4, !insn.addr !269

dec_label_pc_11108:                               ; preds = %dec_label_pc_11100
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !270
  %14 = call i32 @fputc(i32 46, %_IO_FILE* %13), !insn.addr !271
  br label %dec_label_pc_110c4, !insn.addr !272

dec_label_pc_11118:                               ; preds = %dec_label_pc_110e8
  br i1 %12, label %dec_label_pc_11120, label %dec_label_pc_11140, !insn.addr !273

dec_label_pc_11120:                               ; preds = %dec_label_pc_11118
  %15 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !274
  %16 = call i32 @fwrite(i32* bitcast ([3 x i8]* @global_var_12040 to i32*), i32 1, i32 2, %_IO_FILE* %15), !insn.addr !275
  br label %dec_label_pc_11140, !insn.addr !275

dec_label_pc_11140:                               ; preds = %dec_label_pc_11118, %dec_label_pc_11120
  ret i32 0, !insn.addr !276

dec_label_pc_11148:                               ; preds = %dec_label_pc_110c4
  %17 = call i32 @function_10e80(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11c6c, i32 0, i32 0), i32 160), !insn.addr !277
  unreachable, !insn.addr !277

; uselistorder directives
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 (i8*, i32)* @function_10e80, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* @global_var_22240, { 2, 3, 4, 5, 6, 7, 0, 8, 1 }
  uselistorder i32 (%_IO_FILE*)* @_IO_getc, { 1, 0, 2 }
  uselistorder %_IO_FILE** @global_var_22230, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder %_IO_FILE** @global_var_22234, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_11140, { 1, 0 }
  uselistorder label %dec_label_pc_110c4, { 1, 0 }
}

define i32 @function_11158(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11158:
  %0 = call i32 @i2c_smbus_write_byte_data(), !insn.addr !278
  %1 = icmp slt i32 %0, 0, !insn.addr !279
  br i1 %1, label %dec_label_pc_11180, label %dec_label_pc_11170, !insn.addr !280

dec_label_pc_11170:                               ; preds = %dec_label_pc_11180, %dec_label_pc_11158
  %2 = call i32 @usleep(i32 5000), !insn.addr !281
  ret i32 %0, !insn.addr !282

dec_label_pc_11180:                               ; preds = %dec_label_pc_11158
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !283
  %4 = call i32* @__errno_location(), !insn.addr !284
  %5 = load i32, i32* %4, align 4, !insn.addr !285
  %6 = call i8* @strerror(i32 %5), !insn.addr !286
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11e54, i32 0, i32 0), i8* %6), !insn.addr !287
  br label %dec_label_pc_11170, !insn.addr !288
}

define i32 @function_111b0(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_111b0:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !289
  %storemerge.reg2mem = alloca i32, !insn.addr !289
  %r0.0.reg2mem = alloca i32, !insn.addr !289
  %1 = ptrtoint i32* %arg4 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %1, 4, !insn.addr !290
  %4 = inttoptr i32 %3 to i32*, !insn.addr !290
  store i32 0, i32* %4, align 4, !insn.addr !290
  %5 = add i32 %1, 8, !insn.addr !291
  %6 = inttoptr i32 %5 to i32*, !insn.addr !291
  store i32 0, i32* %6, align 4, !insn.addr !291
  store i32 0, i32* %arg4, align 4, !insn.addr !292
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !293
  %8 = call i32 (i8*, i32, ...) @open64(i8* %7, i32 2), !insn.addr !293
  %9 = icmp slt i32 %8, 1, !insn.addr !294
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !294
  br i1 %9, label %dec_label_pc_1125c, label %dec_label_pc_111e8, !insn.addr !294

dec_label_pc_111e8:                               ; preds = %dec_label_pc_111b0
  %10 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1797), !insn.addr !295
  %11 = icmp slt i32 %10, 0, !insn.addr !296
  store i32 %10, i32* %r0.0.reg2mem, !insn.addr !297
  br i1 %11, label %dec_label_pc_1125c, label %dec_label_pc_111fc, !insn.addr !297

dec_label_pc_111fc:                               ; preds = %dec_label_pc_111e8
  %12 = and i32 %2, 131072, !insn.addr !298
  %13 = icmp eq i32 %12, 0, !insn.addr !298
  br i1 %13, label %dec_label_pc_1130c, label %dec_label_pc_11208, !insn.addr !299

dec_label_pc_11208:                               ; preds = %dec_label_pc_111fc
  %14 = and i32 %2, 262144, !insn.addr !300
  %15 = icmp eq i32 %14, 0, !insn.addr !300
  br i1 %15, label %dec_label_pc_112e4, label %dec_label_pc_11210, !insn.addr !301

dec_label_pc_11210:                               ; preds = %dec_label_pc_11208
  %16 = and i32 %2, 524288, !insn.addr !302
  %17 = icmp eq i32 %16, 0, !insn.addr !302
  store i32 ptrtoint ([78 x i8]* @global_var_11f04 to i32), i32* %storemerge1.reg2mem, !insn.addr !303
  br i1 %17, label %dec_label_pc_112a4, label %dec_label_pc_11218, !insn.addr !303

dec_label_pc_11218:                               ; preds = %dec_label_pc_11210
  %18 = and i32 %2, 1048576, !insn.addr !304
  %19 = icmp eq i32 %18, 0, !insn.addr !304
  store i32 ptrtoint ([79 x i8]* @global_var_11f54 to i32), i32* %storemerge.reg2mem, !insn.addr !305
  br i1 %19, label %dec_label_pc_1127c, label %dec_label_pc_11220, !insn.addr !305

dec_label_pc_11220:                               ; preds = %dec_label_pc_11218
  %20 = and i32 %2, 2097152, !insn.addr !306
  %21 = icmp eq i32 %20, 0, !insn.addr !306
  store i32 ptrtoint ([78 x i8]* @global_var_11fa4 to i32), i32* %storemerge1.reg2mem, !insn.addr !307
  br i1 %21, label %dec_label_pc_112a4, label %dec_label_pc_11228, !insn.addr !307

dec_label_pc_11228:                               ; preds = %dec_label_pc_11220
  %22 = and i32 %2, 4194304, !insn.addr !308
  %23 = icmp eq i32 %22, 0, !insn.addr !308
  store i32 ptrtoint ([79 x i8]* @global_var_11ff4 to i32), i32* %storemerge.reg2mem, !insn.addr !309
  br i1 %23, label %dec_label_pc_1127c, label %dec_label_pc_11230, !insn.addr !309

dec_label_pc_11230:                               ; preds = %dec_label_pc_11228
  %24 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1795), !insn.addr !310
  %25 = icmp slt i32 %24, 0, !insn.addr !311
  store i32 %24, i32* %r0.0.reg2mem, !insn.addr !312
  br i1 %25, label %dec_label_pc_1125c, label %dec_label_pc_11248, !insn.addr !312

dec_label_pc_11248:                               ; preds = %dec_label_pc_11230
  store i32 %8, i32* %6, align 4, !insn.addr !313
  store i32 %arg2, i32* %4, align 4, !insn.addr !314
  store i32 %arg1, i32* %arg4, align 4, !insn.addr !315
  %26 = add i32 %1, 12, !insn.addr !316
  %27 = inttoptr i32 %26 to i32*, !insn.addr !316
  store i32 %arg3, i32* %27, align 4, !insn.addr !316
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_1125c, !insn.addr !316

dec_label_pc_1125c:                               ; preds = %dec_label_pc_111b0, %dec_label_pc_11248, %dec_label_pc_11230, %dec_label_pc_111e8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !317

dec_label_pc_1127c:                               ; preds = %dec_label_pc_11218, %dec_label_pc_11228
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4
  %29 = inttoptr i32 %storemerge.reload to i32*, !insn.addr !318
  %30 = call i32 @fwrite(i32* %29, i32 1, i32 78, %_IO_FILE* %28), !insn.addr !318
  call void @exit(i32 1), !insn.addr !319
  unreachable, !insn.addr !319

dec_label_pc_112a4:                               ; preds = %dec_label_pc_11210, %dec_label_pc_11220
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %31 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4
  %32 = inttoptr i32 %storemerge1.reload to i32*, !insn.addr !320
  %33 = call i32 @fwrite(i32* %32, i32 1, i32 77, %_IO_FILE* %31), !insn.addr !320
  call void @exit(i32 1), !insn.addr !321
  unreachable, !insn.addr !321

dec_label_pc_112e4:                               ; preds = %dec_label_pc_11208
  %34 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !322
  %35 = call i32 @fwrite(i32* bitcast ([74 x i8]* @global_var_11eb8 to i32*), i32 1, i32 73, %_IO_FILE* %34), !insn.addr !323
  call void @exit(i32 1), !insn.addr !324
  unreachable, !insn.addr !324

dec_label_pc_1130c:                               ; preds = %dec_label_pc_111fc
  %36 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !325
  %37 = call i32 @fwrite(i32* bitcast ([73 x i8]* @global_var_11e6c to i32*), i32 1, i32 72, %_IO_FILE* %36), !insn.addr !326
  call void @exit(i32 1), !insn.addr !327
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !327

; uselistorder directives
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder void (i32)* @exit, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 4194304, { 1, 0 }
  uselistorder i32 4, { 4, 0, 1, 2, 5, 3 }
  uselistorder label %dec_label_pc_112a4, { 1, 0 }
  uselistorder label %dec_label_pc_1127c, { 1, 0 }
  uselistorder label %dec_label_pc_1125c, { 1, 2, 3, 0 }
}

define i32 @function_11334(i32* %arg1) local_unnamed_addr {
dec_label_pc_11334:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 8, !insn.addr !328
  %2 = inttoptr i32 %1 to i32*, !insn.addr !328
  %3 = load i32, i32* %2, align 4, !insn.addr !328
  %4 = call i32 @close(i32 %3), !insn.addr !329
  store i32 0, i32* %arg1, align 4, !insn.addr !330
  store i32 -1, i32* %2, align 4, !insn.addr !331
  %5 = add i32 %0, 12, !insn.addr !332
  %6 = inttoptr i32 %5 to i32*, !insn.addr !332
  store i32 0, i32* %6, align 4, !insn.addr !332
  ret i32 0, !insn.addr !333
}

define i32 @function_11360(i32 %arg1) local_unnamed_addr {
dec_label_pc_11360:
  %0 = add i32 %arg1, 8, !insn.addr !334
  %1 = inttoptr i32 %0 to i32*, !insn.addr !334
  %2 = load i32, i32* %1, align 4, !insn.addr !334
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 4705), !insn.addr !335
  %4 = load i32, i32* %1, align 4, !insn.addr !336
  %5 = call i32 @i2c_smbus_read_byte(i32 %4), !insn.addr !337
  ret i32 %5, !insn.addr !337
}

define i32 @function_11380(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11380:
  %r0.2.reg2mem = alloca i32, !insn.addr !338
  %r5.0.reg2mem = alloca i32, !insn.addr !338
  %0 = add i32 %arg1, 8, !insn.addr !339
  %1 = inttoptr i32 %0 to i32*, !insn.addr !339
  %2 = load i32, i32* %1, align 4, !insn.addr !339
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 4705), !insn.addr !340
  %4 = add i32 %arg1, 12, !insn.addr !341
  %5 = inttoptr i32 %4 to i32*, !insn.addr !341
  %6 = load i32, i32* %5, align 4, !insn.addr !341
  switch i32 %6, label %dec_label_pc_11408 [
    i32 1, label %dec_label_pc_113e8
    i32 2, label %dec_label_pc_113b0
  ]

dec_label_pc_113b0:                               ; preds = %dec_label_pc_11380
  %7 = load i32, i32* %1, align 4, !insn.addr !342
  store i32 %7, i32* %r5.0.reg2mem, !insn.addr !343
  br label %dec_label_pc_113cc, !insn.addr !343

dec_label_pc_113cc:                               ; preds = %dec_label_pc_113fc, %dec_label_pc_113b0
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %8 = icmp slt i32 %r5.0.reload, 0, !insn.addr !344
  %9 = icmp eq i1 %8, false, !insn.addr !345
  store i32 %r5.0.reload, i32* %r0.2.reg2mem, !insn.addr !345
  br i1 %9, label %dec_label_pc_113d8, label %dec_label_pc_113e0, !insn.addr !345

dec_label_pc_113d8:                               ; preds = %dec_label_pc_113cc
  %10 = load i32, i32* %1, align 4, !insn.addr !346
  %11 = call i32 @i2c_smbus_read_byte(i32 %10), !insn.addr !347
  store i32 %11, i32* %r0.2.reg2mem, !insn.addr !347
  br label %dec_label_pc_113e0, !insn.addr !347

dec_label_pc_113e0:                               ; preds = %dec_label_pc_113cc, %dec_label_pc_11408, %dec_label_pc_113d8
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  ret i32 %r0.2.reload, !insn.addr !348

dec_label_pc_113e8:                               ; preds = %dec_label_pc_11380
  %12 = urem i32 %arg2, 256, !insn.addr !349
  %13 = load i32, i32* %1, align 4, !insn.addr !350
  %14 = call i32 @i2c_smbus_write_byte(i32 %13, i32 %12), !insn.addr !351
  %15 = icmp slt i32 %14, 0, !insn.addr !352
  br i1 %15, label %dec_label_pc_11430, label %dec_label_pc_113fc, !insn.addr !353

dec_label_pc_113fc:                               ; preds = %dec_label_pc_11430, %dec_label_pc_113e8
  %16 = call i32 @usleep(i32 5000), !insn.addr !354
  store i32 %14, i32* %r5.0.reg2mem, !insn.addr !355
  br label %dec_label_pc_113cc, !insn.addr !355

dec_label_pc_11408:                               ; preds = %dec_label_pc_11380
  %17 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !356
  %18 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_1205c to i32*), i32 1, i32 25, %_IO_FILE* %17), !insn.addr !357
  store i32 -1, i32* %r0.2.reg2mem, !insn.addr !358
  br label %dec_label_pc_113e0, !insn.addr !358

dec_label_pc_11430:                               ; preds = %dec_label_pc_113e8
  %19 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !359
  %20 = call i32* @__errno_location(), !insn.addr !360
  %21 = load i32, i32* %20, align 4, !insn.addr !361
  %22 = call i8* @strerror(i32 %21), !insn.addr !362
  %23 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %19, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12044, i32 0, i32 0), i8* %22), !insn.addr !363
  br label %dec_label_pc_113fc, !insn.addr !364

; uselistorder directives
  uselistorder i32* %1, { 2, 1, 0, 3 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.2.reg2mem, { 1, 0, 3, 2 }
  uselistorder i32 (i32)* @i2c_smbus_read_byte, { 1, 0, 2 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 0, 3, 2, 4 }
  uselistorder label %dec_label_pc_113e0, { 1, 2, 0 }
}

define i32 @function_11460(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_11460:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !365
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = add i32 %arg1, 12, !insn.addr !365
  %5 = inttoptr i32 %4 to i32*, !insn.addr !365
  %6 = load i32, i32* %5, align 4, !insn.addr !365
  switch i32 %6, label %dec_label_pc_114f8 [
    i32 1, label %dec_label_pc_114e0
    i32 2, label %dec_label_pc_11480
  ]

dec_label_pc_11480:                               ; preds = %dec_label_pc_11460
  %7 = urem i32 %arg2, 256, !insn.addr !366
  %8 = add i32 %arg1, 8, !insn.addr !367
  %9 = inttoptr i32 %8 to i32*, !insn.addr !367
  %10 = load i32, i32* %9, align 4, !insn.addr !367
  %11 = mul i32 %arg3, 256, !insn.addr !368
  %12 = or i32 %11, %7, !insn.addr !368
  %13 = udiv i32 %arg2, 256, !insn.addr !369
  %14 = call i32 @i2c_smbus_write_word_data(i32 %10, i32 %13, i32 %12, i32 %7, i32 %2, i32 %1, i32 %3), !insn.addr !370
  %15 = icmp slt i32 %14, 0, !insn.addr !371
  br i1 %15, label %dec_label_pc_114b0, label %dec_label_pc_1149c, !insn.addr !372

dec_label_pc_1149c:                               ; preds = %dec_label_pc_114b0, %dec_label_pc_11480
  %16 = call i32 @usleep(i32 5000), !insn.addr !373
  store i32 %14, i32* %r0.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_114a8, !insn.addr !374

dec_label_pc_114a8:                               ; preds = %dec_label_pc_114f8, %dec_label_pc_114e0, %dec_label_pc_1149c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !375

dec_label_pc_114b0:                               ; preds = %dec_label_pc_11480
  %17 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !376
  %18 = call i32* @__errno_location(), !insn.addr !377
  %19 = load i32, i32* %18, align 4, !insn.addr !378
  %20 = call i8* @strerror(i32 %19), !insn.addr !379
  %21 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %17, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12078, i32 0, i32 0), i8* %20), !insn.addr !380
  br label %dec_label_pc_1149c, !insn.addr !381

dec_label_pc_114e0:                               ; preds = %dec_label_pc_11460
  %22 = add i32 %arg1, 8, !insn.addr !382
  %23 = inttoptr i32 %22 to i32*, !insn.addr !382
  %24 = load i32, i32* %23, align 4, !insn.addr !382
  store i32 %24, i32* %r0.0.reg2mem, !insn.addr !383
  br label %dec_label_pc_114a8, !insn.addr !383

dec_label_pc_114f8:                               ; preds = %dec_label_pc_11460
  %25 = load %_IO_FILE*, %_IO_FILE** @global_var_22228, align 4, !insn.addr !384
  %26 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_1205c to i32*), i32 1, i32 25, %_IO_FILE* %25), !insn.addr !385
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_114a8, !insn.addr !386

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 -1, { 0, 1, 7, 2, 5, 4, 6, 3 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 6, 5, 4, 7, 3, 2, 1, 8, 0, 9 }
  uselistorder i8* (i32)* @strerror, { 2, 1, 0, 3 }
  uselistorder %_IO_FILE** @global_var_22228, { 19, 18, 17, 16, 15, 14, 0, 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2 }
  uselistorder i32 (i32)* @usleep, { 2, 1, 0, 3 }
  uselistorder i32 8, { 2, 3, 4, 5, 6, 7, 0, 1 }
  uselistorder i32 256, { 1, 0, 2, 3, 4 }
  uselistorder i32 1, { 62, 56, 12, 7, 63, 57, 14, 13, 64, 65, 66, 67, 68, 69, 70, 71, 60, 17, 16, 15, 6, 72, 85, 18, 89, 86, 87, 88, 23, 55, 25, 24, 22, 21, 20, 19, 53, 73, 90, 61, 74, 75, 5, 10, 4, 28, 27, 26, 9, 3, 29, 2, 54, 52, 31, 30, 11, 8, 1, 0, 80, 76, 91, 77, 92, 78, 59, 58, 93, 94, 34, 95, 96, 97, 84, 83, 82, 81, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 33, 32, 79 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @function_11520(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11520:
  %0 = call i32 @function_107c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !387
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_220a0 to i32), i32 89256), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !388

; uselistorder directives
  uselistorder i32 0, { 19, 20, 21, 81, 22, 23, 82, 83, 8, 69, 68, 0, 84, 85, 86, 87, 88, 89, 90, 91, 72, 71, 70, 24, 25, 92, 26, 27, 9, 93, 94, 28, 29, 32, 33, 30, 31, 10, 14, 15, 34, 35, 95, 96, 97, 36, 37, 98, 99, 73, 74, 11, 100, 12, 101, 38, 39, 40, 41, 42, 43, 78, 17, 79, 80, 7, 16, 118, 62, 63, 60, 61, 50, 51, 52, 53, 54, 55, 102, 103, 44, 45, 104, 105, 46, 47, 48, 49, 13, 106, 107, 108, 109, 110, 114, 111, 112, 56, 57, 58, 59, 18, 113, 115, 116, 117, 64, 65, 1, 2, 3, 4, 5, 6, 75, 66, 67, 76, 77 }
  uselistorder i32 2, { 4, 1, 2, 5, 6, 3, 0 }
}

define i32 @function_11564(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11564:
  ret i32 %arg1, !insn.addr !389
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

declare double @__asm_vmvn.i32(i32) local_unnamed_addr

!0 = !{i64 67528}
!1 = !{i64 67532}
!2 = !{i64 67564}
!3 = !{i64 67576}
!4 = !{i64 67588}
!5 = !{i64 67600}
!6 = !{i64 67612}
!7 = !{i64 67624}
!8 = !{i64 67636}
!9 = !{i64 67648}
!10 = !{i64 67660}
!11 = !{i64 67672}
!12 = !{i64 67684}
!13 = !{i64 67696}
!14 = !{i64 67708}
!15 = !{i64 67720}
!16 = !{i64 67732}
!17 = !{i64 67744}
!18 = !{i64 67756}
!19 = !{i64 67768}
!20 = !{i64 67780}
!21 = !{i64 67792}
!22 = !{i64 67804}
!23 = !{i64 67816}
!24 = !{i64 67828}
!25 = !{i64 67840}
!26 = !{i64 67852}
!27 = !{i64 67864}
!28 = !{i64 67876}
!29 = !{i64 67880}
!30 = !{i64 67932}
!31 = !{i64 67960}
!32 = !{i64 67940}
!33 = !{i64 67980}
!34 = !{i64 68008}
!35 = !{i64 68012}
!36 = !{i64 68016}
!37 = !{i64 68028}
!38 = !{i64 68060}
!39 = !{i64 68064}
!40 = !{i64 68068}
!41 = !{i64 68072}
!42 = !{i64 68076}
!43 = !{i64 68080}
!44 = !{i64 68084}
!45 = !{i64 68088}
!46 = !{i64 68092}
!47 = !{i64 68096}
!48 = !{i64 68100}
!49 = !{i64 68104}
!50 = !{i64 68116}
!51 = !{i64 68120}
!52 = !{i64 68124}
!53 = !{i64 68128}
!54 = !{i64 68144}
!55 = !{i64 68152}
!56 = !{i64 68156}
!57 = !{i64 68160}
!58 = !{i64 68164}
!59 = !{i64 68168}
!60 = !{i64 68176}
!61 = !{i64 68192}
!62 = !{i64 68196}
!63 = !{i64 68208}
!64 = !{i64 68212}
!65 = !{i64 68244}
!66 = !{i64 68256}
!67 = !{i64 68272}
!68 = !{i64 68276}
!69 = !{i64 68292}
!70 = !{i64 68180}
!71 = !{i64 68304}
!72 = !{i64 68308}
!73 = !{i64 68316}
!74 = !{i64 68324}
!75 = !{i64 68328}
!76 = !{i64 68332}
!77 = !{i64 68352}
!78 = !{i64 68356}
!79 = !{i64 68360}
!80 = !{i64 68380}
!81 = !{i64 68384}
!82 = !{i64 68400}
!83 = !{i64 68404}
!84 = !{i64 68408}
!85 = !{i64 68412}
!86 = !{i64 68416}
!87 = !{i64 68424}
!88 = !{i64 68432}
!89 = !{i64 68444}
!90 = !{i64 68464}
!91 = !{i64 68476}
!92 = !{i64 68480}
!93 = !{i64 68484}
!94 = !{i64 68488}
!95 = !{i64 68492}
!96 = !{i64 68496}
!97 = !{i64 68500}
!98 = !{i64 68504}
!99 = !{i64 68508}
!100 = !{i64 68524}
!101 = !{i64 68532}
!102 = !{i64 68536}
!103 = !{i64 68540}
!104 = !{i64 68552}
!105 = !{i64 68556}
!106 = !{i64 68560}
!107 = !{i64 68580}
!108 = !{i64 68596}
!109 = !{i64 68600}
!110 = !{i64 68604}
!111 = !{i64 68608}
!112 = !{i64 68632}
!113 = !{i64 68636}
!114 = !{i64 68640}
!115 = !{i64 68644}
!116 = !{i64 68648}
!117 = !{i64 68656}
!118 = !{i64 68672}
!119 = !{i64 68692}
!120 = !{i64 68696}
!121 = !{i64 68704}
!122 = !{i64 68708}
!123 = !{i64 68712}
!124 = !{i64 68732}
!125 = !{i64 68736}
!126 = !{i64 68740}
!127 = !{i64 68744}
!128 = !{i64 68748}
!129 = !{i64 68760}
!130 = !{i64 68764}
!131 = !{i64 68768}
!132 = !{i64 68772}
!133 = !{i64 68788}
!134 = !{i64 68796}
!135 = !{i64 68804}
!136 = !{i64 68808}
!137 = !{i64 68812}
!138 = !{i64 68816}
!139 = !{i64 68836}
!140 = !{i64 68840}
!141 = !{i64 68844}
!142 = !{i64 68848}
!143 = !{i64 68868}
!144 = !{i64 68872}
!145 = !{i64 68876}
!146 = !{i64 68880}
!147 = !{i64 68884}
!148 = !{i64 68888}
!149 = !{i64 68892}
!150 = !{i64 68908}
!151 = !{i64 68916}
!152 = !{i64 68924}
!153 = !{i64 68940}
!154 = !{i64 68956}
!155 = !{i64 68972}
!156 = !{i64 69004}
!157 = !{i64 69008}
!158 = !{i64 69014}
!159 = !{i64 69036}
!160 = !{i64 69040}
!161 = !{i64 69044}
!162 = !{i64 69048}
!163 = !{i64 69088}
!164 = !{i64 69096}
!165 = !{i64 69100}
!166 = !{i64 69104}
!167 = !{i64 69112}
!168 = !{i64 69116}
!169 = !{i64 69124}
!170 = !{i64 69136}
!171 = !{i64 69140}
!172 = !{i64 69144}
!173 = !{i64 69148}
!174 = !{i64 69152}
!175 = !{i64 69154}
!176 = !{i64 69160}
!177 = !{i64 69162}
!178 = !{i64 69164}
!179 = !{i64 69170}
!180 = !{i64 69174}
!181 = !{i64 69178}
!182 = !{i64 69182}
!183 = !{i64 69184}
!184 = !{i64 69192}
!185 = !{i64 69198}
!186 = !{i64 69232}
!187 = !{i64 69236}
!188 = !{i64 69244}
!189 = !{i64 69276}
!190 = !{i64 69280}
!191 = !{i64 69288}
!192 = !{i64 69292}
!193 = !{i64 69296}
!194 = !{i64 69308}
!195 = !{i64 69312}
!196 = !{i64 69316}
!197 = !{i64 69332}
!198 = !{i64 69360}
!199 = !{i64 69364}
!200 = !{i64 69368}
!201 = !{i64 69372}
!202 = !{i64 69376}
!203 = !{i64 69380}
!204 = !{i64 69388}
!205 = !{i64 69396}
!206 = !{i64 69404}
!207 = !{i64 69408}
!208 = !{i64 69412}
!209 = !{i64 69420}
!210 = !{i64 69448}
!211 = !{i64 69456}
!212 = !{i64 69468}
!213 = !{i64 69472}
!214 = !{i64 69480}
!215 = !{i64 69484}
!216 = !{i64 69492}
!217 = !{i64 69508}
!218 = !{i64 69512}
!219 = !{i64 69516}
!220 = !{i64 69520}
!221 = !{i64 69524}
!222 = !{i64 69540}
!223 = !{i64 69556}
!224 = !{i64 69560}
!225 = !{i64 69568}
!226 = !{i64 69572}
!227 = !{i64 69576}
!228 = !{i64 69584}
!229 = !{i64 69588}
!230 = !{i64 69592}
!231 = !{i64 69596}
!232 = !{i64 69600}
!233 = !{i64 69604}
!234 = !{i64 69620}
!235 = !{i64 69624}
!236 = !{i64 69628}
!237 = !{i64 69632}
!238 = !{i64 69640}
!239 = !{i64 69652}
!240 = !{i64 69664}
!241 = !{i64 69668}
!242 = !{i64 69676}
!243 = !{i64 69680}
!244 = !{i64 69684}
!245 = !{i64 69704}
!246 = !{i64 69708}
!247 = !{i64 69720}
!248 = !{i64 69724}
!249 = !{i64 69736}
!250 = !{i64 69740}
!251 = !{i64 69744}
!252 = !{i64 69760}
!253 = !{i64 69776}
!254 = !{i64 69780}
!255 = !{i64 69824}
!256 = !{i64 69828}
!257 = !{i64 69832}
!258 = !{i64 69836}
!259 = !{i64 69840}
!260 = !{i64 69848}
!261 = !{i64 69852}
!262 = !{i64 69856}
!263 = !{i64 69860}
!264 = !{i64 69864}
!265 = !{i64 69868}
!266 = !{i64 69872}
!267 = !{i64 69876}
!268 = !{i64 69884}
!269 = !{i64 69892}
!270 = !{i64 69896}
!271 = !{i64 69904}
!272 = !{i64 69908}
!273 = !{i64 69916}
!274 = !{i64 69936}
!275 = !{i64 69948}
!276 = !{i64 69956}
!277 = !{i64 69972}
!278 = !{i64 69988}
!279 = !{i64 69992}
!280 = !{i64 69996}
!281 = !{i64 70004}
!282 = !{i64 70012}
!283 = !{i64 70024}
!284 = !{i64 70028}
!285 = !{i64 70032}
!286 = !{i64 70036}
!287 = !{i64 70056}
!288 = !{i64 70060}
!289 = !{i64 70064}
!290 = !{i64 70080}
!291 = !{i64 70088}
!292 = !{i64 70096}
!293 = !{i64 70108}
!294 = !{i64 70116}
!295 = !{i64 70128}
!296 = !{i64 70132}
!297 = !{i64 70136}
!298 = !{i64 70144}
!299 = !{i64 70148}
!300 = !{i64 70152}
!301 = !{i64 70156}
!302 = !{i64 70160}
!303 = !{i64 70164}
!304 = !{i64 70168}
!305 = !{i64 70172}
!306 = !{i64 70176}
!307 = !{i64 70180}
!308 = !{i64 70184}
!309 = !{i64 70188}
!310 = !{i64 70204}
!311 = !{i64 70208}
!312 = !{i64 70212}
!313 = !{i64 70220}
!314 = !{i64 70224}
!315 = !{i64 70228}
!316 = !{i64 70232}
!317 = !{i64 70240}
!318 = !{i64 70280}
!319 = !{i64 70288}
!320 = !{i64 70320}
!321 = !{i64 70328}
!322 = !{i64 70388}
!323 = !{i64 70400}
!324 = !{i64 70408}
!325 = !{i64 70428}
!326 = !{i64 70440}
!327 = !{i64 70448}
!328 = !{i64 70460}
!329 = !{i64 70464}
!330 = !{i64 70476}
!331 = !{i64 70480}
!332 = !{i64 70488}
!333 = !{i64 70492}
!334 = !{i64 70508}
!335 = !{i64 70512}
!336 = !{i64 70516}
!337 = !{i64 70524}
!338 = !{i64 70528}
!339 = !{i64 70544}
!340 = !{i64 70552}
!341 = !{i64 70556}
!342 = !{i64 70580}
!343 = !{i64 70600}
!344 = !{i64 70604}
!345 = !{i64 70612}
!346 = !{i64 70616}
!347 = !{i64 70620}
!348 = !{i64 70628}
!349 = !{i64 70632}
!350 = !{i64 70636}
!351 = !{i64 70640}
!352 = !{i64 70644}
!353 = !{i64 70648}
!354 = !{i64 70656}
!355 = !{i64 70660}
!356 = !{i64 70680}
!357 = !{i64 70692}
!358 = !{i64 70700}
!359 = !{i64 70712}
!360 = !{i64 70716}
!361 = !{i64 70720}
!362 = !{i64 70724}
!363 = !{i64 70744}
!364 = !{i64 70748}
!365 = !{i64 70752}
!366 = !{i64 70784}
!367 = !{i64 70788}
!368 = !{i64 70792}
!369 = !{i64 70796}
!370 = !{i64 70800}
!371 = !{i64 70804}
!372 = !{i64 70808}
!373 = !{i64 70816}
!374 = !{i64 70820}
!375 = !{i64 70828}
!376 = !{i64 70840}
!377 = !{i64 70844}
!378 = !{i64 70848}
!379 = !{i64 70852}
!380 = !{i64 70872}
!381 = !{i64 70876}
!382 = !{i64 70884}
!383 = !{i64 70900}
!384 = !{i64 70920}
!385 = !{i64 70932}
!386 = !{i64 70940}
!387 = !{i64 70962}
!388 = !{i64 70996}
!389 = !{i64 71016}
