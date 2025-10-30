source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%__dirstream = type { i32 }
%dirent64 = type { i32, i32, i16, i8, [256 x i8] }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@2 = external local_unnamed_addr global i32
@global_var_23238 = local_unnamed_addr global i32 68356
@global_var_2323c = local_unnamed_addr global i32 68356
@global_var_23240 = local_unnamed_addr global i32 68356
@global_var_23244 = local_unnamed_addr global i32 68356
@global_var_23248 = local_unnamed_addr global i32 68356
@global_var_2324c = local_unnamed_addr global i32 68356
@global_var_23250 = local_unnamed_addr global i32 68356
@global_var_23254 = local_unnamed_addr global i32 68356
@global_var_23258 = local_unnamed_addr global i32 68356
@global_var_2325c = local_unnamed_addr global i32 68356
@global_var_23260 = local_unnamed_addr global i32 68356
@global_var_23264 = local_unnamed_addr global i32 68356
@global_var_23268 = local_unnamed_addr global i32 68356
@global_var_2326c = local_unnamed_addr global i32 68356
@global_var_23270 = local_unnamed_addr global i32 68356
@global_var_23274 = local_unnamed_addr global i32 68356
@global_var_23278 = local_unnamed_addr global i32 68356
@global_var_2327c = local_unnamed_addr global i32 68356
@global_var_23280 = local_unnamed_addr global i32 68356
@global_var_23284 = local_unnamed_addr global i32 68356
@global_var_23288 = local_unnamed_addr global i32 68356
@global_var_2328c = local_unnamed_addr global i32 68356
@global_var_23290 = local_unnamed_addr global i32 68356
@global_var_23294 = local_unnamed_addr global i32 68356
@global_var_23298 = local_unnamed_addr global i32 68356
@global_var_2329c = local_unnamed_addr global i32 68356
@global_var_232a0 = local_unnamed_addr global i32 68356
@global_var_232a4 = local_unnamed_addr global i32 68356
@global_var_232a8 = local_unnamed_addr global i32 68356
@global_var_232ac = local_unnamed_addr global i32 68356
@global_var_232b0 = local_unnamed_addr global i32 68356
@global_var_232b4 = local_unnamed_addr global i32 68356
@global_var_232b8 = local_unnamed_addr global i32 68356
@global_var_232bc = local_unnamed_addr global i32 68356
@global_var_232c0 = local_unnamed_addr global i32 68356
@global_var_232c4 = local_unnamed_addr global i32 68356
@global_var_232c8 = local_unnamed_addr global i32 68356
@global_var_232cc = local_unnamed_addr global i32 68356
@global_var_232d0 = local_unnamed_addr global i32 68356
@global_var_232d4 = local_unnamed_addr global i32 68356
@global_var_232d8 = local_unnamed_addr global i32 68356
@global_var_232dc = local_unnamed_addr global i32 68356
@global_var_232e0 = local_unnamed_addr global i32 68356
@global_var_232e4 = local_unnamed_addr global i32 68356
@global_var_232e8 = local_unnamed_addr global i32 68356
@global_var_232ec = local_unnamed_addr global i32 68356
@global_var_232f0 = local_unnamed_addr global i32 68356
@global_var_129d0 = constant [33 x i8] c"Error: Data value out of range!\0A\00"
@global_var_128c0 = constant [33 x i8] c"Error: Unsupported option \22%s\22!\0A\00"
@global_var_128e4 = constant [4 x i8] c"4.1\00"
@global_var_128e8 = constant [19 x i8] c"i2cset version %s\0A\00"
@global_var_128fc = constant [30 x i8] c"Error: Data address invalid!\0A\00"
@global_var_12a18 = constant [38 x i8] c"Error: Data value mask out of range!\0A\00"
@global_var_1291c = constant [27 x i8] c"Error: Invalid mode '%s'!\0A\00"
@global_var_129b4 = constant [28 x i8] c"Error: Data value invalid!\0A\00"
@global_var_129f4 = constant [33 x i8] c"Error: Data value mask invalid!\0A\00"
@global_var_12938 = constant [48 x i8] c"Error: PEC not supported for I2C block writes!\0A\00"
@global_var_12968 = constant [45 x i8] c"Error: Mask not supported for block writes!\0A\00"
@global_var_12998 = constant [28 x i8] c"Error: Too many arguments!\0A\00"
@global_var_12d88 = local_unnamed_addr constant [32 x i8] c"Error: Could not clear PEC: %s\0A\00"
@global_var_12b04 = local_unnamed_addr constant [47 x i8] c"Warning: Adapter does not seem to support PEC\0A\00"
@global_var_12cf0 = constant [75 x i8] c"Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\0A\00"
@global_var_12d3c = constant [17 x i8] c"Continue? [Y/n] \00"
@global_var_12af4 = constant [16 x i8] c"I2C block write\00"
@global_var_12a8c = constant [44 x i8] c"Error: Adapter does not have %s capability\0A\00"
@global_var_12ae0 = constant [18 x i8] c"SMBus block write\00"
@global_var_12acc = constant [17 x i8] c"SMBus write word\00"
@global_var_12b34 = constant [76 x i8] c"WARNING! This program can confuse your I2C bus, cause data loss and worse!\0A\00"
@global_var_12b80 = constant [120 x i8] c"DANGEROUS! Writing to a serial EEPROM on a memory DIMM\0Amay render your memory USELESS and make your system UNBOOTABLE!\0A\00"
@global_var_12bf8 = constant [75 x i8] c"I will write to device file %s, chip address 0x%02x, data address\0A0x%02x, \00"
@global_var_12ad8 = constant [5 x i8] c"word\00"
@global_var_12ac4 = constant [5 x i8] c"byte\00"
@global_var_128ac = constant [10 x i8] c" (masked)\00"
@global_var_128e0 = constant i32 0
@global_var_12c6c = constant [25 x i8] c"data 0x%02x%s, mode %s.\0A\00"
@global_var_12c88 = local_unnamed_addr constant [23 x i8] c"PEC checking enabled.\0A\00"
@global_var_128bc = constant [4 x i8] c"Y/n\00"
@global_var_128b8 = constant [4 x i8] c"y/N\00"
@global_var_12ca0 = constant [16 x i8] c"Continue? [%s] \00"
@global_var_12cb0 = constant [27 x i8] c"Aborting on user request.\0A\00"
@global_var_12c50 = constant [5 x i8] c"data\00"
@global_var_12c58 = constant [8 x i8] c" 0x%02x\00"
@global_var_12c44 = constant [10 x i8] c"no data.\0A\00"
@global_var_12dc4 = constant [58 x i8] c"Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\0A\00"
@global_var_12e00 = constant [40 x i8] c"Value 0x%0*x written, readback matched\0A\00"
@global_var_12da8 = constant [26 x i8] c"Warning - readback failed\00"
@global_var_12d70 = constant [21 x i8] c"Error: Write failed\0A\00"
@global_var_12d50 = local_unnamed_addr constant [30 x i8] c"Error: Could not set PEC: %s\0A\00"
@global_var_12ccc = constant [33 x i8] c"Error: Failed to read old value\0A\00"
@global_var_12ab8 = constant [17 x i8] c"SMBus write byte\00"
@global_var_12a7c = constant [16 x i8] c"SMBus send byte\00"
@global_var_12a40 = constant [59 x i8] c"Error: Could not get the adapter functionality matrix: %s\0A\00"
@global_var_12894 = local_unnamed_addr constant [12 x i8] c"smbus block\00"
@global_var_128a0 = constant [10 x i8] c"i2c block\00"
@global_var_12c60 = constant [12 x i8] c", mode %s.\0A\00"
@global_var_11b34 = local_unnamed_addr constant i32 71428
@global_var_11b38 = local_unnamed_addr constant i32 200
@global_var_2313c = global i32 1
@global_var_2322c = local_unnamed_addr global i32* @global_var_2313c
@global_var_232f4 = local_unnamed_addr global i32 0
@global_var_11b5c = local_unnamed_addr constant i32 144131
@global_var_23303 = local_unnamed_addr global i32 0
@global_var_12720 = constant [369 x i8] c"Usage: i2cset [-f] [-y] [-m MASK] [-r] [-a] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\0A  I2CBUS is an integer or an I2C bus name\0A  ADDRESS is an integer (0x03 - 0x77, or 0x00 - 0x7f if -a is given)\0A  MODE is one of:\0A    c (byte, no value)\0A    b (byte data, default)\0A    w (word data)\0A    i (I2C block data)\0A    s (SMBus block data)\0A    Append p for SMBus PEC\0A\00"
@global_var_12e50 = constant [38 x i8] c"Error: Chip address is not a number!\0A\00"
@global_var_12e78 = constant [53 x i8] c"Error: Chip address out of range (0x%02lx-0x%02lx)!\0A\00"
@global_var_12eb0 = constant [12 x i8] c"/dev/i2c/%d\00"
@global_var_12f08 = local_unnamed_addr constant [37 x i8] c"Error: Could not open file `%s': %s\0A\00"
@global_var_12f30 = local_unnamed_addr constant [14 x i8] c"Run as root?\0A\00"
@global_var_12ebc = constant [12 x i8] c"/dev/i2c-%d\00"
@global_var_12ec8 = local_unnamed_addr constant [63 x i8] c"Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\0A\00"
@global_var_12f40 = constant [14 x i8] c"/proc/bus/i2c\00"
@global_var_12f50 = constant [7 x i8] c"i2c-%d\00"
@global_var_12f58 = constant [13 x i8] c"/proc/mounts\00"
@global_var_12f80 = constant [6 x i8] c"sysfs\00"
@global_var_12f68 = constant [24 x i8] c"%*[^ ] %[^ ] %[^ ] %*s\0A\00"
@global_var_13004 = local_unnamed_addr constant [15 x i8] c"/class/i2c-dev\00"
@global_var_13008 = local_unnamed_addr constant [11 x i8] c"ss/i2c-dev\00"
@global_var_1300c = local_unnamed_addr constant [7 x i8] c"2c-dev\00"
@global_var_13010 = local_unnamed_addr constant [3 x i8] c"ev\00"
@global_var_12f88 = constant [11 x i8] c"%s/%s/name\00"
@global_var_12ffc = constant [5 x i8] c"ISA \00"
@global_var_130d0 = constant [6 x i8] c"dummy\00"
@global_var_130d8 = constant [10 x i8] c"Dummy bus\00"
@global_var_130e4 = constant [4 x i8] c"isa\00"
@global_var_130e8 = constant [8 x i8] c"ISA bus\00"
@global_var_130f0 = constant [4 x i8] c"i2c\00"
@global_var_130f4 = constant [12 x i8] c"I2C adapter\00"
@global_var_13100 = constant [6 x i8] c"smbus\00"
@global_var_13108 = constant [14 x i8] c"SMBus adapter\00"
@global_var_13118 = constant [8 x i8] c"unknown\00"
@global_var_13120 = constant [4 x i8] c"N/A\00"
@global_var_12e28 = constant [10 x i8*] [i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_130d0, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_130d8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_130e4, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_130e8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_130f0, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_130f4, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_13100, i32 0, i32 0), i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_13108, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_13118, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13120, i32 0, i32 0)]
@global_var_12f94 = constant [20 x i8] c"%s: path truncated\0A\00"
@global_var_12fa8 = constant [18 x i8] c"%s/%s/device/name\00"
@global_var_12fbc = constant [13 x i8] c"%s/%s/device\00"
@global_var_12fcc = constant [5 x i8] c"i2c-\00"
@global_var_12fd4 = constant [21 x i8] c"%s/%s/device/%s/name\00"
@global_var_12fec = constant [16 x i8] c"%s: read error\0A\00"
@global_var_1302c = constant [36 x i8] c"Error: I2C bus name is not unique!\0A\00"
@global_var_13050 = constant [52 x i8] c"Error: I2C bus name doesn't match any bus present!\0A\00"
@global_var_13084 = constant [30 x i8] c"Error: I2C bus out of range!\0A\00"
@global_var_13014 = constant [23 x i8] c"Error: Out of memory!\0A\00"
@global_var_130a4 = constant [44 x i8] c"Error: Could not set address to 0x%02x: %s\0A\00"
@global_var_12708 = local_unnamed_addr constant i32 68176
@global_var_10a50 = local_unnamed_addr global i32 144032
@global_var_12710 = local_unnamed_addr constant [3 x i8] c"pG\00"
@global_var_23134 = global i32 72589
@3 = external global i32
@global_var_23300 = global %_IO_FILE* null
@global_var_11b10 = local_unnamed_addr constant void ()* inttoptr (i32 68940 to void ()*)
@global_var_11b14 = local_unnamed_addr constant void ()* inttoptr (i32 75473 to void ()*)
@4 = internal constant [2 x i8] c"r\00"
@5 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @4, i32 0, i32 0)
@global_var_13012 = local_unnamed_addr constant i8 0
@global_var_23308 = local_unnamed_addr global %_IO_FILE* null
@global_var_13114 = constant [2 x i8] c"r\00"

declare i32 @unknown_240(i32) local_unnamed_addr

declare i32 @unknown_243() local_unnamed_addr

declare i32 @unknown_22c0() local_unnamed_addr

define i32 @function_10af8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10af8:
  %0 = call i32 @function_11b18(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_10b18(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_10b18:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_10b24(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b24:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10b30(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10b30:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10b3c(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b3c:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10b48(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b48:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10b54(i32* %ptr) local_unnamed_addr {
dec_label_pc_10b54:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i8* @function_10b60(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b60:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10b6c(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10b6c:
  %0 = call i32 @i2c_smbus_write_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32* @function_10b78(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10b78:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_10b84(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b84:
  %0 = call i32 @strcasecmp(i8* %s1, i8* %s2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10b90(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10b90:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10b9c(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10b9c:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10ba8(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10ba8:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10bb4(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bb4:
  %0 = call i32 @i2c_smbus_write_byte(i32 %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define %__dirstream* @function_10bc0(i8* %name) local_unnamed_addr {
dec_label_pc_10bc0:
  %0 = call %__dirstream* @opendir(i8* %name), !insn.addr !16
  ret %__dirstream* %0, !insn.addr !16
}

define i32 @function_10bcc(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_10bcc:
  %0 = call i32 (i8*, i32, ...) @open64(i8* %file, i32 %oflag), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_10bd8(i8* %s) local_unnamed_addr {
dec_label_pc_10bd8:
  %0 = call i32 @puts(i8* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32* @function_10be4(i32 %size) local_unnamed_addr {
dec_label_pc_10be4:
  %0 = call i32* @malloc(i32 %size), !insn.addr !19
  ret i32* %0, !insn.addr !19
}

define i32 @function_10bf0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10bf0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i8* @function_10bfc(i32 %errnum) local_unnamed_addr {
dec_label_pc_10bfc:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !21
  ret i8* %0, !insn.addr !21
}

define void @function_10c08() local_unnamed_addr {
dec_label_pc_10c08:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_10c14(i32 %status) local_unnamed_addr {
dec_label_pc_10c14:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_10c20(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10c20:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10c2c(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c2c:
  %0 = call i32 @i2c_smbus_read_byte(i32 %arg1), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10c38(i8* %s) local_unnamed_addr {
dec_label_pc_10c38:
  %0 = call i32 @strlen(i8* %s), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i8* @function_10c44(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10c44:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_10c50(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c50:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10c5c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10c5c:
  %0 = call i32 @i2c_smbus_write_byte_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32* @function_10c68() local_unnamed_addr {
dec_label_pc_10c68:
  %0 = call i32* @__errno_location(), !insn.addr !30
  ret i32* %0, !insn.addr !30
}

define i32 @function_10c74(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c74:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_10c80(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c80:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i8* @function_10c8c(i8* %string) local_unnamed_addr {
dec_label_pc_10c8c:
  %0 = call i8* @__strdup(i8* %string), !insn.addr !33
  ret i8* %0, !insn.addr !33
}

define i32* @function_10c98(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10c98:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !34
  ret i32* %0, !insn.addr !34
}

define i32 @function_10ca4(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10ca4:
  %0 = call i32 @fgetc(%_IO_FILE* %stream), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_10cb0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10cb0:
  %0 = call i32 @i2c_smbus_write_word_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10cbc(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10cbc:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_10cc8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cc8:
  %0 = call i32 @i2c_smbus_read_word_data(i32 %arg1, i32 %arg2), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i8* @function_10cd4(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10cd4:
  %0 = call i8* @strrchr(i8* %s, i32 %c), !insn.addr !39
  ret i8* %0, !insn.addr !39
}

define i32 @function_10ce0(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10ce0:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define %dirent64* @function_10cec(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10cec:
  %0 = call %dirent64* @readdir64(%__dirstream* %dirp), !insn.addr !41
  ret %dirent64* %0, !insn.addr !41
}

define i32 @function_10cf8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cf8:
  %0 = call i32 @i2c_smbus_read_byte_data(i32 %arg1, i32 %arg2), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define %_IO_FILE* @function_10d04(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10d04:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !43
  ret %_IO_FILE* %0, !insn.addr !43
}

define i32 @function_10d10(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10d10:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define void @function_10d1c() local_unnamed_addr {
dec_label_pc_10d1c:
  call void @abort(), !insn.addr !45
  ret void, !insn.addr !45
}

define i32 @function_10d28(i32 %fd) local_unnamed_addr {
dec_label_pc_10d28:
  %0 = call i32 @close(i32 %fd), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_10d34(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10d34:
  %0 = call i32 @closedir(%__dirstream* %dirp), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_10d40(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10d40:
  %0 = call i32 @i2c_smbus_write_i2c_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_10d4c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d4c:
  %0 = alloca i32
  %sl.4.reg2mem = alloca i32, !insn.addr !49
  %r4.7.reg2mem = alloca i32, !insn.addr !49
  %r0.3.reg2mem = alloca i32, !insn.addr !49
  %r4.634.reg2mem = alloca i32, !insn.addr !49
  %stack_var_-128.1.reg2mem = alloca i32, !insn.addr !49
  %r4.435.reg2mem = alloca i32, !insn.addr !49
  %sl.336.reg2mem = alloca i32, !insn.addr !49
  %sl.2.reg2mem = alloca i32, !insn.addr !49
  %r0.2.reg2mem = alloca i32, !insn.addr !49
  %fp.3.reg2mem = alloca i32, !insn.addr !49
  %sl.1.reg2mem = alloca i32, !insn.addr !49
  %r6.4.reg2mem = alloca i32, !insn.addr !49
  %r4.2.reg2mem = alloca i32, !insn.addr !49
  %r6.3.reg2mem = alloca i32, !insn.addr !49
  %storemerge6.reg2mem = alloca i32, !insn.addr !49
  %sl.0.reg2mem = alloca i32, !insn.addr !49
  %r6.1.reg2mem = alloca i32, !insn.addr !49
  %storemerge3.reg2mem = alloca i32, !insn.addr !49
  %r6.0.reg2mem = alloca i32, !insn.addr !49
  %fp.2.reg2mem = alloca i32, !insn.addr !49
  %sb.2.reg2mem = alloca i32, !insn.addr !49
  %r8.2.reg2mem = alloca i32, !insn.addr !49
  %r7.2.reg2mem = alloca i32, !insn.addr !49
  %r4.1.reg2mem = alloca i32, !insn.addr !49
  %r1.2.reg2mem = alloca i32, !insn.addr !49
  %fp.1.reg2mem = alloca i32, !insn.addr !49
  %sb.1.reg2mem = alloca i32, !insn.addr !49
  %r8.1.reg2mem = alloca i32, !insn.addr !49
  %r7.1.reg2mem = alloca i32, !insn.addr !49
  %r1.1.reg2mem = alloca i32, !insn.addr !49
  %r0.1.reg2mem = alloca i32, !insn.addr !49
  %lr.1.reg2mem = alloca i32, !insn.addr !49
  %fp.0.reg2mem = alloca i32, !insn.addr !49
  %sb.0.reg2mem = alloca i32, !insn.addr !49
  %r8.0.reg2mem = alloca i32, !insn.addr !49
  %r7.0.reg2mem = alloca i32, !insn.addr !49
  %r4.0.reg2mem = alloca i32, !insn.addr !49
  %r2.0.reg2mem = alloca i32, !insn.addr !49
  %r1.0.reg2mem = alloca i32, !insn.addr !49
  %r0.0.reg2mem = alloca i32, !insn.addr !49
  %lr.0.reg2mem = alloca i32, !insn.addr !49
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-92 = alloca i32, align 4
  %stack_var_-100 = alloca i8*, align 4
  %2 = icmp slt i32 %arg1, 2, !insn.addr !50
  br i1 %2, label %dec_label_pc_11088, label %dec_label_pc_10d60, !insn.addr !50

dec_label_pc_10d60:                               ; preds = %dec_label_pc_10d4c
  %3 = add i32 %arg2, 4
  %4 = inttoptr i32 %3 to i32*, !insn.addr !51
  %5 = load i32, i32* %4, align 4, !insn.addr !51
  %6 = inttoptr i32 %5 to i8*, !insn.addr !52
  %7 = load i8, i8* %6, align 1, !insn.addr !52
  %8 = icmp eq i8 %7, 45, !insn.addr !53
  store i32 0, i32* %lr.0.reg2mem, !insn.addr !54
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r1.0.reg2mem, !insn.addr !54
  store i32 %5, i32* %r2.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !54
  store i32 0, i32* %sb.0.reg2mem, !insn.addr !54
  store i32 0, i32* %fp.0.reg2mem, !insn.addr !54
  store i32 0, i32* %r1.2.reg2mem, !insn.addr !54
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !54
  store i32 0, i32* %r7.2.reg2mem, !insn.addr !54
  store i32 0, i32* %r8.2.reg2mem, !insn.addr !54
  store i32 0, i32* %sb.2.reg2mem, !insn.addr !54
  store i32 0, i32* %fp.2.reg2mem, !insn.addr !54
  br i1 %8, label %dec_label_pc_10d94, label %dec_label_pc_10e68, !insn.addr !54

dec_label_pc_10d94:                               ; preds = %dec_label_pc_10d60, %dec_label_pc_10e50
  %fp.0.reload = load i32, i32* %fp.0.reg2mem
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %lr.0.reload = load i32, i32* %lr.0.reg2mem
  %9 = add i32 %r2.0.reload, 1, !insn.addr !55
  %10 = inttoptr i32 %9 to i8*, !insn.addr !55
  %11 = load i8, i8* %10, align 1, !insn.addr !55
  %12 = zext i8 %11 to i32, !insn.addr !55
  %13 = add nsw i32 %12, -86, !insn.addr !56
  store i32 %13, i32* @0, align 4, !insn.addr !57
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !57
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !57
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !57
  store i32 1, i32* %r7.1.reg2mem, !insn.addr !57
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !57
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !57
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !57
  switch i8 %11, label %dec_label_pc_11024 [
    i8 86, label %dec_label_pc_11018
    i8 121, label %dec_label_pc_10e40
    i8 114, label %dec_label_pc_10fe4
    i8 109, label %dec_label_pc_10ff0
    i8 102, label %dec_label_pc_11000
    i8 97, label %dec_label_pc_1100c
  ], !insn.addr !57

dec_label_pc_10e40:                               ; preds = %dec_label_pc_10d94, %96, %dec_label_pc_10ff0, %dec_label_pc_11018, %dec_label_pc_1100c, %dec_label_pc_11000, %dec_label_pc_10fe4
  %fp.1.reload = load i32, i32* %fp.1.reg2mem
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %lr.1.reload = load i32, i32* %lr.1.reg2mem
  %14 = add i32 %r0.1.reload, 1, !insn.addr !58
  %15 = add i32 %r0.1.reload, 2, !insn.addr !59
  %16 = icmp slt i32 %15, %arg1, !insn.addr !60
  br i1 %16, label %dec_label_pc_10e50, label %dec_label_pc_10e60, !insn.addr !60

dec_label_pc_10e50:                               ; preds = %dec_label_pc_10e40
  %17 = mul i32 %15, 4, !insn.addr !61
  %18 = add i32 %17, %arg2, !insn.addr !61
  %19 = inttoptr i32 %18 to i32*, !insn.addr !61
  %20 = load i32, i32* %19, align 4, !insn.addr !61
  %21 = inttoptr i32 %20 to i8*, !insn.addr !62
  %22 = load i8, i8* %21, align 1, !insn.addr !62
  %23 = icmp eq i8 %22, 45, !insn.addr !63
  store i32 %lr.1.reload, i32* %lr.0.reg2mem, !insn.addr !64
  store i32 %15, i32* %r0.0.reg2mem, !insn.addr !64
  store i32 %r1.1.reload, i32* %r1.0.reg2mem, !insn.addr !64
  store i32 %20, i32* %r2.0.reg2mem, !insn.addr !64
  store i32 %14, i32* %r4.0.reg2mem, !insn.addr !64
  store i32 %r7.1.reload, i32* %r7.0.reg2mem, !insn.addr !64
  store i32 %r8.1.reload, i32* %r8.0.reg2mem, !insn.addr !64
  store i32 %sb.1.reload, i32* %sb.0.reg2mem, !insn.addr !64
  store i32 %fp.1.reload, i32* %fp.0.reg2mem, !insn.addr !64
  br i1 %23, label %dec_label_pc_10d94, label %dec_label_pc_10e60, !insn.addr !64

dec_label_pc_10e60:                               ; preds = %dec_label_pc_10e40, %dec_label_pc_10e50
  %24 = icmp eq i32 %lr.1.reload, 0, !insn.addr !65
  store i32 %r1.1.reload, i32* %r1.2.reg2mem, !insn.addr !66
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !66
  store i32 %r7.1.reload, i32* %r7.2.reg2mem, !insn.addr !66
  store i32 %r8.1.reload, i32* %r8.2.reg2mem, !insn.addr !66
  store i32 %sb.1.reload, i32* %sb.2.reg2mem, !insn.addr !66
  store i32 %fp.1.reload, i32* %fp.2.reg2mem, !insn.addr !66
  br i1 %24, label %dec_label_pc_10e68, label %dec_label_pc_11040, !insn.addr !66

dec_label_pc_10e68:                               ; preds = %dec_label_pc_10d60, %dec_label_pc_10e60
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %25 = add i32 %r4.1.reload, 3, !insn.addr !67
  %26 = icmp slt i32 %25, %arg1, !insn.addr !68
  br i1 %26, label %dec_label_pc_10e74, label %dec_label_pc_11088, !insn.addr !68

dec_label_pc_10e74:                               ; preds = %dec_label_pc_10e68
  %27 = mul i32 %r4.1.reload, 4, !insn.addr !69
  %28 = add i32 %27, %3, !insn.addr !70
  %29 = inttoptr i32 %28 to i32*, !insn.addr !70
  %30 = load i32, i32* %29, align 4, !insn.addr !70
  %31 = call i32 @function_12468(i32 %30), !insn.addr !71
  %32 = icmp slt i32 %31, 0, !insn.addr !72
  br i1 %32, label %dec_label_pc_11088, label %dec_label_pc_10e94, !insn.addr !73

dec_label_pc_10e94:                               ; preds = %dec_label_pc_10e74
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %33 = add i32 %28, 4, !insn.addr !74
  %34 = inttoptr i32 %33 to i32*, !insn.addr !74
  %35 = load i32, i32* %34, align 4, !insn.addr !74
  %36 = call i32 @function_11cd0(i32 %35, i32 %r1.2.reload), !insn.addr !75
  %37 = icmp slt i32 %36, 0, !insn.addr !76
  br i1 %37, label %dec_label_pc_11088, label %dec_label_pc_10eb4, !insn.addr !77

dec_label_pc_10eb4:                               ; preds = %dec_label_pc_10e94
  %38 = add i32 %arg2, 12, !insn.addr !78
  %39 = add i32 %38, %27, !insn.addr !79
  %40 = inttoptr i32 %39 to i32*, !insn.addr !80
  %41 = load i32, i32* %40, align 4, !insn.addr !80
  %42 = inttoptr i32 %41 to i8*, !insn.addr !81
  %43 = call i32 @strtol(i8* %42, i8** nonnull %stack_var_-100, i32 0), !insn.addr !81
  %44 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !82
  %45 = load i8, i8* %44, align 1, !insn.addr !83
  %46 = icmp eq i8 %45, 0, !insn.addr !84
  br i1 %46, label %dec_label_pc_10ee0, label %dec_label_pc_11068, !insn.addr !85

dec_label_pc_10ee0:                               ; preds = %dec_label_pc_10eb4
  %47 = icmp ult i32 %43, 255, !insn.addr !86
  %48 = icmp ne i1 %47, true, !insn.addr !86
  %49 = icmp eq i32 %43, 255, !insn.addr !86
  %50 = icmp ne i1 %49, true, !insn.addr !87
  %51 = icmp eq i1 %48, %50, !insn.addr !87
  br i1 %51, label %dec_label_pc_11068, label %dec_label_pc_10ee8, !insn.addr !87

dec_label_pc_10ee8:                               ; preds = %dec_label_pc_10ee0
  %fp.2.reload = load i32, i32* %fp.2.reg2mem
  %sb.2.reload = load i32, i32* %sb.2.reg2mem
  %r8.2.reload = load i32, i32* %r8.2.reg2mem
  %r7.2.reload = load i32, i32* %r7.2.reg2mem
  %52 = add i32 %r4.1.reload, 4, !insn.addr !88
  %53 = icmp eq i32 %52, %arg1, !insn.addr !89
  store i32 1, i32* %r6.1.reg2mem, !insn.addr !90
  store i32 -1, i32* %sl.0.reg2mem, !insn.addr !90
  br i1 %53, label %dec_label_pc_110b0, label %dec_label_pc_10ef4, !insn.addr !90

dec_label_pc_10ef4:                               ; preds = %dec_label_pc_10ee8
  %54 = add i32 %r4.1.reload, 5, !insn.addr !91
  %55 = icmp eq i32 %54, %arg1, !insn.addr !92
  br i1 %55, label %dec_label_pc_11170, label %dec_label_pc_10f04, !insn.addr !93

dec_label_pc_10f04:                               ; preds = %dec_label_pc_10ef4
  %56 = mul i32 %arg1, 4, !insn.addr !94
  %57 = add i32 %56, -4, !insn.addr !95
  %58 = add i32 %57, %arg2, !insn.addr !95
  %59 = inttoptr i32 %58 to i32*, !insn.addr !95
  %60 = load i32, i32* %59, align 4, !insn.addr !95
  %61 = inttoptr i32 %60 to i8*, !insn.addr !96
  %62 = call i32 @strlen(i8* %61), !insn.addr !96
  %63 = icmp ult i32 %62, 2, !insn.addr !97
  %64 = icmp ne i1 %63, true, !insn.addr !97
  %65 = icmp eq i32 %62, 2, !insn.addr !97
  %66 = icmp ne i1 %65, true, !insn.addr !98
  %67 = icmp eq i1 %64, %66, !insn.addr !98
  br i1 %67, label %dec_label_pc_11150, label %dec_label_pc_10f1c, !insn.addr !98

dec_label_pc_10f1c:                               ; preds = %dec_label_pc_10f04
  br i1 %65, label %dec_label_pc_11124, label %dec_label_pc_10f20, !insn.addr !99

dec_label_pc_10f20:                               ; preds = %dec_label_pc_10f1c
  %68 = load i8, i8* %61, align 1, !insn.addr !100
  %69 = icmp eq i8 %68, 105, !insn.addr !101
  br i1 %69, label %dec_label_pc_11230, label %dec_label_pc_10f2c, !insn.addr !102

dec_label_pc_10f2c:                               ; preds = %dec_label_pc_10f20
  %70 = icmp ult i8 %68, 105, !insn.addr !101
  br i1 %70, label %dec_label_pc_111f4, label %dec_label_pc_10f30, !insn.addr !103

dec_label_pc_10f30:                               ; preds = %dec_label_pc_10f2c
  store i32 5, i32* %r6.3.reg2mem
  switch i8 %68, label %dec_label_pc_11150 [
    i8 115, label %dec_label_pc_11278
    i8 119, label %dec_label_pc_10f48
  ]

dec_label_pc_10f48:                               ; preds = %dec_label_pc_10f30, %dec_label_pc_11140
  %71 = add i32 %r4.1.reload, 6, !insn.addr !104
  %72 = icmp eq i32 %71, %arg1, !insn.addr !105
  store i32 3, i32* %r6.0.reg2mem, !insn.addr !106
  store i32 ptrtoint ([28 x i8]* @global_var_12998 to i32), i32* %storemerge6.reg2mem, !insn.addr !106
  br i1 %72, label %dec_label_pc_10f68, label %dec_label_pc_111cc, !insn.addr !106

dec_label_pc_10f68:                               ; preds = %dec_label_pc_11198, %dec_label_pc_11184, %dec_label_pc_11170, %dec_label_pc_11200, %dec_label_pc_10f48
  %73 = add i32 %28, 12, !insn.addr !107
  %74 = inttoptr i32 %73 to i32*, !insn.addr !107
  %75 = load i32, i32* %74, align 4, !insn.addr !107
  %76 = inttoptr i32 %75 to i8*, !insn.addr !108
  %77 = call i32 @strtol(i8* %76, i8** nonnull %stack_var_-100, i32 0), !insn.addr !108
  %78 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !109
  %79 = load i8, i8* %78, align 1, !insn.addr !110
  %80 = icmp ne i8 %79, 0, !insn.addr !111
  %81 = icmp slt i32 %77, 0
  %82 = or i1 %81, %80
  %83 = icmp eq i1 %82, false, !insn.addr !112
  store i32 ptrtoint ([28 x i8]* @global_var_129b4 to i32), i32* %storemerge6.reg2mem, !insn.addr !113
  br i1 %83, label %dec_label_pc_10f98, label %dec_label_pc_111cc, !insn.addr !113

dec_label_pc_10f98:                               ; preds = %dec_label_pc_10f68
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %84 = icmp sgt i32 %77, 255
  %85 = icmp eq i32 %r6.0.reload, 2, !insn.addr !114
  %narrow29 = icmp eq i1 %85, %84
  %86 = icmp eq i1 %narrow29, false, !insn.addr !115
  store i32 ptrtoint ([33 x i8]* @global_var_129d0 to i32), i32* %storemerge3.reg2mem, !insn.addr !116
  br i1 %86, label %dec_label_pc_10fb4, label %dec_label_pc_10fd0, !insn.addr !116

dec_label_pc_10fb4:                               ; preds = %dec_label_pc_10f98
  %87 = icmp eq i32 %77, 65536, !insn.addr !117
  %88 = icmp sgt i32 %77, 65535, !insn.addr !118
  %89 = icmp eq i32 %r6.0.reload, 3
  %spec.select16 = select i1 %88, i1 %89, i1 %87
  store i32 ptrtoint ([33 x i8]* @global_var_129d0 to i32), i32* %storemerge3.reg2mem, !insn.addr !119
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !119
  store i32 %77, i32* %sl.0.reg2mem, !insn.addr !119
  br i1 %spec.select16, label %dec_label_pc_10fd0, label %dec_label_pc_110b0, !insn.addr !119

dec_label_pc_10fd0:                               ; preds = %dec_label_pc_11530, %dec_label_pc_110b8, %dec_label_pc_10f98, %dec_label_pc_10fb4
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %90 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4
  %91 = inttoptr i32 %storemerge3.reload to i32*, !insn.addr !120
  %92 = call i32 @fwrite(i32* %91, i32 1, i32 32, %_IO_FILE* %90), !insn.addr !120
  %93 = call i32 @function_11bc8(), !insn.addr !121
  unreachable, !insn.addr !121

dec_label_pc_10fe4:                               ; preds = %dec_label_pc_10d94
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !122
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !122
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !122
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !122
  store i32 1, i32* %r8.1.reg2mem, !insn.addr !122
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !122
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !122
  br label %dec_label_pc_10e40, !insn.addr !122

dec_label_pc_10ff0:                               ; preds = %dec_label_pc_10d94
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %94 = add i32 %r4.0.reload, 2, !insn.addr !123
  %95 = icmp slt i32 %94, %arg1, !insn.addr !124
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !124
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !124
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !124
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !124
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !124
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !124
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !124
  br i1 %95, label %96, label %dec_label_pc_10e40, !insn.addr !124

; <label>:96:                                     ; preds = %dec_label_pc_10ff0
  %97 = mul i32 %94, 4, !insn.addr !124
  %98 = add i32 %97, %arg2, !insn.addr !124
  %99 = inttoptr i32 %98 to i32*, !insn.addr !124
  %100 = load i32, i32* %99, align 4, !insn.addr !124
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !124
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !124
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !124
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !124
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !124
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !124
  store i32 %100, i32* %fp.1.reg2mem, !insn.addr !124
  br label %dec_label_pc_10e40, !insn.addr !124

dec_label_pc_11000:                               ; preds = %dec_label_pc_10d94
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !125
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !125
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !125
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !125
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !125
  store i32 1, i32* %sb.1.reg2mem, !insn.addr !125
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !125
  br label %dec_label_pc_10e40, !insn.addr !125

dec_label_pc_1100c:                               ; preds = %dec_label_pc_10d94
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !126
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !126
  store i32 1, i32* %r1.1.reg2mem, !insn.addr !126
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !126
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !126
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !126
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !126
  br label %dec_label_pc_10e40, !insn.addr !126

dec_label_pc_11018:                               ; preds = %dec_label_pc_10d94
  store i32 1, i32* %lr.1.reg2mem, !insn.addr !127
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !127
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !127
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !127
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !127
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !127
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !127
  br label %dec_label_pc_10e40, !insn.addr !127

dec_label_pc_11024:                               ; preds = %dec_label_pc_10d94
  %101 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !128
  %102 = inttoptr i32 %r2.0.reload to i8*, !insn.addr !129
  %103 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %101, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_128c0, i32 0, i32 0), i8* %102), !insn.addr !129
  %104 = call i32 @function_11bc8(), !insn.addr !130
  unreachable, !insn.addr !130

dec_label_pc_11040:                               ; preds = %dec_label_pc_10e60
  %105 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !131
  %106 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %105, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_128e8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_128e4, i32 0, i32 0)), !insn.addr !132
  call void @exit(i32 0), !insn.addr !133
  unreachable, !insn.addr !133

dec_label_pc_11068:                               ; preds = %dec_label_pc_10eb4, %dec_label_pc_10ee0
  %107 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !134
  %108 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_128fc to i32*), i32 1, i32 29, %_IO_FILE* %107), !insn.addr !135
  br label %dec_label_pc_11088, !insn.addr !135

dec_label_pc_11088:                               ; preds = %dec_label_pc_10e68, %dec_label_pc_11068, %dec_label_pc_10e94, %dec_label_pc_10e74, %dec_label_pc_10d4c
  %109 = call i32 @function_11bc8(), !insn.addr !136
  unreachable, !insn.addr !136

dec_label_pc_110b0:                               ; preds = %dec_label_pc_11184, %dec_label_pc_11198, %dec_label_pc_10ee8, %dec_label_pc_10fb4
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %110 = icmp eq i32 %fp.2.reload, 0, !insn.addr !137
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !138
  store i32 %r6.1.reload, i32* %r6.4.reg2mem, !insn.addr !138
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !138
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !138
  br i1 %110, label %dec_label_pc_112c4, label %dec_label_pc_110b8, !insn.addr !138

dec_label_pc_110b8:                               ; preds = %dec_label_pc_110b0
  %111 = inttoptr i32 %fp.2.reload to i8*, !insn.addr !139
  %112 = call i32 @strtol(i8* %111, i8** nonnull %stack_var_-100, i32 0), !insn.addr !139
  %113 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !140
  %114 = load i8, i8* %113, align 1, !insn.addr !141
  %115 = icmp eq i32 %112, 0, !insn.addr !142
  %116 = icmp ne i8 %114, 0
  %narrow30 = or i1 %115, %116
  %117 = icmp eq i1 %narrow30, false, !insn.addr !143
  store i32 ptrtoint ([33 x i8]* @global_var_129f4 to i32), i32* %storemerge3.reg2mem, !insn.addr !144
  br i1 %117, label %dec_label_pc_110f0, label %dec_label_pc_10fd0, !insn.addr !144

dec_label_pc_110f0:                               ; preds = %dec_label_pc_110b8
  %118 = icmp eq i32 %r6.1.reload, 3, !insn.addr !145
  br i1 %118, label %dec_label_pc_110f8, label %dec_label_pc_112b8, !insn.addr !146

dec_label_pc_110f8:                               ; preds = %dec_label_pc_110f0
  %119 = icmp slt i32 %112, 65536, !insn.addr !147
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !147
  store i32 3, i32* %r6.4.reg2mem, !insn.addr !147
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !147
  store i32 %112, i32* %fp.3.reg2mem, !insn.addr !147
  br i1 %119, label %dec_label_pc_112c4, label %dec_label_pc_11100, !insn.addr !147

dec_label_pc_11100:                               ; preds = %dec_label_pc_112b8, %dec_label_pc_110f8
  %120 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !148
  %121 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12a18 to i32*), i32 1, i32 37, %_IO_FILE* %120), !insn.addr !149
  %122 = call i32 @function_11bc8(), !insn.addr !150
  unreachable, !insn.addr !150

dec_label_pc_11124:                               ; preds = %dec_label_pc_10f1c
  %123 = add i32 %60, 1, !insn.addr !151
  %124 = inttoptr i32 %123 to i8*, !insn.addr !151
  %125 = load i8, i8* %124, align 1, !insn.addr !151
  %126 = icmp eq i8 %125, 112, !insn.addr !152
  br i1 %126, label %dec_label_pc_11130, label %dec_label_pc_11150, !insn.addr !153

dec_label_pc_11130:                               ; preds = %dec_label_pc_11124
  %127 = load i8, i8* %61, align 1, !insn.addr !154
  %128 = icmp eq i8 %127, 105, !insn.addr !155
  br i1 %128, label %dec_label_pc_11244, label %dec_label_pc_1113c, !insn.addr !156

dec_label_pc_1113c:                               ; preds = %dec_label_pc_11130
  %129 = icmp ult i8 %127, 105, !insn.addr !155
  br i1 %129, label %dec_label_pc_117e4, label %dec_label_pc_11140, !insn.addr !157

dec_label_pc_11140:                               ; preds = %dec_label_pc_1113c
  store i32 5, i32* %r6.3.reg2mem
  switch i8 %127, label %dec_label_pc_11150 [
    i8 115, label %dec_label_pc_11278
    i8 119, label %dec_label_pc_10f48
  ]

dec_label_pc_11150:                               ; preds = %dec_label_pc_10f30, %dec_label_pc_11140, %dec_label_pc_117e4, %dec_label_pc_11124, %dec_label_pc_111f4, %dec_label_pc_10f04
  %130 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !158
  %131 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %130, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1291c, i32 0, i32 0), i8* %61), !insn.addr !159
  %132 = call i32 @function_11bc8(), !insn.addr !160
  unreachable, !insn.addr !160

dec_label_pc_11170:                               ; preds = %dec_label_pc_10ef4
  %133 = add i32 %28, 12, !insn.addr !161
  %134 = inttoptr i32 %133 to i32*, !insn.addr !161
  %135 = load i32, i32* %134, align 4, !insn.addr !161
  %136 = inttoptr i32 %135 to i8*, !insn.addr !162
  %137 = load i8, i8* %136, align 1, !insn.addr !162
  %138 = icmp eq i8 %137, 99, !insn.addr !163
  store i32 2, i32* %r6.0.reg2mem, !insn.addr !164
  br i1 %138, label %dec_label_pc_11184, label %dec_label_pc_10f68, !insn.addr !164

dec_label_pc_11184:                               ; preds = %dec_label_pc_11170
  %139 = add i32 %135, 1, !insn.addr !165
  %140 = inttoptr i32 %139 to i8*, !insn.addr !165
  %141 = load i8, i8* %140, align 1, !insn.addr !165
  store i32 2, i32* %r6.0.reg2mem
  store i32 1, i32* %r6.1.reg2mem
  store i32 -1, i32* %sl.0.reg2mem
  switch i8 %141, label %dec_label_pc_10f68 [
    i8 0, label %dec_label_pc_110b0
    i8 112, label %dec_label_pc_11198
  ]

dec_label_pc_11198:                               ; preds = %dec_label_pc_11184
  %142 = add i32 %135, 2, !insn.addr !166
  %143 = inttoptr i32 %142 to i8*, !insn.addr !166
  %144 = load i8, i8* %143, align 1, !insn.addr !166
  %145 = icmp eq i8 %144, 0, !insn.addr !167
  store i32 2, i32* %r6.0.reg2mem, !insn.addr !168
  store i32 1, i32* %r6.1.reg2mem, !insn.addr !168
  store i32 -1, i32* %sl.0.reg2mem, !insn.addr !168
  br i1 %145, label %dec_label_pc_110b0, label %dec_label_pc_10f68, !insn.addr !168

dec_label_pc_111cc:                               ; preds = %dec_label_pc_11508, %dec_label_pc_114dc, %dec_label_pc_10f48, %dec_label_pc_11200, %dec_label_pc_10f68
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %146 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4
  %147 = inttoptr i32 %storemerge6.reload to i32*, !insn.addr !169
  %148 = call i32 @fwrite(i32* %147, i32 1, i32 27, %_IO_FILE* %146), !insn.addr !169
  %149 = call i32 @function_11bc8(), !insn.addr !170
  unreachable, !insn.addr !170

dec_label_pc_111f4:                               ; preds = %dec_label_pc_10f2c
  %150 = icmp eq i8 %68, 98, !insn.addr !171
  br i1 %150, label %dec_label_pc_11200, label %dec_label_pc_11150, !insn.addr !172

dec_label_pc_11200:                               ; preds = %dec_label_pc_111f4, %dec_label_pc_117e4
  %151 = add i32 %r4.1.reload, 6, !insn.addr !173
  %152 = icmp eq i32 %151, %arg1, !insn.addr !174
  store i32 2, i32* %r6.0.reg2mem, !insn.addr !175
  store i32 ptrtoint ([28 x i8]* @global_var_12998 to i32), i32* %storemerge6.reg2mem, !insn.addr !175
  br i1 %152, label %dec_label_pc_10f68, label %dec_label_pc_111cc, !insn.addr !175

dec_label_pc_11230:                               ; preds = %dec_label_pc_10f20
  %153 = add i32 %60, 1, !insn.addr !176
  %154 = inttoptr i32 %153 to i8*, !insn.addr !176
  %155 = load i8, i8* %154, align 1, !insn.addr !176
  %156 = icmp eq i8 %155, 112, !insn.addr !177
  store i32 8, i32* %r6.3.reg2mem, !insn.addr !178
  br i1 %156, label %dec_label_pc_11244, label %dec_label_pc_11278, !insn.addr !178

dec_label_pc_11244:                               ; preds = %dec_label_pc_11230, %dec_label_pc_11130
  %157 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !179
  %158 = call i32 @fwrite(i32* bitcast ([48 x i8]* @global_var_12938 to i32*), i32 1, i32 47, %_IO_FILE* %157), !insn.addr !180
  %159 = call i32 @function_11bc8(), !insn.addr !181
  unreachable, !insn.addr !181

dec_label_pc_11278:                               ; preds = %dec_label_pc_10f30, %dec_label_pc_11140, %dec_label_pc_11230
  %160 = icmp eq i32 %fp.2.reload, 0, !insn.addr !182
  br i1 %160, label %dec_label_pc_114dc, label %dec_label_pc_11280, !insn.addr !183

dec_label_pc_11280:                               ; preds = %dec_label_pc_11278
  %161 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !184
  %162 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_12968 to i32*), i32 1, i32 44, %_IO_FILE* %161), !insn.addr !185
  %163 = call i32 @function_11bc8(), !insn.addr !186
  unreachable, !insn.addr !186

dec_label_pc_112b8:                               ; preds = %dec_label_pc_110f0
  %164 = icmp sgt i32 %112, 255, !insn.addr !187
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !187
  store i32 %r6.1.reload, i32* %r6.4.reg2mem, !insn.addr !187
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !187
  store i32 %112, i32* %fp.3.reg2mem, !insn.addr !187
  br i1 %164, label %dec_label_pc_11100, label %dec_label_pc_112c4, !insn.addr !187

dec_label_pc_112c4:                               ; preds = %dec_label_pc_11538, %dec_label_pc_114fc, %dec_label_pc_110b0, %dec_label_pc_114e8, %dec_label_pc_110f8, %dec_label_pc_112b8
  %165 = call i32 @function_11d88(i32 %31, i32* nonnull %stack_var_-92, i32 20, i32 0), !insn.addr !188
  %166 = icmp slt i32 %165, 0, !insn.addr !189
  br i1 %166, label %dec_label_pc_11374, label %dec_label_pc_112e0, !insn.addr !190

dec_label_pc_112e0:                               ; preds = %dec_label_pc_112c4
  %167 = call i32 (i32, i32, ...) @ioctl(i32 %165, i32 1797), !insn.addr !191
  %168 = icmp slt i32 %167, 0, !insn.addr !192
  br i1 %168, label %dec_label_pc_11a7c, label %dec_label_pc_112f4, !insn.addr !193

dec_label_pc_112f4:                               ; preds = %dec_label_pc_112e0
  %fp.3.reload = load i32, i32* %fp.3.reg2mem
  %sl.1.reload = load i32, i32* %sl.1.reg2mem
  %r6.4.reload = load i32, i32* %r6.4.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %169 = add i32 %r6.4.reload, -1, !insn.addr !194
  store i32 %169, i32* @1, align 4, !insn.addr !195
  switch i32 %r6.4.reload, label %dec_label_pc_113b4 [
    i32 1, label %dec_label_pc_11a4c
    i32 2, label %dec_label_pc_11a1c
    i32 3, label %dec_label_pc_115c8
    i32 8, label %dec_label_pc_11568
    i32 5, label %dec_label_pc_11598
  ], !insn.addr !195

dec_label_pc_11374:                               ; preds = %dec_label_pc_113b4, %dec_label_pc_11a58, %dec_label_pc_11a28, %dec_label_pc_115d4, %dec_label_pc_115a4, %dec_label_pc_11574, %dec_label_pc_11a7c, %dec_label_pc_112c4
  call void @exit(i32 1), !insn.addr !196
  unreachable, !insn.addr !196

dec_label_pc_113b4:                               ; preds = %dec_label_pc_11568, %dec_label_pc_11598, %dec_label_pc_115c8, %dec_label_pc_11a1c, %dec_label_pc_11a4c, %dec_label_pc_112f4
  %170 = call i32 @function_125b4(i32 %165, i32 %36, i32 %sb.2.reload), !insn.addr !197
  %171 = icmp eq i32 %170, 0, !insn.addr !198
  br i1 %171, label %dec_label_pc_113cc, label %dec_label_pc_11374, !insn.addr !199

dec_label_pc_113cc:                               ; preds = %dec_label_pc_113b4
  %172 = icmp eq i32 %r7.2.reload, 0, !insn.addr !200
  br i1 %172, label %dec_label_pc_115f8, label %dec_label_pc_113d4, !insn.addr !201

dec_label_pc_113d4:                               ; preds = %dec_label_pc_11700, %dec_label_pc_113cc
  %173 = icmp eq i32 %fp.3.reload, 0, !insn.addr !202
  store i32 %sl.1.reload, i32* %sl.2.reg2mem, !insn.addr !203
  br i1 %173, label %dec_label_pc_11498, label %dec_label_pc_113dc, !insn.addr !203

dec_label_pc_113dc:                               ; preds = %dec_label_pc_113d4
  %174 = icmp eq i32 %r6.4.reload, 1, !insn.addr !204
  br i1 %174, label %dec_label_pc_11a10, label %dec_label_pc_113e4, !insn.addr !205

dec_label_pc_113e4:                               ; preds = %dec_label_pc_113dc
  %175 = icmp eq i32 %r6.4.reload, 3, !insn.addr !206
  %176 = urem i32 %43, 256
  br i1 %175, label %dec_label_pc_113ec, label %dec_label_pc_11a00, !insn.addr !207

dec_label_pc_113ec:                               ; preds = %dec_label_pc_113e4
  %177 = call i32 @i2c_smbus_read_word_data(i32 %165, i32 %176), !insn.addr !208
  store i32 %177, i32* %r0.2.reg2mem, !insn.addr !208
  br label %dec_label_pc_113f8, !insn.addr !208

dec_label_pc_113f8:                               ; preds = %dec_label_pc_11a10, %dec_label_pc_11a00, %dec_label_pc_113ec
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %178 = icmp slt i32 %r0.2.reload, 0, !insn.addr !209
  br i1 %178, label %dec_label_pc_119d8, label %dec_label_pc_11400, !insn.addr !210

dec_label_pc_11400:                               ; preds = %dec_label_pc_113f8
  %179 = and i32 %fp.3.reload, %sl.1.reload, !insn.addr !211
  %180 = sub i32 0, %fp.3.reload
  %181 = sub i32 %180, 1
  %182 = and i32 %r0.2.reload, %181, !insn.addr !212
  %183 = or i32 %182, %179, !insn.addr !213
  store i32 %183, i32* %sl.2.reg2mem, !insn.addr !214
  br i1 %172, label %dec_label_pc_11414, label %dec_label_pc_11498, !insn.addr !214

dec_label_pc_11414:                               ; preds = %dec_label_pc_11400
  %184 = icmp eq i32 %r6.4.reload, 3, !insn.addr !215
  %185 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !216
  %ip.2 = select i1 %184, i32 4, i32 2
  %186 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %185, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12cf0, i32 0, i32 0), i32 %ip.2, i32 %r0.2.reload, i32 %ip.2, i32 %fp.3.reload, i32 %ip.2, i32 %183, i32 %43), !insn.addr !217
  %187 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !218
  %188 = call i32 @fwrite(i32* bitcast ([17 x i8]* @global_var_12d3c to i32*), i32 1, i32 16, %_IO_FILE* %187), !insn.addr !219
  %189 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !220
  %190 = call i32 @fflush(%_IO_FILE* %189), !insn.addr !221
  %191 = call i32 @function_12628(i32 1), !insn.addr !222
  %192 = icmp eq i32 %191, 0, !insn.addr !223
  store i32 %183, i32* %sl.2.reg2mem, !insn.addr !224
  br i1 %192, label %dec_label_pc_119b8, label %dec_label_pc_11498, !insn.addr !224

dec_label_pc_11498:                               ; preds = %dec_label_pc_113d4, %dec_label_pc_11414, %dec_label_pc_11400
  %sl.2.reload = load i32, i32* %sl.2.reg2mem
  %193 = urem i32 %43, 256, !insn.addr !225
  store i32 %169, i32* @2, align 4, !insn.addr !226
  switch i32 %r6.4.reload, label %dec_label_pc_11960 [
    i32 1, label %dec_label_pc_11950
    i32 8, label %dec_label_pc_117f8
    i32 3, label %dec_label_pc_1193c
    i32 5, label %dec_label_pc_1188c
  ], !insn.addr !226

dec_label_pc_114dc:                               ; preds = %dec_label_pc_11278
  %194 = add i32 %r4.1.reload, 37, !insn.addr !227
  %195 = icmp slt i32 %194, %arg1, !insn.addr !228
  store i32 ptrtoint ([28 x i8]* @global_var_12998 to i32), i32* %storemerge6.reg2mem, !insn.addr !228
  br i1 %195, label %dec_label_pc_111cc, label %dec_label_pc_114e8, !insn.addr !228

dec_label_pc_114e8:                               ; preds = %dec_label_pc_114dc
  %r6.3.reload = load i32, i32* %r6.3.reg2mem
  %trunc = trunc i32 %r6.3.reload to i4
  store i32 0, i32* %r4.2.reg2mem
  store i32 %r6.3.reload, i32* %r6.4.reg2mem
  store i32 -1, i32* %sl.1.reg2mem
  store i32 0, i32* %fp.3.reg2mem
  switch i4 %trunc, label %dec_label_pc_112c4 [
    i4 -8, label %dec_label_pc_114fc
    i4 5, label %dec_label_pc_114fc
  ]

dec_label_pc_114fc:                               ; preds = %dec_label_pc_114e8, %dec_label_pc_114e8
  %196 = icmp slt i32 %54, %arg1, !insn.addr !229
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !229
  store i32 %r6.3.reload, i32* %r6.4.reg2mem, !insn.addr !229
  store i32 -1, i32* %sl.1.reg2mem, !insn.addr !229
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !229
  br i1 %196, label %dec_label_pc_11508.lr.ph, label %dec_label_pc_112c4, !insn.addr !229

dec_label_pc_11508.lr.ph:                         ; preds = %dec_label_pc_114fc
  %197 = ptrtoint i32* %stack_var_-72 to i32
  store i32 %39, i32* %sl.336.reg2mem
  store i32 0, i32* %r4.435.reg2mem
  br label %dec_label_pc_11508

dec_label_pc_11508:                               ; preds = %dec_label_pc_11508.lr.ph, %dec_label_pc_11538
  %sl.336.reload = load i32, i32* %sl.336.reg2mem
  %198 = add i32 %sl.336.reload, 4, !insn.addr !230
  %199 = inttoptr i32 %198 to i32*, !insn.addr !230
  %200 = load i32, i32* %199, align 4, !insn.addr !230
  %201 = inttoptr i32 %200 to i8*, !insn.addr !231
  %202 = call i32 @strtol(i8* %201, i8** nonnull %stack_var_-100, i32 0), !insn.addr !231
  %203 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !232
  %204 = load i8, i8* %203, align 1, !insn.addr !233
  %205 = icmp ne i8 %204, 0, !insn.addr !234
  %206 = icmp slt i32 %202, 0
  %207 = or i1 %206, %205
  %208 = icmp eq i1 %207, false, !insn.addr !235
  store i32 ptrtoint ([28 x i8]* @global_var_129b4 to i32), i32* %storemerge6.reg2mem, !insn.addr !236
  br i1 %208, label %dec_label_pc_11530, label %dec_label_pc_111cc, !insn.addr !236

dec_label_pc_11530:                               ; preds = %dec_label_pc_11508
  %209 = icmp sgt i32 %202, 255, !insn.addr !237
  store i32 ptrtoint ([33 x i8]* @global_var_129d0 to i32), i32* %storemerge3.reg2mem, !insn.addr !237
  br i1 %209, label %dec_label_pc_10fd0, label %dec_label_pc_11538, !insn.addr !237

dec_label_pc_11538:                               ; preds = %dec_label_pc_11530
  %r4.435.reload = load i32, i32* %r4.435.reg2mem
  %210 = trunc i32 %202 to i8, !insn.addr !238
  %211 = add i32 %r4.435.reload, %197, !insn.addr !238
  %212 = inttoptr i32 %211 to i8*, !insn.addr !238
  store i8 %210, i8* %212, align 1, !insn.addr !238
  %213 = add i32 %r4.435.reload, 1, !insn.addr !239
  %214 = add i32 %213, %54, !insn.addr !240
  %215 = icmp slt i32 %214, %arg1, !insn.addr !229
  store i32 %213, i32* %r4.2.reg2mem, !insn.addr !229
  store i32 %r6.3.reload, i32* %r6.4.reg2mem, !insn.addr !229
  store i32 -1, i32* %sl.1.reg2mem, !insn.addr !229
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !229
  store i32 %198, i32* %sl.336.reg2mem, !insn.addr !229
  store i32 %213, i32* %r4.435.reg2mem, !insn.addr !229
  br i1 %215, label %dec_label_pc_11508, label %dec_label_pc_112c4, !insn.addr !229

dec_label_pc_11568:                               ; preds = %dec_label_pc_112f4
  %216 = and i32 %1, 134217728, !insn.addr !241
  %217 = icmp eq i32 %216, 0, !insn.addr !241
  br i1 %217, label %dec_label_pc_11574, label %dec_label_pc_113b4, !insn.addr !242

dec_label_pc_11574:                               ; preds = %dec_label_pc_11568
  %218 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !243
  %219 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %218, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a8c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12af4, i32 0, i32 0)), !insn.addr !244
  br label %dec_label_pc_11374, !insn.addr !245

dec_label_pc_11598:                               ; preds = %dec_label_pc_112f4
  %220 = and i32 %1, 33554432, !insn.addr !246
  %221 = icmp eq i32 %220, 0, !insn.addr !246
  br i1 %221, label %dec_label_pc_115a4, label %dec_label_pc_113b4, !insn.addr !247

dec_label_pc_115a4:                               ; preds = %dec_label_pc_11598
  %222 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !248
  %223 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %222, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a8c, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12ae0, i32 0, i32 0)), !insn.addr !249
  br label %dec_label_pc_11374, !insn.addr !250

dec_label_pc_115c8:                               ; preds = %dec_label_pc_112f4
  %224 = and i32 %1, 4194304, !insn.addr !251
  %225 = icmp eq i32 %224, 0, !insn.addr !251
  br i1 %225, label %dec_label_pc_115d4, label %dec_label_pc_113b4, !insn.addr !252

dec_label_pc_115d4:                               ; preds = %dec_label_pc_115c8
  %226 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !253
  %227 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %226, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a8c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12acc, i32 0, i32 0)), !insn.addr !254
  br label %dec_label_pc_11374, !insn.addr !255

dec_label_pc_115f8:                               ; preds = %dec_label_pc_113cc
  %228 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !256
  %229 = call i32 @fwrite(i32* bitcast ([76 x i8]* @global_var_12b34 to i32*), i32 1, i32 75, %_IO_FILE* %228), !insn.addr !257
  %230 = add i32 %36, -80, !insn.addr !258
  %231 = icmp ult i32 %230, 7, !insn.addr !259
  %232 = icmp ne i1 %231, true, !insn.addr !259
  %233 = icmp eq i32 %230, 7, !insn.addr !259
  %234 = icmp ne i1 %233, true, !insn.addr !260
  %235 = icmp eq i1 %232, %234, !insn.addr !260
  store i32 0, i32* %stack_var_-128.1.reg2mem, !insn.addr !261
  br i1 %235, label %dec_label_pc_11648, label %dec_label_pc_1162c, !insn.addr !261

dec_label_pc_1162c:                               ; preds = %dec_label_pc_115f8
  %236 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !262
  %237 = call i32 @fwrite(i32* bitcast ([120 x i8]* @global_var_12b80 to i32*), i32 1, i32 119, %_IO_FILE* %236), !insn.addr !263
  store i32 1, i32* %stack_var_-128.1.reg2mem, !insn.addr !263
  br label %dec_label_pc_11648, !insn.addr !263

dec_label_pc_11648:                               ; preds = %dec_label_pc_1162c, %dec_label_pc_115f8
  %stack_var_-128.1.reload = load i32, i32* %stack_var_-128.1.reg2mem
  %238 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !264
  %239 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %238, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12bf8, i32 0, i32 0), i32* nonnull %stack_var_-92, i32 %36, i32 %43), !insn.addr !265
  switch i32 %r6.4.reload, label %dec_label_pc_11694 [
    i32 1, label %dec_label_pc_117c8
    i32 8, label %dec_label_pc_11770
    i32 5, label %dec_label_pc_11770
  ]

dec_label_pc_11694:                               ; preds = %dec_label_pc_11648
  %240 = icmp eq i32 %r6.4.reload, 2, !insn.addr !266
  %spec.select24 = select i1 %240, i32 ptrtoint ([5 x i8]* @global_var_12ac4 to i32), i32 ptrtoint ([5 x i8]* @global_var_12ad8 to i32)
  %241 = icmp eq i32 %fp.3.reload, 0, !insn.addr !267
  %242 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !268
  %243 = inttoptr i32 %spec.select24 to i8*, !insn.addr !269
  %r3.2 = select i1 %241, i32 ptrtoint (i32* @global_var_128e0 to i32), i32 ptrtoint ([10 x i8]* @global_var_128ac to i32)
  %244 = inttoptr i32 %r3.2 to i8*, !insn.addr !270
  %245 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %242, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_12c6c, i32 0, i32 0), i32 %sl.1.reload, i8* %244, i8* %243), !insn.addr !270
  br label %dec_label_pc_11700, !insn.addr !270

dec_label_pc_11700:                               ; preds = %dec_label_pc_11694, %dec_label_pc_117c8, %dec_label_pc_11aac
  %246 = icmp eq i32 %stack_var_-128.1.reload, 0, !insn.addr !271
  %spec.select25 = select i1 %246, i32 ptrtoint ([4 x i8]* @global_var_128bc to i32), i32 ptrtoint ([4 x i8]* @global_var_128b8 to i32)
  %247 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !272
  %248 = inttoptr i32 %spec.select25 to i8*, !insn.addr !273
  %249 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %247, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12ca0, i32 0, i32 0), i8* %248), !insn.addr !273
  %250 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !274
  %251 = call i32 @fflush(%_IO_FILE* %250), !insn.addr !275
  %252 = xor i32 %stack_var_-128.1.reload, 1, !insn.addr !276
  %253 = call i32 @function_12628(i32 %252), !insn.addr !277
  %254 = icmp eq i32 %253, 0, !insn.addr !278
  br i1 %254, label %dec_label_pc_11750, label %dec_label_pc_113d4, !insn.addr !279

dec_label_pc_11750:                               ; preds = %dec_label_pc_11700
  %255 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !280
  %256 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cb0 to i32*), i32 1, i32 26, %_IO_FILE* %255), !insn.addr !281
  call void @exit(i32 0), !insn.addr !282
  unreachable, !insn.addr !282

dec_label_pc_11770:                               ; preds = %dec_label_pc_11648, %dec_label_pc_11648
  %257 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !283
  %258 = call i32 @fwrite(i32* bitcast ([5 x i8]* @global_var_12c50 to i32*), i32 1, i32 4, %_IO_FILE* %257), !insn.addr !284
  %259 = icmp eq i32 %r4.2.reload, 0, !insn.addr !285
  br i1 %259, label %dec_label_pc_11aac, label %dec_label_pc_117a8.lr.ph, !insn.addr !286

dec_label_pc_117a8.lr.ph:                         ; preds = %dec_label_pc_11770
  %260 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !287
  store i32 0, i32* %r4.634.reg2mem
  br label %dec_label_pc_117a8

dec_label_pc_117a8:                               ; preds = %dec_label_pc_117a8.lr.ph, %dec_label_pc_117a8
  %r4.634.reload = load i32, i32* %r4.634.reg2mem
  %261 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !288
  %262 = add i32 %r4.634.reload, %260, !insn.addr !289
  %263 = inttoptr i32 %262 to i8*, !insn.addr !289
  %264 = load i8, i8* %263, align 1, !insn.addr !289
  %265 = zext i8 %264 to i32, !insn.addr !289
  %266 = add nuw i32 %r4.634.reload, 1, !insn.addr !290
  %267 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %261, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_12c58, i32 0, i32 0), i32 %265), !insn.addr !291
  %268 = icmp eq i32 %266, %r4.2.reload, !insn.addr !285
  store i32 %266, i32* %r4.634.reg2mem, !insn.addr !286
  br i1 %268, label %dec_label_pc_11aac, label %dec_label_pc_117a8, !insn.addr !286

dec_label_pc_117c8:                               ; preds = %dec_label_pc_11648
  %269 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !292
  %270 = call i32 @fwrite(i32* bitcast ([10 x i8]* @global_var_12c44 to i32*), i32 1, i32 9, %_IO_FILE* %269), !insn.addr !293
  br label %dec_label_pc_11700, !insn.addr !294

dec_label_pc_117e4:                               ; preds = %dec_label_pc_1113c
  %271 = icmp eq i8 %127, 98, !insn.addr !295
  br i1 %271, label %dec_label_pc_11200, label %dec_label_pc_11150, !insn.addr !296

dec_label_pc_117f8:                               ; preds = %dec_label_pc_11498
  %272 = urem i32 %r4.2.reload, 256, !insn.addr !297
  %273 = call i32 @i2c_smbus_write_i2c_block_data(i32 %165, i32 %193, i32 %272, i32* nonnull %stack_var_-72), !insn.addr !298
  store i32 %273, i32* %r0.3.reg2mem, !insn.addr !298
  br label %dec_label_pc_1180c, !insn.addr !298

dec_label_pc_1180c:                               ; preds = %dec_label_pc_11950, %dec_label_pc_1193c, %dec_label_pc_1188c, %dec_label_pc_117f8, %dec_label_pc_11960
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  %274 = icmp slt i32 %r0.3.reload, 0, !insn.addr !299
  br i1 %274, label %dec_label_pc_1190c, label %dec_label_pc_11820, !insn.addr !300

dec_label_pc_11820:                               ; preds = %dec_label_pc_1180c
  %275 = icmp eq i32 %r8.2.reload, 0, !insn.addr !301
  br i1 %275, label %dec_label_pc_118fc, label %dec_label_pc_11828, !insn.addr !302

dec_label_pc_11828:                               ; preds = %dec_label_pc_11820
  switch i32 %r6.4.reload, label %dec_label_pc_118d4 [
    i32 1, label %dec_label_pc_118e8
    i32 3, label %dec_label_pc_11838
  ]

dec_label_pc_11838:                               ; preds = %dec_label_pc_11828
  %276 = call i32 @i2c_smbus_read_word_data(i32 %165, i32 %193), !insn.addr !303
  store i32 %276, i32* %r4.7.reg2mem, !insn.addr !304
  store i32 %sl.2.reload, i32* %sl.4.reg2mem, !insn.addr !304
  br label %dec_label_pc_11848, !insn.addr !304

dec_label_pc_11848:                               ; preds = %dec_label_pc_118e8, %dec_label_pc_118d4, %dec_label_pc_11838
  %r4.7.reload = load i32, i32* %r4.7.reg2mem
  %277 = call i32 @close(i32 %165), !insn.addr !305
  %278 = icmp slt i32 %r4.7.reload, 0, !insn.addr !306
  br i1 %278, label %dec_label_pc_118c4, label %dec_label_pc_11858, !insn.addr !307

dec_label_pc_11858:                               ; preds = %dec_label_pc_11848
  %sl.4.reload = load i32, i32* %sl.4.reg2mem
  %279 = icmp eq i32 %r4.7.reload, %sl.4.reload, !insn.addr !308
  %280 = icmp eq i32 %r6.4.reload, 3
  %r1.7 = select i1 %280, i32 4, i32 2
  br i1 %279, label %dec_label_pc_118a4, label %dec_label_pc_11860, !insn.addr !309

dec_label_pc_11860:                               ; preds = %dec_label_pc_11858
  %281 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_12dc4, i32 0, i32 0), i32 %r1.7, i32 %sl.4.reload, i32 %r1.7, i32 %r4.7.reload), !insn.addr !310
  br label %dec_label_pc_11884, !insn.addr !310

dec_label_pc_11884:                               ; preds = %dec_label_pc_118c4, %dec_label_pc_118a4, %dec_label_pc_11860
  call void @exit(i32 0), !insn.addr !311
  unreachable, !insn.addr !311

dec_label_pc_1188c:                               ; preds = %dec_label_pc_11498
  %282 = urem i32 %r4.2.reload, 256, !insn.addr !312
  %283 = call i32 @i2c_smbus_write_block_data(i32 %165, i32 %193, i32 %282, i32* nonnull %stack_var_-72), !insn.addr !313
  store i32 %283, i32* %r0.3.reg2mem, !insn.addr !314
  br label %dec_label_pc_1180c, !insn.addr !314

dec_label_pc_118a4:                               ; preds = %dec_label_pc_11858
  %284 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_12e00, i32 0, i32 0), i32 %r1.7, i32 %r4.7.reload), !insn.addr !315
  br label %dec_label_pc_11884, !insn.addr !316

dec_label_pc_118c4:                               ; preds = %dec_label_pc_11848
  %285 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_12da8, i32 0, i32 0)), !insn.addr !317
  br label %dec_label_pc_11884, !insn.addr !318

dec_label_pc_118d4:                               ; preds = %dec_label_pc_11828
  %286 = call i32 @i2c_smbus_read_byte_data(i32 %165, i32 %193), !insn.addr !319
  store i32 %286, i32* %r4.7.reg2mem, !insn.addr !320
  store i32 %sl.2.reload, i32* %sl.4.reg2mem, !insn.addr !320
  br label %dec_label_pc_11848, !insn.addr !320

dec_label_pc_118e8:                               ; preds = %dec_label_pc_11828
  %287 = call i32 @i2c_smbus_read_byte(i32 %165), !insn.addr !321
  store i32 %287, i32* %r4.7.reg2mem, !insn.addr !322
  store i32 %43, i32* %sl.4.reg2mem, !insn.addr !322
  br label %dec_label_pc_11848, !insn.addr !322

dec_label_pc_118fc:                               ; preds = %dec_label_pc_11820
  %288 = call i32 @close(i32 %165), !insn.addr !323
  call void @exit(i32 0), !insn.addr !324
  unreachable, !insn.addr !324

dec_label_pc_1190c:                               ; preds = %dec_label_pc_1180c
  %289 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !325
  %290 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_12d70 to i32*), i32 1, i32 20, %_IO_FILE* %289), !insn.addr !326
  %291 = call i32 @close(i32 %165), !insn.addr !327
  call void @exit(i32 1), !insn.addr !328
  unreachable, !insn.addr !328

dec_label_pc_1193c:                               ; preds = %dec_label_pc_11498
  %292 = urem i32 %sl.2.reload, 65536, !insn.addr !329
  %293 = call i32 @i2c_smbus_write_word_data(i32 %165, i32 %193, i32 %292, i32 %169), !insn.addr !330
  store i32 %293, i32* %r0.3.reg2mem, !insn.addr !331
  br label %dec_label_pc_1180c, !insn.addr !331

dec_label_pc_11950:                               ; preds = %dec_label_pc_11498
  %294 = call i32 @i2c_smbus_write_byte(i32 %165, i32 %193), !insn.addr !332
  store i32 %294, i32* %r0.3.reg2mem, !insn.addr !333
  br label %dec_label_pc_1180c, !insn.addr !333

dec_label_pc_11960:                               ; preds = %dec_label_pc_11498
  %295 = urem i32 %sl.2.reload, 256, !insn.addr !334
  %296 = call i32 @i2c_smbus_write_byte_data(i32 %165, i32 %193, i32 %295, i32 %169), !insn.addr !335
  store i32 %296, i32* %r0.3.reg2mem, !insn.addr !336
  br label %dec_label_pc_1180c, !insn.addr !336

dec_label_pc_119b8:                               ; preds = %dec_label_pc_11414
  %297 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !337
  %298 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cb0 to i32*), i32 1, i32 26, %_IO_FILE* %297), !insn.addr !338
  call void @exit(i32 0), !insn.addr !339
  unreachable, !insn.addr !339

dec_label_pc_119d8:                               ; preds = %dec_label_pc_113f8
  %299 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !340
  %300 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_12ccc to i32*), i32 1, i32 32, %_IO_FILE* %299), !insn.addr !341
  call void @exit(i32 1), !insn.addr !342
  unreachable, !insn.addr !342

dec_label_pc_11a00:                               ; preds = %dec_label_pc_113e4
  %301 = call i32 @i2c_smbus_read_byte_data(i32 %165, i32 %176), !insn.addr !343
  store i32 %301, i32* %r0.2.reg2mem, !insn.addr !344
  br label %dec_label_pc_113f8, !insn.addr !344

dec_label_pc_11a10:                               ; preds = %dec_label_pc_113dc
  %302 = call i32 @i2c_smbus_read_byte(i32 %165), !insn.addr !345
  store i32 %302, i32* %r0.2.reg2mem, !insn.addr !346
  br label %dec_label_pc_113f8, !insn.addr !346

dec_label_pc_11a1c:                               ; preds = %dec_label_pc_112f4
  %303 = and i32 %1, 1048576, !insn.addr !347
  %304 = icmp eq i32 %303, 0, !insn.addr !347
  br i1 %304, label %dec_label_pc_11a28, label %dec_label_pc_113b4, !insn.addr !348

dec_label_pc_11a28:                               ; preds = %dec_label_pc_11a1c
  %305 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !349
  %306 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %305, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a8c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12ab8, i32 0, i32 0)), !insn.addr !350
  br label %dec_label_pc_11374, !insn.addr !351

dec_label_pc_11a4c:                               ; preds = %dec_label_pc_112f4
  %307 = and i32 %1, 262144, !insn.addr !352
  %308 = icmp eq i32 %307, 0, !insn.addr !352
  br i1 %308, label %dec_label_pc_11a58, label %dec_label_pc_113b4, !insn.addr !353

dec_label_pc_11a58:                               ; preds = %dec_label_pc_11a4c
  %309 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !354
  %310 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %309, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a8c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12a7c, i32 0, i32 0)), !insn.addr !355
  br label %dec_label_pc_11374, !insn.addr !356

dec_label_pc_11a7c:                               ; preds = %dec_label_pc_112e0
  %311 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !357
  %312 = call i32* @__errno_location(), !insn.addr !358
  %313 = load i32, i32* %312, align 4, !insn.addr !359
  %314 = call i8* @strerror(i32 %313), !insn.addr !360
  %315 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %311, i8* getelementptr inbounds ([59 x i8], [59 x i8]* @global_var_12a40, i32 0, i32 0), i8* %314), !insn.addr !361
  br label %dec_label_pc_11374, !insn.addr !362

dec_label_pc_11aac:                               ; preds = %dec_label_pc_117a8, %dec_label_pc_11770
  %316 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !363
  %317 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %316, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12c60, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_128a0, i32 0, i32 0)), !insn.addr !364
  br label %dec_label_pc_11700, !insn.addr !365

; uselistorder directives
  uselistorder i32 %r1.7, { 2, 1, 0 }
  uselistorder i32 %sl.4.reload, { 1, 0 }
  uselistorder i32 %r4.7.reload, { 2, 3, 0, 1 }
  uselistorder i32 %stack_var_-128.1.reload, { 1, 0 }
  uselistorder i32 %202, { 2, 1, 0 }
  uselistorder i32 %193, { 0, 6, 4, 1, 3, 2, 5 }
  uselistorder i32 %sl.2.reload, { 3, 2, 0, 1 }
  uselistorder i32 %ip.2, { 1, 0, 2 }
  uselistorder i32 %183, { 1, 2, 0 }
  uselistorder i32 %r0.2.reload, { 1, 2, 0 }
  uselistorder i32 %176, { 1, 0 }
  uselistorder i32 %169, { 1, 0, 2, 3 }
  uselistorder i32 %r4.2.reload, { 3, 2, 0, 1 }
  uselistorder i32 %r6.4.reload, { 5, 8, 1, 9, 7, 2, 4, 3, 6, 0 }
  uselistorder i32 %sl.1.reload, { 1, 2, 0 }
  uselistorder i32 %fp.3.reload, { 2, 1, 4, 3, 0 }
  uselistorder i32 %165, { 11, 12, 0, 10, 8, 1, 2, 3, 5, 7, 4, 6, 9, 13, 14, 15, 16 }
  uselistorder i8 %127, { 1, 0, 3, 2 }
  uselistorder i32 %112, { 1, 3, 0, 2, 4 }
  uselistorder i32 %r6.1.reload, { 1, 2, 0 }
  uselistorder i32 %sl.0.reload, { 2, 1, 0 }
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i32 %r6.0.reload, { 0, 2, 1 }
  uselistorder i32 %77, { 0, 4, 3, 2, 1 }
  uselistorder i8 %68, { 1, 0, 3, 2 }
  uselistorder i32 %62, { 1, 0 }
  uselistorder i8* %61, { 2, 1, 0, 3 }
  uselistorder i32 %fp.2.reload, { 2, 0, 1 }
  uselistorder i32 %43, { 0, 4, 1, 3, 2, 6, 5 }
  uselistorder i32 %28, { 1, 2, 0, 3 }
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %r4.1.reload, { 4, 3, 5, 1, 2, 6, 0 }
  uselistorder i32 %lr.0.reload, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %r1.0.reload, { 1, 5, 4, 3, 2, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 4, 3, 5, 2, 0 }
  uselistorder i32 %r7.0.reload, { 0, 5, 4, 3, 2, 1 }
  uselistorder i32 %r8.0.reload, { 1, 5, 4, 3, 2, 0 }
  uselistorder i32 %sb.0.reload, { 1, 5, 4, 3, 2, 0 }
  uselistorder i32 %fp.0.reload, { 1, 5, 4, 3, 2, 0 }
  uselistorder i8** %stack_var_-100, { 3, 7, 2, 6, 1, 5, 0, 4 }
  uselistorder i32* %lr.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %lr.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r1.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r8.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %sb.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %fp.1.reg2mem, { 2, 7, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r1.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r7.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sb.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r6.0.reg2mem, { 4, 1, 2, 3, 0, 5 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 2, 0, 4, 3 }
  uselistorder i32* %r6.1.reg2mem, { 1, 2, 0, 4, 3 }
  uselistorder i32* %sl.0.reg2mem, { 1, 2, 0, 4, 3 }
  uselistorder i32* %storemerge6.reg2mem, { 1, 2, 4, 0, 5, 3 }
  uselistorder i32* %r6.3.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %r4.2.reg2mem, { 1, 2, 4, 0, 6, 5, 3 }
  uselistorder i32* %r6.4.reg2mem, { 1, 2, 4, 0, 6, 5, 3 }
  uselistorder i32* %sl.1.reg2mem, { 1, 2, 4, 0, 6, 5, 3 }
  uselistorder i32* %fp.3.reg2mem, { 1, 2, 4, 0, 6, 5, 3 }
  uselistorder i32* %r0.2.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %sl.2.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %sl.336.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.435.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.634.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.3.reg2mem, { 5, 1, 3, 4, 0, 2 }
  uselistorder i32* %r4.7.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %sl.4.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 (i32, i32)* @i2c_smbus_read_byte_data, { 1, 0, 2 }
  uselistorder i32* bitcast ([27 x i8]* @global_var_12cb0 to i32*), { 1, 0 }
  uselistorder i32 (i32)* @function_12628, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @i2c_smbus_read_word_data, { 1, 0, 2 }
  uselistorder i8 112, { 2, 0, 1 }
  uselistorder i32 ()* @function_11bc8, { 6, 5, 4, 3, 2, 0, 7, 1 }
  uselistorder i32 ptrtoint ([33 x i8]* @global_var_129d0 to i32), { 0, 2, 1 }
  uselistorder i32 ptrtoint ([28 x i8]* @global_var_12998 to i32), { 0, 2, 1 }
  uselistorder i8 119, { 1, 0 }
  uselistorder i8 115, { 1, 0 }
  uselistorder i8 105, { 1, 0, 3, 2 }
  uselistorder i32 5, { 2, 3, 4, 1, 0, 5 }
  uselistorder i32 %arg2, { 3, 0, 1, 2, 4 }
  uselistorder i32 %arg1, { 3, 1, 4, 7, 2, 6, 0, 8, 9, 5, 10, 11 }
  uselistorder label %dec_label_pc_1180c, { 4, 0, 1, 2, 3 }
  uselistorder label %dec_label_pc_117a8, { 1, 0 }
  uselistorder label %dec_label_pc_11700, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11508, { 1, 0 }
  uselistorder label %dec_label_pc_11498, { 1, 2, 0 }
  uselistorder label %dec_label_pc_113b4, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_11374, { 6, 1, 2, 3, 4, 5, 0, 7 }
  uselistorder label %dec_label_pc_112c4, { 0, 1, 3, 5, 4, 2 }
  uselistorder label %dec_label_pc_11278, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11200, { 1, 0 }
  uselistorder label %dec_label_pc_111cc, { 0, 1, 3, 4, 2 }
  uselistorder label %dec_label_pc_11150, { 2, 4, 1, 3, 0, 5 }
  uselistorder label %dec_label_pc_110b0, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_11088, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_11068, { 1, 0 }
  uselistorder label %dec_label_pc_10fd0, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_10f68, { 3, 0, 1, 2, 4 }
  uselistorder label %dec_label_pc_10f48, { 1, 0 }
  uselistorder label %dec_label_pc_10e68, { 1, 0 }
  uselistorder label %dec_label_pc_10e60, { 1, 0 }
  uselistorder label %dec_label_pc_10e40, { 3, 4, 5, 1, 2, 6, 0 }
  uselistorder label %dec_label_pc_10d94, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11ae8:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !366
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !366
  %2 = call i32 @__libc_start_main(i32 68940, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 75473 to void ()*), void ()* inttoptr (i32 68940 to void ()*), void ()* %1), !insn.addr !366
  call void @abort(), !insn.addr !367
  unreachable, !insn.addr !367
}

define i32 @function_11b0c(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b0c:
  ret i32 %arg1, !insn.addr !368
}

define i32 @function_11b18() local_unnamed_addr {
dec_label_pc_11b18:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_232f4, align 4, !insn.addr !369
  %3 = icmp eq i32 %2, 0, !insn.addr !370
  br i1 %3, label %4, label %dec_label_pc_11b30, !insn.addr !371

; <label>:4:                                      ; preds = %dec_label_pc_11b18
  ret i32 %1, !insn.addr !371

dec_label_pc_11b30:                               ; preds = %dec_label_pc_11b18
  call void @__gmon_start__(), !insn.addr !372
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !372
}

define i32 @function_11b3c() local_unnamed_addr {
dec_label_pc_11b3c:
  ret i32 ptrtoint (%_IO_FILE** @global_var_23300 to i32), !insn.addr !373
}

define i32 @function_11b60(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11b60:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %cpsr_n.02.reg2mem = alloca i1, !insn.addr !374
  %spec.select3.reg2mem = alloca i32, !insn.addr !374
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i1, i1* %1
  %8 = load i32, i32* %0
  %9 = load i32, i32* %0
  %10 = load fp128, fp128* %2
  %11 = load fp128, fp128* %2
  %12 = load double, double* %3
  %13 = load double, double* %3
  br i1 %5, label %dec_label_pc_11b68, label %14, !insn.addr !374

; <label>:14:                                     ; preds = %dec_label_pc_11b60
  %15 = call i32 @unknown_243(), !insn.addr !374
  ret i32 %15, !insn.addr !374

; <label>:16:                                     ; preds = %36, %33
  ret i32 %arg1, !insn.addr !375

dec_label_pc_11b68:                               ; preds = %dec_label_pc_11b60
  br i1 %6, label %17, label %dec_label_pc_11b70, !insn.addr !376

; <label>:17:                                     ; preds = %dec_label_pc_11b68
  %18 = call i32 @unknown_22c0(), !insn.addr !376
  ret i32 %18, !insn.addr !376

dec_label_pc_11b70:                               ; preds = %dec_label_pc_11b68
  %19 = shl i32 %9, %8, !insn.addr !377
  %20 = add i32 %19, %9, !insn.addr !377
  br i1 %4, label %.thread, label %21, !insn.addr !378

.thread:                                          ; preds = %dec_label_pc_11b70
  %spec.select1 = select i1 %7, i32 %20, i32 0
  store i32 %spec.select1, i32* %spec.select3.reg2mem
  br label %dec_label_pc_11b84

; <label>:21:                                     ; preds = %dec_label_pc_11b70
  %22 = mul i32 %20, 4194304, !insn.addr !378
  %23 = sub i32 0, %22
  %24 = sub i32 %23, 1
  %25 = and i32 %20, %24, !insn.addr !378
  %26 = icmp slt i32 %25, 0, !insn.addr !378
  %27 = icmp eq i32 %25, 0, !insn.addr !378
  %28 = icmp slt i32 %25, 1
  %spec.select = select i1 %28, i32 0, i32 %20
  store i32 %spec.select, i32* %spec.select3.reg2mem, !insn.addr !379
  store i1 %26, i1* %cpsr_n.02.reg2mem, !insn.addr !379
  br i1 %27, label %29, label %dec_label_pc_11b84, !insn.addr !379

; <label>:29:                                     ; preds = %21
  %30 = call i32 @unknown_240(i32 ptrtoint (i32* @3 to i32)), !insn.addr !379
  ret i32 %30, !insn.addr !379

dec_label_pc_11b84:                               ; preds = %.thread, %21
  %cpsr_n.02.reload = load i1, i1* %cpsr_n.02.reg2mem
  %spec.select3.reload = load i32, i32* %spec.select3.reg2mem
  %31 = icmp eq i1 %cpsr_n.02.reload, %4, !insn.addr !380
  br i1 %31, label %33, label %32, !insn.addr !380

; <label>:32:                                     ; preds = %dec_label_pc_11b84
  call void @__asm_svclt(i32 18288), !insn.addr !380
  br label %33, !insn.addr !380

; <label>:33:                                     ; preds = %dec_label_pc_11b84, %32
  %34 = call double @__asm_vqrshl.s8(double %13, double %12), !insn.addr !381
  %35 = call double @__asm_vaddhn.i16(fp128 %11, fp128 %10), !insn.addr !382
  br i1 %4, label %16, label %36, !insn.addr !383

; <label>:36:                                     ; preds = %33
  %37 = inttoptr i32 %arg4 to i32*, !insn.addr !383
  store i32 %spec.select3.reload, i32* %37, align 4, !insn.addr !383
  %38 = add i32 %arg4, -4, !insn.addr !383
  %39 = inttoptr i32 %38 to i32*, !insn.addr !383
  br label %16, !insn.addr !383

; uselistorder directives
  uselistorder i32 %20, { 3, 1, 0, 2 }
  uselistorder i32 %9, { 1, 0 }
  uselistorder i1 %4, { 2, 1, 0 }
  uselistorder double* %3, { 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 3, 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %33, { 1, 0 }
  uselistorder label %dec_label_pc_11b84, { 1, 0 }
}

define i32 @function_11b98(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_11b98:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !384
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !384
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !384
  br i1 %2, label %dec_label_pc_11b9a, label %dec_label_pc_11ba2, !insn.addr !384

dec_label_pc_11b9a:                               ; preds = %dec_label_pc_11b98
  %3 = call i32 @function_11b3c(), !insn.addr !385
  %4 = inttoptr i32 %1 to i8*, !insn.addr !386
  store i8 1, i8* %4, align 1, !insn.addr !386
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_11ba2, !insn.addr !386

dec_label_pc_11ba2:                               ; preds = %dec_label_pc_11b98, %dec_label_pc_11b9a
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !387

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11ba2, { 1, 0 }
}

define i32 @function_11ba4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11ba4:
  ret i32 %arg1, !insn.addr !388
}

define i32 @function_11baa(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11baa:
  %0 = alloca i32
  %1 = alloca i1
  %lr.0.off0.reg2mem = alloca i16, !insn.addr !389
  %r0.0.reg2mem = alloca i32, !insn.addr !389
  %merge.reg2mem = alloca i32, !insn.addr !389
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  %6 = load i32, i32* %0
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !389
  br i1 %3, label %7, label %dec_label_pc_11bae, !insn.addr !389

; <label>:7:                                      ; preds = %17, %16, %dec_label_pc_11baa
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !389

dec_label_pc_11bae:                               ; preds = %dec_label_pc_11baa
  %8 = icmp eq i1 %4, %2, !insn.addr !390
  %extract.t = trunc i32 %6 to i16
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !390
  store i16 %extract.t, i16* %lr.0.off0.reg2mem, !insn.addr !390
  br i1 %8, label %16, label %9, !insn.addr !390

; <label>:9:                                      ; preds = %dec_label_pc_11bae
  %10 = add i32 %arg4, -4, !insn.addr !390
  %11 = inttoptr i32 %10 to i32*, !insn.addr !390
  %12 = load i32, i32* %11, align 4, !insn.addr !390
  %13 = add i32 %arg4, -20, !insn.addr !390
  %14 = inttoptr i32 %13 to i32*, !insn.addr !390
  %15 = load i32, i32* %14, align 4, !insn.addr !390
  %extract.t1 = trunc i32 %15 to i16
  store i32 %12, i32* %r0.0.reg2mem, !insn.addr !390
  store i16 %extract.t1, i16* %lr.0.off0.reg2mem, !insn.addr !390
  br label %16, !insn.addr !390

; <label>:16:                                     ; preds = %dec_label_pc_11bae, %9
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !391
  br i1 %4, label %17, label %7, !insn.addr !391

; <label>:17:                                     ; preds = %16
  %lr.0.off0.reload = load i16, i16* %lr.0.off0.reg2mem
  %18 = inttoptr i32 %5 to i16*, !insn.addr !391
  store i16 %lr.0.off0.reload, i16* %18, align 2, !insn.addr !391
  store i32 %r0.0.reload, i32* %merge.reg2mem, !insn.addr !391
  br label %7, !insn.addr !391

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i1 %4, { 1, 0 }
  uselistorder i32* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %16, { 1, 0 }
}

define i32 @function_11bb6() local_unnamed_addr {
dec_label_pc_11bb6:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @function_11b60(i32 %4, i32 %3, i32 %2, i32 %1), !insn.addr !392
  ret i32 %5, !insn.addr !392

; uselistorder directives
  uselistorder i32* %0, { 3, 2, 1, 0 }
}

define i32 @function_11bb8(i32 %arg1) local_unnamed_addr {
dec_label_pc_11bb8:
  %0 = alloca i1
  %1 = load i1, i1* %0
  br i1 %1, label %2, label %dec_label_pc_11bc0, !insn.addr !393

; <label>:2:                                      ; preds = %dec_label_pc_11bb8
  %3 = call i32 @unknown_240(i32 %arg1), !insn.addr !393
  ret i32 %3, !insn.addr !393

dec_label_pc_11bc0:                               ; preds = %dec_label_pc_11bb8
  ret i32 %arg1, !insn.addr !394

; uselistorder directives
  uselistorder i32 (i32)* @unknown_240, { 1, 0 }
}

define i32 @function_11bc4() local_unnamed_addr {
dec_label_pc_11bc4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !395
}

define i32 @function_11bc8() local_unnamed_addr {
dec_label_pc_11bc8:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !396
  %1 = call i32 @fwrite(i32* bitcast ([369 x i8]* @global_var_12720 to i32*), i32 1, i32 368, %_IO_FILE* %0), !insn.addr !397
  call void @exit(i32 1), !insn.addr !398
  unreachable, !insn.addr !398

; uselistorder directives
  uselistorder void (i32)* @exit, { 0, 5, 4, 8, 7, 6, 3, 1, 2, 9 }
}

define i32 @function_11bf4(i32 %arg1) local_unnamed_addr {
dec_label_pc_11bf4:
  %r0.1.reg2mem = alloca i32, !insn.addr !399
  %.reg2mem5 = alloca i32, !insn.addr !399
  %.reg2mem = alloca i32, !insn.addr !399
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !400
  %1 = call i32 @strlen(i8* %0), !insn.addr !400
  %2 = add i32 %1, -1
  %3 = icmp slt i32 %2, 0, !insn.addr !401
  store i32 %2, i32* %r0.1.reg2mem, !insn.addr !402
  br i1 %3, label %dec_label_pc_11c48, label %dec_label_pc_11c08, !insn.addr !402

dec_label_pc_11c08:                               ; preds = %dec_label_pc_11bf4
  %4 = add i32 %2, %arg1
  %5 = inttoptr i32 %4 to i8*
  %6 = load i8, i8* %5, align 1, !insn.addr !403
  store i32 %2, i32* %r0.1.reg2mem
  switch i8 %6, label %dec_label_pc_11c48 [
    i8 32, label %dec_label_pc_11c1c
    i8 10, label %dec_label_pc_11c1c
  ]

dec_label_pc_11c1c:                               ; preds = %dec_label_pc_11c08, %dec_label_pc_11c08
  store i8 0, i8* %5, align 1, !insn.addr !404
  %7 = icmp eq i32 %2, 0, !insn.addr !405
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !406
  br i1 %7, label %dec_label_pc_11c48, label %dec_label_pc_11c28.lr.ph, !insn.addr !406

dec_label_pc_11c28.lr.ph:                         ; preds = %dec_label_pc_11c1c
  %8 = add i32 %1, -2, !insn.addr !407
  store i32 %4, i32* %.reg2mem
  store i32 %8, i32* %.reg2mem5
  br label %dec_label_pc_11c28

dec_label_pc_11c28:                               ; preds = %dec_label_pc_11c28.lr.ph, %dec_label_pc_11c38.backedge
  %.reload6 = load i32, i32* %.reg2mem5
  %.reload = load i32, i32* %.reg2mem
  %9 = add i32 %.reload, -1, !insn.addr !404
  %10 = inttoptr i32 %9 to i8*
  %11 = load i8, i8* %10, align 1, !insn.addr !408
  store i32 %.reload6, i32* %r0.1.reg2mem
  switch i8 %11, label %dec_label_pc_11c48 [
    i8 32, label %dec_label_pc_11c38.backedge
    i8 10, label %dec_label_pc_11c38.backedge
  ]

dec_label_pc_11c38.backedge:                      ; preds = %dec_label_pc_11c28, %dec_label_pc_11c28
  %12 = add i32 %.reload6, -1, !insn.addr !407
  store i8 0, i8* %10, align 1, !insn.addr !404
  %13 = icmp eq i32 %.reload6, 0, !insn.addr !405
  store i32 %9, i32* %.reg2mem, !insn.addr !406
  store i32 %12, i32* %.reg2mem5, !insn.addr !406
  store i32 -1, i32* %r0.1.reg2mem, !insn.addr !406
  br i1 %13, label %dec_label_pc_11c48, label %dec_label_pc_11c28, !insn.addr !406

dec_label_pc_11c48:                               ; preds = %dec_label_pc_11c38.backedge, %dec_label_pc_11c28, %dec_label_pc_11c1c, %dec_label_pc_11c08, %dec_label_pc_11bf4
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %14 = add i32 %r0.1.reload, 2, !insn.addr !409
  ret i32 %14, !insn.addr !410

; uselistorder directives
  uselistorder i32 %.reload6, { 2, 1, 0 }
  uselistorder i32 %2, { 3, 0, 2, 1, 4 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem5, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11c28, { 1, 0 }
}

define i32 @function_11c50(i32 %arg1) local_unnamed_addr {
dec_label_pc_11c50:
  %r4.1.reg2mem = alloca i32, !insn.addr !411
  %r0.0.reg2mem = alloca i32, !insn.addr !411
  %0 = add i32 %arg1, 4, !insn.addr !412
  %1 = inttoptr i32 %0 to i32*, !insn.addr !412
  %2 = load i32, i32* %1, align 4, !insn.addr !412
  %3 = icmp eq i32 %2, 0, !insn.addr !413
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !414
  store i32 %arg1, i32* %r4.1.reg2mem, !insn.addr !414
  br i1 %3, label %dec_label_pc_11c7c, label %dec_label_pc_11c68, !insn.addr !414

dec_label_pc_11c68:                               ; preds = %dec_label_pc_11c50, %dec_label_pc_11c68
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %4 = add i32 %r4.1.reload, 16, !insn.addr !415
  %5 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !416
  call void @free(i32* %5), !insn.addr !416
  %6 = add i32 %r4.1.reload, 20, !insn.addr !417
  %7 = inttoptr i32 %6 to i32*, !insn.addr !417
  %8 = load i32, i32* %7, align 4, !insn.addr !417
  %9 = icmp eq i32 %8, 0, !insn.addr !418
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !419
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !419
  br i1 %9, label %dec_label_pc_11c7c, label %dec_label_pc_11c68, !insn.addr !419

dec_label_pc_11c7c:                               ; preds = %dec_label_pc_11c68, %dec_label_pc_11c50
  %10 = inttoptr i32 %arg1 to i32*, !insn.addr !420
  call void @free(i32* %10), !insn.addr !420
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !420

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder void (i32*)* @free, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11c68, { 1, 0 }
}

define i32 @function_11c88(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11c88:
  %0 = mul i32 %arg2, 16, !insn.addr !421
  %1 = add i32 %0, 128, !insn.addr !422
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !423
  %3 = call i32* @realloc(i32* %2, i32 %1), !insn.addr !423
  %4 = ptrtoint i32* %3 to i32, !insn.addr !423
  %5 = icmp eq i32* %3, null, !insn.addr !424
  br i1 %5, label %dec_label_pc_11cc4, label %dec_label_pc_11ca8, !insn.addr !425

dec_label_pc_11ca8:                               ; preds = %dec_label_pc_11c88
  %6 = add i32 %0, %4, !insn.addr !426
  %7 = inttoptr i32 %6 to i32*, !insn.addr !427
  %8 = call i32* @memset(i32* %7, i32 0, i32 128), !insn.addr !427
  br label %dec_label_pc_11cbc, !insn.addr !427

dec_label_pc_11cbc:                               ; preds = %dec_label_pc_11cc4, %dec_label_pc_11ca8
  ret i32 %4, !insn.addr !428

dec_label_pc_11cc4:                               ; preds = %dec_label_pc_11c88
  %9 = call i32 @function_11c50(i32 %arg1), !insn.addr !429
  br label %dec_label_pc_11cbc, !insn.addr !430

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @function_11cd0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11cd0:
  %.reg2mem = alloca i32, !insn.addr !431
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !432
  %1 = call i32 @strtol(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !432
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !433
  %3 = load i8, i8* %2, align 1, !insn.addr !434
  %4 = icmp ne i8 %3, 0, !insn.addr !435
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !436
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_11d40, label %dec_label_pc_11d08, !insn.addr !437

dec_label_pc_11d08:                               ; preds = %dec_label_pc_11cd0
  %7 = icmp eq i32 %arg2, 0, !insn.addr !438
  %r3.1 = select i1 %7, i32 119, i32 127
  %r2.1 = select i1 %7, i32 3, i32 0
  %8 = icmp slt i32 %1, %r2.1, !insn.addr !439
  %9 = icmp sgt i32 %1, %r3.1, !insn.addr !440
  %narrow = or i1 %9, %8
  %10 = icmp eq i1 %narrow, false, !insn.addr !441
  store i32 %1, i32* %.reg2mem, !insn.addr !442
  br i1 %10, label %dec_label_pc_11d38, label %dec_label_pc_11d68, !insn.addr !442

dec_label_pc_11d38:                               ; preds = %dec_label_pc_11d08, %dec_label_pc_11d68, %dec_label_pc_11d40
  %.reload = load i32, i32* %.reg2mem, !insn.addr !443
  ret i32 %.reload, !insn.addr !443

dec_label_pc_11d40:                               ; preds = %dec_label_pc_11cd0
  %11 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !444
  %12 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12e50 to i32*), i32 1, i32 37, %_IO_FILE* %11), !insn.addr !445
  store i32 -1, i32* %.reg2mem, !insn.addr !446
  br label %dec_label_pc_11d38, !insn.addr !446

dec_label_pc_11d68:                               ; preds = %dec_label_pc_11d08
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !447
  %14 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %13, i8* getelementptr inbounds ([53 x i8], [53 x i8]* @global_var_12e78, i32 0, i32 0), i32 %r2.1, i32 %r3.1), !insn.addr !448
  store i32 -2, i32* %.reg2mem, !insn.addr !449
  br label %dec_label_pc_11d38, !insn.addr !449

; uselistorder directives
  uselistorder i32 %r2.1, { 1, 0 }
  uselistorder i32 %r3.1, { 1, 0 }
  uselistorder i32 %1, { 0, 2, 3, 1 }
  uselistorder i32* %.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32 37, { 0, 2, 1 }
  uselistorder i32 3, { 2, 6, 3, 4, 7, 8, 5, 0, 9, 10, 1, 11 }
  uselistorder i32 (i8*, i8**, i32)* @strtol, { 3, 2, 1, 0, 4, 5 }
  uselistorder label %dec_label_pc_11d38, { 1, 2, 0 }
}

define i32 @function_11d88(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11d88:
  %r4.0.reg2mem = alloca i32, !insn.addr !450
  %0 = ptrtoint i32* %arg2 to i32
  %1 = bitcast i32* %arg2 to i8*, !insn.addr !451
  %2 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %1, i32 %arg3, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12eb0, i32 0, i32 0), i32 %arg1), !insn.addr !451
  %3 = add i32 %arg3, -1, !insn.addr !452
  %4 = add i32 %3, %0, !insn.addr !453
  %5 = inttoptr i32 %4 to i8*, !insn.addr !453
  store i8 0, i8* %5, align 1, !insn.addr !453
  %6 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !454
  %7 = icmp slt i32 %6, 0, !insn.addr !455
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !456
  br i1 %7, label %dec_label_pc_11de4, label %dec_label_pc_11dd8, !insn.addr !456

dec_label_pc_11dd8:                               ; preds = %dec_label_pc_11de4, %dec_label_pc_11e64, %dec_label_pc_11d88
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !457

dec_label_pc_11de4:                               ; preds = %dec_label_pc_11d88
  %8 = call i32* @__errno_location(), !insn.addr !458
  %9 = load i32, i32* %8, align 4, !insn.addr !459
  store i32 %6, i32* %r4.0.reg2mem
  switch i32 %9, label %dec_label_pc_11dd8 [
    i32 20, label %dec_label_pc_11e64
    i32 2, label %dec_label_pc_11e64
  ]

dec_label_pc_11e64:                               ; preds = %dec_label_pc_11de4, %dec_label_pc_11de4
  %10 = call i32 (i8*, i8*, ...) @sprintf(i8* %1, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12ebc, i32 0, i32 0), i32 %arg1), !insn.addr !460
  %11 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !461
  store i32 %11, i32* %r4.0.reg2mem, !insn.addr !462
  br label %dec_label_pc_11dd8, !insn.addr !462

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder label %dec_label_pc_11dd8, { 1, 0, 2 }
}

define i32 @function_11ec4() local_unnamed_addr {
dec_label_pc_11ec4:
  %0 = alloca i32
  %.in.reg2mem = alloca %dirent64*, !insn.addr !463
  %fp.6.reg2mem = alloca i32, !insn.addr !463
  %fp.5.reg2mem = alloca i32, !insn.addr !463
  %r4.1.reg2mem = alloca i32, !insn.addr !463
  %r7.0.in.reg2mem = alloca %_IO_FILE*, !insn.addr !463
  %fp.4.reg2mem = alloca i32, !insn.addr !463
  %r5.1.reg2mem = alloca i32, !insn.addr !463
  %r0.1.in.reg2mem = alloca %dirent64*, !insn.addr !463
  %r5.043.reg2mem = alloca i32, !insn.addr !463
  %fp.344.reg2mem = alloca i32, !insn.addr !463
  %.reg2mem105 = alloca %dirent64*, !insn.addr !463
  %r0.0.reg2mem = alloca i32, !insn.addr !463
  %fp.2.reg2mem = alloca i32, !insn.addr !463
  %fp.1.lcssa.reg2mem = alloca i32, !insn.addr !463
  %fp.0.reg2mem = alloca i32, !insn.addr !463
  %sb.046.reg2mem = alloca i32, !insn.addr !463
  %fp.147.reg2mem = alloca i32, !insn.addr !463
  %.reg2mem = alloca i32, !insn.addr !463
  %1 = load i32, i32* %0
  %stack_var_-948 = alloca i32, align 4
  %stack_var_-956 = alloca i32, align 4
  %stack_var_-552 = alloca i32, align 4
  %stack_var_-808 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-928 = alloca i32, align 4
  %2 = call i32* @calloc(i32 8, i32 16), !insn.addr !464
  %3 = ptrtoint i32* %2 to i32, !insn.addr !464
  %4 = icmp eq i32* %2, null, !insn.addr !465
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !466
  br i1 %4, label %dec_label_pc_12040, label %dec_label_pc_11ee0, !insn.addr !466

dec_label_pc_11ee0:                               ; preds = %dec_label_pc_11ec4
  %5 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_12f40, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0)), !insn.addr !467
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !468
  br i1 %6, label %dec_label_pc_12048, label %dec_label_pc_11ff8.preheader, !insn.addr !469

dec_label_pc_11ff8.preheader:                     ; preds = %dec_label_pc_11ee0
  %7 = bitcast i32* %stack_var_-928 to i8*, !insn.addr !470
  %8 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !470
  %9 = icmp eq i8* %8, null, !insn.addr !471
  store i32 1, i32* %.reg2mem, !insn.addr !472
  store i32 %3, i32* %fp.147.reg2mem, !insn.addr !472
  store i32 0, i32* %sb.046.reg2mem, !insn.addr !472
  store i32 %3, i32* %fp.1.lcssa.reg2mem, !insn.addr !472
  br i1 %9, label %dec_label_pc_12020, label %dec_label_pc_11f10, !insn.addr !472

dec_label_pc_11f10:                               ; preds = %dec_label_pc_11ff8.preheader, %dec_label_pc_11fc0
  %sb.046.reload = load i32, i32* %sb.046.reg2mem
  %fp.147.reload = load i32, i32* %fp.147.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !473
  store i8 0, i8* %10, align 1, !insn.addr !474
  %11 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !475
  store i8 0, i8* %11, align 1, !insn.addr !476
  %12 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !477
  store i8 0, i8* %12, align 1, !insn.addr !478
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %7, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f50, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !479
  %14 = urem i32 %.reload, 8, !insn.addr !480
  %15 = icmp eq i32 %14, 0, !insn.addr !480
  store i32 %fp.147.reload, i32* %fp.0.reg2mem, !insn.addr !481
  br i1 %15, label %dec_label_pc_11f94, label %dec_label_pc_11fa0, !insn.addr !481

dec_label_pc_11f94:                               ; preds = %dec_label_pc_11f10
  %16 = call i32 @function_11c88(i32 %fp.147.reload, i32 %.reload), !insn.addr !482
  %17 = icmp eq i32 %16, 0, !insn.addr !483
  store i32 %16, i32* %fp.0.reg2mem, !insn.addr !484
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !484
  br i1 %17, label %dec_label_pc_12040, label %dec_label_pc_11fa0, !insn.addr !484

dec_label_pc_11fa0:                               ; preds = %dec_label_pc_11f10, %dec_label_pc_11f94
  %18 = ptrtoint i8* %10 to i32, !insn.addr !473
  %19 = add i32 %18, 1, !insn.addr !485
  %20 = ptrtoint i8* %11 to i32, !insn.addr !475
  %21 = add i32 %20, 1, !insn.addr !486
  %22 = ptrtoint i8* %12 to i32, !insn.addr !477
  %23 = add i32 %22, 1, !insn.addr !487
  %24 = add i32 %23, %21, !insn.addr !488
  %fp.0.reload = load i32, i32* %fp.0.reg2mem
  %25 = add i32 %24, %19, !insn.addr !489
  %26 = call i32* @malloc(i32 %25), !insn.addr !490
  %27 = icmp eq i32* %26, null, !insn.addr !491
  store i32 %fp.0.reload, i32* %fp.2.reg2mem, !insn.addr !492
  br i1 %27, label %dec_label_pc_12034, label %dec_label_pc_11fc0, !insn.addr !492

dec_label_pc_11fc0:                               ; preds = %dec_label_pc_11fa0
  %28 = inttoptr i32 %23 to i8*, !insn.addr !493
  %29 = add i32 %fp.0.reload, %sb.046.reload, !insn.addr !494
  %30 = ptrtoint i32* %26 to i32, !insn.addr !490
  %31 = load i32, i32* %stack_var_-296, align 4, !insn.addr !495
  %32 = inttoptr i32 %29 to i32*, !insn.addr !496
  store i32 %31, i32* %32, align 4, !insn.addr !496
  %33 = add i32 %sb.046.reload, 16, !insn.addr !497
  %34 = bitcast i32* %26 to i8*, !insn.addr !498
  %35 = inttoptr i32 %21 to i8*, !insn.addr !498
  %36 = call i8* @strcpy(i8* %34, i8* %35), !insn.addr !498
  %37 = ptrtoint i8* %36 to i32, !insn.addr !498
  %38 = add i32 %29, 4, !insn.addr !499
  %39 = inttoptr i32 %38 to i32*, !insn.addr !499
  store i32 %37, i32* %39, align 4, !insn.addr !499
  %40 = add i32 %21, %30, !insn.addr !500
  %41 = inttoptr i32 %40 to i8*, !insn.addr !501
  %42 = call i8* @strcpy(i8* %41, i8* %28), !insn.addr !501
  %43 = ptrtoint i8* %42 to i32, !insn.addr !501
  %44 = add i32 %29, 8, !insn.addr !502
  %45 = inttoptr i32 %44 to i32*, !insn.addr !502
  store i32 %43, i32* %45, align 4, !insn.addr !502
  %46 = add i32 %24, %30, !insn.addr !503
  %47 = inttoptr i32 %46 to i8*, !insn.addr !504
  %48 = inttoptr i32 %19 to i8*, !insn.addr !504
  %49 = call i8* @strcpy(i8* %47, i8* %48), !insn.addr !504
  %50 = ptrtoint i8* %49 to i32, !insn.addr !504
  %51 = add i32 %29, 12, !insn.addr !505
  %52 = inttoptr i32 %51 to i32*, !insn.addr !505
  store i32 %50, i32* %52, align 4, !insn.addr !505
  %53 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !470
  %54 = add i32 %.reload, 1, !insn.addr !506
  %55 = icmp eq i8* %53, null, !insn.addr !471
  store i32 %54, i32* %.reg2mem, !insn.addr !472
  store i32 %fp.0.reload, i32* %fp.147.reg2mem, !insn.addr !472
  store i32 %33, i32* %sb.046.reg2mem, !insn.addr !472
  store i32 %fp.0.reload, i32* %fp.1.lcssa.reg2mem, !insn.addr !472
  br i1 %55, label %dec_label_pc_12020, label %dec_label_pc_11f10, !insn.addr !472

dec_label_pc_12020:                               ; preds = %dec_label_pc_11fc0, %dec_label_pc_11ff8.preheader
  %fp.1.lcssa.reload = load i32, i32* %fp.1.lcssa.reg2mem
  %56 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !507
  ret i32 %fp.1.lcssa.reload, !insn.addr !508

dec_label_pc_12034:                               ; preds = %dec_label_pc_11fa0, %dec_label_pc_12214
  %fp.2.reload = load i32, i32* %fp.2.reg2mem
  %57 = call i32 @function_11c50(i32 %fp.2.reload), !insn.addr !509
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !509
  br label %dec_label_pc_12040, !insn.addr !509

dec_label_pc_12040:                               ; preds = %dec_label_pc_11f94, %dec_label_pc_12200, %dec_label_pc_11ec4, %dec_label_pc_120b0, %dec_label_pc_120c0, %dec_label_pc_12048, %dec_label_pc_12034, %dec_label_pc_12264
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !510

dec_label_pc_12048:                               ; preds = %dec_label_pc_11ee0
  %58 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12f58, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0)), !insn.addr !511
  %59 = icmp eq %_IO_FILE* %58, null, !insn.addr !512
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !513
  br i1 %59, label %dec_label_pc_12040, label %dec_label_pc_12084.preheader, !insn.addr !513

dec_label_pc_12084.preheader:                     ; preds = %dec_label_pc_12048
  %60 = bitcast i32* %stack_var_-296 to i8*
  %61 = bitcast i32* %stack_var_-808 to i8*
  br label %dec_label_pc_12084

dec_label_pc_12068:                               ; preds = %dec_label_pc_12084
  %62 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %60, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12f68, i32 0, i32 0), i32* nonnull %stack_var_-552, i32* nonnull %stack_var_-808), !insn.addr !514
  %63 = call i32 @strcasecmp(i8* nonnull %61, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_12f80, i32 0, i32 0)), !insn.addr !515
  %64 = icmp eq i32 %63, 0, !insn.addr !516
  br i1 %64, label %dec_label_pc_120c0, label %dec_label_pc_12084, !insn.addr !517

dec_label_pc_12084:                               ; preds = %dec_label_pc_12084.preheader, %dec_label_pc_12068
  %65 = call i8* @fgets(i8* nonnull %60, i32 255, %_IO_FILE* nonnull %58), !insn.addr !518
  %66 = icmp eq i8* %65, null, !insn.addr !519
  br i1 %66, label %dec_label_pc_120b0, label %dec_label_pc_12068, !insn.addr !520

dec_label_pc_120b0:                               ; preds = %dec_label_pc_12084
  %67 = call i32 @fclose(%_IO_FILE* nonnull %58), !insn.addr !521
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !521
  br label %dec_label_pc_12040, !insn.addr !521

dec_label_pc_120c0:                               ; preds = %dec_label_pc_12068
  %68 = ptrtoint i32* %stack_var_-552 to i32, !insn.addr !522
  %69 = call i32 @fclose(%_IO_FILE* nonnull %58), !insn.addr !523
  %70 = bitcast i32* %stack_var_-552 to i8*, !insn.addr !524
  %71 = call i32 @strlen(i8* nonnull %70), !insn.addr !524
  %72 = add i32 %71, %68, !insn.addr !525
  %73 = inttoptr i32 %72 to i32*, !insn.addr !526
  store i32 1634493231, i32* %73, align 4, !insn.addr !526
  %74 = add i32 %72, 4, !insn.addr !527
  %75 = inttoptr i32 %74 to i32*, !insn.addr !527
  store i32 1764717427, i32* %75, align 4, !insn.addr !527
  %76 = add i32 %72, 8, !insn.addr !528
  %77 = inttoptr i32 %76 to i32*, !insn.addr !528
  store i32 1680696114, i32* %77, align 4, !insn.addr !528
  %78 = add i32 %72, 12, !insn.addr !529
  %79 = inttoptr i32 %78 to i16*, !insn.addr !529
  store i16 30309, i16* %79, align 2, !insn.addr !529
  %80 = add i32 %72, 14, !insn.addr !530
  %81 = inttoptr i32 %80 to i8*, !insn.addr !530
  store i8 0, i8* %81, align 1, !insn.addr !530
  %82 = call %__dirstream* @opendir(i8* nonnull %70), !insn.addr !531
  %83 = icmp eq %__dirstream* %82, null, !insn.addr !532
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !533
  br i1 %83, label %dec_label_pc_12040, label %dec_label_pc_1211c.preheader, !insn.addr !533

dec_label_pc_1211c.preheader:                     ; preds = %dec_label_pc_120c0
  %84 = call %dirent64* @readdir64(%__dirstream* nonnull %82), !insn.addr !534
  %85 = icmp eq %dirent64* %84, null, !insn.addr !535
  store i32 %3, i32* %fp.6.reg2mem, !insn.addr !536
  br i1 %85, label %dec_label_pc_12264, label %dec_label_pc_1212c.preheader.lr.ph, !insn.addr !536

dec_label_pc_1212c.preheader.lr.ph:               ; preds = %dec_label_pc_1211c.preheader
  %86 = bitcast i32* %stack_var_-928 to i8*
  %87 = urem i32 %1, 2
  %88 = icmp eq i32 %87, 0
  %89 = and i32 %1, 8257536
  %90 = icmp eq i32 %89, 0
  %spec.select11 = select i1 %90, i32 0, i32 24
  %spec.select = select i1 %88, i32 %spec.select11, i32 16
  store %dirent64* %84, %dirent64** %.reg2mem105
  store i32 %3, i32* %fp.344.reg2mem
  store i32 0, i32* %r5.043.reg2mem
  br label %dec_label_pc_1212c.preheader

dec_label_pc_1212c.preheader:                     ; preds = %dec_label_pc_1212c.preheader.lr.ph, %dec_label_pc_1211c.backedge
  %r5.043.reload = load i32, i32* %r5.043.reg2mem
  %fp.344.reload = load i32, i32* %fp.344.reg2mem
  %.reload106 = load %dirent64*, %dirent64** %.reg2mem105
  store %dirent64* %.reload106, %dirent64** %r0.1.in.reg2mem
  store i32 %r5.043.reload, i32* %r5.1.reg2mem
  store i32 %fp.344.reload, i32* %fp.4.reg2mem
  br label %dec_label_pc_1212c

dec_label_pc_1212c:                               ; preds = %dec_label_pc_1212c.preheader, %dec_label_pc_12234
  %fp.4.reload = load i32, i32* %fp.4.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.1.in.reload = load %dirent64*, %dirent64** %r0.1.in.reg2mem
  %r0.1 = ptrtoint %dirent64* %r0.1.in.reload to i32
  %91 = add i32 %r0.1, 19, !insn.addr !537
  %92 = inttoptr i32 %91 to i8*, !insn.addr !537
  %93 = load i8, i8* %92, align 1, !insn.addr !537
  %94 = icmp eq i8 %93, 46, !insn.addr !538
  br i1 %94, label %dec_label_pc_12274, label %dec_label_pc_12138, !insn.addr !539

dec_label_pc_12138:                               ; preds = %dec_label_pc_12274, %dec_label_pc_12288, %dec_label_pc_1212c
  %95 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %60, i32 255, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_12f88, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %92), !insn.addr !540
  %96 = icmp sgt i32 %95, 254, !insn.addr !541
  br i1 %96, label %dec_label_pc_12298, label %dec_label_pc_12160, !insn.addr !541

dec_label_pc_12160:                               ; preds = %dec_label_pc_12138
  %97 = call %_IO_FILE* @fopen64(i8* nonnull %60, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0)), !insn.addr !542
  %98 = icmp eq %_IO_FILE* %97, null, !insn.addr !543
  store %_IO_FILE* %97, %_IO_FILE** %r7.0.in.reg2mem, !insn.addr !544
  br i1 %98, label %dec_label_pc_122b8, label %dec_label_pc_12178, !insn.addr !544

dec_label_pc_12178:                               ; preds = %dec_label_pc_12438, %dec_label_pc_122dc, %dec_label_pc_12160
  %r7.0.in.reload = load %_IO_FILE*, %_IO_FILE** %r7.0.in.reg2mem
  %99 = call i8* @fgets(i8* nonnull %86, i32 120, %_IO_FILE* nonnull %r7.0.in.reload), !insn.addr !545
  %100 = call i32 @fclose(%_IO_FILE* nonnull %r7.0.in.reload), !insn.addr !546
  %101 = icmp eq i8* %99, null, !insn.addr !547
  br i1 %101, label %dec_label_pc_12448, label %dec_label_pc_121a0, !insn.addr !548

dec_label_pc_121a0:                               ; preds = %dec_label_pc_12178
  %102 = call i8* @strchr(i8* nonnull %86, i32 10), !insn.addr !549
  %103 = icmp eq i8* %102, null, !insn.addr !550
  br i1 %103, label %105, label %104, !insn.addr !551

; <label>:104:                                    ; preds = %dec_label_pc_121a0
  store i8 0, i8* %102, align 1, !insn.addr !551
  br label %105, !insn.addr !551

; <label>:105:                                    ; preds = %dec_label_pc_121a0, %104
  %106 = call i32 (i8*, i8*, ...) @sscanf(i8* %92, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f50, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !552
  %107 = icmp eq i32 %106, 0, !insn.addr !553
  br i1 %107, label %dec_label_pc_1211c.backedge, label %dec_label_pc_121d4, !insn.addr !554

dec_label_pc_121d4:                               ; preds = %105
  %108 = call i32 @strncmp(i8* nonnull %86, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_12ffc, i32 0, i32 0), i32 4), !insn.addr !555
  %109 = icmp eq i32 %108, 0, !insn.addr !556
  store i32 8, i32* %r4.1.reg2mem, !insn.addr !557
  br i1 %109, label %dec_label_pc_121f4, label %dec_label_pc_123d8, !insn.addr !557

dec_label_pc_121f4:                               ; preds = %dec_label_pc_123d8, %dec_label_pc_121d4, %dec_label_pc_123f8
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %110 = add i32 %r5.1.reload, 1, !insn.addr !558
  %111 = urem i32 %110, 8, !insn.addr !559
  %112 = icmp eq i32 %111, 0, !insn.addr !559
  store i32 %fp.4.reload, i32* %fp.5.reg2mem, !insn.addr !560
  br i1 %112, label %dec_label_pc_12200, label %dec_label_pc_12214, !insn.addr !560

dec_label_pc_12200:                               ; preds = %dec_label_pc_121f4
  %113 = call i32 @function_11c88(i32 %fp.4.reload, i32 %110), !insn.addr !561
  %114 = icmp eq i32 %113, 0, !insn.addr !562
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !563
  store i32 %113, i32* %fp.5.reg2mem, !insn.addr !563
  br i1 %114, label %dec_label_pc_12040, label %dec_label_pc_12214, !insn.addr !563

dec_label_pc_12214:                               ; preds = %dec_label_pc_121f4, %dec_label_pc_12200
  %fp.5.reload = load i32, i32* %fp.5.reg2mem
  %115 = load i32, i32* %stack_var_-956, align 4, !insn.addr !564
  %116 = mul i32 %r5.1.reload, 16, !insn.addr !565
  %117 = add i32 %fp.5.reload, %116, !insn.addr !565
  %118 = inttoptr i32 %117 to i32*, !insn.addr !566
  store i32 %115, i32* %118, align 4, !insn.addr !566
  %119 = call i8* @__strdup(i8* nonnull %86), !insn.addr !567
  %120 = ptrtoint i8* %119 to i32, !insn.addr !567
  %121 = icmp eq i8* %119, null, !insn.addr !568
  %122 = add i32 %117, 4, !insn.addr !569
  %123 = inttoptr i32 %122 to i32*, !insn.addr !569
  store i32 %120, i32* %123, align 4, !insn.addr !569
  store i32 %fp.5.reload, i32* %fp.2.reg2mem, !insn.addr !570
  br i1 %121, label %dec_label_pc_12034, label %dec_label_pc_12234, !insn.addr !570

dec_label_pc_12234:                               ; preds = %dec_label_pc_12214
  %124 = add i32 %r4.1.reload, ptrtoint ([10 x i8*]* @global_var_12e28 to i32), !insn.addr !571
  %125 = inttoptr i32 %124 to i32*, !insn.addr !571
  %126 = load i32, i32* %125, align 8, !insn.addr !571
  %127 = add i32 %r4.1.reload, add (i32 ptrtoint ([10 x i8*]* @global_var_12e28 to i32), i32 4), !insn.addr !572
  %128 = inttoptr i32 %127 to i32*, !insn.addr !572
  %129 = load i32, i32* %128, align 4, !insn.addr !572
  %130 = add i32 %117, 8, !insn.addr !573
  %131 = inttoptr i32 %130 to i32*, !insn.addr !573
  store i32 %126, i32* %131, align 4, !insn.addr !573
  %132 = add i32 %117, 12, !insn.addr !574
  %133 = inttoptr i32 %132 to i32*, !insn.addr !574
  store i32 %129, i32* %133, align 4, !insn.addr !574
  %134 = call %dirent64* @readdir64(%__dirstream* nonnull %82), !insn.addr !575
  %135 = icmp eq %dirent64* %134, null, !insn.addr !576
  store %dirent64* %134, %dirent64** %r0.1.in.reg2mem, !insn.addr !577
  store i32 %110, i32* %r5.1.reg2mem, !insn.addr !577
  store i32 %fp.5.reload, i32* %fp.4.reg2mem, !insn.addr !577
  store i32 %fp.5.reload, i32* %fp.6.reg2mem, !insn.addr !577
  br i1 %135, label %dec_label_pc_12264, label %dec_label_pc_1212c, !insn.addr !577

dec_label_pc_12264:                               ; preds = %dec_label_pc_1211c.backedge, %dec_label_pc_12234, %dec_label_pc_1211c.preheader
  %fp.6.reload = load i32, i32* %fp.6.reg2mem
  %136 = call i32 @closedir(%__dirstream* nonnull %82), !insn.addr !578
  store i32 %fp.6.reload, i32* %r0.0.reg2mem, !insn.addr !579
  br label %dec_label_pc_12040, !insn.addr !579

dec_label_pc_12274:                               ; preds = %dec_label_pc_1212c
  %137 = add i32 %r0.1, 20, !insn.addr !580
  %138 = inttoptr i32 %137 to i8*, !insn.addr !580
  %139 = load i8, i8* %138, align 1, !insn.addr !580
  switch i8 %139, label %dec_label_pc_12138 [
    i8 0, label %dec_label_pc_1211c.backedge
    i8 46, label %dec_label_pc_12288
  ]

dec_label_pc_12288:                               ; preds = %dec_label_pc_12274
  %140 = add i32 %r0.1, 21, !insn.addr !581
  %141 = inttoptr i32 %140 to i8*, !insn.addr !581
  %142 = load i8, i8* %141, align 1, !insn.addr !581
  %143 = icmp eq i8 %142, 0, !insn.addr !582
  br i1 %143, label %dec_label_pc_1211c.backedge, label %dec_label_pc_12138, !insn.addr !583

dec_label_pc_12298:                               ; preds = %dec_label_pc_122f4, %dec_label_pc_122b8, %dec_label_pc_12138
  %144 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !584
  %145 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %144, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12f94, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !585
  br label %dec_label_pc_1211c.backedge, !insn.addr !586

dec_label_pc_1211c.backedge:                      ; preds = %dec_label_pc_12274, %dec_label_pc_12318, %dec_label_pc_12288, %105, %dec_label_pc_12328.preheader, %dec_label_pc_12328.backedge, %dec_label_pc_12298, %dec_label_pc_12448
  %146 = call %dirent64* @readdir64(%__dirstream* nonnull %82), !insn.addr !534
  %147 = icmp eq %dirent64* %146, null, !insn.addr !535
  store %dirent64* %146, %dirent64** %.reg2mem105, !insn.addr !536
  store i32 %fp.4.reload, i32* %fp.344.reg2mem, !insn.addr !536
  store i32 %r5.1.reload, i32* %r5.043.reg2mem, !insn.addr !536
  store i32 %fp.4.reload, i32* %fp.6.reg2mem, !insn.addr !536
  br i1 %147, label %dec_label_pc_12264, label %dec_label_pc_1212c.preheader, !insn.addr !536

dec_label_pc_122b8:                               ; preds = %dec_label_pc_12160
  %148 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %60, i32 255, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12fa8, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %92), !insn.addr !587
  %149 = icmp sgt i32 %148, 254, !insn.addr !588
  br i1 %149, label %dec_label_pc_12298, label %dec_label_pc_122dc, !insn.addr !588

dec_label_pc_122dc:                               ; preds = %dec_label_pc_122b8
  %150 = call %_IO_FILE* @fopen64(i8* nonnull %60, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0)), !insn.addr !589
  %151 = icmp eq %_IO_FILE* %150, null, !insn.addr !590
  store %_IO_FILE* %150, %_IO_FILE** %r7.0.in.reg2mem, !insn.addr !591
  br i1 %151, label %dec_label_pc_122f4, label %dec_label_pc_12178, !insn.addr !591

dec_label_pc_122f4:                               ; preds = %dec_label_pc_122dc
  %152 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %60, i32 255, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12fbc, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %92), !insn.addr !592
  %153 = icmp sgt i32 %152, 254, !insn.addr !593
  br i1 %153, label %dec_label_pc_12298, label %dec_label_pc_12318, !insn.addr !593

dec_label_pc_12318:                               ; preds = %dec_label_pc_122f4
  %154 = call %__dirstream* @opendir(i8* nonnull %60), !insn.addr !594
  %155 = icmp eq %__dirstream* %154, null, !insn.addr !595
  br i1 %155, label %dec_label_pc_1211c.backedge, label %dec_label_pc_12328.preheader, !insn.addr !596

dec_label_pc_12328.preheader:                     ; preds = %dec_label_pc_12318
  %156 = call %dirent64* @readdir64(%__dirstream* nonnull %154), !insn.addr !597
  %157 = icmp eq %dirent64* %156, null, !insn.addr !598
  store %dirent64* %156, %dirent64** %.in.reg2mem, !insn.addr !599
  br i1 %157, label %dec_label_pc_1211c.backedge, label %dec_label_pc_12348, !insn.addr !599

dec_label_pc_12348:                               ; preds = %dec_label_pc_12328.preheader, %dec_label_pc_12328.backedge
  %.in.reload = load %dirent64*, %dirent64** %.in.reg2mem
  %158 = ptrtoint %dirent64* %.in.reload to i32
  %159 = add i32 %158, 19, !insn.addr !600
  %160 = inttoptr i32 %159 to i8*, !insn.addr !601
  %161 = load i8, i8* %160, align 1, !insn.addr !601
  %162 = icmp eq i8 %161, 46, !insn.addr !602
  br i1 %162, label %dec_label_pc_123b4, label %dec_label_pc_12358, !insn.addr !603

dec_label_pc_12358:                               ; preds = %dec_label_pc_123b4, %dec_label_pc_123c8, %dec_label_pc_12348
  %163 = call i32 @strncmp(i8* %160, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_12fcc, i32 0, i32 0), i32 4), !insn.addr !604
  %164 = icmp eq i32 %163, 0, !insn.addr !605
  br i1 %164, label %dec_label_pc_12364, label %dec_label_pc_12328.backedge, !insn.addr !606

dec_label_pc_12364:                               ; preds = %dec_label_pc_12358
  %165 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %60, i32 255, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_12fd4, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %92, i8* %160), !insn.addr !607
  %166 = icmp slt i32 %165, 255, !insn.addr !608
  br i1 %166, label %dec_label_pc_12438, label %dec_label_pc_123a0, !insn.addr !608

dec_label_pc_123a0:                               ; preds = %dec_label_pc_12364
  %167 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !609
  %168 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %167, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12f94, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !610
  br label %dec_label_pc_12328.backedge, !insn.addr !611

dec_label_pc_12328.backedge:                      ; preds = %dec_label_pc_123a0, %dec_label_pc_123c8, %dec_label_pc_12438, %dec_label_pc_12358, %dec_label_pc_123b4
  %169 = call %dirent64* @readdir64(%__dirstream* nonnull %154), !insn.addr !597
  %170 = icmp eq %dirent64* %169, null, !insn.addr !598
  store %dirent64* %169, %dirent64** %.in.reg2mem, !insn.addr !599
  br i1 %170, label %dec_label_pc_1211c.backedge, label %dec_label_pc_12348, !insn.addr !599

dec_label_pc_123b4:                               ; preds = %dec_label_pc_12348
  %171 = add i32 %158, 20, !insn.addr !612
  %172 = inttoptr i32 %171 to i8*, !insn.addr !612
  %173 = load i8, i8* %172, align 1, !insn.addr !612
  switch i8 %173, label %dec_label_pc_12358 [
    i8 0, label %dec_label_pc_12328.backedge
    i8 46, label %dec_label_pc_123c8
  ]

dec_label_pc_123c8:                               ; preds = %dec_label_pc_123b4
  %174 = add i32 %158, 21, !insn.addr !613
  %175 = inttoptr i32 %174 to i8*, !insn.addr !613
  %176 = load i8, i8* %175, align 1, !insn.addr !613
  %177 = icmp eq i8 %176, 0, !insn.addr !614
  br i1 %177, label %dec_label_pc_12328.backedge, label %dec_label_pc_12358, !insn.addr !615

dec_label_pc_123d8:                               ; preds = %dec_label_pc_121d4
  %178 = load i32, i32* %stack_var_-956, align 4, !insn.addr !616
  %179 = call i32 @function_11d88(i32 %178, i32* nonnull %stack_var_-948, i32 20, i32 1), !insn.addr !617
  %180 = icmp slt i32 %179, 0, !insn.addr !618
  %181 = icmp eq i1 %180, false, !insn.addr !619
  store i32 32, i32* %r4.1.reg2mem, !insn.addr !619
  br i1 %181, label %dec_label_pc_123f8, label %dec_label_pc_121f4, !insn.addr !619

dec_label_pc_123f8:                               ; preds = %dec_label_pc_123d8
  %182 = call i32 (i32, i32, ...) @ioctl(i32 %179, i32 1797), !insn.addr !620
  %183 = icmp slt i32 %182, 0, !insn.addr !621
  %184 = icmp eq i1 %183, false, !insn.addr !622
  %r4.6 = select i1 %184, i32 %spec.select, i32 32
  %185 = call i32 @close(i32 %179), !insn.addr !623
  store i32 %r4.6, i32* %r4.1.reg2mem, !insn.addr !624
  br label %dec_label_pc_121f4, !insn.addr !624

dec_label_pc_12438:                               ; preds = %dec_label_pc_12364
  %186 = call %_IO_FILE* @fopen64(i8* nonnull %60, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0)), !insn.addr !625
  %187 = icmp eq %_IO_FILE* %186, null, !insn.addr !626
  store %_IO_FILE* %186, %_IO_FILE** %r7.0.in.reg2mem, !insn.addr !627
  br i1 %187, label %dec_label_pc_12328.backedge, label %dec_label_pc_12178, !insn.addr !627

dec_label_pc_12448:                               ; preds = %dec_label_pc_12178
  %188 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !628
  %189 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %188, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12fec, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !629
  br label %dec_label_pc_1211c.backedge, !insn.addr !630

; uselistorder directives
  uselistorder %__dirstream* %154, { 1, 0, 2 }
  uselistorder i32 %117, { 0, 1, 3, 2 }
  uselistorder i32 %fp.5.reload, { 0, 3, 2, 1 }
  uselistorder i32 %110, { 0, 2, 1 }
  uselistorder i32 %r4.1.reload, { 1, 0 }
  uselistorder %_IO_FILE* %r7.0.in.reload, { 1, 0 }
  uselistorder i8* %92, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %r0.1, { 2, 0, 1 }
  uselistorder i32 %r5.1.reload, { 2, 1, 0 }
  uselistorder i32 %fp.4.reload, { 0, 3, 2, 1 }
  uselistorder %__dirstream* %82, { 3, 1, 2, 0, 4 }
  uselistorder i32 %72, { 4, 3, 2, 1, 0 }
  uselistorder i8* %60, { 7, 6, 5, 4, 3, 2, 1, 0, 9, 8 }
  uselistorder %_IO_FILE* %58, { 1, 0, 2, 3 }
  uselistorder i32 %29, { 1, 2, 3, 0 }
  uselistorder i32* %26, { 0, 2, 1 }
  uselistorder i32 %fp.0.reload, { 1, 3, 2, 0 }
  uselistorder i32 %23, { 1, 0 }
  uselistorder i32 %21, { 0, 2, 1 }
  uselistorder i32 %19, { 1, 0 }
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %11, { 1, 0 }
  uselistorder i8* %10, { 1, 0 }
  uselistorder i32 %.reload, { 1, 0, 2 }
  uselistorder i32 %fp.147.reload, { 1, 0 }
  uselistorder i8* %7, { 5, 2, 3, 4, 1, 0 }
  uselistorder %_IO_FILE* %5, { 1, 2, 0, 3 }
  uselistorder i32 %3, { 1, 0, 4, 3, 5, 6, 7, 2 }
  uselistorder i32* %stack_var_-296, { 2, 0, 1, 3, 5, 4 }
  uselistorder i32* %stack_var_-552, { 2, 3, 4, 5, 6, 0, 1 }
  uselistorder i32* %stack_var_-956, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.147.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.046.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 8, 2, 5, 4, 6, 0, 7, 1, 3 }
  uselistorder %dirent64** %.reg2mem105, { 1, 0, 2 }
  uselistorder i32* %fp.344.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.043.reg2mem, { 1, 0, 2 }
  uselistorder %dirent64** %r0.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %fp.4.reg2mem, { 2, 0, 1 }
  uselistorder %_IO_FILE** %r7.0.in.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %fp.5.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.6.reg2mem, { 1, 0, 2, 3 }
  uselistorder %dirent64** %.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 32, { 1, 0, 2, 3 }
  uselistorder i1 false, { 5, 6, 2, 0, 3, 4, 1 }
  uselistorder i32 (i32, i32*, i32, i32)* @function_11d88, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12f94, i32 0, i32 0), { 1, 0 }
  uselistorder i32 (i8*, i8*, i32)* @strncmp, { 1, 0, 2 }
  uselistorder i32 (i8*, i32, i8*, ...)* @snprintf, { 0, 2, 4, 3, 1, 5 }
  uselistorder i8 46, { 0, 2, 1, 3 }
  uselistorder %dirent64* null, { 2, 1, 4, 3, 0 }
  uselistorder %dirent64* (%__dirstream*)* @readdir64, { 2, 1, 4, 3, 0, 5 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i32 255, { 1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 3, 2, 1, 0, 4 }
  uselistorder i32 12, { 1, 2, 3, 4, 5, 0 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 0, 3 }
  uselistorder i32 (i32, i32)* @function_11c88, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i32)* @strrchr, { 2, 1, 0, 3 }
  uselistorder i32 9, { 1, 2, 0, 3 }
  uselistorder i32 120, { 1, 2, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 4, 3, 2, 5 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13114, i32 0, i32 0), { 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 8, 2, 0, 9, 10, 3, 7, 4, 5, 6, 1 }
  uselistorder label %dec_label_pc_12328.backedge, { 2, 1, 4, 0, 3 }
  uselistorder label %dec_label_pc_12358, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12348, { 1, 0 }
  uselistorder label %dec_label_pc_1211c.backedge, { 7, 5, 4, 1, 6, 2, 0, 3 }
  uselistorder label %dec_label_pc_12214, { 1, 0 }
  uselistorder label %dec_label_pc_121f4, { 2, 0, 1 }
  uselistorder label %105, { 1, 0 }
  uselistorder label %dec_label_pc_12138, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1212c, { 1, 0 }
  uselistorder label %dec_label_pc_1212c.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_12084, { 1, 0 }
  uselistorder label %dec_label_pc_12040, { 7, 1, 4, 3, 5, 6, 0, 2 }
  uselistorder label %dec_label_pc_12034, { 1, 0 }
  uselistorder label %dec_label_pc_11fa0, { 1, 0 }
  uselistorder label %dec_label_pc_11f10, { 1, 0 }
}

define i32 @function_12468(i32 %arg1) local_unnamed_addr {
dec_label_pc_12468:
  %r5.3.reg2mem = alloca i32, !insn.addr !631
  %r5.2.reg2mem = alloca i32, !insn.addr !631
  %r5.1.reg2mem = alloca i32, !insn.addr !631
  %r4.1.in.reg2mem = alloca i32, !insn.addr !631
  %.reg2mem3 = alloca i32, !insn.addr !631
  %.reg2mem = alloca i32, !insn.addr !631
  %stack_var_-28 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !632
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-28, i32 0), !insn.addr !632
  %2 = load i8*, i8** %stack_var_-28, align 4, !insn.addr !633
  %3 = load i8, i8* %2, align 1, !insn.addr !634
  %4 = icmp ne i8 %3, 0, !insn.addr !635
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !636
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_124ac, label %dec_label_pc_1249c, !insn.addr !637

dec_label_pc_1249c:                               ; preds = %dec_label_pc_12468
  %7 = icmp ult i32 %1, 1048576, !insn.addr !638
  store i32 %1, i32* %.reg2mem, !insn.addr !639
  br i1 %7, label %dec_label_pc_124a4, label %dec_label_pc_12564, !insn.addr !639

dec_label_pc_124a4:                               ; preds = %dec_label_pc_1249c, %dec_label_pc_1258c, %dec_label_pc_12564
  %.reload = load i32, i32* %.reg2mem, !insn.addr !640
  ret i32 %.reload, !insn.addr !640

dec_label_pc_124ac:                               ; preds = %dec_label_pc_12468
  %8 = call i32 @function_11ec4(), !insn.addr !641
  %9 = icmp eq i32 %8, 0, !insn.addr !642
  br i1 %9, label %dec_label_pc_1258c, label %dec_label_pc_124b8, !insn.addr !643

dec_label_pc_124b8:                               ; preds = %dec_label_pc_124ac
  %10 = add i32 %8, 4, !insn.addr !644
  %11 = inttoptr i32 %10 to i32*, !insn.addr !644
  %12 = load i32, i32* %11, align 4, !insn.addr !644
  %13 = icmp eq i32 %12, 0, !insn.addr !645
  store i32 %12, i32* %.reg2mem3, !insn.addr !646
  store i32 %8, i32* %r4.1.in.reg2mem, !insn.addr !646
  store i32 -1, i32* %r5.1.reg2mem, !insn.addr !646
  br i1 %13, label %dec_label_pc_1253c, label %dec_label_pc_124cc, !insn.addr !646

dec_label_pc_124cc:                               ; preds = %dec_label_pc_124b8, %dec_label_pc_124e8
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %.reload4 = load i32, i32* %.reg2mem3, !insn.addr !647
  %14 = inttoptr i32 %.reload4 to i8*, !insn.addr !647
  %15 = call i32 @strcmp(i8* %14, i8* %0), !insn.addr !647
  %16 = icmp eq i32 %15, 0, !insn.addr !648
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !649
  br i1 %16, label %dec_label_pc_124dc, label %dec_label_pc_124e8, !insn.addr !649

dec_label_pc_124dc:                               ; preds = %dec_label_pc_124cc
  %17 = icmp slt i32 %r5.1.reload, 0, !insn.addr !650
  br i1 %17, label %dec_label_pc_124e4, label %dec_label_pc_12514, !insn.addr !651

dec_label_pc_124e4:                               ; preds = %dec_label_pc_124dc
  %18 = inttoptr i32 %r4.1.in.reload to i32*, !insn.addr !652
  %19 = load i32, i32* %18, align 4, !insn.addr !652
  store i32 %19, i32* %r5.2.reg2mem, !insn.addr !652
  br label %dec_label_pc_124e8, !insn.addr !652

dec_label_pc_124e8:                               ; preds = %dec_label_pc_124cc, %dec_label_pc_124e4
  %r4.1 = add i32 %r4.1.in.reload, 16
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %20 = add i32 %r4.1.in.reload, 20, !insn.addr !653
  %21 = inttoptr i32 %20 to i32*, !insn.addr !653
  %22 = load i32, i32* %21, align 4, !insn.addr !653
  %23 = icmp eq i32 %22, 0, !insn.addr !654
  store i32 %22, i32* %.reg2mem3, !insn.addr !655
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !655
  store i32 %r5.2.reload, i32* %r5.1.reg2mem, !insn.addr !655
  br i1 %23, label %dec_label_pc_124f8, label %dec_label_pc_124cc, !insn.addr !655

dec_label_pc_124f8:                               ; preds = %dec_label_pc_124e8
  %24 = icmp eq i32 %r5.2.reload, -1, !insn.addr !656
  store i32 %r5.2.reload, i32* %r5.3.reg2mem, !insn.addr !657
  br i1 %24, label %dec_label_pc_1253c, label %dec_label_pc_12500, !insn.addr !657

dec_label_pc_12500:                               ; preds = %dec_label_pc_1253c, %dec_label_pc_12514, %dec_label_pc_124f8
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %25 = call i32 @function_11c50(i32 %8), !insn.addr !658
  ret i32 %r5.3.reload, !insn.addr !659

dec_label_pc_12514:                               ; preds = %dec_label_pc_124dc
  %26 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !660
  %27 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_1302c to i32*), i32 1, i32 35, %_IO_FILE* %26), !insn.addr !661
  store i32 -4, i32* %r5.3.reg2mem, !insn.addr !662
  br label %dec_label_pc_12500, !insn.addr !662

dec_label_pc_1253c:                               ; preds = %dec_label_pc_124f8, %dec_label_pc_124b8
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !663
  %29 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_13050 to i32*), i32 1, i32 51, %_IO_FILE* %28), !insn.addr !664
  store i32 -1, i32* %r5.3.reg2mem, !insn.addr !665
  br label %dec_label_pc_12500, !insn.addr !665

dec_label_pc_12564:                               ; preds = %dec_label_pc_1249c
  %30 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !666
  %31 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_13084 to i32*), i32 1, i32 29, %_IO_FILE* %30), !insn.addr !667
  store i32 -2, i32* %.reg2mem, !insn.addr !668
  br label %dec_label_pc_124a4, !insn.addr !668

dec_label_pc_1258c:                               ; preds = %dec_label_pc_124ac
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !669
  %33 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_13014 to i32*), i32 1, i32 22, %_IO_FILE* %32), !insn.addr !670
  store i32 -3, i32* %.reg2mem, !insn.addr !671
  br label %dec_label_pc_124a4, !insn.addr !671

; uselistorder directives
  uselistorder i32 %r4.1.in.reload, { 1, 0, 2 }
  uselistorder i32 %r5.1.reload, { 1, 0 }
  uselistorder i32 %8, { 1, 0, 2, 3 }
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %.reg2mem3, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.3.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 20, 10, 9, 8, 7, 6, 4, 3, 5, 2, 1, 0, 19, 18, 17, 16, 15, 14, 13, 12, 11, 21 }
  uselistorder i32 20, { 1, 3, 6, 7, 0, 2, 4, 5 }
  uselistorder i32 16, { 3, 0, 2, 6, 4, 1, 7, 5 }
  uselistorder i32 4, { 14, 6, 7, 10, 8, 11, 12, 13, 5, 9, 15, 4, 0, 1, 16, 17, 2, 3, 18 }
  uselistorder i8 0, { 0, 11, 13, 4, 12, 5, 3, 14, 7, 8, 9, 15, 1, 16, 10, 2, 18, 17, 6, 19, 20, 21, 22 }
  uselistorder label %dec_label_pc_124e8, { 1, 0 }
  uselistorder label %dec_label_pc_124cc, { 1, 0 }
  uselistorder label %dec_label_pc_124a4, { 1, 2, 0 }
}

define i32 @function_125b4(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_125b4:
  %0 = icmp eq i32 %arg3, 0, !insn.addr !672
  %spec.select = select i1 %0, i32 1795, i32 1798
  %1 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 %spec.select), !insn.addr !673
  %2 = icmp slt i32 %1, 0, !insn.addr !674
  br i1 %2, label %dec_label_pc_125e8, label %dec_label_pc_125e0, !insn.addr !675

dec_label_pc_125e0:                               ; preds = %dec_label_pc_125b4
  ret i32 0, !insn.addr !676

dec_label_pc_125e8:                               ; preds = %dec_label_pc_125b4
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_23300, align 4, !insn.addr !677
  %4 = call i32* @__errno_location(), !insn.addr !678
  %5 = load i32, i32* %4, align 4, !insn.addr !679
  %6 = call i8* @strerror(i32 %5), !insn.addr !680
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_130a4, i32 0, i32 0), i32 %arg2, i8* %6), !insn.addr !681
  %8 = load i32, i32* %4, align 4, !insn.addr !682
  %9 = sub i32 0, %8, !insn.addr !683
  ret i32 %9, !insn.addr !684

; uselistorder directives
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 16, 11, 19, 18, 8, 3, 13, 7, 6, 2, 1, 17, 9, 5, 4, 10, 0, 12, 15, 14, 20 }
  uselistorder i8* (i32)* @strerror, { 1, 0, 2 }
  uselistorder i32* ()* @__errno_location, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE** @global_var_23300, { 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 2, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 0, 7, 6, 5, 4, 3, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 2, 1, 0, 3 }
}

define i32 @function_12628(i32 %arg1) local_unnamed_addr {
dec_label_pc_12628:
  %merge.reg2mem = alloca i32, !insn.addr !685
  %r5.0.ph.reg2mem = alloca i32, !insn.addr !685
  %stack_var_-20 = alloca i32, align 4
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_23308, align 4, !insn.addr !686
  %1 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !687
  %2 = call i8* @fgets(i8* nonnull %1, i32 2, %_IO_FILE* %0), !insn.addr !687
  %3 = icmp eq i8* %2, null, !insn.addr !688
  store i32 0, i32* %merge.reg2mem, !insn.addr !689
  br i1 %3, label %dec_label_pc_126a0, label %dec_label_pc_12654, !insn.addr !689

dec_label_pc_12654:                               ; preds = %dec_label_pc_12628
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !690
  %5 = urem i32 %4, 256, !insn.addr !690
  %6 = icmp eq i32 %5, 89, !insn.addr !691
  br i1 %6, label %dec_label_pc_126bc, label %dec_label_pc_12660, !insn.addr !692

dec_label_pc_12660:                               ; preds = %dec_label_pc_12654
  %7 = icmp ult i32 %5, 89, !insn.addr !691
  %trunc1 = trunc i32 %4 to i8
  br i1 %7, label %dec_label_pc_126ac, label %dec_label_pc_12664, !insn.addr !693

dec_label_pc_12664:                               ; preds = %dec_label_pc_12660
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %merge.reg2mem
  switch i8 %trunc1, label %dec_label_pc_1268c.preheader [
    i8 110, label %dec_label_pc_126b4
    i8 121, label %dec_label_pc_126bc
    i8 10, label %dec_label_pc_126a0
  ]

dec_label_pc_1268c.preheader:                     ; preds = %dec_label_pc_126b4, %dec_label_pc_126bc, %dec_label_pc_126ac, %dec_label_pc_12664
  %r5.0.ph.reload = load i32, i32* %r5.0.ph.reg2mem
  br label %dec_label_pc_1268c

dec_label_pc_12680:                               ; preds = %dec_label_pc_1268c
  %8 = urem i32 %13, 256, !insn.addr !694
  %9 = icmp eq i32 %8, 10, !insn.addr !695
  %10 = mul i32 %13, 16777216
  %11 = ashr exact i32 %10, 24, !insn.addr !696
  store i32 %11, i32* %stack_var_-20, align 4, !insn.addr !696
  store i32 %r5.0.ph.reload, i32* %merge.reg2mem, !insn.addr !697
  br i1 %9, label %dec_label_pc_126a0, label %dec_label_pc_1268c, !insn.addr !697

dec_label_pc_1268c:                               ; preds = %dec_label_pc_1268c.preheader, %dec_label_pc_12680
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_23308, align 4, !insn.addr !698
  %13 = call i32 @fgetc(%_IO_FILE* %12), !insn.addr !699
  %14 = icmp eq i32 %13, -1, !insn.addr !700
  store i32 0, i32* %merge.reg2mem, !insn.addr !701
  br i1 %14, label %dec_label_pc_126a0, label %dec_label_pc_12680, !insn.addr !701

dec_label_pc_126a0:                               ; preds = %dec_label_pc_12680, %dec_label_pc_1268c, %dec_label_pc_126ac, %dec_label_pc_12664, %dec_label_pc_12628
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !702

dec_label_pc_126ac:                               ; preds = %dec_label_pc_12660
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %merge.reg2mem
  switch i8 %trunc1, label %dec_label_pc_1268c.preheader [
    i8 78, label %dec_label_pc_126b4
    i8 10, label %dec_label_pc_126a0
  ]

dec_label_pc_126b4:                               ; preds = %dec_label_pc_12664, %dec_label_pc_126ac
  store i32 0, i32* %r5.0.ph.reg2mem, !insn.addr !703
  br label %dec_label_pc_1268c.preheader, !insn.addr !703

dec_label_pc_126bc:                               ; preds = %dec_label_pc_12664, %dec_label_pc_12654
  store i32 1, i32* %r5.0.ph.reg2mem, !insn.addr !704
  br label %dec_label_pc_1268c.preheader, !insn.addr !704

; uselistorder directives
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder i8 %trunc1, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %r5.0.ph.reg2mem, { 1, 2, 3, 0, 4 }
  uselistorder i32* %merge.reg2mem, { 4, 0, 2, 1, 3, 5 }
  uselistorder i32 -1, { 12, 0, 13, 1, 11, 2, 3, 14, 17, 4, 15, 5, 6, 7, 16, 8, 9, 10 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 10, { 1, 0 }
  uselistorder i8 10, { 2, 3, 0, 1 }
  uselistorder i32 89, { 1, 0 }
  uselistorder i8* null, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i32, %_IO_FILE*)* @fgets, { 3, 2, 1, 4, 0, 5 }
  uselistorder %_IO_FILE** @global_var_23308, { 1, 0 }
  uselistorder i32 1, { 14, 143, 15, 13, 116, 117, 118, 119, 113, 21, 20, 19, 18, 17, 16, 120, 153, 157, 154, 155, 156, 39, 149, 148, 147, 146, 145, 144, 40, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 7, 41, 121, 114, 42, 44, 43, 47, 46, 45, 122, 123, 6, 10, 5, 50, 49, 48, 9, 4, 51, 3, 107, 105, 53, 52, 12, 11, 8, 2, 1, 150, 124, 125, 126, 127, 128, 110, 108, 158, 129, 130, 159, 109, 58, 131, 132, 162, 111, 133, 134, 106, 160, 135, 112, 136, 137, 163, 138, 71, 72, 164, 165, 139, 140, 93, 90, 84, 86, 141, 73, 161, 88, 166, 102, 115, 152, 151, 104, 103, 101, 100, 99, 98, 97, 96, 95, 94, 92, 91, 89, 87, 85, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 57, 56, 55, 54, 0, 142 }
  uselistorder i32 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_126b4, { 1, 0 }
  uselistorder label %dec_label_pc_126a0, { 2, 1, 0, 3, 4 }
  uselistorder label %dec_label_pc_1268c, { 1, 0 }
  uselistorder label %dec_label_pc_1268c.preheader, { 1, 0, 2, 3 }
}

define i32 @function_126d0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_126d0:
  %0 = call i32 @function_10af8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !705
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_23134 to i32), i32 93784), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !706

; uselistorder directives
  uselistorder i32 0, { 63, 2, 0, 1, 164, 64, 65, 35, 165, 166, 181, 182, 183, 184, 185, 128, 74, 75, 169, 170, 68, 69, 171, 51, 52, 70, 71, 72, 73, 66, 67, 5, 172, 173, 174, 76, 77, 175, 78, 79, 3, 46, 167, 168, 176, 80, 81, 53, 54, 82, 83, 6, 4, 177, 178, 84, 85, 7, 38, 39, 86, 87, 88, 89, 186, 90, 91, 92, 93, 49, 187, 129, 130, 179, 180, 188, 45, 189, 161, 50, 162, 163, 33, 40, 214, 47, 48, 55, 56, 102, 103, 104, 105, 190, 106, 107, 191, 42, 41, 116, 117, 61, 62, 131, 118, 119, 195, 196, 197, 112, 113, 8, 44, 43, 198, 57, 58, 199, 59, 60, 200, 114, 115, 9, 108, 109, 192, 110, 111, 193, 122, 123, 124, 125, 194, 11, 36, 132, 10, 12, 15, 14, 17, 201, 120, 121, 34, 202, 203, 204, 205, 207, 208, 133, 19, 209, 100, 101, 18, 210, 134, 13, 16, 211, 135, 96, 97, 98, 99, 94, 95, 37, 136, 137, 212, 213, 206, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 126, 127, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160 }
  uselistorder i32 2, { 9, 11, 4, 12, 5, 13, 14, 6, 15, 7, 8, 3, 0, 18, 1, 2, 16, 19, 20, 21, 17, 10 }
}

define i32 @function_12714(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12714:
  ret i32 %arg1, !insn.addr !707
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i8* @fgets(i8*, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_write_block_data(i32, i32, i32, i32*) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32 @strcasecmp(i8*, i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @i2c_smbus_write_byte(i32, i32) local_unnamed_addr

declare %__dirstream* @opendir(i8*) local_unnamed_addr

declare i32 @open64(i8*, i32, ...) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32 @i2c_smbus_read_byte(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32 @i2c_smbus_write_byte_data(i32, i32, i32, i32) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i8* @__strdup(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fgetc(%_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_write_word_data(i32, i32, i32, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @i2c_smbus_read_word_data(i32, i32) local_unnamed_addr

declare i8* @strrchr(i8*, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare %dirent64* @readdir64(%__dirstream*) local_unnamed_addr

declare i32 @i2c_smbus_read_byte_data(i32, i32) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @closedir(%__dirstream*) local_unnamed_addr

declare i32 @i2c_smbus_write_i2c_block_data(i32, i32, i32, i32*) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare double @__asm_vaddhn.i16(fp128, fp128) local_unnamed_addr

!0 = !{i64 68348}
!1 = !{i64 68352}
!2 = !{i64 68384}
!3 = !{i64 68396}
!4 = !{i64 68408}
!5 = !{i64 68420}
!6 = !{i64 68432}
!7 = !{i64 68444}
!8 = !{i64 68456}
!9 = !{i64 68468}
!10 = !{i64 68480}
!11 = !{i64 68492}
!12 = !{i64 68504}
!13 = !{i64 68516}
!14 = !{i64 68528}
!15 = !{i64 68540}
!16 = !{i64 68552}
!17 = !{i64 68564}
!18 = !{i64 68576}
!19 = !{i64 68588}
!20 = !{i64 68600}
!21 = !{i64 68612}
!22 = !{i64 68624}
!23 = !{i64 68636}
!24 = !{i64 68648}
!25 = !{i64 68660}
!26 = !{i64 68672}
!27 = !{i64 68684}
!28 = !{i64 68696}
!29 = !{i64 68708}
!30 = !{i64 68720}
!31 = !{i64 68732}
!32 = !{i64 68744}
!33 = !{i64 68756}
!34 = !{i64 68768}
!35 = !{i64 68780}
!36 = !{i64 68792}
!37 = !{i64 68804}
!38 = !{i64 68816}
!39 = !{i64 68828}
!40 = !{i64 68840}
!41 = !{i64 68852}
!42 = !{i64 68864}
!43 = !{i64 68876}
!44 = !{i64 68888}
!45 = !{i64 68900}
!46 = !{i64 68912}
!47 = !{i64 68924}
!48 = !{i64 68936}
!49 = !{i64 68940}
!50 = !{i64 68956}
!51 = !{i64 68960}
!52 = !{i64 68972}
!53 = !{i64 68976}
!54 = !{i64 68980}
!55 = !{i64 69012}
!56 = !{i64 69016}
!57 = !{i64 69024}
!58 = !{i64 69184}
!59 = !{i64 69188}
!60 = !{i64 69196}
!61 = !{i64 69200}
!62 = !{i64 69204}
!63 = !{i64 69208}
!64 = !{i64 69212}
!65 = !{i64 69216}
!66 = !{i64 69220}
!67 = !{i64 69224}
!68 = !{i64 69232}
!69 = !{i64 69236}
!70 = !{i64 69244}
!71 = !{i64 69252}
!72 = !{i64 69256}
!73 = !{i64 69264}
!74 = !{i64 69280}
!75 = !{i64 69284}
!76 = !{i64 69288}
!77 = !{i64 69296}
!78 = !{i64 69300}
!79 = !{i64 69308}
!80 = !{i64 69312}
!81 = !{i64 69320}
!82 = !{i64 69324}
!83 = !{i64 69328}
!84 = !{i64 69332}
!85 = !{i64 69340}
!86 = !{i64 69344}
!87 = !{i64 69348}
!88 = !{i64 69352}
!89 = !{i64 69356}
!90 = !{i64 69360}
!91 = !{i64 69364}
!92 = !{i64 69372}
!93 = !{i64 69376}
!94 = !{i64 69380}
!95 = !{i64 69384}
!96 = !{i64 69392}
!97 = !{i64 69396}
!98 = !{i64 69400}
!99 = !{i64 69404}
!100 = !{i64 69408}
!101 = !{i64 69412}
!102 = !{i64 69416}
!103 = !{i64 69420}
!104 = !{i64 69448}
!105 = !{i64 69452}
!106 = !{i64 69456}
!107 = !{i64 69492}
!108 = !{i64 69496}
!109 = !{i64 69500}
!110 = !{i64 69504}
!111 = !{i64 69508}
!112 = !{i64 69516}
!113 = !{i64 69524}
!114 = !{i64 69540}
!115 = !{i64 69548}
!116 = !{i64 69552}
!117 = !{i64 69556}
!118 = !{i64 69560}
!119 = !{i64 69564}
!120 = !{i64 69596}
!121 = !{i64 69600}
!122 = !{i64 69612}
!123 = !{i64 69616}
!124 = !{i64 69624}
!125 = !{i64 69640}
!126 = !{i64 69652}
!127 = !{i64 69664}
!128 = !{i64 69684}
!129 = !{i64 69688}
!130 = !{i64 69692}
!131 = !{i64 69712}
!132 = !{i64 69724}
!133 = !{i64 69732}
!134 = !{i64 69752}
!135 = !{i64 69764}
!136 = !{i64 69768}
!137 = !{i64 69808}
!138 = !{i64 69812}
!139 = !{i64 69828}
!140 = !{i64 69832}
!141 = !{i64 69836}
!142 = !{i64 69848}
!143 = !{i64 69864}
!144 = !{i64 69868}
!145 = !{i64 69872}
!146 = !{i64 69876}
!147 = !{i64 69884}
!148 = !{i64 69904}
!149 = !{i64 69916}
!150 = !{i64 69920}
!151 = !{i64 69924}
!152 = !{i64 69928}
!153 = !{i64 69932}
!154 = !{i64 69936}
!155 = !{i64 69940}
!156 = !{i64 69944}
!157 = !{i64 69948}
!158 = !{i64 69984}
!159 = !{i64 69992}
!160 = !{i64 69996}
!161 = !{i64 70004}
!162 = !{i64 70008}
!163 = !{i64 70012}
!164 = !{i64 70016}
!165 = !{i64 70020}
!166 = !{i64 70040}
!167 = !{i64 70044}
!168 = !{i64 70048}
!169 = !{i64 70104}
!170 = !{i64 70108}
!171 = !{i64 70132}
!172 = !{i64 70140}
!173 = !{i64 70144}
!174 = !{i64 70148}
!175 = !{i64 70152}
!176 = !{i64 70192}
!177 = !{i64 70196}
!178 = !{i64 70208}
!179 = !{i64 70228}
!180 = !{i64 70240}
!181 = !{i64 70244}
!182 = !{i64 70264}
!183 = !{i64 70268}
!184 = !{i64 70288}
!185 = !{i64 70300}
!186 = !{i64 70304}
!187 = !{i64 70332}
!188 = !{i64 70356}
!189 = !{i64 70360}
!190 = !{i64 70364}
!191 = !{i64 70376}
!192 = !{i64 70380}
!193 = !{i64 70384}
!194 = !{i64 70388}
!195 = !{i64 70400}
!196 = !{i64 70520}
!197 = !{i64 70592}
!198 = !{i64 70596}
!199 = !{i64 70600}
!200 = !{i64 70604}
!201 = !{i64 70608}
!202 = !{i64 70612}
!203 = !{i64 70616}
!204 = !{i64 70620}
!205 = !{i64 70624}
!206 = !{i64 70628}
!207 = !{i64 70632}
!208 = !{i64 70644}
!209 = !{i64 70648}
!210 = !{i64 70652}
!211 = !{i64 70660}
!212 = !{i64 70664}
!213 = !{i64 70668}
!214 = !{i64 70672}
!215 = !{i64 70680}
!216 = !{i64 70692}
!217 = !{i64 70744}
!218 = !{i64 70752}
!219 = !{i64 70768}
!220 = !{i64 70772}
!221 = !{i64 70776}
!222 = !{i64 70784}
!223 = !{i64 70788}
!224 = !{i64 70792}
!225 = !{i64 70812}
!226 = !{i64 70820}
!227 = !{i64 70876}
!228 = !{i64 70884}
!229 = !{i64 70988}
!230 = !{i64 70928}
!231 = !{i64 70932}
!232 = !{i64 70936}
!233 = !{i64 70940}
!234 = !{i64 70944}
!235 = !{i64 70952}
!236 = !{i64 70956}
!237 = !{i64 70964}
!238 = !{i64 70972}
!239 = !{i64 70976}
!240 = !{i64 70980}
!241 = !{i64 71020}
!242 = !{i64 71024}
!243 = !{i64 71044}
!244 = !{i64 71056}
!245 = !{i64 71060}
!246 = !{i64 71068}
!247 = !{i64 71072}
!248 = !{i64 71092}
!249 = !{i64 71104}
!250 = !{i64 71108}
!251 = !{i64 71116}
!252 = !{i64 71120}
!253 = !{i64 71140}
!254 = !{i64 71152}
!255 = !{i64 71156}
!256 = !{i64 71176}
!257 = !{i64 71188}
!258 = !{i64 71196}
!259 = !{i64 71200}
!260 = !{i64 71204}
!261 = !{i64 71208}
!262 = !{i64 71220}
!263 = !{i64 71236}
!264 = !{i64 71264}
!265 = !{i64 71268}
!266 = !{i64 71316}
!267 = !{i64 71344}
!268 = !{i64 71348}
!269 = !{i64 71364}
!270 = !{i64 71384}
!271 = !{i64 71440}
!272 = !{i64 71460}
!273 = !{i64 71464}
!274 = !{i64 71468}
!275 = !{i64 71472}
!276 = !{i64 71480}
!277 = !{i64 71484}
!278 = !{i64 71496}
!279 = !{i64 71500}
!280 = !{i64 71508}
!281 = !{i64 71524}
!282 = !{i64 71532}
!283 = !{i64 71540}
!284 = !{i64 71564}
!285 = !{i64 71584}
!286 = !{i64 71588}
!287 = !{i64 71592}
!288 = !{i64 71604}
!289 = !{i64 71608}
!290 = !{i64 71612}
!291 = !{i64 71616}
!292 = !{i64 71628}
!293 = !{i64 71644}
!294 = !{i64 71648}
!295 = !{i64 71652}
!296 = !{i64 71656}
!297 = !{i64 71672}
!298 = !{i64 71688}
!299 = !{i64 71692}
!300 = !{i64 71696}
!301 = !{i64 71712}
!302 = !{i64 71716}
!303 = !{i64 71744}
!304 = !{i64 71748}
!305 = !{i64 71756}
!306 = !{i64 71760}
!307 = !{i64 71764}
!308 = !{i64 71768}
!309 = !{i64 71772}
!310 = !{i64 71808}
!311 = !{i64 71816}
!312 = !{i64 71820}
!313 = !{i64 71836}
!314 = !{i64 71840}
!315 = !{i64 71868}
!316 = !{i64 71872}
!317 = !{i64 71884}
!318 = !{i64 71888}
!319 = !{i64 71900}
!320 = !{i64 71908}
!321 = !{i64 71920}
!322 = !{i64 71928}
!323 = !{i64 71936}
!324 = !{i64 71944}
!325 = !{i64 71964}
!326 = !{i64 71976}
!327 = !{i64 71984}
!328 = !{i64 71992}
!329 = !{i64 71996}
!330 = !{i64 72008}
!331 = !{i64 72012}
!332 = !{i64 72024}
!333 = !{i64 72028}
!334 = !{i64 72032}
!335 = !{i64 72044}
!336 = !{i64 72048}
!337 = !{i64 72124}
!338 = !{i64 72140}
!339 = !{i64 72148}
!340 = !{i64 72168}
!341 = !{i64 72180}
!342 = !{i64 72188}
!343 = !{i64 72200}
!344 = !{i64 72204}
!345 = !{i64 72212}
!346 = !{i64 72216}
!347 = !{i64 72224}
!348 = !{i64 72228}
!349 = !{i64 72248}
!350 = !{i64 72260}
!351 = !{i64 72264}
!352 = !{i64 72272}
!353 = !{i64 72276}
!354 = !{i64 72296}
!355 = !{i64 72308}
!356 = !{i64 72312}
!357 = !{i64 72324}
!358 = !{i64 72328}
!359 = !{i64 72332}
!360 = !{i64 72336}
!361 = !{i64 72356}
!362 = !{i64 72360}
!363 = !{i64 72400}
!364 = !{i64 72416}
!365 = !{i64 72420}
!366 = !{i64 72452}
!367 = !{i64 72456}
!368 = !{i64 72462}
!369 = !{i64 72484}
!370 = !{i64 72488}
!371 = !{i64 72492}
!372 = !{i64 72496}
!373 = !{i64 72536}
!374 = !{i64 72544}
!375 = !{i64 72548}
!376 = !{i64 72552}
!377 = !{i64 72560}
!378 = !{i64 72564}
!379 = !{i64 72572}
!380 = !{i64 72584}
!381 = !{i64 72588}
!382 = !{i64 72592}
!383 = !{i64 72596}
!384 = !{i64 72600}
!385 = !{i64 72602}
!386 = !{i64 72608}
!387 = !{i64 72610}
!388 = !{i64 72612}
!389 = !{i64 72618}
!390 = !{i64 72622}
!391 = !{i64 72626}
!392 = !{i64 72630}
!393 = !{i64 72632}
!394 = !{i64 72640}
!395 = !{i64 72646}
!396 = !{i64 72672}
!397 = !{i64 72680}
!398 = !{i64 72688}
!399 = !{i64 72692}
!400 = !{i64 72700}
!401 = !{i64 72704}
!402 = !{i64 72708}
!403 = !{i64 72712}
!404 = !{i64 72764}
!405 = !{i64 72768}
!406 = !{i64 72772}
!407 = !{i64 72760}
!408 = !{i64 72744}
!409 = !{i64 72776}
!410 = !{i64 72780}
!411 = !{i64 72784}
!412 = !{i64 72792}
!413 = !{i64 72796}
!414 = !{i64 72804}
!415 = !{i64 72808}
!416 = !{i64 72812}
!417 = !{i64 72816}
!418 = !{i64 72820}
!419 = !{i64 72824}
!420 = !{i64 72836}
!421 = !{i64 72840}
!422 = !{i64 72848}
!423 = !{i64 72860}
!424 = !{i64 72864}
!425 = !{i64 72868}
!426 = !{i64 72880}
!427 = !{i64 72888}
!428 = !{i64 72896}
!429 = !{i64 72904}
!430 = !{i64 72908}
!431 = !{i64 72912}
!432 = !{i64 72936}
!433 = !{i64 72940}
!434 = !{i64 72944}
!435 = !{i64 72948}
!436 = !{i64 72960}
!437 = !{i64 72952}
!438 = !{i64 72968}
!439 = !{i64 72992}
!440 = !{i64 73004}
!441 = !{i64 73008}
!442 = !{i64 73012}
!443 = !{i64 73020}
!444 = !{i64 73040}
!445 = !{i64 73052}
!446 = !{i64 73060}
!447 = !{i64 73080}
!448 = !{i64 73084}
!449 = !{i64 73092}
!450 = !{i64 73096}
!451 = !{i64 73144}
!452 = !{i64 73116}
!453 = !{i64 73156}
!454 = !{i64 73164}
!455 = !{i64 73168}
!456 = !{i64 73172}
!457 = !{i64 73184}
!458 = !{i64 73188}
!459 = !{i64 73192}
!460 = !{i64 73332}
!461 = !{i64 73344}
!462 = !{i64 73352}
!463 = !{i64 73412}
!464 = !{i64 73428}
!465 = !{i64 73432}
!466 = !{i64 73436}
!467 = !{i64 73456}
!468 = !{i64 73460}
!469 = !{i64 73468}
!470 = !{i64 73736}
!471 = !{i64 73748}
!472 = !{i64 73756}
!473 = !{i64 73488}
!474 = !{i64 73496}
!475 = !{i64 73520}
!476 = !{i64 73528}
!477 = !{i64 73552}
!478 = !{i64 73560}
!479 = !{i64 73600}
!480 = !{i64 73604}
!481 = !{i64 73616}
!482 = !{i64 73620}
!483 = !{i64 73624}
!484 = !{i64 73628}
!485 = !{i64 73492}
!486 = !{i64 73524}
!487 = !{i64 73556}
!488 = !{i64 73588}
!489 = !{i64 73644}
!490 = !{i64 73648}
!491 = !{i64 73656}
!492 = !{i64 73660}
!493 = !{i64 73564}
!494 = !{i64 73636}
!495 = !{i64 73664}
!496 = !{i64 73668}
!497 = !{i64 73672}
!498 = !{i64 73676}
!499 = !{i64 73684}
!500 = !{i64 73688}
!501 = !{i64 73692}
!502 = !{i64 73704}
!503 = !{i64 73708}
!504 = !{i64 73712}
!505 = !{i64 73716}
!506 = !{i64 73740}
!507 = !{i64 73764}
!508 = !{i64 73776}
!509 = !{i64 73784}
!510 = !{i64 73796}
!511 = !{i64 73816}
!512 = !{i64 73820}
!513 = !{i64 73824}
!514 = !{i64 73832}
!515 = !{i64 73848}
!516 = !{i64 73852}
!517 = !{i64 73856}
!518 = !{i64 73872}
!519 = !{i64 73892}
!520 = !{i64 73900}
!521 = !{i64 73908}
!522 = !{i64 73884}
!523 = !{i64 73928}
!524 = !{i64 73936}
!525 = !{i64 73956}
!526 = !{i64 73968}
!527 = !{i64 73984}
!528 = !{i64 73988}
!529 = !{i64 73992}
!530 = !{i64 73996}
!531 = !{i64 74000}
!532 = !{i64 74004}
!533 = !{i64 74008}
!534 = !{i64 74016}
!535 = !{i64 74020}
!536 = !{i64 74024}
!537 = !{i64 74028}
!538 = !{i64 74032}
!539 = !{i64 74036}
!540 = !{i64 74068}
!541 = !{i64 74076}
!542 = !{i64 74092}
!543 = !{i64 74096}
!544 = !{i64 74100}
!545 = !{i64 74120}
!546 = !{i64 74132}
!547 = !{i64 74136}
!548 = !{i64 74140}
!549 = !{i64 74152}
!550 = !{i64 74168}
!551 = !{i64 74176}
!552 = !{i64 74184}
!553 = !{i64 74188}
!554 = !{i64 74192}
!555 = !{i64 74212}
!556 = !{i64 74216}
!557 = !{i64 74224}
!558 = !{i64 74228}
!559 = !{i64 74232}
!560 = !{i64 74236}
!561 = !{i64 74248}
!562 = !{i64 74252}
!563 = !{i64 74256}
!564 = !{i64 74260}
!565 = !{i64 74268}
!566 = !{i64 74272}
!567 = !{i64 74276}
!568 = !{i64 74280}
!569 = !{i64 74284}
!570 = !{i64 74288}
!571 = !{i64 74308}
!572 = !{i64 74316}
!573 = !{i64 74320}
!574 = !{i64 74324}
!575 = !{i64 74328}
!576 = !{i64 74332}
!577 = !{i64 74336}
!578 = !{i64 74344}
!579 = !{i64 74352}
!580 = !{i64 74356}
!581 = !{i64 74376}
!582 = !{i64 74380}
!583 = !{i64 74384}
!584 = !{i64 74408}
!585 = !{i64 74416}
!586 = !{i64 74420}
!587 = !{i64 74448}
!588 = !{i64 74456}
!589 = !{i64 74472}
!590 = !{i64 74476}
!591 = !{i64 74480}
!592 = !{i64 74508}
!593 = !{i64 74516}
!594 = !{i64 74524}
!595 = !{i64 74528}
!596 = !{i64 74532}
!597 = !{i64 74540}
!598 = !{i64 74556}
!599 = !{i64 74564}
!600 = !{i64 74560}
!601 = !{i64 74568}
!602 = !{i64 74576}
!603 = !{i64 74580}
!604 = !{i64 74584}
!605 = !{i64 74588}
!606 = !{i64 74592}
!607 = !{i64 74620}
!608 = !{i64 74652}
!609 = !{i64 74660}
!610 = !{i64 74668}
!611 = !{i64 74672}
!612 = !{i64 74676}
!613 = !{i64 74696}
!614 = !{i64 74700}
!615 = !{i64 74704}
!616 = !{i64 74724}
!617 = !{i64 74728}
!618 = !{i64 74732}
!619 = !{i64 74740}
!620 = !{i64 74752}
!621 = !{i64 74756}
!622 = !{i64 74764}
!623 = !{i64 74800}
!624 = !{i64 74804}
!625 = !{i64 74808}
!626 = !{i64 74812}
!627 = !{i64 74816}
!628 = !{i64 74840}
!629 = !{i64 74848}
!630 = !{i64 74852}
!631 = !{i64 74856}
!632 = !{i64 74876}
!633 = !{i64 74880}
!634 = !{i64 74884}
!635 = !{i64 74888}
!636 = !{i64 74900}
!637 = !{i64 74892}
!638 = !{i64 74908}
!639 = !{i64 74912}
!640 = !{i64 74920}
!641 = !{i64 74924}
!642 = !{i64 74928}
!643 = !{i64 74932}
!644 = !{i64 74936}
!645 = !{i64 74940}
!646 = !{i64 74952}
!647 = !{i64 74960}
!648 = !{i64 74964}
!649 = !{i64 74968}
!650 = !{i64 74972}
!651 = !{i64 74976}
!652 = !{i64 74980}
!653 = !{i64 74988}
!654 = !{i64 74992}
!655 = !{i64 74996}
!656 = !{i64 75000}
!657 = !{i64 75004}
!658 = !{i64 75012}
!659 = !{i64 75024}
!660 = !{i64 75044}
!661 = !{i64 75060}
!662 = !{i64 75064}
!663 = !{i64 75084}
!664 = !{i64 75100}
!665 = !{i64 75104}
!666 = !{i64 75124}
!667 = !{i64 75136}
!668 = !{i64 75144}
!669 = !{i64 75164}
!670 = !{i64 75176}
!671 = !{i64 75184}
!672 = !{i64 75188}
!673 = !{i64 75220}
!674 = !{i64 75224}
!675 = !{i64 75228}
!676 = !{i64 75236}
!677 = !{i64 75248}
!678 = !{i64 75252}
!679 = !{i64 75260}
!680 = !{i64 75264}
!681 = !{i64 75288}
!682 = !{i64 75292}
!683 = !{i64 75296}
!684 = !{i64 75300}
!685 = !{i64 75304}
!686 = !{i64 75328}
!687 = !{i64 75336}
!688 = !{i64 75340}
!689 = !{i64 75344}
!690 = !{i64 75348}
!691 = !{i64 75352}
!692 = !{i64 75356}
!693 = !{i64 75360}
!694 = !{i64 75416}
!695 = !{i64 75392}
!696 = !{i64 75396}
!697 = !{i64 75400}
!698 = !{i64 75404}
!699 = !{i64 75408}
!700 = !{i64 75412}
!701 = !{i64 75420}
!702 = !{i64 75432}
!703 = !{i64 75448}
!704 = !{i64 75456}
!705 = !{i64 75490}
!706 = !{i64 75524}
!707 = !{i64 75544}
