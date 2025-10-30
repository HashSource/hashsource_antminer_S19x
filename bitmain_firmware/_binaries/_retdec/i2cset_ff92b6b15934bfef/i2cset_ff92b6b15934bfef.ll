source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%__dirstream = type { i32 }
%dirent64 = type { i32, i32, i16, i8, [256 x i8] }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@2 = external local_unnamed_addr global i32
@global_var_2400c = local_unnamed_addr global i32 68348
@global_var_24010 = local_unnamed_addr global i32 68348
@global_var_24014 = local_unnamed_addr global i32 68348
@global_var_24018 = local_unnamed_addr global i32 68348
@global_var_2401c = local_unnamed_addr global i32 68348
@global_var_24020 = local_unnamed_addr global i32 68348
@global_var_24024 = local_unnamed_addr global i32 68348
@global_var_24028 = local_unnamed_addr global i32 68348
@global_var_2402c = local_unnamed_addr global i32 68348
@global_var_24030 = local_unnamed_addr global i32 68348
@global_var_24034 = local_unnamed_addr global i32 68348
@global_var_24038 = local_unnamed_addr global i32 68348
@global_var_2403c = local_unnamed_addr global i32 68348
@global_var_24040 = local_unnamed_addr global i32 68348
@global_var_24044 = local_unnamed_addr global i32 68348
@global_var_24048 = local_unnamed_addr global i32 68348
@global_var_2404c = local_unnamed_addr global i32 68348
@global_var_24050 = local_unnamed_addr global i32 68348
@global_var_24054 = local_unnamed_addr global i32 68348
@global_var_24058 = local_unnamed_addr global i32 68348
@global_var_2405c = local_unnamed_addr global i32 68348
@global_var_24060 = local_unnamed_addr global i32 68348
@global_var_24064 = local_unnamed_addr global i32 68348
@global_var_24068 = local_unnamed_addr global i32 68348
@global_var_2406c = local_unnamed_addr global i32 68348
@global_var_24070 = local_unnamed_addr global i32 68348
@global_var_24074 = local_unnamed_addr global i32 68348
@global_var_24078 = local_unnamed_addr global i32 68348
@global_var_2407c = local_unnamed_addr global i32 68348
@global_var_24080 = local_unnamed_addr global i32 68348
@global_var_24084 = local_unnamed_addr global i32 68348
@global_var_24088 = local_unnamed_addr global i32 68348
@global_var_2408c = local_unnamed_addr global i32 68348
@global_var_24090 = local_unnamed_addr global i32 68348
@global_var_24094 = local_unnamed_addr global i32 68348
@global_var_24098 = local_unnamed_addr global i32 68348
@global_var_2409c = local_unnamed_addr global i32 68348
@global_var_240a0 = local_unnamed_addr global i32 68348
@global_var_240a4 = local_unnamed_addr global i32 68348
@global_var_240a8 = local_unnamed_addr global i32 68348
@global_var_240ac = local_unnamed_addr global i32 68348
@global_var_240b0 = local_unnamed_addr global i32 68348
@global_var_240b4 = local_unnamed_addr global i32 68348
@global_var_240b8 = local_unnamed_addr global i32 68348
@global_var_240bc = local_unnamed_addr global i32 68348
@global_var_240c0 = local_unnamed_addr global i32 68348
@global_var_240c4 = local_unnamed_addr global i32 68348
@global_var_129a8 = constant [28 x i8] c"Error: Too many arguments!\0A\00"
@global_var_128d0 = constant [33 x i8] c"Error: Unsupported option \22%s\22!\0A\00"
@global_var_1290c = constant [30 x i8] c"Error: Data address invalid!\0A\00"
@global_var_128f4 = constant [4 x i8] c"4.1\00"
@global_var_128f8 = constant [19 x i8] c"i2cset version %s\0A\00"
@global_var_12a04 = constant [33 x i8] c"Error: Data value mask invalid!\0A\00"
@global_var_1292c = constant [27 x i8] c"Error: Invalid mode '%s'!\0A\00"
@global_var_12b14 = local_unnamed_addr constant [47 x i8] c"Warning: Adapter does not seem to support PEC\0A\00"
@global_var_12d00 = constant [75 x i8] c"Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\0A\00"
@global_var_12d4c = constant [17 x i8] c"Continue? [Y/n] \00"
@global_var_12b04 = constant [16 x i8] c"I2C block write\00"
@global_var_12a9c = constant [44 x i8] c"Error: Adapter does not have %s capability\0A\00"
@global_var_12af0 = constant [18 x i8] c"SMBus block write\00"
@global_var_12adc = constant [17 x i8] c"SMBus write word\00"
@global_var_12ac8 = constant [17 x i8] c"SMBus write byte\00"
@global_var_12a8c = constant [16 x i8] c"SMBus send byte\00"
@global_var_12a28 = constant [38 x i8] c"Error: Data value mask out of range!\0A\00"
@global_var_129c4 = constant [28 x i8] c"Error: Data value invalid!\0A\00"
@global_var_12978 = constant [45 x i8] c"Error: Mask not supported for block writes!\0A\00"
@global_var_12948 = constant [48 x i8] c"Error: PEC not supported for I2C block writes!\0A\00"
@global_var_129e0 = constant [33 x i8] c"Error: Data value out of range!\0A\00"
@global_var_12dd4 = constant [58 x i8] c"Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\0A\00"
@global_var_12e10 = constant [40 x i8] c"Value 0x%0*x written, readback matched\0A\00"
@global_var_12db8 = constant [26 x i8] c"Warning - readback failed\00"
@global_var_12d98 = local_unnamed_addr constant [32 x i8] c"Error: Could not clear PEC: %s\0A\00"
@global_var_12d80 = constant [21 x i8] c"Error: Write failed\0A\00"
@global_var_12d60 = local_unnamed_addr constant [30 x i8] c"Error: Could not set PEC: %s\0A\00"
@global_var_12cc0 = constant [27 x i8] c"Aborting on user request.\0A\00"
@global_var_12cdc = constant [33 x i8] c"Error: Failed to read old value\0A\00"
@global_var_12b44 = constant [76 x i8] c"WARNING! This program can confuse your I2C bus, cause data loss and worse!\0A\00"
@global_var_12b90 = constant [120 x i8] c"DANGEROUS! Writing to a serial EEPROM on a memory DIMM\0Amay render your memory USELESS and make your system UNBOOTABLE!\0A\00"
@global_var_12c08 = constant [75 x i8] c"I will write to device file %s, chip address 0x%02x, data address\0A0x%02x, \00"
@global_var_12ad4 = constant [5 x i8] c"byte\00"
@global_var_12ae8 = constant [5 x i8] c"word\00"
@global_var_128bc = constant [10 x i8] c" (masked)\00"
@global_var_12c7c = constant [25 x i8] c"data 0x%02x%s, mode %s.\0A\00"
@global_var_12c98 = local_unnamed_addr constant [23 x i8] c"PEC checking enabled.\0A\00"
@global_var_128c8 = constant [4 x i8] c"y/N\00"
@global_var_128cc = constant [4 x i8] c"Y/n\00"
@global_var_12cb0 = constant [16 x i8] c"Continue? [%s] \00"
@global_var_12c60 = constant [5 x i8] c"data\00"
@global_var_12c68 = constant [8 x i8] c" 0x%02x\00"
@global_var_128b0 = constant [10 x i8] c"i2c block\00"
@global_var_128a4 = constant [12 x i8] c"smbus block\00"
@global_var_12c70 = constant [12 x i8] c", mode %s.\0A\00"
@global_var_12c54 = constant [10 x i8] c"no data.\0A\00"
@global_var_12a50 = constant [59 x i8] c"Error: Could not get the adapter functionality matrix: %s\0A\00"
@global_var_11b18 = local_unnamed_addr constant i32 74996
@global_var_11b1c = local_unnamed_addr constant i32 200
@global_var_23f10 = global i32 1
@global_var_24000 = local_unnamed_addr global i32* @global_var_23f10
@global_var_240c8 = local_unnamed_addr global i32 0
@global_var_12730 = constant [369 x i8] c"Usage: i2cset [-f] [-y] [-m MASK] [-r] [-a] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\0A  I2CBUS is an integer or an I2C bus name\0A  ADDRESS is an integer (0x03 - 0x77, or 0x00 - 0x7f if -a is given)\0A  MODE is one of:\0A    c (byte, no value)\0A    b (byte data, default)\0A    w (word data)\0A    i (I2C block data)\0A    s (SMBus block data)\0A    Append p for SMBus PEC\0A\00"
@global_var_12e60 = constant [38 x i8] c"Error: Chip address is not a number!\0A\00"
@global_var_12e88 = constant [53 x i8] c"Error: Chip address out of range (0x%02lx-0x%02lx)!\0A\00"
@global_var_12ec0 = constant [12 x i8] c"/dev/i2c/%d\00"
@global_var_12f18 = local_unnamed_addr constant [37 x i8] c"Error: Could not open file `%s': %s\0A\00"
@global_var_12f40 = local_unnamed_addr constant [14 x i8] c"Run as root?\0A\00"
@global_var_12ed8 = local_unnamed_addr constant [63 x i8] c"Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\0A\00"
@global_var_12ecc = constant [12 x i8] c"/dev/i2c-%d\00"
@global_var_12f50 = constant [14 x i8] c"/proc/bus/i2c\00"
@global_var_12f60 = constant [7 x i8] c"i2c-%d\00"
@global_var_12f68 = constant [13 x i8] c"/proc/mounts\00"
@global_var_12f78 = constant [24 x i8] c"%*[^ ] %[^ ] %[^ ] %*s\0A\00"
@global_var_12f90 = constant [6 x i8] c"sysfs\00"
@global_var_13014 = local_unnamed_addr constant [15 x i8] c"/class/i2c-dev\00"
@global_var_13018 = local_unnamed_addr constant [11 x i8] c"ss/i2c-dev\00"
@global_var_1301c = local_unnamed_addr constant [7 x i8] c"2c-dev\00"
@global_var_13020 = local_unnamed_addr constant [3 x i8] c"ev\00"
@global_var_12f98 = constant [11 x i8] c"%s/%s/name\00"
@global_var_1300c = constant [5 x i8] c"ISA \00"
@global_var_130e0 = constant [6 x i8] c"dummy\00"
@global_var_130e8 = constant [10 x i8] c"Dummy bus\00"
@global_var_130f4 = constant [4 x i8] c"isa\00"
@global_var_130f8 = constant [8 x i8] c"ISA bus\00"
@global_var_13100 = constant [4 x i8] c"i2c\00"
@global_var_13104 = constant [12 x i8] c"I2C adapter\00"
@global_var_13110 = constant [6 x i8] c"smbus\00"
@global_var_13118 = constant [14 x i8] c"SMBus adapter\00"
@global_var_13128 = constant [8 x i8] c"unknown\00"
@global_var_13130 = constant [4 x i8] c"N/A\00"
@global_var_12e38 = constant [10 x i8*] [i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_130e0, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_130e8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_130f4, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_130f8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13100, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_13104, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_13110, i32 0, i32 0), i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_13118, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_13128, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_13130, i32 0, i32 0)]
@global_var_12fa4 = constant [20 x i8] c"%s: path truncated\0A\00"
@global_var_12fb8 = constant [18 x i8] c"%s/%s/device/name\00"
@global_var_12fcc = constant [13 x i8] c"%s/%s/device\00"
@global_var_12fdc = constant [5 x i8] c"i2c-\00"
@global_var_12fe4 = constant [21 x i8] c"%s/%s/device/%s/name\00"
@global_var_12ffc = constant [16 x i8] c"%s: read error\0A\00"
@global_var_1303c = constant [36 x i8] c"Error: I2C bus name is not unique!\0A\00"
@global_var_13060 = constant [52 x i8] c"Error: I2C bus name doesn't match any bus present!\0A\00"
@global_var_13094 = constant [30 x i8] c"Error: I2C bus out of range!\0A\00"
@global_var_13024 = constant [23 x i8] c"Error: Out of memory!\0A\00"
@global_var_130b4 = constant [44 x i8] c"Error: Could not set address to 0x%02x: %s\0A\00"
@global_var_12718 = local_unnamed_addr constant i32 71702
@global_var_1271c = local_unnamed_addr constant i32 71692
@global_var_23f08 = global i32 72585
@3 = external global i32
@global_var_240d8 = local_unnamed_addr global %_IO_FILE* null
@global_var_128f0 = external constant i8*
@global_var_11af4 = local_unnamed_addr constant void ()* inttoptr (i32 68932 to void ()*)
@global_var_11af8 = local_unnamed_addr constant void ()* inttoptr (i32 75493 to void ()*)
@4 = internal constant [2 x i8] c"r\00"
@5 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @4, i32 0, i32 0)
@global_var_13022 = local_unnamed_addr constant i8 0
@global_var_240e0 = local_unnamed_addr global %_IO_FILE* null
@global_var_13124 = constant [2 x i8] c"r\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_10af0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10af0:
  %0 = call i32 @function_11afc(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @function_10b10(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_10b10:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @function_10b1c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b1c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10b28(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10b28:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10b34(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b34:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10b40(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b40:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10b4c(i32* %ptr) local_unnamed_addr {
dec_label_pc_10b4c:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i8* @function_10b58(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10b58:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_10b64(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10b64:
  %0 = call i32 @i2c_smbus_write_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32* @function_10b70(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10b70:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_10b7c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10b7c:
  %0 = call i32 @strcasecmp(i8* %s1, i8* %s2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10b88(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_10b88:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10b94(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_10b94:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10ba0(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_10ba0:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10bac(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bac:
  %0 = call i32 @i2c_smbus_write_byte(i32 %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define %__dirstream* @function_10bb8(i8* %name) local_unnamed_addr {
dec_label_pc_10bb8:
  %0 = call %__dirstream* @opendir(i8* %name), !insn.addr !16
  ret %__dirstream* %0, !insn.addr !16
}

define i32 @function_10bc4(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_10bc4:
  %0 = call i32 (i8*, i32, ...) @open64(i8* %file, i32 %oflag), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_10bd0(i8* %s) local_unnamed_addr {
dec_label_pc_10bd0:
  %0 = call i32 @puts(i8* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32* @function_10bdc(i32 %size) local_unnamed_addr {
dec_label_pc_10bdc:
  %0 = call i32* @malloc(i32 %size), !insn.addr !19
  ret i32* %0, !insn.addr !19
}

define i32 @function_10be8(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10be8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i8* @function_10bf4(i32 %errnum) local_unnamed_addr {
dec_label_pc_10bf4:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !21
  ret i8* %0, !insn.addr !21
}

define void @function_10c00() local_unnamed_addr {
dec_label_pc_10c00:
  call void @__gmon_start__(), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_10c0c(i32 %status) local_unnamed_addr {
dec_label_pc_10c0c:
  call void @exit(i32 %status), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @function_10c18(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10c18:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10c24(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c24:
  %0 = call i32 @i2c_smbus_read_byte(i32 %arg1), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10c30(i8* %s) local_unnamed_addr {
dec_label_pc_10c30:
  %0 = call i32 @strlen(i8* %s), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i8* @function_10c3c(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10c3c:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !27
  ret i8* %0, !insn.addr !27
}

define i32 @function_10c48(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c48:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_10c54(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10c54:
  %0 = call i32 @i2c_smbus_write_byte_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32* @function_10c60() local_unnamed_addr {
dec_label_pc_10c60:
  %0 = call i32* @__errno_location(), !insn.addr !30
  ret i32* %0, !insn.addr !30
}

define i32 @function_10c6c(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c6c:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @function_10c78(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c78:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i8* @function_10c84(i8* %string) local_unnamed_addr {
dec_label_pc_10c84:
  %0 = call i8* @__strdup(i8* %string), !insn.addr !33
  ret i8* %0, !insn.addr !33
}

define i32* @function_10c90(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10c90:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !34
  ret i32* %0, !insn.addr !34
}

define i32 @function_10c9c(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10c9c:
  %0 = call i32 @fgetc(%_IO_FILE* %stream), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @function_10ca8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10ca8:
  %0 = call i32 @i2c_smbus_write_word_data(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @function_10cb4(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10cb4:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @function_10cc0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cc0:
  %0 = call i32 @i2c_smbus_read_word_data(i32 %arg1, i32 %arg2), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i8* @function_10ccc(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10ccc:
  %0 = call i8* @strrchr(i8* %s, i32 %c), !insn.addr !39
  ret i8* %0, !insn.addr !39
}

define i32 @function_10cd8(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10cd8:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define %dirent64* @function_10ce4(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10ce4:
  %0 = call %dirent64* @readdir64(%__dirstream* %dirp), !insn.addr !41
  ret %dirent64* %0, !insn.addr !41
}

define i32 @function_10cf0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10cf0:
  %0 = call i32 @i2c_smbus_read_byte_data(i32 %arg1, i32 %arg2), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define %_IO_FILE* @function_10cfc(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10cfc:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !43
  ret %_IO_FILE* %0, !insn.addr !43
}

define i32 @function_10d08(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_10d08:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !44
  ret i32 %0, !insn.addr !44
}

define void @function_10d14() local_unnamed_addr {
dec_label_pc_10d14:
  call void @abort(), !insn.addr !45
  ret void, !insn.addr !45
}

define i32 @function_10d20(i32 %fd) local_unnamed_addr {
dec_label_pc_10d20:
  %0 = call i32 @close(i32 %fd), !insn.addr !46
  ret i32 %0, !insn.addr !46
}

define i32 @function_10d2c(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_10d2c:
  %0 = call i32 @closedir(%__dirstream* %dirp), !insn.addr !47
  ret i32 %0, !insn.addr !47
}

define i32 @function_10d38(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_10d38:
  %0 = call i32 @i2c_smbus_write_i2c_block_data(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4), !insn.addr !48
  ret i32 %0, !insn.addr !48
}

define i32 @function_10d44(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10d44:
  %0 = alloca i32
  %r4.1130.reg2mem = alloca i32, !insn.addr !49
  %.reg2mem = alloca %_IO_FILE*, !insn.addr !49
  %.lcssa.reg2mem = alloca %_IO_FILE*, !insn.addr !49
  %stack_var_-124.1.reg2mem = alloca i32, !insn.addr !49
  %r7.3.reg2mem = alloca i32, !insn.addr !49
  %r4.9.reg2mem = alloca i32, !insn.addr !49
  %r0.3.reg2mem = alloca i32, !insn.addr !49
  %r4.831.reg2mem = alloca i32, !insn.addr !49
  %storemerge632.reg2mem = alloca i32, !insn.addr !49
  %storemerge10.reg2mem = alloca i32, !insn.addr !49
  %r6.3.reg2mem = alloca i32, !insn.addr !49
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !49
  %r4.6.reg2mem = alloca i32, !insn.addr !49
  %r0.2.reg2mem = alloca i32, !insn.addr !49
  %fp.3.reg2mem = alloca i32, !insn.addr !49
  %r6.2.reg2mem = alloca i32, !insn.addr !49
  %r4.4.reg2mem = alloca i32, !insn.addr !49
  %stack_var_-120.0.reg2mem = alloca i32, !insn.addr !49
  %storemerge4.reg2mem = alloca i32, !insn.addr !49
  %r6.0.reg2mem = alloca i32, !insn.addr !49
  %r4.2.reg2mem = alloca i32, !insn.addr !49
  %storemerge.reg2mem = alloca i32, !insn.addr !49
  %storemerge7.reg2mem = alloca i32, !insn.addr !49
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
  br i1 %2, label %dec_label_pc_11004, label %dec_label_pc_10d54, !insn.addr !50

dec_label_pc_10d54:                               ; preds = %dec_label_pc_10d44
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
  br i1 %8, label %dec_label_pc_10d8c, label %dec_label_pc_10e60, !insn.addr !54

dec_label_pc_10d8c:                               ; preds = %dec_label_pc_10d54, %dec_label_pc_10e48
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
  switch i8 %11, label %dec_label_pc_10fc8 [
    i8 86, label %dec_label_pc_10f94
    i8 121, label %dec_label_pc_10fa0
    i8 114, label %dec_label_pc_10fac
    i8 109, label %dec_label_pc_10fb8
    i8 102, label %dec_label_pc_10e38
    i8 97, label %dec_label_pc_10f88
  ], !insn.addr !57

dec_label_pc_10e38:                               ; preds = %dec_label_pc_10d8c, %79, %dec_label_pc_10fb8, %dec_label_pc_10fac, %dec_label_pc_10fa0, %dec_label_pc_10f94, %dec_label_pc_10f88
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
  br i1 %16, label %dec_label_pc_10e48, label %dec_label_pc_10e58, !insn.addr !60

dec_label_pc_10e48:                               ; preds = %dec_label_pc_10e38
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
  br i1 %23, label %dec_label_pc_10d8c, label %dec_label_pc_10e58, !insn.addr !64

dec_label_pc_10e58:                               ; preds = %dec_label_pc_10e38, %dec_label_pc_10e48
  %24 = icmp eq i32 %lr.1.reload, 0, !insn.addr !65
  store i32 %r1.1.reload, i32* %r1.2.reg2mem, !insn.addr !66
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !66
  store i32 %r7.1.reload, i32* %r7.2.reg2mem, !insn.addr !66
  store i32 %r8.1.reload, i32* %r8.2.reg2mem, !insn.addr !66
  store i32 %sb.1.reload, i32* %sb.2.reg2mem, !insn.addr !66
  store i32 %fp.1.reload, i32* %fp.2.reg2mem, !insn.addr !66
  br i1 %24, label %dec_label_pc_10e60, label %dec_label_pc_11008, !insn.addr !66

dec_label_pc_10e60:                               ; preds = %dec_label_pc_10d54, %dec_label_pc_10e58
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %25 = add i32 %r4.1.reload, 3, !insn.addr !67
  %26 = icmp slt i32 %25, %arg1, !insn.addr !68
  br i1 %26, label %dec_label_pc_10e6c, label %dec_label_pc_11004, !insn.addr !68

dec_label_pc_10e6c:                               ; preds = %dec_label_pc_10e60
  %27 = mul i32 %r4.1.reload, 4, !insn.addr !69
  %28 = add i32 %27, %3, !insn.addr !70
  %29 = inttoptr i32 %28 to i32*, !insn.addr !70
  %30 = load i32, i32* %29, align 4, !insn.addr !70
  %31 = call i32 @function_1247c(i32 %30), !insn.addr !71
  %32 = icmp slt i32 %31, 0, !insn.addr !72
  br i1 %32, label %dec_label_pc_11004, label %dec_label_pc_10e8c, !insn.addr !73

dec_label_pc_10e8c:                               ; preds = %dec_label_pc_10e6c
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %33 = add i32 %28, 4, !insn.addr !74
  %34 = inttoptr i32 %33 to i32*, !insn.addr !74
  %35 = load i32, i32* %34, align 4, !insn.addr !74
  %36 = call i32 @function_11ca8(i32 %35, i32 %r1.2.reload), !insn.addr !75
  %37 = icmp slt i32 %36, 0, !insn.addr !76
  br i1 %37, label %dec_label_pc_11004, label %dec_label_pc_10eac, !insn.addr !77

dec_label_pc_10eac:                               ; preds = %dec_label_pc_10e8c
  %38 = add i32 %arg2, 12, !insn.addr !78
  %39 = add i32 %38, %27, !insn.addr !79
  %40 = inttoptr i32 %39 to i32*, !insn.addr !80
  %41 = load i32, i32* %40, align 4, !insn.addr !80
  %42 = inttoptr i32 %41 to i8*, !insn.addr !81
  %43 = call i32 @strtol(i8* %42, i8** nonnull %stack_var_-100, i32 0), !insn.addr !81
  %44 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !82
  %45 = load i8, i8* %44, align 1, !insn.addr !83
  %46 = icmp eq i8 %45, 0, !insn.addr !84
  br i1 %46, label %dec_label_pc_10edc, label %dec_label_pc_10fe4, !insn.addr !85

dec_label_pc_10edc:                               ; preds = %dec_label_pc_10eac
  %47 = icmp ult i32 %43, 255, !insn.addr !86
  %48 = icmp ne i1 %47, true, !insn.addr !86
  %49 = icmp eq i32 %43, 255, !insn.addr !86
  %50 = icmp ne i1 %49, true, !insn.addr !87
  %51 = icmp eq i1 %48, %50, !insn.addr !87
  br i1 %51, label %dec_label_pc_10fe4, label %dec_label_pc_10ee4, !insn.addr !87

dec_label_pc_10ee4:                               ; preds = %dec_label_pc_10edc
  %fp.2.reload = load i32, i32* %fp.2.reg2mem
  %sb.2.reload = load i32, i32* %sb.2.reg2mem
  %r8.2.reload = load i32, i32* %r8.2.reg2mem
  %r7.2.reload = load i32, i32* %r7.2.reg2mem
  %52 = add i32 %r4.1.reload, 4, !insn.addr !88
  %53 = icmp eq i32 %52, %arg1, !insn.addr !89
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !90
  store i32 1, i32* %r6.0.reg2mem, !insn.addr !90
  br i1 %53, label %dec_label_pc_11058, label %dec_label_pc_10ef0, !insn.addr !90

dec_label_pc_10ef0:                               ; preds = %dec_label_pc_10ee4
  %54 = add i32 %r4.1.reload, 5, !insn.addr !91
  %55 = icmp eq i32 %54, %arg1, !insn.addr !92
  br i1 %55, label %dec_label_pc_11104, label %dec_label_pc_10f00, !insn.addr !93

dec_label_pc_10f00:                               ; preds = %dec_label_pc_10ef0
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
  br i1 %67, label %dec_label_pc_110e4, label %dec_label_pc_10f18, !insn.addr !98

dec_label_pc_10f18:                               ; preds = %dec_label_pc_10f00
  br i1 %65, label %dec_label_pc_110b8, label %dec_label_pc_10f1c, !insn.addr !99

dec_label_pc_10f1c:                               ; preds = %dec_label_pc_10f18
  %68 = load i8, i8* %61, align 1, !insn.addr !100
  %69 = icmp eq i8 %68, 105, !insn.addr !101
  br i1 %69, label %dec_label_pc_11510, label %dec_label_pc_10f28, !insn.addr !102

dec_label_pc_10f28:                               ; preds = %dec_label_pc_10f1c
  %70 = icmp ult i8 %68, 105, !insn.addr !101
  br i1 %70, label %dec_label_pc_11478, label %dec_label_pc_10f2c, !insn.addr !103

dec_label_pc_10f2c:                               ; preds = %dec_label_pc_10f28
  store i32 3, i32* %storemerge7.reg2mem
  store i32 5, i32* %storemerge10.reg2mem
  switch i8 %68, label %dec_label_pc_110e4 [
    i8 115, label %dec_label_pc_114e4
    i8 119, label %dec_label_pc_10f58
  ]

dec_label_pc_10f58:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11618, %dec_label_pc_11478
  %71 = add i32 %r4.1.reload, 6, !insn.addr !104
  %72 = icmp eq i32 %71, %arg1, !insn.addr !105
  store i32 ptrtoint ([28 x i8]* @global_var_129a8 to i32), i32* %storemerge.reg2mem, !insn.addr !106
  br i1 %72, label %dec_label_pc_10f58.dec_label_pc_11430_crit_edge, label %dec_label_pc_10f74, !insn.addr !106

dec_label_pc_10f58.dec_label_pc_11430_crit_edge:  ; preds = %dec_label_pc_10f58
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %.pre = add i32 %28, 12, !insn.addr !107
  %.pre38 = inttoptr i32 %.pre to i32*, !insn.addr !107
  %.pre48 = load i32, i32* %.pre38, align 4
  %.pre49 = inttoptr i32 %.pre48 to i8*, !insn.addr !108
  store i8* %.pre49, i8** %.pre-phi.reg2mem
  store i32 %storemerge7.reload, i32* %r6.3.reg2mem
  br label %dec_label_pc_11430

dec_label_pc_10f74:                               ; preds = %dec_label_pc_115a8, %dec_label_pc_11430, %dec_label_pc_10f58, %dec_label_pc_1157c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %73 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4
  %74 = inttoptr i32 %storemerge.reload to i32*, !insn.addr !109
  %75 = call i32 @fwrite(i32* %74, i32 1, i32 27, %_IO_FILE* %73), !insn.addr !109
  %76 = call i32 @function_11b8c(), !insn.addr !110
  unreachable, !insn.addr !110

dec_label_pc_10f88:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !111
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !111
  store i32 1, i32* %r1.1.reg2mem, !insn.addr !111
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !111
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !111
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !111
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !111
  br label %dec_label_pc_10e38, !insn.addr !111

dec_label_pc_10f94:                               ; preds = %dec_label_pc_10d8c
  store i32 1, i32* %lr.1.reg2mem, !insn.addr !112
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !112
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !112
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !112
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !112
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !112
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !112
  br label %dec_label_pc_10e38, !insn.addr !112

dec_label_pc_10fa0:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !113
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !113
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !113
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !113
  store i32 1, i32* %r8.1.reg2mem, !insn.addr !113
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !113
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !113
  br label %dec_label_pc_10e38, !insn.addr !113

dec_label_pc_10fac:                               ; preds = %dec_label_pc_10d8c
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !114
  store i32 %r4.0.reload, i32* %r0.1.reg2mem, !insn.addr !114
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !114
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !114
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !114
  store i32 1, i32* %sb.1.reg2mem, !insn.addr !114
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !114
  br label %dec_label_pc_10e38, !insn.addr !114

dec_label_pc_10fb8:                               ; preds = %dec_label_pc_10d8c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %77 = add i32 %r4.0.reload, 2, !insn.addr !115
  %78 = icmp slt i32 %77, %arg1, !insn.addr !116
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !116
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !116
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !116
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !116
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !116
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !116
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !116
  br i1 %78, label %79, label %dec_label_pc_10e38, !insn.addr !116

; <label>:79:                                     ; preds = %dec_label_pc_10fb8
  %80 = mul i32 %77, 4, !insn.addr !116
  %81 = add i32 %80, %arg2, !insn.addr !116
  %82 = inttoptr i32 %81 to i32*, !insn.addr !116
  %83 = load i32, i32* %82, align 4, !insn.addr !116
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !116
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !116
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !116
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !116
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !116
  store i32 %sb.0.reload, i32* %sb.1.reg2mem, !insn.addr !116
  store i32 %83, i32* %fp.1.reg2mem, !insn.addr !116
  br label %dec_label_pc_10e38, !insn.addr !116

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_10d8c
  %84 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !117
  %85 = inttoptr i32 %r2.0.reload to i8*, !insn.addr !118
  %86 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %84, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_128d0, i32 0, i32 0), i8* %85), !insn.addr !118
  %87 = call i32 @function_11b8c(), !insn.addr !119
  unreachable, !insn.addr !119

dec_label_pc_10fe4:                               ; preds = %dec_label_pc_10eac, %dec_label_pc_10edc
  %88 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !120
  %89 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_1290c to i32*), i32 1, i32 29, %_IO_FILE* %88), !insn.addr !121
  br label %dec_label_pc_11004, !insn.addr !121

dec_label_pc_11004:                               ; preds = %dec_label_pc_10e60, %dec_label_pc_10fe4, %dec_label_pc_10e8c, %dec_label_pc_10e6c, %dec_label_pc_10d44
  %90 = call i32 @function_11b8c(), !insn.addr !122
  unreachable, !insn.addr !122

dec_label_pc_11008:                               ; preds = %dec_label_pc_10e58
  %91 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !123
  %92 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %91, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_128f8, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_128f4, i32 0, i32 0)), !insn.addr !124
  call void @exit(i32 0), !insn.addr !125
  unreachable, !insn.addr !125

dec_label_pc_11058:                               ; preds = %dec_label_pc_11118, %dec_label_pc_114b4, %dec_label_pc_10ee4, %dec_label_pc_11540
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %93 = icmp eq i32 %fp.2.reload, 0, !insn.addr !126
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !127
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !127
  store i32 %r6.0.reload, i32* %r6.2.reg2mem, !insn.addr !127
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !127
  br i1 %93, label %dec_label_pc_11144, label %dec_label_pc_11060, !insn.addr !127

dec_label_pc_11060:                               ; preds = %dec_label_pc_11058
  %94 = inttoptr i32 %fp.2.reload to i8*, !insn.addr !128
  %95 = call i32 @strtol(i8* %94, i8** nonnull %stack_var_-100, i32 0), !insn.addr !128
  %96 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !129
  %97 = load i8, i8* %96, align 1, !insn.addr !130
  %98 = icmp eq i8 %97, 0, !insn.addr !131
  store i32 ptrtoint ([33 x i8]* @global_var_12a04 to i32), i32* %storemerge4.reg2mem, !insn.addr !132
  br i1 %98, label %dec_label_pc_113f0, label %dec_label_pc_110a4, !insn.addr !132

dec_label_pc_110a4:                               ; preds = %dec_label_pc_115d4, %dec_label_pc_11540, %dec_label_pc_11060
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %99 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4
  %100 = inttoptr i32 %storemerge4.reload to i32*, !insn.addr !133
  %101 = call i32 @fwrite(i32* %100, i32 1, i32 32, %_IO_FILE* %99), !insn.addr !133
  %102 = call i32 @function_11b8c(), !insn.addr !134
  unreachable, !insn.addr !134

dec_label_pc_110b8:                               ; preds = %dec_label_pc_10f18
  %103 = add i32 %60, 1, !insn.addr !135
  %104 = inttoptr i32 %103 to i8*, !insn.addr !135
  %105 = load i8, i8* %104, align 1, !insn.addr !135
  %106 = icmp eq i8 %105, 112, !insn.addr !136
  br i1 %106, label %dec_label_pc_110c4, label %dec_label_pc_110e4, !insn.addr !137

dec_label_pc_110c4:                               ; preds = %dec_label_pc_110b8
  %107 = load i8, i8* %61, align 1, !insn.addr !138
  %108 = icmp eq i8 %107, 105, !insn.addr !139
  br i1 %108, label %dec_label_pc_1151c, label %dec_label_pc_110d0, !insn.addr !140

dec_label_pc_110d0:                               ; preds = %dec_label_pc_110c4
  %109 = icmp ult i8 %107, 105, !insn.addr !139
  br i1 %109, label %dec_label_pc_11618, label %dec_label_pc_110d4, !insn.addr !141

dec_label_pc_110d4:                               ; preds = %dec_label_pc_110d0
  store i32 3, i32* %storemerge7.reg2mem
  store i32 5, i32* %storemerge10.reg2mem
  switch i8 %107, label %dec_label_pc_110e4 [
    i8 115, label %dec_label_pc_114e4
    i8 119, label %dec_label_pc_10f58
  ]

dec_label_pc_110e4:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11618, %dec_label_pc_110b8, %dec_label_pc_11478, %dec_label_pc_10f00
  %110 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !142
  %111 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %110, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1292c, i32 0, i32 0), i8* %61), !insn.addr !143
  %112 = call i32 @function_11b8c(), !insn.addr !144
  unreachable, !insn.addr !144

dec_label_pc_11104:                               ; preds = %dec_label_pc_10ef0
  %113 = add i32 %28, 12
  %114 = inttoptr i32 %113 to i32*
  %115 = load i32, i32* %114, align 4, !insn.addr !145
  %116 = inttoptr i32 %115 to i8*
  %117 = load i8, i8* %116, align 1, !insn.addr !146
  %118 = icmp eq i8 %117, 99, !insn.addr !147
  store i8* %116, i8** %.pre-phi.reg2mem, !insn.addr !148
  store i32 2, i32* %r6.3.reg2mem, !insn.addr !148
  br i1 %118, label %dec_label_pc_11118, label %dec_label_pc_11430, !insn.addr !148

dec_label_pc_11118:                               ; preds = %dec_label_pc_11104
  %119 = add i32 %115, 1, !insn.addr !149
  %120 = inttoptr i32 %119 to i8*, !insn.addr !149
  %121 = load i8, i8* %120, align 1, !insn.addr !149
  store i32 -1, i32* %r4.2.reg2mem
  store i32 1, i32* %r6.0.reg2mem
  store i8* %116, i8** %.pre-phi.reg2mem
  store i32 2, i32* %r6.3.reg2mem
  switch i8 %121, label %dec_label_pc_11430 [
    i8 0, label %dec_label_pc_11058
    i8 112, label %dec_label_pc_114b4
  ]

dec_label_pc_11144:                               ; preds = %dec_label_pc_115dc, %dec_label_pc_1159c, %dec_label_pc_11588, %dec_label_pc_113fc, %dec_label_pc_1149c, %dec_label_pc_11058
  %122 = call i32 @function_11d60(i32 %31, i32* nonnull %stack_var_-92, i32 20, i32 0), !insn.addr !150
  %123 = icmp slt i32 %122, 0, !insn.addr !151
  br i1 %123, label %dec_label_pc_11328, label %dec_label_pc_11160, !insn.addr !152

dec_label_pc_11160:                               ; preds = %dec_label_pc_11144
  %124 = call i32 (i32, i32, ...) @ioctl(i32 %122, i32 1797), !insn.addr !153
  %125 = icmp slt i32 %124, 0, !insn.addr !154
  br i1 %125, label %dec_label_pc_11a9c, label %dec_label_pc_11174, !insn.addr !155

dec_label_pc_11174:                               ; preds = %dec_label_pc_11160
  %fp.3.reload = load i32, i32* %fp.3.reg2mem
  %r6.2.reload = load i32, i32* %r6.2.reg2mem
  %r4.4.reload = load i32, i32* %r4.4.reg2mem
  %stack_var_-120.0.reload = load i32, i32* %stack_var_-120.0.reg2mem
  %126 = add nsw i32 %r6.2.reload, -1, !insn.addr !156
  store i32 %126, i32* @1, align 4, !insn.addr !157
  switch i32 %r6.2.reload, label %dec_label_pc_111e0 [
    i32 1, label %dec_label_pc_113c0
    i32 2, label %dec_label_pc_11390
    i32 3, label %dec_label_pc_11360
    i32 8, label %dec_label_pc_112fc
    i32 5, label %dec_label_pc_11330
  ], !insn.addr !157

dec_label_pc_111e0:                               ; preds = %dec_label_pc_112fc, %dec_label_pc_11330, %dec_label_pc_11360, %dec_label_pc_11390, %dec_label_pc_113c0, %dec_label_pc_11174
  %127 = call i32 @function_125d0(i32 %122, i32 %36, i32 %r7.2.reload), !insn.addr !158
  %128 = icmp eq i32 %127, 0, !insn.addr !159
  br i1 %128, label %dec_label_pc_111f8, label %dec_label_pc_11328, !insn.addr !160

dec_label_pc_111f8:                               ; preds = %dec_label_pc_111e0
  %129 = icmp eq i32 %r8.2.reload, 0, !insn.addr !161
  br i1 %129, label %dec_label_pc_11868, label %dec_label_pc_11200, !insn.addr !162

dec_label_pc_11200:                               ; preds = %dec_label_pc_11960, %dec_label_pc_111f8
  %130 = icmp eq i32 %stack_var_-120.0.reload, 0, !insn.addr !163
  store i32 %r4.4.reload, i32* %r4.6.reg2mem, !insn.addr !164
  br i1 %130, label %dec_label_pc_112c8, label %dec_label_pc_1120c, !insn.addr !164

dec_label_pc_1120c:                               ; preds = %dec_label_pc_11200
  %131 = icmp eq i32 %r6.2.reload, 1, !insn.addr !165
  br i1 %131, label %dec_label_pc_1185c, label %dec_label_pc_11214, !insn.addr !166

dec_label_pc_11214:                               ; preds = %dec_label_pc_1120c
  %132 = icmp eq i32 %r6.2.reload, 3, !insn.addr !167
  %133 = urem i32 %43, 256
  br i1 %132, label %dec_label_pc_1121c, label %dec_label_pc_1184c, !insn.addr !168

dec_label_pc_1121c:                               ; preds = %dec_label_pc_11214
  %134 = call i32 @i2c_smbus_read_word_data(i32 %122, i32 %133), !insn.addr !169
  store i32 %134, i32* %r0.2.reg2mem, !insn.addr !169
  br label %dec_label_pc_11228, !insn.addr !169

dec_label_pc_11228:                               ; preds = %dec_label_pc_1185c, %dec_label_pc_1184c, %dec_label_pc_1121c
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %135 = icmp slt i32 %r0.2.reload, 0, !insn.addr !170
  br i1 %135, label %dec_label_pc_11824, label %dec_label_pc_11230, !insn.addr !171

dec_label_pc_11230:                               ; preds = %dec_label_pc_11228
  %136 = xor i32 %r0.2.reload, %r4.4.reload, !insn.addr !172
  %137 = and i32 %136, %stack_var_-120.0.reload, !insn.addr !173
  %138 = xor i32 %137, %r0.2.reload, !insn.addr !174
  store i32 %138, i32* %r4.6.reg2mem, !insn.addr !175
  br i1 %129, label %dec_label_pc_11248, label %dec_label_pc_112c8, !insn.addr !175

dec_label_pc_11248:                               ; preds = %dec_label_pc_11230
  %139 = icmp eq i32 %r6.2.reload, 3, !insn.addr !176
  %140 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !177
  %ip.2 = select i1 %139, i32 4, i32 2
  %141 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %140, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12d00, i32 0, i32 0), i32 %ip.2, i32 %r0.2.reload, i32 %ip.2, i32 %stack_var_-120.0.reload, i32 %ip.2, i32 %138, i32 %43), !insn.addr !178
  %142 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !179
  %143 = call i32 @fwrite(i32* bitcast ([17 x i8]* @global_var_12d4c to i32*), i32 1, i32 16, %_IO_FILE* %142), !insn.addr !180
  %144 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !181
  %145 = call i32 @fflush(%_IO_FILE* %144), !insn.addr !182
  %146 = call i32 @function_12644(i32 1), !insn.addr !183
  %147 = icmp eq i32 %146, 0, !insn.addr !184
  store i32 %138, i32* %r4.6.reg2mem, !insn.addr !185
  br i1 %147, label %dec_label_pc_11804, label %dec_label_pc_112c8, !insn.addr !185

dec_label_pc_112c8:                               ; preds = %dec_label_pc_11200, %dec_label_pc_11248, %dec_label_pc_11230
  %r4.6.reload = load i32, i32* %r4.6.reg2mem
  %148 = urem i32 %43, 256, !insn.addr !186
  store i32 %126, i32* @2, align 4, !insn.addr !187
  switch i32 %r6.2.reload, label %dec_label_pc_117ac [
    i32 1, label %dec_label_pc_116b4
    i32 8, label %dec_label_pc_11a6c
    i32 3, label %dec_label_pc_11624
    i32 5, label %dec_label_pc_11a84
  ], !insn.addr !187

dec_label_pc_112fc:                               ; preds = %dec_label_pc_11174
  %149 = and i32 %1, 134217728, !insn.addr !188
  %150 = icmp eq i32 %149, 0, !insn.addr !188
  br i1 %150, label %dec_label_pc_11308, label %dec_label_pc_111e0, !insn.addr !189

dec_label_pc_11308:                               ; preds = %dec_label_pc_112fc
  %151 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !190
  %152 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %151, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a9c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12b04, i32 0, i32 0)), !insn.addr !191
  br label %dec_label_pc_11328, !insn.addr !191

dec_label_pc_11328:                               ; preds = %dec_label_pc_111e0, %dec_label_pc_113cc, %dec_label_pc_1139c, %dec_label_pc_1136c, %dec_label_pc_1133c, %dec_label_pc_11308, %dec_label_pc_11a9c, %dec_label_pc_11144
  call void @exit(i32 1), !insn.addr !192
  unreachable, !insn.addr !192

dec_label_pc_11330:                               ; preds = %dec_label_pc_11174
  %153 = and i32 %1, 33554432, !insn.addr !193
  %154 = icmp eq i32 %153, 0, !insn.addr !193
  br i1 %154, label %dec_label_pc_1133c, label %dec_label_pc_111e0, !insn.addr !194

dec_label_pc_1133c:                               ; preds = %dec_label_pc_11330
  %155 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !195
  %156 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %155, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a9c, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12af0, i32 0, i32 0)), !insn.addr !196
  br label %dec_label_pc_11328, !insn.addr !197

dec_label_pc_11360:                               ; preds = %dec_label_pc_11174
  %157 = and i32 %1, 4194304, !insn.addr !198
  %158 = icmp eq i32 %157, 0, !insn.addr !198
  br i1 %158, label %dec_label_pc_1136c, label %dec_label_pc_111e0, !insn.addr !199

dec_label_pc_1136c:                               ; preds = %dec_label_pc_11360
  %159 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !200
  %160 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %159, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a9c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12adc, i32 0, i32 0)), !insn.addr !201
  br label %dec_label_pc_11328, !insn.addr !202

dec_label_pc_11390:                               ; preds = %dec_label_pc_11174
  %161 = and i32 %1, 1048576, !insn.addr !203
  %162 = icmp eq i32 %161, 0, !insn.addr !203
  br i1 %162, label %dec_label_pc_1139c, label %dec_label_pc_111e0, !insn.addr !204

dec_label_pc_1139c:                               ; preds = %dec_label_pc_11390
  %163 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !205
  %164 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %163, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a9c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_12ac8, i32 0, i32 0)), !insn.addr !206
  br label %dec_label_pc_11328, !insn.addr !207

dec_label_pc_113c0:                               ; preds = %dec_label_pc_11174
  %165 = and i32 %1, 262144, !insn.addr !208
  %166 = icmp eq i32 %165, 0, !insn.addr !208
  br i1 %166, label %dec_label_pc_113cc, label %dec_label_pc_111e0, !insn.addr !209

dec_label_pc_113cc:                               ; preds = %dec_label_pc_113c0
  %167 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !210
  %168 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %167, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_12a9c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12a8c, i32 0, i32 0)), !insn.addr !211
  br label %dec_label_pc_11328, !insn.addr !212

dec_label_pc_113f0:                               ; preds = %dec_label_pc_11060
  %169 = icmp eq i32 %r6.0.reload, 3, !insn.addr !213
  br i1 %169, label %dec_label_pc_113fc, label %dec_label_pc_1149c, !insn.addr !214

dec_label_pc_113fc:                               ; preds = %dec_label_pc_113f0
  %170 = icmp slt i32 %95, 65536, !insn.addr !215
  store i32 %95, i32* %stack_var_-120.0.reg2mem, !insn.addr !215
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !215
  store i32 3, i32* %r6.2.reg2mem, !insn.addr !215
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !215
  br i1 %170, label %dec_label_pc_11144, label %dec_label_pc_11404, !insn.addr !215

dec_label_pc_11404:                               ; preds = %dec_label_pc_1149c, %dec_label_pc_113fc
  %171 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !216
  %172 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12a28 to i32*), i32 1, i32 37, %_IO_FILE* %171), !insn.addr !217
  %173 = call i32 @function_11b8c(), !insn.addr !218
  unreachable, !insn.addr !218

dec_label_pc_11430:                               ; preds = %dec_label_pc_10f58.dec_label_pc_11430_crit_edge, %dec_label_pc_114b4, %dec_label_pc_11118, %dec_label_pc_11104
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %174 = call i32 @strtol(i8* %.pre-phi.reload, i8** nonnull %stack_var_-100, i32 0), !insn.addr !108
  %175 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !219
  %176 = load i8, i8* %175, align 1, !insn.addr !220
  %177 = icmp eq i8 %176, 0, !insn.addr !221
  %178 = icmp sgt i32 %174, -1
  %179 = icmp eq i1 %178, %177, !insn.addr !222
  store i32 ptrtoint ([28 x i8]* @global_var_129c4 to i32), i32* %storemerge.reg2mem, !insn.addr !223
  br i1 %179, label %dec_label_pc_11540, label %dec_label_pc_10f74, !insn.addr !223

dec_label_pc_11478:                               ; preds = %dec_label_pc_10f28
  %180 = icmp eq i8 %68, 98, !insn.addr !224
  store i32 2, i32* %storemerge7.reg2mem, !insn.addr !225
  br i1 %180, label %dec_label_pc_10f58, label %dec_label_pc_110e4, !insn.addr !225

dec_label_pc_1149c:                               ; preds = %dec_label_pc_113f0
  %181 = icmp sgt i32 %95, 255, !insn.addr !226
  store i32 %95, i32* %stack_var_-120.0.reg2mem, !insn.addr !226
  store i32 %r4.2.reload, i32* %r4.4.reg2mem, !insn.addr !226
  store i32 %r6.0.reload, i32* %r6.2.reg2mem, !insn.addr !226
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !226
  br i1 %181, label %dec_label_pc_11404, label %dec_label_pc_11144, !insn.addr !226

dec_label_pc_114b4:                               ; preds = %dec_label_pc_11118
  %182 = add i32 %115, 2, !insn.addr !227
  %183 = inttoptr i32 %182 to i8*, !insn.addr !227
  %184 = load i8, i8* %183, align 1, !insn.addr !227
  %185 = icmp eq i8 %184, 0, !insn.addr !228
  store i32 -1, i32* %r4.2.reg2mem, !insn.addr !229
  store i32 1, i32* %r6.0.reg2mem, !insn.addr !229
  store i8* %116, i8** %.pre-phi.reg2mem, !insn.addr !229
  store i32 2, i32* %r6.3.reg2mem, !insn.addr !229
  br i1 %185, label %dec_label_pc_11058, label %dec_label_pc_11430, !insn.addr !229

dec_label_pc_114e4:                               ; preds = %dec_label_pc_10f2c, %dec_label_pc_110d4, %dec_label_pc_11510
  %186 = icmp eq i32 %fp.2.reload, 0, !insn.addr !230
  br i1 %186, label %dec_label_pc_1157c, label %dec_label_pc_114ec, !insn.addr !231

dec_label_pc_114ec:                               ; preds = %dec_label_pc_114e4
  %187 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !232
  %188 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_12978 to i32*), i32 1, i32 44, %_IO_FILE* %187), !insn.addr !233
  %189 = call i32 @function_11b8c(), !insn.addr !234
  unreachable, !insn.addr !234

dec_label_pc_11510:                               ; preds = %dec_label_pc_10f1c
  %190 = add i32 %60, 1, !insn.addr !235
  %191 = inttoptr i32 %190 to i8*, !insn.addr !235
  %192 = load i8, i8* %191, align 1, !insn.addr !235
  %193 = icmp eq i8 %192, 112, !insn.addr !236
  store i32 8, i32* %storemerge10.reg2mem, !insn.addr !237
  br i1 %193, label %dec_label_pc_1151c, label %dec_label_pc_114e4, !insn.addr !237

dec_label_pc_1151c:                               ; preds = %dec_label_pc_11510, %dec_label_pc_110c4
  %194 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !238
  %195 = call i32 @fwrite(i32* bitcast ([48 x i8]* @global_var_12948 to i32*), i32 1, i32 47, %_IO_FILE* %194), !insn.addr !239
  %196 = call i32 @function_11b8c(), !insn.addr !240
  unreachable, !insn.addr !240

dec_label_pc_11540:                               ; preds = %dec_label_pc_11430
  %r6.3.reload = load i32, i32* %r6.3.reg2mem
  %197 = icmp eq i32 %174, 65536, !insn.addr !241
  %198 = icmp sgt i32 %174, 65535, !insn.addr !242
  %199 = icmp eq i32 %r6.3.reload, 3
  %spec.select14 = select i1 %198, i1 %199, i1 %197
  store i32 %174, i32* %r4.2.reg2mem, !insn.addr !243
  store i32 %r6.3.reload, i32* %r6.0.reg2mem, !insn.addr !243
  store i32 ptrtoint ([33 x i8]* @global_var_129e0 to i32), i32* %storemerge4.reg2mem, !insn.addr !243
  br i1 %spec.select14, label %dec_label_pc_110a4, label %dec_label_pc_11058, !insn.addr !243

dec_label_pc_1157c:                               ; preds = %dec_label_pc_114e4
  %200 = add i32 %r4.1.reload, 37, !insn.addr !244
  %201 = icmp slt i32 %200, %arg1, !insn.addr !245
  store i32 ptrtoint ([28 x i8]* @global_var_129a8 to i32), i32* %storemerge.reg2mem, !insn.addr !245
  br i1 %201, label %dec_label_pc_10f74, label %dec_label_pc_11588, !insn.addr !245

dec_label_pc_11588:                               ; preds = %dec_label_pc_1157c
  %storemerge10.reload = load i32, i32* %storemerge10.reg2mem
  %trunc = trunc i32 %storemerge10.reload to i4
  store i32 0, i32* %stack_var_-120.0.reg2mem
  store i32 -1, i32* %r4.4.reg2mem
  store i32 %storemerge10.reload, i32* %r6.2.reg2mem
  store i32 0, i32* %fp.3.reg2mem
  switch i4 %trunc, label %dec_label_pc_11144 [
    i4 5, label %dec_label_pc_1159c
    i4 -8, label %dec_label_pc_1159c
  ]

dec_label_pc_1159c:                               ; preds = %dec_label_pc_11588, %dec_label_pc_11588
  %202 = icmp slt i32 %54, %arg1, !insn.addr !246
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !246
  store i32 -1, i32* %r4.4.reg2mem, !insn.addr !246
  store i32 %storemerge10.reload, i32* %r6.2.reg2mem, !insn.addr !246
  store i32 0, i32* %fp.3.reg2mem, !insn.addr !246
  br i1 %202, label %dec_label_pc_115a8.lr.ph, label %dec_label_pc_11144, !insn.addr !246

dec_label_pc_115a8.lr.ph:                         ; preds = %dec_label_pc_1159c
  %203 = ptrtoint i32* %stack_var_-72 to i32
  store i32 0, i32* %storemerge632.reg2mem
  store i32 %39, i32* %r4.831.reg2mem
  br label %dec_label_pc_115a8

dec_label_pc_115a8:                               ; preds = %dec_label_pc_115a8.lr.ph, %dec_label_pc_115dc
  %r4.831.reload = load i32, i32* %r4.831.reg2mem
  %204 = add i32 %r4.831.reload, 4, !insn.addr !247
  %205 = inttoptr i32 %204 to i32*, !insn.addr !247
  %206 = load i32, i32* %205, align 4, !insn.addr !247
  %207 = inttoptr i32 %206 to i8*, !insn.addr !248
  %208 = call i32 @strtol(i8* %207, i8** nonnull %stack_var_-100, i32 0), !insn.addr !248
  %209 = load i8*, i8** %stack_var_-100, align 4, !insn.addr !249
  %210 = load i8, i8* %209, align 1, !insn.addr !250
  %211 = icmp eq i8 %210, 0, !insn.addr !251
  %212 = icmp sgt i32 %208, -1
  %213 = icmp eq i1 %212, %211, !insn.addr !252
  store i32 ptrtoint ([28 x i8]* @global_var_129c4 to i32), i32* %storemerge.reg2mem, !insn.addr !253
  br i1 %213, label %dec_label_pc_115d4, label %dec_label_pc_10f74, !insn.addr !253

dec_label_pc_115d4:                               ; preds = %dec_label_pc_115a8
  %214 = icmp sgt i32 %208, 255, !insn.addr !254
  store i32 ptrtoint ([33 x i8]* @global_var_129e0 to i32), i32* %storemerge4.reg2mem, !insn.addr !254
  br i1 %214, label %dec_label_pc_110a4, label %dec_label_pc_115dc, !insn.addr !254

dec_label_pc_115dc:                               ; preds = %dec_label_pc_115d4
  %storemerge632.reload = load i32, i32* %storemerge632.reg2mem
  %215 = trunc i32 %208 to i8, !insn.addr !255
  %216 = add i32 %storemerge632.reload, %203, !insn.addr !255
  %217 = inttoptr i32 %216 to i8*, !insn.addr !255
  store i8 %215, i8* %217, align 1, !insn.addr !255
  %218 = add i32 %storemerge632.reload, 1, !insn.addr !256
  %219 = add i32 %218, %54, !insn.addr !257
  %220 = icmp slt i32 %219, %arg1, !insn.addr !246
  store i32 0, i32* %stack_var_-120.0.reg2mem, !insn.addr !246
  store i32 -1, i32* %r4.4.reg2mem, !insn.addr !246
  store i32 %storemerge10.reload, i32* %r6.2.reg2mem, !insn.addr !246
  store i32 %218, i32* %fp.3.reg2mem, !insn.addr !246
  store i32 %218, i32* %storemerge632.reg2mem, !insn.addr !246
  store i32 %204, i32* %r4.831.reg2mem, !insn.addr !246
  br i1 %220, label %dec_label_pc_115a8, label %dec_label_pc_11144, !insn.addr !246

dec_label_pc_11618:                               ; preds = %dec_label_pc_110d0
  %221 = icmp eq i8 %107, 98, !insn.addr !258
  store i32 2, i32* %storemerge7.reg2mem, !insn.addr !259
  br i1 %221, label %dec_label_pc_10f58, label %dec_label_pc_110e4, !insn.addr !259

dec_label_pc_11624:                               ; preds = %dec_label_pc_112c8
  %222 = urem i32 %r4.6.reload, 65536, !insn.addr !260
  %223 = call i32 @i2c_smbus_write_word_data(i32 %122, i32 %148, i32 %222, i32 %126), !insn.addr !261
  store i32 %223, i32* %r0.3.reg2mem, !insn.addr !261
  br label %dec_label_pc_11634, !insn.addr !261

dec_label_pc_11634:                               ; preds = %dec_label_pc_11a84, %dec_label_pc_11a6c, %dec_label_pc_116b4, %dec_label_pc_11624, %dec_label_pc_117ac
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  %224 = icmp slt i32 %r0.3.reload, 0, !insn.addr !262
  br i1 %224, label %dec_label_pc_1177c, label %dec_label_pc_11648, !insn.addr !263

dec_label_pc_11648:                               ; preds = %dec_label_pc_11634
  %225 = icmp eq i32 %sb.2.reload, 0, !insn.addr !264
  br i1 %225, label %dec_label_pc_1171c, label %dec_label_pc_11650, !insn.addr !265

dec_label_pc_11650:                               ; preds = %dec_label_pc_11648
  switch i32 %r6.2.reload, label %dec_label_pc_116f4 [
    i32 1, label %dec_label_pc_11708
    i32 3, label %dec_label_pc_11660
  ]

dec_label_pc_11660:                               ; preds = %dec_label_pc_11650
  %226 = call i32 @i2c_smbus_read_word_data(i32 %122, i32 %148), !insn.addr !266
  store i32 %r4.6.reload, i32* %r4.9.reg2mem, !insn.addr !267
  store i32 %226, i32* %r7.3.reg2mem, !insn.addr !267
  br label %dec_label_pc_11670, !insn.addr !267

dec_label_pc_11670:                               ; preds = %dec_label_pc_11708, %dec_label_pc_116f4, %dec_label_pc_11660
  %r7.3.reload = load i32, i32* %r7.3.reg2mem
  %227 = call i32 @close(i32 %122), !insn.addr !268
  %228 = icmp slt i32 %r7.3.reload, 0, !insn.addr !269
  br i1 %228, label %dec_label_pc_116e4, label %dec_label_pc_11680, !insn.addr !270

dec_label_pc_11680:                               ; preds = %dec_label_pc_11670
  %r4.9.reload = load i32, i32* %r4.9.reg2mem
  %229 = icmp eq i32 %r7.3.reload, %r4.9.reload, !insn.addr !271
  %230 = icmp eq i32 %r6.2.reload, 3
  %r1.7 = select i1 %230, i32 4, i32 2
  br i1 %229, label %dec_label_pc_116c4, label %dec_label_pc_11688, !insn.addr !272

dec_label_pc_11688:                               ; preds = %dec_label_pc_11680
  %231 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_12dd4, i32 0, i32 0), i32 %r1.7, i32 %r4.9.reload, i32 %r1.7, i32 %r7.3.reload), !insn.addr !273
  br label %dec_label_pc_116ac, !insn.addr !273

dec_label_pc_116ac:                               ; preds = %dec_label_pc_116e4, %dec_label_pc_116c4, %dec_label_pc_11688
  call void @exit(i32 0), !insn.addr !274
  unreachable, !insn.addr !274

dec_label_pc_116b4:                               ; preds = %dec_label_pc_112c8
  %232 = call i32 @i2c_smbus_write_byte(i32 %122, i32 %148), !insn.addr !275
  store i32 %232, i32* %r0.3.reg2mem, !insn.addr !276
  br label %dec_label_pc_11634, !insn.addr !276

dec_label_pc_116c4:                               ; preds = %dec_label_pc_11680
  %233 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_12e10, i32 0, i32 0), i32 %r1.7, i32 %r4.9.reload), !insn.addr !277
  br label %dec_label_pc_116ac, !insn.addr !278

dec_label_pc_116e4:                               ; preds = %dec_label_pc_11670
  %234 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_12db8, i32 0, i32 0)), !insn.addr !279
  br label %dec_label_pc_116ac, !insn.addr !280

dec_label_pc_116f4:                               ; preds = %dec_label_pc_11650
  %235 = call i32 @i2c_smbus_read_byte_data(i32 %122, i32 %148), !insn.addr !281
  store i32 %r4.6.reload, i32* %r4.9.reg2mem, !insn.addr !282
  store i32 %235, i32* %r7.3.reg2mem, !insn.addr !282
  br label %dec_label_pc_11670, !insn.addr !282

dec_label_pc_11708:                               ; preds = %dec_label_pc_11650
  %236 = call i32 @i2c_smbus_read_byte(i32 %122), !insn.addr !283
  store i32 %43, i32* %r4.9.reg2mem, !insn.addr !284
  store i32 %236, i32* %r7.3.reg2mem, !insn.addr !284
  br label %dec_label_pc_11670, !insn.addr !284

dec_label_pc_1171c:                               ; preds = %dec_label_pc_11648
  %237 = call i32 @close(i32 %122), !insn.addr !285
  call void @exit(i32 0), !insn.addr !286
  unreachable, !insn.addr !286

dec_label_pc_1177c:                               ; preds = %dec_label_pc_11634
  %238 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !287
  %239 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_12d80 to i32*), i32 1, i32 20, %_IO_FILE* %238), !insn.addr !288
  %240 = call i32 @close(i32 %122), !insn.addr !289
  call void @exit(i32 1), !insn.addr !290
  unreachable, !insn.addr !290

dec_label_pc_117ac:                               ; preds = %dec_label_pc_112c8
  %241 = urem i32 %r4.6.reload, 256, !insn.addr !291
  %242 = call i32 @i2c_smbus_write_byte_data(i32 %122, i32 %148, i32 %241, i32 %126), !insn.addr !292
  store i32 %242, i32* %r0.3.reg2mem, !insn.addr !293
  br label %dec_label_pc_11634, !insn.addr !293

dec_label_pc_11804:                               ; preds = %dec_label_pc_11248
  %243 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !294
  %244 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cc0 to i32*), i32 1, i32 26, %_IO_FILE* %243), !insn.addr !295
  call void @exit(i32 0), !insn.addr !296
  unreachable, !insn.addr !296

dec_label_pc_11824:                               ; preds = %dec_label_pc_11228
  %245 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !297
  %246 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_12cdc to i32*), i32 1, i32 32, %_IO_FILE* %245), !insn.addr !298
  call void @exit(i32 1), !insn.addr !299
  unreachable, !insn.addr !299

dec_label_pc_1184c:                               ; preds = %dec_label_pc_11214
  %247 = call i32 @i2c_smbus_read_byte_data(i32 %122, i32 %133), !insn.addr !300
  store i32 %247, i32* %r0.2.reg2mem, !insn.addr !301
  br label %dec_label_pc_11228, !insn.addr !301

dec_label_pc_1185c:                               ; preds = %dec_label_pc_1120c
  %248 = call i32 @i2c_smbus_read_byte(i32 %122), !insn.addr !302
  store i32 %248, i32* %r0.2.reg2mem, !insn.addr !303
  br label %dec_label_pc_11228, !insn.addr !303

dec_label_pc_11868:                               ; preds = %dec_label_pc_111f8
  %249 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !304
  %250 = call i32 @fwrite(i32* bitcast ([76 x i8]* @global_var_12b44 to i32*), i32 1, i32 75, %_IO_FILE* %249), !insn.addr !305
  %251 = add i32 %36, -80, !insn.addr !306
  %252 = icmp ult i32 %251, 7, !insn.addr !307
  %253 = icmp ne i1 %252, true, !insn.addr !307
  %254 = icmp eq i32 %251, 7, !insn.addr !307
  %255 = icmp ne i1 %254, true, !insn.addr !308
  %256 = icmp eq i1 %253, %255, !insn.addr !308
  store i32 0, i32* %stack_var_-124.1.reg2mem, !insn.addr !309
  br i1 %256, label %dec_label_pc_118b8, label %dec_label_pc_1189c, !insn.addr !309

dec_label_pc_1189c:                               ; preds = %dec_label_pc_11868
  %257 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !310
  %258 = call i32 @fwrite(i32* bitcast ([120 x i8]* @global_var_12b90 to i32*), i32 1, i32 119, %_IO_FILE* %257), !insn.addr !311
  store i32 1, i32* %stack_var_-124.1.reg2mem, !insn.addr !311
  br label %dec_label_pc_118b8, !insn.addr !311

dec_label_pc_118b8:                               ; preds = %dec_label_pc_1189c, %dec_label_pc_11868
  %stack_var_-124.1.reload = load i32, i32* %stack_var_-124.1.reg2mem
  %259 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !312
  %260 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %259, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_12c08, i32 0, i32 0), i32* nonnull %stack_var_-92, i32 %36, i32 %43), !insn.addr !313
  %261 = icmp eq i32 %r6.2.reload, 1, !insn.addr !314
  br i1 %261, label %dec_label_pc_11a50, label %dec_label_pc_118dc, !insn.addr !315

dec_label_pc_118dc:                               ; preds = %dec_label_pc_118b8
  %262 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !316
  switch i32 %r6.2.reload, label %dec_label_pc_118ec [
    i32 8, label %dec_label_pc_119cc
    i32 5, label %dec_label_pc_119cc
  ]

dec_label_pc_118ec:                               ; preds = %dec_label_pc_118dc
  %263 = icmp eq i32 %r6.2.reload, 2, !insn.addr !317
  %spec.select21 = select i1 %263, i32 ptrtoint ([5 x i8]* @global_var_12ad4 to i32), i32 ptrtoint ([5 x i8]* @global_var_12ae8 to i32)
  %264 = icmp eq i32 %stack_var_-120.0.reload, 0, !insn.addr !318
  %265 = inttoptr i32 %spec.select21 to i8*, !insn.addr !319
  %spec.select22 = select i1 %264, i32 ptrtoint (i8** @global_var_128f0 to i32), i32 ptrtoint ([10 x i8]* @global_var_128bc to i32)
  %266 = inttoptr i32 %spec.select22 to i8*, !insn.addr !320
  %267 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %262, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_12c7c, i32 0, i32 0), i32 %r4.4.reload, i8* %266, i8* %265), !insn.addr !320
  br label %dec_label_pc_11960, !insn.addr !320

dec_label_pc_1193c:                               ; preds = %dec_label_pc_11a00, %dec_label_pc_119cc
  %268 = icmp eq i32 %r6.2.reload, 5
  %.lcssa.reload = load %_IO_FILE*, %_IO_FILE** %.lcssa.reg2mem
  %spec.select24 = select i1 %268, i32 ptrtoint ([12 x i8]* @global_var_128a4 to i32), i32 ptrtoint ([10 x i8]* @global_var_128b0 to i32)
  %269 = inttoptr i32 %spec.select24 to i8*, !insn.addr !321
  %270 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %.lcssa.reload, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12c70, i32 0, i32 0), i8* %269), !insn.addr !321
  br label %dec_label_pc_11960

dec_label_pc_11960:                               ; preds = %dec_label_pc_1193c, %dec_label_pc_118ec, %dec_label_pc_11a50
  %271 = icmp eq i32 %stack_var_-124.1.reload, 0, !insn.addr !322
  %spec.select23 = select i1 %271, i32 ptrtoint ([4 x i8]* @global_var_128cc to i32), i32 ptrtoint ([4 x i8]* @global_var_128c8 to i32)
  %272 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !323
  %273 = inttoptr i32 %spec.select23 to i8*, !insn.addr !324
  %274 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %272, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12cb0, i32 0, i32 0), i8* %273), !insn.addr !324
  %275 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !325
  %276 = call i32 @fflush(%_IO_FILE* %275), !insn.addr !326
  %277 = xor i32 %stack_var_-124.1.reload, 1, !insn.addr !327
  %278 = call i32 @function_12644(i32 %277), !insn.addr !328
  %279 = icmp eq i32 %278, 0, !insn.addr !329
  br i1 %279, label %dec_label_pc_119ac, label %dec_label_pc_11200, !insn.addr !330

dec_label_pc_119ac:                               ; preds = %dec_label_pc_11960
  %280 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !331
  %281 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_12cc0 to i32*), i32 1, i32 26, %_IO_FILE* %280), !insn.addr !332
  call void @exit(i32 0), !insn.addr !333
  unreachable, !insn.addr !333

dec_label_pc_119cc:                               ; preds = %dec_label_pc_118dc, %dec_label_pc_118dc
  %282 = call i32 @fwrite(i32* bitcast ([5 x i8]* @global_var_12c60 to i32*), i32 1, i32 4, %_IO_FILE* %262), !insn.addr !334
  %283 = icmp eq i32 %fp.3.reload, 0, !insn.addr !335
  %284 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !336
  store %_IO_FILE* %284, %_IO_FILE** %.lcssa.reg2mem, !insn.addr !337
  br i1 %283, label %dec_label_pc_1193c, label %dec_label_pc_11a00.lr.ph, !insn.addr !337

dec_label_pc_11a00.lr.ph:                         ; preds = %dec_label_pc_119cc
  %285 = ptrtoint i32* %stack_var_-72 to i32, !insn.addr !338
  store %_IO_FILE* %284, %_IO_FILE** %.reg2mem
  store i32 0, i32* %r4.1130.reg2mem
  br label %dec_label_pc_11a00

dec_label_pc_11a00:                               ; preds = %dec_label_pc_11a00.lr.ph, %dec_label_pc_11a00
  %r4.1130.reload = load i32, i32* %r4.1130.reg2mem
  %.reload = load %_IO_FILE*, %_IO_FILE** %.reg2mem
  %286 = add i32 %r4.1130.reload, %285, !insn.addr !339
  %287 = inttoptr i32 %286 to i8*, !insn.addr !339
  %288 = load i8, i8* %287, align 1, !insn.addr !339
  %289 = zext i8 %288 to i32, !insn.addr !339
  %290 = add nuw i32 %r4.1130.reload, 1, !insn.addr !340
  %291 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %.reload, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_12c68, i32 0, i32 0), i32 %289), !insn.addr !341
  %292 = icmp eq i32 %290, %fp.3.reload, !insn.addr !335
  %293 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !336
  store %_IO_FILE* %293, %_IO_FILE** %.lcssa.reg2mem, !insn.addr !337
  store %_IO_FILE* %293, %_IO_FILE** %.reg2mem, !insn.addr !337
  store i32 %290, i32* %r4.1130.reg2mem, !insn.addr !337
  br i1 %292, label %dec_label_pc_1193c, label %dec_label_pc_11a00, !insn.addr !337

dec_label_pc_11a50:                               ; preds = %dec_label_pc_118b8
  %294 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !342
  %295 = call i32 @fwrite(i32* bitcast ([10 x i8]* @global_var_12c54 to i32*), i32 1, i32 9, %_IO_FILE* %294), !insn.addr !343
  br label %dec_label_pc_11960, !insn.addr !344

dec_label_pc_11a6c:                               ; preds = %dec_label_pc_112c8
  %296 = urem i32 %fp.3.reload, 256, !insn.addr !345
  %297 = call i32 @i2c_smbus_write_i2c_block_data(i32 %122, i32 %148, i32 %296, i32* nonnull %stack_var_-72), !insn.addr !346
  store i32 %297, i32* %r0.3.reg2mem, !insn.addr !347
  br label %dec_label_pc_11634, !insn.addr !347

dec_label_pc_11a84:                               ; preds = %dec_label_pc_112c8
  %298 = urem i32 %fp.3.reload, 256, !insn.addr !348
  %299 = call i32 @i2c_smbus_write_block_data(i32 %122, i32 %148, i32 %298, i32* nonnull %stack_var_-72), !insn.addr !349
  store i32 %299, i32* %r0.3.reg2mem, !insn.addr !350
  br label %dec_label_pc_11634, !insn.addr !350

dec_label_pc_11a9c:                               ; preds = %dec_label_pc_11160
  %300 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !351
  %301 = call i32* @__errno_location(), !insn.addr !352
  %302 = load i32, i32* %301, align 4, !insn.addr !353
  %303 = call i8* @strerror(i32 %302), !insn.addr !354
  %304 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %300, i8* getelementptr inbounds ([59 x i8], [59 x i8]* @global_var_12a50, i32 0, i32 0), i8* %303), !insn.addr !355
  br label %dec_label_pc_11328, !insn.addr !356

; uselistorder directives
  uselistorder %_IO_FILE* %262, { 1, 0 }
  uselistorder i32 %stack_var_-124.1.reload, { 1, 0 }
  uselistorder i32 %r1.7, { 2, 1, 0 }
  uselistorder i32 %r4.9.reload, { 2, 1, 0 }
  uselistorder i32 %r7.3.reload, { 2, 0, 1 }
  uselistorder i32 %208, { 2, 1, 0 }
  uselistorder i32 %storemerge10.reload, { 3, 2, 1, 0 }
  uselistorder i32 %r6.3.reload, { 1, 0 }
  uselistorder i32 %174, { 0, 3, 2, 1 }
  uselistorder i32 %148, { 3, 5, 0, 1, 6, 2, 4 }
  uselistorder i32 %r4.6.reload, { 3, 0, 1, 2 }
  uselistorder i32 %ip.2, { 2, 0, 1 }
  uselistorder i32 %138, { 1, 2, 0 }
  uselistorder i32 %r0.2.reload, { 1, 3, 2, 0 }
  uselistorder i32 %133, { 1, 0 }
  uselistorder i32 %126, { 1, 0, 2, 3 }
  uselistorder i32 %stack_var_-120.0.reload, { 2, 1, 3, 0 }
  uselistorder i32 %r4.4.reload, { 1, 2, 0 }
  uselistorder i32 %r6.2.reload, { 7, 6, 11, 1, 2, 10, 9, 5, 3, 4, 8, 0 }
  uselistorder i32 %fp.3.reload, { 3, 2, 0, 1 }
  uselistorder i32 %122, { 7, 9, 11, 12, 0, 1, 2, 3, 5, 10, 4, 6, 8, 13, 14, 15, 16 }
  uselistorder i8* %116, { 2, 1, 0, 3 }
  uselistorder i8 %107, { 1, 0, 3, 2 }
  uselistorder i32 %95, { 1, 2, 0, 3 }
  uselistorder i32 %r4.2.reload, { 1, 0, 2 }
  uselistorder i32 %r6.0.reload, { 0, 2, 1 }
  uselistorder i32 %r0.0.reload, { 1, 0 }
  uselistorder i8 %68, { 1, 0, 3, 2 }
  uselistorder i32 %62, { 1, 0 }
  uselistorder i8* %61, { 2, 1, 0, 3 }
  uselistorder i32 %fp.2.reload, { 2, 0, 1 }
  uselistorder i32 %43, { 4, 0, 1, 3, 2, 6, 5 }
  uselistorder i32 %28, { 2, 0, 1, 3 }
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %r4.1.reload, { 4, 3, 1, 2, 5, 0 }
  uselistorder i32 %lr.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %r1.0.reload, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %r2.0.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 5, 3, 2, 1, 4, 0 }
  uselistorder i32 %r7.0.reload, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 %r8.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %sb.0.reload, { 4, 3, 2, 1, 5, 0 }
  uselistorder i32 %fp.0.reload, { 4, 3, 2, 1, 5, 0 }
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
  uselistorder i32* %lr.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r1.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r8.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %sb.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %fp.1.reg2mem, { 6, 5, 4, 3, 2, 7, 0, 1 }
  uselistorder i32* %r1.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r4.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r7.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sb.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %fp.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge7.reg2mem, { 3, 4, 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 1, 4, 2, 0, 3 }
  uselistorder i32* %r4.2.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %r6.0.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 2, 0, 3 }
  uselistorder i32* %stack_var_-120.0.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r4.4.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r6.2.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %fp.3.reg2mem, { 1, 2, 3, 5, 4, 0, 6 }
  uselistorder i32* %r0.2.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r4.6.reg2mem, { 0, 2, 1, 3 }
  uselistorder i8** %.pre-phi.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder i32* %r6.3.reg2mem, { 0, 3, 2, 1, 4 }
  uselistorder i32* %storemerge10.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %storemerge632.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.831.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.3.reg2mem, { 4, 2, 5, 1, 0, 3 }
  uselistorder i32* %r4.9.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r7.3.reg2mem, { 3, 1, 0, 2 }
  uselistorder %_IO_FILE** %.lcssa.reg2mem, { 1, 2, 0 }
  uselistorder %_IO_FILE** %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1130.reg2mem, { 1, 0, 2 }
  uselistorder i32 65536, { 0, 2, 1 }
  uselistorder i32 (i32)* @function_12644, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @i2c_smbus_read_word_data, { 1, 0, 2 }
  uselistorder i8 112, { 2, 0, 1 }
  uselistorder i32 ()* @function_11b8c, { 6, 5, 4, 3, 2, 0, 7, 1 }
  uselistorder i32 ptrtoint ([28 x i8]* @global_var_129a8 to i32), { 1, 0 }
  uselistorder i8 119, { 1, 0 }
  uselistorder i8 115, { 1, 0 }
  uselistorder i8 105, { 1, 0, 3, 2 }
  uselistorder i32 5, { 5, 2, 3, 4, 1, 0, 6 }
  uselistorder i32 %arg2, { 3, 0, 1, 2, 4 }
  uselistorder i32 %arg1, { 3, 1, 4, 2, 5, 0, 7, 6, 8, 9, 10 }
  uselistorder label %dec_label_pc_11a00, { 1, 0 }
  uselistorder label %dec_label_pc_11960, { 2, 0, 1 }
  uselistorder label %dec_label_pc_11634, { 0, 1, 4, 2, 3 }
  uselistorder label %dec_label_pc_115a8, { 1, 0 }
  uselistorder label %dec_label_pc_114e4, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11430, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_11328, { 6, 1, 2, 3, 4, 5, 0, 7 }
  uselistorder label %dec_label_pc_112c8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_111e0, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_11144, { 0, 1, 2, 4, 3, 5 }
  uselistorder label %dec_label_pc_110e4, { 2, 4, 1, 3, 0, 5 }
  uselistorder label %dec_label_pc_11058, { 3, 1, 0, 2 }
  uselistorder label %dec_label_pc_11004, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_10fe4, { 1, 0 }
  uselistorder label %dec_label_pc_10f74, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_10f58, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_10e60, { 1, 0 }
  uselistorder label %dec_label_pc_10e58, { 1, 0 }
  uselistorder label %dec_label_pc_10e38, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder label %dec_label_pc_10d8c, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11acc:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !357
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !357
  %2 = call i32 @__libc_start_main(i32 68932, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 75493 to void ()*), void ()* inttoptr (i32 68932 to void ()*), void ()* %1), !insn.addr !357
  call void @abort(), !insn.addr !358
  unreachable, !insn.addr !358
}

define i32 @function_11af0(i32 %arg1) local_unnamed_addr {
dec_label_pc_11af0:
  ret i32 %arg1, !insn.addr !359
}

define i32 @function_11afc() local_unnamed_addr {
dec_label_pc_11afc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_240c8, align 4, !insn.addr !360
  %3 = icmp eq i32 %2, 0, !insn.addr !361
  br i1 %3, label %4, label %dec_label_pc_11b14, !insn.addr !362

; <label>:4:                                      ; preds = %dec_label_pc_11afc
  ret i32 %1, !insn.addr !362

dec_label_pc_11b14:                               ; preds = %dec_label_pc_11afc
  call void @__gmon_start__(), !insn.addr !363
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !363
}

define i32 @function_11b20(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_11b20:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !364
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_11b3c, !insn.addr !364

; <label>:9:                                      ; preds = %dec_label_pc_11b20
  ret i32 %arg1, !insn.addr !364

dec_label_pc_11b3c:                               ; preds = %dec_label_pc_11b20
  %10 = icmp eq i1 %5, %3, !insn.addr !365
  br i1 %10, label %dec_label_pc_11b50, label %11, !insn.addr !365

; <label>:11:                                     ; preds = %dec_label_pc_11b3c
  call void @__asm_svclt(i32 18288), !insn.addr !365
  br label %dec_label_pc_11b50, !insn.addr !365

dec_label_pc_11b50:                               ; preds = %11, %dec_label_pc_11b3c
  br i1 %3, label %dec_label_pc_11b68, label %12, !insn.addr !366

; <label>:12:                                     ; preds = %dec_label_pc_11b50
  %13 = mul i32 %6, 1048577, !insn.addr !367
  %14 = mul i32 %6, 4194304, !insn.addr !366
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !366
  %18 = icmp slt i32 %17, 0, !insn.addr !366
  %19 = icmp eq i32 %17, 0, !insn.addr !366
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !368
  br i1 %19, label %20, label %dec_label_pc_11b68, !insn.addr !368

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !368
  ret i32 %21, !insn.addr !368

dec_label_pc_11b68:                               ; preds = %dec_label_pc_11b50, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !369
  br i1 %22, label %24, label %23, !insn.addr !369

; <label>:23:                                     ; preds = %dec_label_pc_11b68
  call void @__asm_svclt(i32 18288), !insn.addr !369
  br label %24, !insn.addr !369

; <label>:24:                                     ; preds = %dec_label_pc_11b68, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !370
  ret i32 %arg1, !insn.addr !370

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_11b68, { 1, 0 }
}

define i32 @function_11b74(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b74:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !371
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = mul i32 %1, 524288, !insn.addr !371
  %6 = or i32 %5, 131072, !insn.addr !372
  %7 = inttoptr i32 %6 to i8*, !insn.addr !373
  %8 = load i8, i8* %7, align 131072, !insn.addr !373
  %9 = icmp eq i8 %8, 0, !insn.addr !374
  br i1 %9, label %dec_label_pc_11b7e, label %dec_label_pc_11b86, !insn.addr !374

dec_label_pc_11b7e:                               ; preds = %dec_label_pc_11b74
  %10 = call i32 @function_11b20(i32 %4, i32 %3, i32 %2, i8 0), !insn.addr !375
  store i8 1, i8* %7, align 131072, !insn.addr !376
  store i32 %10, i32* %r0.0.reg2mem, !insn.addr !376
  br label %dec_label_pc_11b86, !insn.addr !376

dec_label_pc_11b86:                               ; preds = %dec_label_pc_11b74, %dec_label_pc_11b7e
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !377

; uselistorder directives
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_11b86, { 1, 0 }
}

define i32 @function_11b88() local_unnamed_addr {
dec_label_pc_11b88:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !378
}

define i32 @function_11b8c() local_unnamed_addr {
dec_label_pc_11b8c:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !379
  %1 = call i32 @fwrite(i32* bitcast ([369 x i8]* @global_var_12730 to i32*), i32 1, i32 368, %_IO_FILE* %0), !insn.addr !380
  call void @exit(i32 1), !insn.addr !381
  unreachable, !insn.addr !381

; uselistorder directives
  uselistorder void (i32)* @exit, { 5, 6, 0, 1, 2, 8, 3, 7, 4, 9 }
}

define i32 @function_11bb8(i32 %arg1) local_unnamed_addr {
dec_label_pc_11bb8:
  %0 = alloca i32
  %r3.04.reg2mem = alloca i32, !insn.addr !382
  %.reg2mem = alloca i32, !insn.addr !382
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg1 to i8*, !insn.addr !383
  %3 = call i32 @strlen(i8* %2), !insn.addr !383
  %4 = icmp eq i32 %3, 0, !insn.addr !384
  br i1 %4, label %dec_label_pc_11c10, label %dec_label_pc_11bcc, !insn.addr !385

dec_label_pc_11bcc:                               ; preds = %dec_label_pc_11bb8
  %5 = add i32 %3, -1
  %6 = add i32 %5, %arg1
  %7 = inttoptr i32 %6 to i8*
  %8 = load i8, i8* %7, align 1, !insn.addr !386
  switch i8 %8, label %dec_label_pc_11c20 [
    i8 32, label %dec_label_pc_11c00.preheader
    i8 10, label %dec_label_pc_11c00.preheader
  ]

dec_label_pc_11c00.preheader:                     ; preds = %dec_label_pc_11bcc, %dec_label_pc_11bcc
  %9 = icmp eq i8 %8, 10, !insn.addr !387
  %10 = icmp eq i8 %8, 32
  %spec.select = or i1 %9, %10
  %extract.t = trunc i32 %1 to i8
  %spec.select1 = select i1 %spec.select, i8 0, i8 %extract.t
  store i8 %spec.select1, i8* %7, align 1, !insn.addr !388
  %11 = icmp eq i32 %5, 0, !insn.addr !389
  store i32 %6, i32* %.reg2mem, !insn.addr !390
  store i32 %5, i32* %r3.04.reg2mem, !insn.addr !390
  br i1 %11, label %dec_label_pc_11c10, label %dec_label_pc_11bec, !insn.addr !390

dec_label_pc_11bec:                               ; preds = %dec_label_pc_11c00.preheader, %dec_label_pc_11c00.backedge
  %r3.04.reload = load i32, i32* %r3.04.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %12 = add i32 %.reload, -1, !insn.addr !388
  %13 = inttoptr i32 %12 to i8*
  %14 = load i8, i8* %13, align 1, !insn.addr !391
  switch i8 %14, label %dec_label_pc_11c18 [
    i8 32, label %dec_label_pc_11c00.backedge
    i8 10, label %dec_label_pc_11c00.backedge
  ]

dec_label_pc_11c00.backedge:                      ; preds = %dec_label_pc_11bec, %dec_label_pc_11bec
  %15 = add i32 %r3.04.reload, -1, !insn.addr !392
  store i8 %spec.select1, i8* %13, align 1, !insn.addr !388
  %16 = icmp eq i32 %15, 0, !insn.addr !389
  store i32 %12, i32* %.reg2mem, !insn.addr !390
  store i32 %15, i32* %r3.04.reg2mem, !insn.addr !390
  br i1 %16, label %dec_label_pc_11c10, label %dec_label_pc_11bec, !insn.addr !390

dec_label_pc_11c10:                               ; preds = %dec_label_pc_11c00.backedge, %dec_label_pc_11c00.preheader, %dec_label_pc_11bb8
  ret i32 1, !insn.addr !393

dec_label_pc_11c18:                               ; preds = %dec_label_pc_11bec
  %17 = add i32 %r3.04.reload, 1, !insn.addr !394
  ret i32 %17, !insn.addr !395

dec_label_pc_11c20:                               ; preds = %dec_label_pc_11bcc
  %18 = add i32 %3, 1, !insn.addr !396
  ret i32 %18, !insn.addr !397

; uselistorder directives
  uselistorder i32 %r3.04.reload, { 1, 0 }
  uselistorder i8 %spec.select1, { 1, 0 }
  uselistorder i8 %8, { 1, 2, 0 }
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.04.reg2mem, { 2, 0, 1 }
  uselistorder i8 32, { 0, 2, 1 }
  uselistorder label %dec_label_pc_11bec, { 1, 0 }
}

define i32 @function_11c28(i32 %arg1) local_unnamed_addr {
dec_label_pc_11c28:
  %r4.0.reg2mem = alloca i32, !insn.addr !398
  %r0.0.reg2mem = alloca i32, !insn.addr !398
  %0 = add i32 %arg1, 4, !insn.addr !399
  %1 = inttoptr i32 %0 to i32*, !insn.addr !399
  %2 = load i32, i32* %1, align 4, !insn.addr !399
  %3 = icmp eq i32 %2, 0, !insn.addr !400
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !401
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !401
  br i1 %3, label %dec_label_pc_11c54, label %dec_label_pc_11c40, !insn.addr !401

dec_label_pc_11c40:                               ; preds = %dec_label_pc_11c28, %dec_label_pc_11c40
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %4 = add i32 %r4.0.reload, 16, !insn.addr !402
  %5 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !403
  call void @free(i32* %5), !insn.addr !403
  %6 = add i32 %r4.0.reload, 20, !insn.addr !404
  %7 = inttoptr i32 %6 to i32*, !insn.addr !404
  %8 = load i32, i32* %7, align 4, !insn.addr !404
  %9 = icmp eq i32 %8, 0, !insn.addr !405
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !406
  store i32 %4, i32* %r4.0.reg2mem, !insn.addr !406
  br i1 %9, label %dec_label_pc_11c54, label %dec_label_pc_11c40, !insn.addr !406

dec_label_pc_11c54:                               ; preds = %dec_label_pc_11c40, %dec_label_pc_11c28
  %10 = inttoptr i32 %arg1 to i32*, !insn.addr !407
  call void @free(i32* %10), !insn.addr !407
  ret i32 ptrtoint (i32* @3 to i32), !insn.addr !407

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder void (i32*)* @free, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11c40, { 1, 0 }
}

define i32 @function_11c60(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11c60:
  %0 = mul i32 %arg2, 16, !insn.addr !408
  %1 = add i32 %0, 128, !insn.addr !409
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !410
  %3 = call i32* @realloc(i32* %2, i32 %1), !insn.addr !410
  %4 = ptrtoint i32* %3 to i32, !insn.addr !410
  %5 = icmp eq i32* %3, null, !insn.addr !411
  br i1 %5, label %dec_label_pc_11c9c, label %dec_label_pc_11c80, !insn.addr !412

dec_label_pc_11c80:                               ; preds = %dec_label_pc_11c60
  %6 = add i32 %0, %4, !insn.addr !413
  %7 = inttoptr i32 %6 to i32*, !insn.addr !414
  %8 = call i32* @memset(i32* %7, i32 0, i32 128), !insn.addr !414
  br label %dec_label_pc_11c94, !insn.addr !414

dec_label_pc_11c94:                               ; preds = %dec_label_pc_11c9c, %dec_label_pc_11c80
  ret i32 %4, !insn.addr !415

dec_label_pc_11c9c:                               ; preds = %dec_label_pc_11c60
  %9 = call i32 @function_11c28(i32 %arg1), !insn.addr !416
  br label %dec_label_pc_11c94, !insn.addr !417

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @function_11ca8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11ca8:
  %.reg2mem = alloca i32, !insn.addr !418
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !419
  %1 = call i32 @strtol(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !419
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !420
  %3 = load i8, i8* %2, align 1, !insn.addr !421
  %4 = icmp ne i8 %3, 0, !insn.addr !422
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !423
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_11d18, label %dec_label_pc_11ce0, !insn.addr !424

dec_label_pc_11ce0:                               ; preds = %dec_label_pc_11ca8
  %7 = icmp eq i32 %arg2, 0, !insn.addr !425
  %r3.1 = select i1 %7, i32 119, i32 127
  %r2.1 = select i1 %7, i32 3, i32 0
  %8 = icmp slt i32 %r3.1, %1, !insn.addr !426
  %9 = icmp sgt i32 %r2.1, %1, !insn.addr !427
  %narrow = or i1 %9, %8
  %10 = icmp eq i1 %narrow, false, !insn.addr !428
  store i32 %1, i32* %.reg2mem, !insn.addr !429
  br i1 %10, label %dec_label_pc_11d10, label %dec_label_pc_11d40, !insn.addr !429

dec_label_pc_11d10:                               ; preds = %dec_label_pc_11ce0, %dec_label_pc_11d40, %dec_label_pc_11d18
  %.reload = load i32, i32* %.reg2mem, !insn.addr !430
  ret i32 %.reload, !insn.addr !430

dec_label_pc_11d18:                               ; preds = %dec_label_pc_11ca8
  %11 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !431
  %12 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_12e60 to i32*), i32 1, i32 37, %_IO_FILE* %11), !insn.addr !432
  store i32 -1, i32* %.reg2mem, !insn.addr !433
  br label %dec_label_pc_11d10, !insn.addr !433

dec_label_pc_11d40:                               ; preds = %dec_label_pc_11ce0
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !434
  %14 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %13, i8* getelementptr inbounds ([53 x i8], [53 x i8]* @global_var_12e88, i32 0, i32 0), i32 %r2.1, i32 %r3.1), !insn.addr !435
  store i32 -2, i32* %.reg2mem, !insn.addr !436
  br label %dec_label_pc_11d10, !insn.addr !436

; uselistorder directives
  uselistorder i32 %r2.1, { 1, 0 }
  uselistorder i32 %r3.1, { 1, 0 }
  uselistorder i32 %1, { 0, 2, 3, 1 }
  uselistorder i32* %.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32 37, { 0, 2, 1 }
  uselistorder i32 3, { 3, 7, 4, 10, 0, 11, 5, 8, 9, 6, 2, 1, 12 }
  uselistorder i32 (i8*, i8**, i32)* @strtol, { 0, 4, 3, 2, 1, 5 }
  uselistorder label %dec_label_pc_11d10, { 1, 2, 0 }
}

define i32 @function_11d60(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11d60:
  %r4.0.reg2mem = alloca i32, !insn.addr !437
  %0 = ptrtoint i32* %arg2 to i32
  %1 = bitcast i32* %arg2 to i8*, !insn.addr !438
  %2 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %1, i32 %arg3, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12ec0, i32 0, i32 0), i32 %arg1), !insn.addr !438
  %3 = add i32 %arg3, -1, !insn.addr !439
  %4 = add i32 %3, %0, !insn.addr !440
  %5 = inttoptr i32 %4 to i8*, !insn.addr !440
  store i8 0, i8* %5, align 1, !insn.addr !440
  %6 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !441
  %7 = icmp slt i32 %6, 0, !insn.addr !442
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !443
  br i1 %7, label %dec_label_pc_11dbc, label %dec_label_pc_11db0, !insn.addr !443

dec_label_pc_11db0:                               ; preds = %dec_label_pc_11dbc, %dec_label_pc_11e68, %dec_label_pc_11d60
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !444

dec_label_pc_11dbc:                               ; preds = %dec_label_pc_11d60
  %8 = call i32* @__errno_location(), !insn.addr !445
  %9 = load i32, i32* %8, align 4, !insn.addr !446
  store i32 %6, i32* %r4.0.reg2mem
  switch i32 %9, label %dec_label_pc_11db0 [
    i32 20, label %dec_label_pc_11e68
    i32 2, label %dec_label_pc_11e68
  ]

dec_label_pc_11e68:                               ; preds = %dec_label_pc_11dbc, %dec_label_pc_11dbc
  %10 = call i32 (i8*, i8*, ...) @sprintf(i8* %1, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_12ecc, i32 0, i32 0), i32 %arg1), !insn.addr !447
  %11 = call i32 (i8*, i32, ...) @open64(i8* %1, i32 2), !insn.addr !448
  store i32 %11, i32* %r4.0.reg2mem, !insn.addr !449
  br label %dec_label_pc_11db0, !insn.addr !449

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32 (i8*, i32, ...)* @open64, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11db0, { 1, 0, 2 }
}

define i32 @function_11e90() local_unnamed_addr {
dec_label_pc_11e90:
  %0 = alloca i32
  %.in.reg2mem = alloca %dirent64*, !insn.addr !450
  %sl.7.reg2mem = alloca i32, !insn.addr !450
  %sl.6.reg2mem = alloca i32, !insn.addr !450
  %sb.1.reg2mem = alloca i32, !insn.addr !450
  %r3.0.in.reg2mem = alloca %_IO_FILE*, !insn.addr !450
  %sl.5.reg2mem = alloca i32, !insn.addr !450
  %r5.1.reg2mem = alloca i32, !insn.addr !450
  %r0.0.in.reg2mem = alloca %dirent64*, !insn.addr !450
  %r5.043.reg2mem = alloca i32, !insn.addr !450
  %sl.444.reg2mem = alloca i32, !insn.addr !450
  %.reg2mem105 = alloca %dirent64*, !insn.addr !450
  %sl.3.reg2mem = alloca i32, !insn.addr !450
  %sl.2.reg2mem = alloca i32, !insn.addr !450
  %sl.1.lcssa.reg2mem = alloca i32, !insn.addr !450
  %sl.0.reg2mem = alloca i32, !insn.addr !450
  %r8.046.reg2mem = alloca i32, !insn.addr !450
  %sl.147.reg2mem = alloca i32, !insn.addr !450
  %.reg2mem = alloca i32, !insn.addr !450
  %1 = load i32, i32* %0
  %stack_var_-948 = alloca i32, align 4
  %stack_var_-956 = alloca i32, align 4
  %stack_var_-552 = alloca i32, align 4
  %stack_var_-808 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-928 = alloca i32, align 4
  %2 = call i32* @calloc(i32 8, i32 16), !insn.addr !451
  %3 = ptrtoint i32* %2 to i32, !insn.addr !451
  %4 = icmp eq i32* %2, null, !insn.addr !452
  store i32 %3, i32* %sl.2.reg2mem, !insn.addr !453
  br i1 %4, label %dec_label_pc_12000, label %dec_label_pc_11eac, !insn.addr !453

dec_label_pc_11eac:                               ; preds = %dec_label_pc_11e90
  %5 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_12f50, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0)), !insn.addr !454
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !455
  br i1 %6, label %dec_label_pc_12024, label %dec_label_pc_11fd0.preheader, !insn.addr !456

dec_label_pc_11fd0.preheader:                     ; preds = %dec_label_pc_11eac
  %7 = bitcast i32* %stack_var_-928 to i8*, !insn.addr !457
  %8 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !457
  %9 = icmp eq i8* %8, null, !insn.addr !458
  store i32 1, i32* %.reg2mem, !insn.addr !459
  store i32 %3, i32* %sl.147.reg2mem, !insn.addr !459
  store i32 0, i32* %r8.046.reg2mem, !insn.addr !459
  store i32 %3, i32* %sl.1.lcssa.reg2mem, !insn.addr !459
  br i1 %9, label %dec_label_pc_11ff8, label %dec_label_pc_11ee8, !insn.addr !459

dec_label_pc_11ee8:                               ; preds = %dec_label_pc_11fd0.preheader, %dec_label_pc_11f94
  %r8.046.reload = load i32, i32* %r8.046.reg2mem
  %sl.147.reload = load i32, i32* %sl.147.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !460
  store i8 0, i8* %10, align 1, !insn.addr !461
  %11 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !462
  store i8 0, i8* %11, align 1, !insn.addr !463
  %12 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !464
  store i8 0, i8* %12, align 1, !insn.addr !465
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %7, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f60, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !466
  %14 = urem i32 %.reload, 8, !insn.addr !467
  %15 = icmp eq i32 %14, 0, !insn.addr !467
  store i32 %sl.147.reload, i32* %sl.0.reg2mem, !insn.addr !468
  br i1 %15, label %dec_label_pc_11f6c, label %dec_label_pc_11f78, !insn.addr !468

dec_label_pc_11f6c:                               ; preds = %dec_label_pc_11ee8
  %16 = call i32 @function_11c60(i32 %sl.147.reload, i32 %.reload), !insn.addr !469
  %17 = icmp eq i32 %16, 0, !insn.addr !470
  store i32 %16, i32* %sl.0.reg2mem, !insn.addr !471
  store i32 0, i32* %sl.2.reg2mem, !insn.addr !471
  br i1 %17, label %dec_label_pc_12000, label %dec_label_pc_11f78, !insn.addr !471

dec_label_pc_11f78:                               ; preds = %dec_label_pc_11ee8, %dec_label_pc_11f6c
  %18 = ptrtoint i8* %11 to i32, !insn.addr !462
  %19 = add i32 %18, 1, !insn.addr !472
  %20 = ptrtoint i8* %12 to i32, !insn.addr !464
  %21 = add i32 %20, 1, !insn.addr !473
  %22 = add i32 %21, %19, !insn.addr !474
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %23 = ashr i32 %22, 31
  %24 = add i32 %23, %22, !insn.addr !475
  %25 = call i32* @malloc(i32 %24), !insn.addr !476
  %26 = icmp eq i32* %25, null, !insn.addr !477
  store i32 %sl.0.reload, i32* %sl.3.reg2mem, !insn.addr !478
  br i1 %26, label %dec_label_pc_1200c, label %dec_label_pc_11f94, !insn.addr !478

dec_label_pc_11f94:                               ; preds = %dec_label_pc_11f78
  %27 = ptrtoint i8* %10 to i32, !insn.addr !460
  %28 = add i32 %27, 1, !insn.addr !479
  %29 = add i32 %sl.0.reload, %r8.046.reload, !insn.addr !480
  %30 = ptrtoint i32* %25 to i32, !insn.addr !476
  %31 = load i32, i32* %stack_var_-296, align 4, !insn.addr !481
  %32 = inttoptr i32 %29 to i32*, !insn.addr !482
  store i32 %31, i32* %32, align 4, !insn.addr !482
  %33 = add i32 %r8.046.reload, 16, !insn.addr !483
  %34 = bitcast i32* %25 to i8*, !insn.addr !484
  %35 = inttoptr i32 %19 to i8*, !insn.addr !484
  %36 = call i8* @strcpy(i8* %34, i8* %35), !insn.addr !484
  %37 = ptrtoint i8* %36 to i32, !insn.addr !484
  %38 = add i32 %29, 4, !insn.addr !485
  %39 = inttoptr i32 %38 to i32*, !insn.addr !485
  store i32 %37, i32* %39, align 4, !insn.addr !485
  %40 = add i32 %19, %30, !insn.addr !486
  %41 = inttoptr i32 %40 to i8*, !insn.addr !487
  %42 = inttoptr i32 %21 to i8*, !insn.addr !487
  %43 = call i8* @strcpy(i8* %41, i8* %42), !insn.addr !487
  %44 = ptrtoint i8* %43 to i32, !insn.addr !487
  %45 = add i32 %29, 8, !insn.addr !488
  %46 = inttoptr i32 %45 to i32*, !insn.addr !488
  store i32 %44, i32* %46, align 4, !insn.addr !488
  %47 = add i32 %22, %30, !insn.addr !489
  %48 = inttoptr i32 %47 to i8*, !insn.addr !490
  %49 = inttoptr i32 %28 to i8*, !insn.addr !490
  %50 = call i8* @strcpy(i8* %48, i8* %49), !insn.addr !490
  %51 = ptrtoint i8* %50 to i32, !insn.addr !490
  %52 = add i32 %29, 12, !insn.addr !491
  %53 = inttoptr i32 %52 to i32*, !insn.addr !491
  store i32 %51, i32* %53, align 4, !insn.addr !491
  %54 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !457
  %55 = icmp eq i8* %54, null, !insn.addr !458
  %56 = add i32 %.reload, 1, !insn.addr !492
  store i32 %56, i32* %.reg2mem, !insn.addr !459
  store i32 %sl.0.reload, i32* %sl.147.reg2mem, !insn.addr !459
  store i32 %33, i32* %r8.046.reg2mem, !insn.addr !459
  store i32 %sl.0.reload, i32* %sl.1.lcssa.reg2mem, !insn.addr !459
  br i1 %55, label %dec_label_pc_11ff8, label %dec_label_pc_11ee8, !insn.addr !459

dec_label_pc_11ff8:                               ; preds = %dec_label_pc_11f94, %dec_label_pc_11fd0.preheader
  %sl.1.lcssa.reload = load i32, i32* %sl.1.lcssa.reg2mem
  %57 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !493
  store i32 %sl.1.lcssa.reload, i32* %sl.2.reg2mem, !insn.addr !493
  br label %dec_label_pc_12000, !insn.addr !493

dec_label_pc_12000:                               ; preds = %dec_label_pc_11f6c, %dec_label_pc_121f8, %dec_label_pc_1200c, %dec_label_pc_12268, %dec_label_pc_120a0, %dec_label_pc_12094, %dec_label_pc_12024, %dec_label_pc_11ff8, %dec_label_pc_11e90
  %sl.2.reload = load i32, i32* %sl.2.reg2mem
  ret i32 %sl.2.reload, !insn.addr !494

dec_label_pc_1200c:                               ; preds = %dec_label_pc_11f78, %dec_label_pc_12214
  %sl.3.reload = load i32, i32* %sl.3.reg2mem
  %58 = call i32 @function_11c28(i32 %sl.3.reload), !insn.addr !495
  store i32 0, i32* %sl.2.reg2mem, !insn.addr !495
  br label %dec_label_pc_12000, !insn.addr !495

dec_label_pc_12024:                               ; preds = %dec_label_pc_11eac
  %59 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12f68, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0)), !insn.addr !496
  %60 = icmp eq %_IO_FILE* %59, null, !insn.addr !497
  store i32 %3, i32* %sl.2.reg2mem, !insn.addr !498
  br i1 %60, label %dec_label_pc_12000, label %dec_label_pc_1206c.preheader, !insn.addr !498

dec_label_pc_1206c.preheader:                     ; preds = %dec_label_pc_12024
  %61 = bitcast i32* %stack_var_-296 to i8*
  %62 = bitcast i32* %stack_var_-808 to i8*
  br label %dec_label_pc_1206c

dec_label_pc_12054:                               ; preds = %dec_label_pc_1206c
  %63 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %61, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_12f78, i32 0, i32 0), i32* nonnull %stack_var_-552, i32* nonnull %stack_var_-808), !insn.addr !499
  %64 = call i32 @strcasecmp(i8* nonnull %62, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_12f90, i32 0, i32 0)), !insn.addr !500
  %65 = icmp eq i32 %64, 0, !insn.addr !501
  br i1 %65, label %dec_label_pc_120a0, label %dec_label_pc_1206c, !insn.addr !502

dec_label_pc_1206c:                               ; preds = %dec_label_pc_1206c.preheader, %dec_label_pc_12054
  %66 = call i8* @fgets(i8* nonnull %61, i32 255, %_IO_FILE* nonnull %59), !insn.addr !503
  %67 = icmp eq i8* %66, null, !insn.addr !504
  br i1 %67, label %dec_label_pc_12094, label %dec_label_pc_12054, !insn.addr !505

dec_label_pc_12094:                               ; preds = %dec_label_pc_1206c
  %68 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !506
  store i32 %3, i32* %sl.2.reg2mem, !insn.addr !507
  br label %dec_label_pc_12000, !insn.addr !507

dec_label_pc_120a0:                               ; preds = %dec_label_pc_12054
  %69 = ptrtoint i32* %stack_var_-552 to i32, !insn.addr !508
  %70 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !509
  %71 = bitcast i32* %stack_var_-552 to i8*, !insn.addr !510
  %72 = call i32 @strlen(i8* nonnull %71), !insn.addr !510
  %73 = add i32 %72, %69, !insn.addr !511
  %74 = inttoptr i32 %73 to i32*, !insn.addr !512
  store i32 1634493231, i32* %74, align 4, !insn.addr !512
  %75 = add i32 %73, 4, !insn.addr !513
  %76 = inttoptr i32 %75 to i32*, !insn.addr !513
  store i32 1764717427, i32* %76, align 4, !insn.addr !513
  %77 = add i32 %73, 8, !insn.addr !514
  %78 = inttoptr i32 %77 to i32*, !insn.addr !514
  store i32 1680696114, i32* %78, align 4, !insn.addr !514
  %79 = add i32 %73, 12, !insn.addr !515
  %80 = inttoptr i32 %79 to i16*, !insn.addr !515
  store i16 30309, i16* %80, align 2, !insn.addr !515
  %81 = add i32 %73, 14, !insn.addr !516
  %82 = inttoptr i32 %81 to i8*, !insn.addr !516
  store i8 0, i8* %82, align 1, !insn.addr !516
  %83 = call %__dirstream* @opendir(i8* nonnull %71), !insn.addr !517
  %84 = icmp eq %__dirstream* %83, null, !insn.addr !518
  store i32 %3, i32* %sl.2.reg2mem, !insn.addr !519
  br i1 %84, label %dec_label_pc_12000, label %dec_label_pc_12118.preheader, !insn.addr !519

dec_label_pc_12118.preheader:                     ; preds = %dec_label_pc_120a0
  %85 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !520
  %86 = icmp eq %dirent64* %85, null, !insn.addr !521
  store i32 %3, i32* %sl.7.reg2mem, !insn.addr !522
  br i1 %86, label %dec_label_pc_12268, label %dec_label_pc_12128.preheader.lr.ph, !insn.addr !522

dec_label_pc_12128.preheader.lr.ph:               ; preds = %dec_label_pc_12118.preheader
  %87 = bitcast i32* %stack_var_-928 to i8*
  %88 = urem i32 %1, 2
  %89 = icmp eq i32 %88, 0
  %90 = and i32 %1, 8257536
  %91 = icmp eq i32 %90, 0
  %spec.select11 = select i1 %91, i32 0, i32 24
  %spec.select = select i1 %89, i32 %spec.select11, i32 16
  store %dirent64* %85, %dirent64** %.reg2mem105
  store i32 %3, i32* %sl.444.reg2mem
  store i32 0, i32* %r5.043.reg2mem
  br label %dec_label_pc_12128.preheader

dec_label_pc_12128.preheader:                     ; preds = %dec_label_pc_12128.preheader.lr.ph, %dec_label_pc_12118.backedge
  %r5.043.reload = load i32, i32* %r5.043.reg2mem
  %sl.444.reload = load i32, i32* %sl.444.reg2mem
  %.reload106 = load %dirent64*, %dirent64** %.reg2mem105
  store %dirent64* %.reload106, %dirent64** %r0.0.in.reg2mem
  store i32 %r5.043.reload, i32* %r5.1.reg2mem
  store i32 %sl.444.reload, i32* %sl.5.reg2mem
  br label %dec_label_pc_12128

dec_label_pc_12128:                               ; preds = %dec_label_pc_12128.preheader, %dec_label_pc_1223c
  %sl.5.reload = load i32, i32* %sl.5.reg2mem
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.0.in.reload = load %dirent64*, %dirent64** %r0.0.in.reg2mem
  %r0.0 = ptrtoint %dirent64* %r0.0.in.reload to i32
  %92 = add i32 %r0.0, 19, !insn.addr !523
  %93 = inttoptr i32 %92 to i8*, !insn.addr !523
  %94 = load i8, i8* %93, align 1, !insn.addr !523
  %95 = icmp eq i8 %94, 46, !insn.addr !524
  br i1 %95, label %dec_label_pc_12274, label %dec_label_pc_12134, !insn.addr !525

dec_label_pc_12134:                               ; preds = %dec_label_pc_12274, %dec_label_pc_12288, %dec_label_pc_12128
  %96 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_12f98, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !526
  %97 = icmp sgt i32 %96, 254, !insn.addr !527
  br i1 %97, label %dec_label_pc_12298, label %dec_label_pc_12158, !insn.addr !527

dec_label_pc_12158:                               ; preds = %dec_label_pc_12134
  %98 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0)), !insn.addr !528
  %99 = icmp eq %_IO_FILE* %98, null, !insn.addr !529
  store %_IO_FILE* %98, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !530
  br i1 %99, label %dec_label_pc_122b8, label %dec_label_pc_1216c, !insn.addr !530

dec_label_pc_1216c:                               ; preds = %dec_label_pc_123a4, %dec_label_pc_122dc, %dec_label_pc_12158
  %r3.0.in.reload = load %_IO_FILE*, %_IO_FILE** %r3.0.in.reg2mem
  %100 = call i8* @fgets(i8* nonnull %87, i32 120, %_IO_FILE* nonnull %r3.0.in.reload), !insn.addr !531
  %101 = call i32 @fclose(%_IO_FILE* nonnull %r3.0.in.reload), !insn.addr !532
  %102 = icmp eq i8* %100, null, !insn.addr !533
  br i1 %102, label %dec_label_pc_1245c, label %dec_label_pc_1219c, !insn.addr !534

dec_label_pc_1219c:                               ; preds = %dec_label_pc_1216c
  %103 = call i8* @strchr(i8* nonnull %87, i32 10), !insn.addr !535
  %104 = icmp eq i8* %103, null, !insn.addr !536
  br i1 %104, label %106, label %105, !insn.addr !537

; <label>:105:                                    ; preds = %dec_label_pc_1219c
  store i8 0, i8* %103, align 1, !insn.addr !537
  br label %106, !insn.addr !537

; <label>:106:                                    ; preds = %dec_label_pc_1219c, %105
  %107 = call i32 (i8*, i8*, ...) @sscanf(i8* %93, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_12f60, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !538
  %108 = icmp eq i32 %107, 0, !insn.addr !539
  br i1 %108, label %dec_label_pc_12118.backedge, label %dec_label_pc_121cc, !insn.addr !540

dec_label_pc_121cc:                               ; preds = %106
  %109 = call i32 @strncmp(i8* nonnull %87, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_1300c, i32 0, i32 0), i32 4), !insn.addr !541
  %110 = icmp eq i32 %109, 0, !insn.addr !542
  store i32 8, i32* %sb.1.reg2mem, !insn.addr !543
  br i1 %110, label %dec_label_pc_121ec, label %dec_label_pc_123dc, !insn.addr !543

dec_label_pc_121ec:                               ; preds = %dec_label_pc_123dc, %dec_label_pc_121cc, %dec_label_pc_123fc
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %111 = add i32 %r5.1.reload, 1, !insn.addr !544
  %112 = urem i32 %111, 8, !insn.addr !545
  %113 = icmp eq i32 %112, 0, !insn.addr !545
  store i32 %sl.5.reload, i32* %sl.6.reg2mem, !insn.addr !546
  br i1 %113, label %dec_label_pc_121f8, label %dec_label_pc_12214, !insn.addr !546

dec_label_pc_121f8:                               ; preds = %dec_label_pc_121ec
  %114 = call i32 @function_11c60(i32 %sl.5.reload, i32 %111), !insn.addr !547
  %115 = icmp eq i32 %114, 0, !insn.addr !548
  store i32 0, i32* %sl.2.reg2mem, !insn.addr !549
  store i32 %114, i32* %sl.6.reg2mem, !insn.addr !549
  br i1 %115, label %dec_label_pc_12000, label %dec_label_pc_12214, !insn.addr !549

dec_label_pc_12214:                               ; preds = %dec_label_pc_121ec, %dec_label_pc_121f8
  %sl.6.reload = load i32, i32* %sl.6.reg2mem
  %116 = load i32, i32* %stack_var_-956, align 4, !insn.addr !550
  %117 = mul i32 %r5.1.reload, 16, !insn.addr !551
  %118 = add i32 %sl.6.reload, %117, !insn.addr !551
  %119 = inttoptr i32 %118 to i32*, !insn.addr !552
  store i32 %116, i32* %119, align 4, !insn.addr !552
  %120 = call i8* @__strdup(i8* nonnull %87), !insn.addr !553
  %121 = ptrtoint i8* %120 to i32, !insn.addr !553
  %122 = icmp eq i8* %120, null, !insn.addr !554
  %123 = add i32 %118, 4, !insn.addr !555
  %124 = inttoptr i32 %123 to i32*, !insn.addr !555
  store i32 %121, i32* %124, align 4, !insn.addr !555
  store i32 %sl.6.reload, i32* %sl.3.reg2mem, !insn.addr !556
  br i1 %122, label %dec_label_pc_1200c, label %dec_label_pc_1223c, !insn.addr !556

dec_label_pc_1223c:                               ; preds = %dec_label_pc_12214
  %125 = add i32 %sb.1.reload, ptrtoint ([10 x i8*]* @global_var_12e38 to i32), !insn.addr !557
  %126 = inttoptr i32 %125 to i32*, !insn.addr !557
  %127 = load i32, i32* %126, align 8, !insn.addr !557
  %128 = add i32 %sb.1.reload, add (i32 ptrtoint ([10 x i8*]* @global_var_12e38 to i32), i32 4), !insn.addr !558
  %129 = inttoptr i32 %128 to i32*, !insn.addr !558
  %130 = load i32, i32* %129, align 4, !insn.addr !558
  %131 = add i32 %118, 8, !insn.addr !559
  %132 = inttoptr i32 %131 to i32*, !insn.addr !559
  store i32 %127, i32* %132, align 4, !insn.addr !559
  %133 = add i32 %118, 12, !insn.addr !559
  %134 = inttoptr i32 %133 to i32*, !insn.addr !559
  store i32 %130, i32* %134, align 4, !insn.addr !559
  %135 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !560
  %136 = icmp eq %dirent64* %135, null, !insn.addr !561
  store %dirent64* %135, %dirent64** %r0.0.in.reg2mem, !insn.addr !562
  store i32 %111, i32* %r5.1.reg2mem, !insn.addr !562
  store i32 %sl.6.reload, i32* %sl.5.reg2mem, !insn.addr !562
  store i32 %sl.6.reload, i32* %sl.7.reg2mem, !insn.addr !562
  br i1 %136, label %dec_label_pc_12268, label %dec_label_pc_12128, !insn.addr !562

dec_label_pc_12268:                               ; preds = %dec_label_pc_12118.backedge, %dec_label_pc_1223c, %dec_label_pc_12118.preheader
  %sl.7.reload = load i32, i32* %sl.7.reg2mem
  %137 = call i32 @closedir(%__dirstream* nonnull %83), !insn.addr !563
  store i32 %sl.7.reload, i32* %sl.2.reg2mem, !insn.addr !564
  br label %dec_label_pc_12000, !insn.addr !564

dec_label_pc_12274:                               ; preds = %dec_label_pc_12128
  %138 = add i32 %r0.0, 20, !insn.addr !565
  %139 = inttoptr i32 %138 to i8*, !insn.addr !565
  %140 = load i8, i8* %139, align 1, !insn.addr !565
  switch i8 %140, label %dec_label_pc_12134 [
    i8 0, label %dec_label_pc_12118.backedge
    i8 46, label %dec_label_pc_12288
  ]

dec_label_pc_12288:                               ; preds = %dec_label_pc_12274
  %141 = add i32 %r0.0, 21, !insn.addr !566
  %142 = inttoptr i32 %141 to i8*, !insn.addr !566
  %143 = load i8, i8* %142, align 1, !insn.addr !566
  %144 = icmp eq i8 %143, 0, !insn.addr !567
  br i1 %144, label %dec_label_pc_12118.backedge, label %dec_label_pc_12134, !insn.addr !568

dec_label_pc_12298:                               ; preds = %dec_label_pc_122f0, %dec_label_pc_122b8, %dec_label_pc_12134
  %145 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !569
  %146 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %145, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fa4, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !570
  br label %dec_label_pc_12118.backedge, !insn.addr !571

dec_label_pc_12118.backedge:                      ; preds = %dec_label_pc_12274, %dec_label_pc_12314, %dec_label_pc_12288, %106, %dec_label_pc_12338.preheader, %dec_label_pc_12338.backedge, %dec_label_pc_12298, %dec_label_pc_1245c
  %147 = call %dirent64* @readdir64(%__dirstream* nonnull %83), !insn.addr !520
  %148 = icmp eq %dirent64* %147, null, !insn.addr !521
  store %dirent64* %147, %dirent64** %.reg2mem105, !insn.addr !522
  store i32 %sl.5.reload, i32* %sl.444.reg2mem, !insn.addr !522
  store i32 %r5.1.reload, i32* %r5.043.reg2mem, !insn.addr !522
  store i32 %sl.5.reload, i32* %sl.7.reg2mem, !insn.addr !522
  br i1 %148, label %dec_label_pc_12268, label %dec_label_pc_12128.preheader, !insn.addr !522

dec_label_pc_122b8:                               ; preds = %dec_label_pc_12158
  %149 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_12fb8, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !572
  %150 = icmp sgt i32 %149, 254, !insn.addr !573
  br i1 %150, label %dec_label_pc_12298, label %dec_label_pc_122dc, !insn.addr !573

dec_label_pc_122dc:                               ; preds = %dec_label_pc_122b8
  %151 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0)), !insn.addr !574
  %152 = icmp eq %_IO_FILE* %151, null, !insn.addr !575
  store %_IO_FILE* %151, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !576
  br i1 %152, label %dec_label_pc_122f0, label %dec_label_pc_1216c, !insn.addr !576

dec_label_pc_122f0:                               ; preds = %dec_label_pc_122dc
  %153 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_12fcc, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !577
  %154 = icmp sgt i32 %153, 254, !insn.addr !578
  br i1 %154, label %dec_label_pc_12298, label %dec_label_pc_12314, !insn.addr !578

dec_label_pc_12314:                               ; preds = %dec_label_pc_122f0
  %155 = call %__dirstream* @opendir(i8* nonnull %61), !insn.addr !579
  %156 = icmp eq %__dirstream* %155, null, !insn.addr !580
  br i1 %156, label %dec_label_pc_12118.backedge, label %dec_label_pc_12338.preheader, !insn.addr !581

dec_label_pc_12338.preheader:                     ; preds = %dec_label_pc_12314
  %157 = call %dirent64* @readdir64(%__dirstream* nonnull %155), !insn.addr !582
  %158 = icmp eq %dirent64* %157, null, !insn.addr !583
  store %dirent64* %157, %dirent64** %.in.reg2mem, !insn.addr !584
  br i1 %158, label %dec_label_pc_12118.backedge, label %dec_label_pc_12358, !insn.addr !584

dec_label_pc_12358:                               ; preds = %dec_label_pc_12338.preheader, %dec_label_pc_12338.backedge
  %.in.reload = load %dirent64*, %dirent64** %.in.reg2mem
  %159 = ptrtoint %dirent64* %.in.reload to i32
  %160 = add i32 %159, 19, !insn.addr !585
  %161 = inttoptr i32 %160 to i8*, !insn.addr !586
  %162 = load i8, i8* %161, align 1, !insn.addr !586
  %163 = icmp eq i8 %162, 46, !insn.addr !587
  br i1 %163, label %dec_label_pc_123b8, label %dec_label_pc_12364, !insn.addr !588

dec_label_pc_12364:                               ; preds = %dec_label_pc_123b8, %dec_label_pc_123cc, %dec_label_pc_12358
  %164 = call i32 @strncmp(i8* %161, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_12fdc, i32 0, i32 0), i32 4), !insn.addr !589
  %165 = icmp eq i32 %164, 0, !insn.addr !590
  br i1 %165, label %dec_label_pc_12378, label %dec_label_pc_12338.backedge, !insn.addr !591

dec_label_pc_12378:                               ; preds = %dec_label_pc_12364
  %166 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* nonnull %61, i32 255, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_12fe4, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93, i8* %161), !insn.addr !592
  %167 = icmp sgt i32 %166, 254, !insn.addr !593
  br i1 %167, label %dec_label_pc_1243c, label %dec_label_pc_123a4, !insn.addr !593

dec_label_pc_123a4:                               ; preds = %dec_label_pc_12378
  %168 = call %_IO_FILE* @fopen64(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0)), !insn.addr !594
  %169 = icmp eq %_IO_FILE* %168, null, !insn.addr !595
  store %_IO_FILE* %168, %_IO_FILE** %r3.0.in.reg2mem, !insn.addr !596
  br i1 %169, label %dec_label_pc_12338.backedge, label %dec_label_pc_1216c, !insn.addr !596

dec_label_pc_12338.backedge:                      ; preds = %dec_label_pc_123a4, %dec_label_pc_123cc, %dec_label_pc_1243c, %dec_label_pc_12364, %dec_label_pc_123b8
  %170 = call %dirent64* @readdir64(%__dirstream* nonnull %155), !insn.addr !582
  %171 = icmp eq %dirent64* %170, null, !insn.addr !583
  store %dirent64* %170, %dirent64** %.in.reg2mem, !insn.addr !584
  br i1 %171, label %dec_label_pc_12118.backedge, label %dec_label_pc_12358, !insn.addr !584

dec_label_pc_123b8:                               ; preds = %dec_label_pc_12358
  %172 = add i32 %159, 20, !insn.addr !597
  %173 = inttoptr i32 %172 to i8*, !insn.addr !597
  %174 = load i8, i8* %173, align 1, !insn.addr !597
  switch i8 %174, label %dec_label_pc_12364 [
    i8 0, label %dec_label_pc_12338.backedge
    i8 46, label %dec_label_pc_123cc
  ]

dec_label_pc_123cc:                               ; preds = %dec_label_pc_123b8
  %175 = add i32 %159, 21, !insn.addr !598
  %176 = inttoptr i32 %175 to i8*, !insn.addr !598
  %177 = load i8, i8* %176, align 1, !insn.addr !598
  %178 = icmp eq i8 %177, 0, !insn.addr !599
  br i1 %178, label %dec_label_pc_12338.backedge, label %dec_label_pc_12364, !insn.addr !600

dec_label_pc_123dc:                               ; preds = %dec_label_pc_121cc
  %179 = load i32, i32* %stack_var_-956, align 4, !insn.addr !601
  %180 = call i32 @function_11d60(i32 %179, i32* nonnull %stack_var_-948, i32 20, i32 1), !insn.addr !602
  %181 = icmp slt i32 %180, 0, !insn.addr !603
  %182 = icmp eq i1 %181, false, !insn.addr !604
  store i32 32, i32* %sb.1.reg2mem, !insn.addr !604
  br i1 %182, label %dec_label_pc_123fc, label %dec_label_pc_121ec, !insn.addr !604

dec_label_pc_123fc:                               ; preds = %dec_label_pc_123dc
  %183 = call i32 (i32, i32, ...) @ioctl(i32 %180, i32 1797), !insn.addr !605
  %184 = icmp slt i32 %183, 0, !insn.addr !606
  %185 = icmp eq i1 %184, false, !insn.addr !607
  %sb.6 = select i1 %185, i32 %spec.select, i32 32
  %186 = call i32 @close(i32 %180), !insn.addr !608
  store i32 %sb.6, i32* %sb.1.reg2mem, !insn.addr !609
  br label %dec_label_pc_121ec, !insn.addr !609

dec_label_pc_1243c:                               ; preds = %dec_label_pc_12378
  %187 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !610
  %188 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %187, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fa4, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !611
  br label %dec_label_pc_12338.backedge, !insn.addr !612

dec_label_pc_1245c:                               ; preds = %dec_label_pc_1216c
  %189 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !613
  %190 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %189, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_12ffc, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !614
  br label %dec_label_pc_12118.backedge, !insn.addr !615

; uselistorder directives
  uselistorder %__dirstream* %155, { 1, 0, 2 }
  uselistorder i32 %118, { 0, 1, 3, 2 }
  uselistorder i32 %sl.6.reload, { 0, 3, 2, 1 }
  uselistorder i32 %111, { 0, 2, 1 }
  uselistorder i32 %sb.1.reload, { 1, 0 }
  uselistorder %_IO_FILE* %r3.0.in.reload, { 1, 0 }
  uselistorder i8* %93, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %r0.0, { 2, 0, 1 }
  uselistorder i32 %r5.1.reload, { 2, 1, 0 }
  uselistorder i32 %sl.5.reload, { 0, 3, 2, 1 }
  uselistorder %__dirstream* %83, { 3, 1, 2, 0, 4 }
  uselistorder i32 %73, { 4, 3, 2, 1, 0 }
  uselistorder i8* %61, { 7, 6, 5, 4, 3, 2, 1, 0, 9, 8 }
  uselistorder %_IO_FILE* %59, { 1, 0, 2, 3 }
  uselistorder i32 %29, { 1, 2, 3, 0 }
  uselistorder i32* %25, { 0, 2, 1 }
  uselistorder i32 %sl.0.reload, { 1, 3, 2, 0 }
  uselistorder i32 %21, { 1, 0 }
  uselistorder i32 %19, { 0, 2, 1 }
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %11, { 1, 0 }
  uselistorder i8* %10, { 1, 0 }
  uselistorder i32 %.reload, { 1, 0, 2 }
  uselistorder i32 %sl.147.reload, { 1, 0 }
  uselistorder i8* %7, { 5, 2, 3, 4, 1, 0 }
  uselistorder %_IO_FILE* %5, { 1, 2, 0, 3 }
  uselistorder i32 %3, { 1, 0, 2, 3, 4, 6, 7, 5 }
  uselistorder i32* %stack_var_-296, { 2, 1, 0, 3, 5, 4 }
  uselistorder i32* %stack_var_-552, { 2, 3, 4, 5, 6, 0, 1 }
  uselistorder i32* %stack_var_-956, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.147.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.046.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sl.2.reg2mem, { 5, 2, 6, 7, 8, 3, 0, 4, 1, 9 }
  uselistorder i32* %sl.3.reg2mem, { 2, 0, 1 }
  uselistorder %dirent64** %.reg2mem105, { 1, 0, 2 }
  uselistorder i32* %sl.444.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.043.reg2mem, { 1, 0, 2 }
  uselistorder %dirent64** %r0.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.5.reg2mem, { 2, 0, 1 }
  uselistorder %_IO_FILE** %r3.0.in.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32* %sb.1.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %sl.6.reg2mem, { 0, 2, 1 }
  uselistorder i32* %sl.7.reg2mem, { 1, 0, 2, 3 }
  uselistorder %dirent64** %.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @close, { 3, 2, 1, 0, 4 }
  uselistorder i32 32, { 1, 0, 2, 3 }
  uselistorder i1 false, { 1, 2, 0 }
  uselistorder i32 (i32, i32*, i32, i32)* @function_11d60, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_12fa4, i32 0, i32 0), { 1, 0 }
  uselistorder i32 (i8*, i8*, i32)* @strncmp, { 1, 0, 2 }
  uselistorder i32 (i8*, i32, i8*, ...)* @snprintf, { 0, 3, 2, 4, 1, 5 }
  uselistorder i8 46, { 0, 2, 1, 3 }
  uselistorder %dirent64* null, { 2, 1, 4, 3, 0 }
  uselistorder %dirent64* (%__dirstream*)* @readdir64, { 4, 1, 2, 3, 0, 5 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 3, 2, 1, 0, 4 }
  uselistorder i32 12, { 2, 3, 4, 5, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 0, 2, 3 }
  uselistorder i32 (i32, i32)* @function_11c60, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i32)* @strrchr, { 2, 1, 0, 3 }
  uselistorder i32 9, { 1, 2, 0, 3 }
  uselistorder i32 120, { 1, 2, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 1, 0, 3, 2, 4, 5 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_13124, i32 0, i32 0), { 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 8, 2, 0, 9, 10, 3, 7, 4, 1, 5, 6 }
  uselistorder label %dec_label_pc_12338.backedge, { 2, 1, 4, 0, 3 }
  uselistorder label %dec_label_pc_12364, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12358, { 1, 0 }
  uselistorder label %dec_label_pc_12118.backedge, { 7, 5, 4, 1, 6, 2, 0, 3 }
  uselistorder label %dec_label_pc_12214, { 1, 0 }
  uselistorder label %dec_label_pc_121ec, { 2, 0, 1 }
  uselistorder label %106, { 1, 0 }
  uselistorder label %dec_label_pc_12134, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12128, { 1, 0 }
  uselistorder label %dec_label_pc_12128.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1206c, { 1, 0 }
  uselistorder label %dec_label_pc_1200c, { 1, 0 }
  uselistorder label %dec_label_pc_12000, { 3, 1, 4, 5, 6, 2, 7, 0, 8 }
  uselistorder label %dec_label_pc_11f78, { 1, 0 }
  uselistorder label %dec_label_pc_11ee8, { 1, 0 }
}

define i32 @function_1247c(i32 %arg1) local_unnamed_addr {
dec_label_pc_1247c:
  %r5.5.reg2mem = alloca i32, !insn.addr !616
  %r5.4.reg2mem = alloca i32, !insn.addr !616
  %r5.3.reg2mem = alloca i32, !insn.addr !616
  %r4.1.in.reg2mem = alloca i32, !insn.addr !616
  %.reg2mem = alloca i32, !insn.addr !616
  %r5.1.reg2mem = alloca i32, !insn.addr !616
  %stack_var_-28 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !617
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-28, i32 0), !insn.addr !617
  %2 = load i8*, i8** %stack_var_-28, align 4, !insn.addr !618
  %3 = load i8, i8* %2, align 1, !insn.addr !619
  %4 = icmp ne i8 %3, 0, !insn.addr !620
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !621
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_124c8, label %dec_label_pc_124b0, !insn.addr !622

dec_label_pc_124b0:                               ; preds = %dec_label_pc_1247c
  %7 = icmp ult i32 %1, 1048576, !insn.addr !623
  store i32 %1, i32* %r5.1.reg2mem, !insn.addr !624
  br i1 %7, label %dec_label_pc_124bc, label %dec_label_pc_12580, !insn.addr !624

dec_label_pc_124bc:                               ; preds = %dec_label_pc_124b0, %dec_label_pc_125a8, %dec_label_pc_12580
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !625

dec_label_pc_124c8:                               ; preds = %dec_label_pc_1247c
  %8 = call i32 @function_11e90(), !insn.addr !626
  %9 = icmp eq i32 %8, 0, !insn.addr !627
  br i1 %9, label %dec_label_pc_125a8, label %dec_label_pc_124d4, !insn.addr !628

dec_label_pc_124d4:                               ; preds = %dec_label_pc_124c8
  %10 = add i32 %8, 4, !insn.addr !629
  %11 = inttoptr i32 %10 to i32*, !insn.addr !629
  %12 = load i32, i32* %11, align 4, !insn.addr !629
  %13 = icmp eq i32 %12, 0, !insn.addr !630
  store i32 %12, i32* %.reg2mem, !insn.addr !631
  store i32 %8, i32* %r4.1.in.reg2mem, !insn.addr !631
  store i32 -1, i32* %r5.3.reg2mem, !insn.addr !631
  br i1 %13, label %dec_label_pc_12558, label %dec_label_pc_124e8, !insn.addr !631

dec_label_pc_124e8:                               ; preds = %dec_label_pc_124d4, %dec_label_pc_12504
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !632
  %14 = inttoptr i32 %.reload to i8*, !insn.addr !632
  %15 = call i32 @strcmp(i8* %14, i8* %0), !insn.addr !632
  %16 = icmp eq i32 %15, 0, !insn.addr !633
  store i32 %r5.3.reload, i32* %r5.4.reg2mem, !insn.addr !634
  br i1 %16, label %dec_label_pc_124f8, label %dec_label_pc_12504, !insn.addr !634

dec_label_pc_124f8:                               ; preds = %dec_label_pc_124e8
  %17 = icmp slt i32 %r5.3.reload, 0, !insn.addr !635
  br i1 %17, label %dec_label_pc_12500, label %dec_label_pc_12530, !insn.addr !636

dec_label_pc_12500:                               ; preds = %dec_label_pc_124f8
  %18 = inttoptr i32 %r4.1.in.reload to i32*, !insn.addr !637
  %19 = load i32, i32* %18, align 4, !insn.addr !637
  store i32 %19, i32* %r5.4.reg2mem, !insn.addr !637
  br label %dec_label_pc_12504, !insn.addr !637

dec_label_pc_12504:                               ; preds = %dec_label_pc_124e8, %dec_label_pc_12500
  %r4.1 = add i32 %r4.1.in.reload, 16
  %r5.4.reload = load i32, i32* %r5.4.reg2mem
  %20 = add i32 %r4.1.in.reload, 20, !insn.addr !638
  %21 = inttoptr i32 %20 to i32*, !insn.addr !638
  %22 = load i32, i32* %21, align 4, !insn.addr !638
  %23 = icmp eq i32 %22, 0, !insn.addr !639
  store i32 %22, i32* %.reg2mem, !insn.addr !640
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !640
  store i32 %r5.4.reload, i32* %r5.3.reg2mem, !insn.addr !640
  br i1 %23, label %dec_label_pc_12514, label %dec_label_pc_124e8, !insn.addr !640

dec_label_pc_12514:                               ; preds = %dec_label_pc_12504
  %24 = icmp eq i32 %r5.4.reload, -1, !insn.addr !641
  store i32 %r5.4.reload, i32* %r5.5.reg2mem, !insn.addr !642
  br i1 %24, label %dec_label_pc_12558, label %dec_label_pc_1251c, !insn.addr !642

dec_label_pc_1251c:                               ; preds = %dec_label_pc_12558, %dec_label_pc_12530, %dec_label_pc_12514
  %r5.5.reload = load i32, i32* %r5.5.reg2mem
  %25 = call i32 @function_11c28(i32 %8), !insn.addr !643
  ret i32 %r5.5.reload, !insn.addr !644

dec_label_pc_12530:                               ; preds = %dec_label_pc_124f8
  %26 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !645
  %27 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_1303c to i32*), i32 1, i32 35, %_IO_FILE* %26), !insn.addr !646
  store i32 -4, i32* %r5.5.reg2mem, !insn.addr !647
  br label %dec_label_pc_1251c, !insn.addr !647

dec_label_pc_12558:                               ; preds = %dec_label_pc_12514, %dec_label_pc_124d4
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !648
  %29 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_13060 to i32*), i32 1, i32 51, %_IO_FILE* %28), !insn.addr !649
  store i32 -1, i32* %r5.5.reg2mem, !insn.addr !650
  br label %dec_label_pc_1251c, !insn.addr !650

dec_label_pc_12580:                               ; preds = %dec_label_pc_124b0
  %30 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !651
  %31 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_13094 to i32*), i32 1, i32 29, %_IO_FILE* %30), !insn.addr !652
  store i32 -2, i32* %r5.1.reg2mem, !insn.addr !653
  br label %dec_label_pc_124bc, !insn.addr !653

dec_label_pc_125a8:                               ; preds = %dec_label_pc_124c8
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !654
  %33 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_13024 to i32*), i32 1, i32 22, %_IO_FILE* %32), !insn.addr !655
  store i32 -3, i32* %r5.1.reg2mem, !insn.addr !656
  br label %dec_label_pc_124bc, !insn.addr !656

; uselistorder directives
  uselistorder i32 %r4.1.in.reload, { 1, 0, 2 }
  uselistorder i32 %r5.3.reload, { 1, 0 }
  uselistorder i32 %8, { 1, 0, 2, 3 }
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r5.1.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.5.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 0, 20, 19, 18, 17, 16, 9, 8, 7, 6, 15, 14, 13, 10, 11, 5, 4, 12, 3, 2, 1, 21 }
  uselistorder i32 20, { 1, 3, 6, 7, 0, 2, 4, 5 }
  uselistorder i32 16, { 3, 0, 2, 6, 4, 1, 7, 5 }
  uselistorder i32 4, { 14, 6, 7, 10, 8, 11, 12, 13, 9, 4, 15, 5, 0, 1, 16, 17, 2, 3, 18 }
  uselistorder i8 0, { 0, 11, 13, 4, 12, 5, 3, 14, 8, 9, 10, 15, 1, 16, 6, 2, 17, 19, 18, 21, 7, 20, 22, 23 }
  uselistorder label %dec_label_pc_12504, { 1, 0 }
  uselistorder label %dec_label_pc_124e8, { 1, 0 }
  uselistorder label %dec_label_pc_124bc, { 1, 2, 0 }
}

define i32 @function_125d0(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_125d0:
  %0 = icmp eq i32 %arg3, 0, !insn.addr !657
  %r1.1 = select i1 %0, i32 1795, i32 1798
  %1 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 %r1.1), !insn.addr !658
  %2 = icmp slt i32 %1, 0, !insn.addr !659
  br i1 %2, label %dec_label_pc_12604, label %dec_label_pc_125fc, !insn.addr !660

dec_label_pc_125fc:                               ; preds = %dec_label_pc_125d0
  ret i32 0, !insn.addr !661

dec_label_pc_12604:                               ; preds = %dec_label_pc_125d0
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_240d8, align 4, !insn.addr !662
  %4 = call i32* @__errno_location(), !insn.addr !663
  %5 = load i32, i32* %4, align 4, !insn.addr !664
  %6 = call i8* @strerror(i32 %5), !insn.addr !665
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_130b4, i32 0, i32 0), i32 %arg2, i8* %6), !insn.addr !666
  %8 = load i32, i32* %4, align 4, !insn.addr !667
  %9 = sub i32 0, %8, !insn.addr !668
  ret i32 %9, !insn.addr !669

; uselistorder directives
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 8, 1, 2, 7, 13, 4, 18, 16, 17, 15, 14, 12, 11, 10, 9, 19, 0, 3, 6, 5, 20 }
  uselistorder i32* ()* @__errno_location, { 1, 2, 0, 3 }
  uselistorder %_IO_FILE** @global_var_240d8, { 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 2, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 0, 5, 4, 3, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 0, 2, 1, 3 }
}

define i32 @function_12644(i32 %arg1) local_unnamed_addr {
dec_label_pc_12644:
  %r5.1.reg2mem = alloca i32, !insn.addr !670
  %r5.01.reg2mem = alloca i32, !insn.addr !670
  %stack_var_-20 = alloca i32, align 4
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_240e0, align 4, !insn.addr !671
  %1 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !672
  %2 = call i8* @fgets(i8* nonnull %1, i32 2, %_IO_FILE* %0), !insn.addr !672
  %3 = icmp eq i8* %2, null, !insn.addr !673
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !674
  br i1 %3, label %dec_label_pc_126c0, label %dec_label_pc_12670, !insn.addr !674

dec_label_pc_12670:                               ; preds = %dec_label_pc_12644
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !675
  %5 = urem i32 %4, 256, !insn.addr !675
  %6 = icmp eq i32 %5, 89, !insn.addr !676
  br i1 %6, label %dec_label_pc_126dc, label %dec_label_pc_1267c, !insn.addr !677

dec_label_pc_1267c:                               ; preds = %dec_label_pc_12670
  %7 = icmp ult i32 %5, 89, !insn.addr !676
  %trunc2 = trunc i32 %4 to i8
  br i1 %7, label %dec_label_pc_126cc, label %dec_label_pc_12680, !insn.addr !678

dec_label_pc_12680:                               ; preds = %dec_label_pc_1267c
  store i32 %arg1, i32* %r5.01.reg2mem
  switch i8 %trunc2, label %dec_label_pc_126a8.preheader [
    i8 110, label %dec_label_pc_126d4
    i8 121, label %dec_label_pc_126dc
  ]

dec_label_pc_126a8.preheader:                     ; preds = %dec_label_pc_126cc, %dec_label_pc_126d4, %dec_label_pc_126dc, %dec_label_pc_12680
  %r5.01.reload = load i32, i32* %r5.01.reg2mem
  br label %dec_label_pc_126a8

dec_label_pc_1269c:                               ; preds = %dec_label_pc_126a8
  %8 = urem i32 %13, 256, !insn.addr !679
  %9 = icmp eq i32 %8, 10, !insn.addr !680
  %10 = mul i32 %13, 16777216
  %11 = ashr exact i32 %10, 24, !insn.addr !681
  store i32 %11, i32* %stack_var_-20, align 4, !insn.addr !681
  store i32 %r5.01.reload, i32* %r5.1.reg2mem, !insn.addr !682
  br i1 %9, label %dec_label_pc_126c0, label %dec_label_pc_126a8, !insn.addr !682

dec_label_pc_126a8:                               ; preds = %dec_label_pc_126a8.preheader, %dec_label_pc_1269c
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_240e0, align 4, !insn.addr !683
  %13 = call i32 @fgetc(%_IO_FILE* %12), !insn.addr !684
  %14 = icmp eq i32 %13, -1, !insn.addr !685
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !686
  br i1 %14, label %dec_label_pc_126c0, label %dec_label_pc_1269c, !insn.addr !686

dec_label_pc_126c0:                               ; preds = %dec_label_pc_126a8, %dec_label_pc_1269c, %dec_label_pc_126cc, %dec_label_pc_12644
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !687

dec_label_pc_126cc:                               ; preds = %dec_label_pc_1267c
  store i32 %arg1, i32* %r5.01.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc2, label %dec_label_pc_126a8.preheader [
    i8 78, label %dec_label_pc_126d4
    i8 10, label %dec_label_pc_126c0
  ]

dec_label_pc_126d4:                               ; preds = %dec_label_pc_126cc, %dec_label_pc_12680
  store i32 0, i32* %r5.01.reg2mem, !insn.addr !688
  br label %dec_label_pc_126a8.preheader, !insn.addr !688

dec_label_pc_126dc:                               ; preds = %dec_label_pc_12680, %dec_label_pc_12670
  store i32 1, i32* %r5.01.reg2mem, !insn.addr !689
  br label %dec_label_pc_126a8.preheader, !insn.addr !689

; uselistorder directives
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder i8 %trunc2, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %r5.01.reg2mem, { 2, 3, 1, 0, 4 }
  uselistorder i32* %r5.1.reg2mem, { 3, 0, 1, 2, 4 }
  uselistorder i8 10, { 0, 1, 3, 2 }
  uselistorder i32 -1, { 12, 0, 13, 1, 9, 2, 14, 17, 15, 3, 10, 4, 5, 6, 11, 16, 7, 8 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 10, { 1, 0 }
  uselistorder i32 89, { 1, 0 }
  uselistorder i8* null, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i32, %_IO_FILE*)* @fgets, { 3, 2, 1, 4, 0, 5 }
  uselistorder %_IO_FILE** @global_var_240e0, { 1, 0 }
  uselistorder label %dec_label_pc_126c0, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_126a8, { 1, 0 }
  uselistorder label %dec_label_pc_126a8.preheader, { 2, 1, 0, 3 }
}

define i32 @function_126e4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_126e4:
  %0 = call i32 @function_10af0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !690
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 147210, i32 ptrtoint (i32* @global_var_23f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !691

; uselistorder directives
  uselistorder i32 0, { 56, 2, 0, 1, 155, 57, 58, 34, 156, 157, 172, 173, 174, 175, 176, 122, 67, 68, 160, 161, 61, 62, 162, 44, 45, 63, 64, 65, 66, 59, 60, 5, 163, 164, 165, 69, 70, 166, 46, 47, 3, 42, 158, 159, 167, 48, 49, 50, 51, 71, 72, 6, 4, 168, 169, 73, 74, 7, 35, 36, 75, 76, 77, 78, 177, 79, 80, 81, 82, 43, 178, 123, 124, 170, 171, 179, 41, 83, 153, 154, 33, 203, 92, 93, 102, 103, 8, 40, 39, 188, 54, 55, 189, 52, 53, 104, 105, 190, 106, 107, 9, 38, 37, 108, 109, 110, 111, 125, 112, 113, 185, 186, 187, 16, 126, 10, 11, 17, 12, 18, 197, 14, 127, 13, 94, 95, 180, 96, 97, 181, 98, 99, 182, 100, 101, 183, 116, 117, 118, 119, 184, 191, 114, 115, 192, 193, 194, 195, 198, 199, 128, 90, 91, 129, 15, 19, 200, 130, 86, 87, 88, 89, 84, 85, 131, 201, 202, 196, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 120, 121, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152 }
  uselistorder i32 2, { 10, 12, 5, 13, 6, 14, 15, 8, 3, 2, 18, 4, 7, 9, 1, 0, 16, 19, 20, 17, 11 }
}

define i32 @function_12720() local_unnamed_addr {
dec_label_pc_12720:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !692

; uselistorder directives
  uselistorder i32 1, { 7, 11, 137, 12, 10, 110, 111, 112, 113, 107, 18, 17, 16, 15, 14, 13, 114, 147, 151, 150, 148, 149, 36, 143, 142, 141, 140, 139, 138, 37, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 6, 38, 115, 108, 39, 41, 40, 152, 153, 102, 43, 42, 5, 116, 117, 4, 44, 3, 101, 45, 9, 8, 2, 1, 144, 103, 154, 118, 119, 155, 156, 49, 120, 121, 122, 123, 124, 125, 126, 104, 159, 127, 160, 128, 66, 129, 130, 105, 131, 132, 157, 106, 67, 161, 162, 133, 134, 80, 82, 89, 86, 135, 68, 158, 84, 163, 98, 109, 146, 145, 100, 99, 97, 96, 95, 94, 93, 92, 91, 90, 88, 87, 85, 83, 81, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 48, 47, 46, 0, 136 }
}

define i32 @function_12724(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12724:
  ret i32 %arg1, !insn.addr !693
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

!0 = !{i64 68340}
!1 = !{i64 68344}
!2 = !{i64 68376}
!3 = !{i64 68388}
!4 = !{i64 68400}
!5 = !{i64 68412}
!6 = !{i64 68424}
!7 = !{i64 68436}
!8 = !{i64 68448}
!9 = !{i64 68460}
!10 = !{i64 68472}
!11 = !{i64 68484}
!12 = !{i64 68496}
!13 = !{i64 68508}
!14 = !{i64 68520}
!15 = !{i64 68532}
!16 = !{i64 68544}
!17 = !{i64 68556}
!18 = !{i64 68568}
!19 = !{i64 68580}
!20 = !{i64 68592}
!21 = !{i64 68604}
!22 = !{i64 68616}
!23 = !{i64 68628}
!24 = !{i64 68640}
!25 = !{i64 68652}
!26 = !{i64 68664}
!27 = !{i64 68676}
!28 = !{i64 68688}
!29 = !{i64 68700}
!30 = !{i64 68712}
!31 = !{i64 68724}
!32 = !{i64 68736}
!33 = !{i64 68748}
!34 = !{i64 68760}
!35 = !{i64 68772}
!36 = !{i64 68784}
!37 = !{i64 68796}
!38 = !{i64 68808}
!39 = !{i64 68820}
!40 = !{i64 68832}
!41 = !{i64 68844}
!42 = !{i64 68856}
!43 = !{i64 68868}
!44 = !{i64 68880}
!45 = !{i64 68892}
!46 = !{i64 68904}
!47 = !{i64 68916}
!48 = !{i64 68928}
!49 = !{i64 68932}
!50 = !{i64 68944}
!51 = !{i64 68948}
!52 = !{i64 68960}
!53 = !{i64 68964}
!54 = !{i64 68968}
!55 = !{i64 69004}
!56 = !{i64 69008}
!57 = !{i64 69016}
!58 = !{i64 69176}
!59 = !{i64 69180}
!60 = !{i64 69188}
!61 = !{i64 69192}
!62 = !{i64 69196}
!63 = !{i64 69200}
!64 = !{i64 69204}
!65 = !{i64 69208}
!66 = !{i64 69212}
!67 = !{i64 69216}
!68 = !{i64 69224}
!69 = !{i64 69228}
!70 = !{i64 69236}
!71 = !{i64 69244}
!72 = !{i64 69248}
!73 = !{i64 69256}
!74 = !{i64 69268}
!75 = !{i64 69276}
!76 = !{i64 69280}
!77 = !{i64 69288}
!78 = !{i64 69292}
!79 = !{i64 69300}
!80 = !{i64 69304}
!81 = !{i64 69316}
!82 = !{i64 69320}
!83 = !{i64 69328}
!84 = !{i64 69332}
!85 = !{i64 69336}
!86 = !{i64 69340}
!87 = !{i64 69344}
!88 = !{i64 69348}
!89 = !{i64 69352}
!90 = !{i64 69356}
!91 = !{i64 69360}
!92 = !{i64 69364}
!93 = !{i64 69372}
!94 = !{i64 69376}
!95 = !{i64 69380}
!96 = !{i64 69388}
!97 = !{i64 69392}
!98 = !{i64 69396}
!99 = !{i64 69400}
!100 = !{i64 69404}
!101 = !{i64 69408}
!102 = !{i64 69412}
!103 = !{i64 69416}
!104 = !{i64 69464}
!105 = !{i64 69468}
!106 = !{i64 69472}
!107 = !{i64 70716}
!108 = !{i64 70720}
!109 = !{i64 69504}
!110 = !{i64 69508}
!111 = !{i64 69520}
!112 = !{i64 69532}
!113 = !{i64 69544}
!114 = !{i64 69556}
!115 = !{i64 69560}
!116 = !{i64 69568}
!117 = !{i64 69592}
!118 = !{i64 69596}
!119 = !{i64 69600}
!120 = !{i64 69620}
!121 = !{i64 69632}
!122 = !{i64 69636}
!123 = !{i64 69656}
!124 = !{i64 69668}
!125 = !{i64 69676}
!126 = !{i64 69720}
!127 = !{i64 69724}
!128 = !{i64 69740}
!129 = !{i64 69744}
!130 = !{i64 69760}
!131 = !{i64 69764}
!132 = !{i64 69776}
!133 = !{i64 69808}
!134 = !{i64 69812}
!135 = !{i64 69816}
!136 = !{i64 69820}
!137 = !{i64 69824}
!138 = !{i64 69828}
!139 = !{i64 69832}
!140 = !{i64 69836}
!141 = !{i64 69840}
!142 = !{i64 69876}
!143 = !{i64 69884}
!144 = !{i64 69888}
!145 = !{i64 69896}
!146 = !{i64 69900}
!147 = !{i64 69904}
!148 = !{i64 69908}
!149 = !{i64 69912}
!150 = !{i64 69972}
!151 = !{i64 69976}
!152 = !{i64 69980}
!153 = !{i64 69992}
!154 = !{i64 69996}
!155 = !{i64 70000}
!156 = !{i64 70004}
!157 = !{i64 70016}
!158 = !{i64 70124}
!159 = !{i64 70128}
!160 = !{i64 70132}
!161 = !{i64 70136}
!162 = !{i64 70140}
!163 = !{i64 70148}
!164 = !{i64 70152}
!165 = !{i64 70156}
!166 = !{i64 70160}
!167 = !{i64 70164}
!168 = !{i64 70168}
!169 = !{i64 70180}
!170 = !{i64 70184}
!171 = !{i64 70188}
!172 = !{i64 70196}
!173 = !{i64 70204}
!174 = !{i64 70208}
!175 = !{i64 70212}
!176 = !{i64 70220}
!177 = !{i64 70232}
!178 = !{i64 70280}
!179 = !{i64 70288}
!180 = !{i64 70304}
!181 = !{i64 70308}
!182 = !{i64 70312}
!183 = !{i64 70320}
!184 = !{i64 70324}
!185 = !{i64 70328}
!186 = !{i64 70348}
!187 = !{i64 70356}
!188 = !{i64 70400}
!189 = !{i64 70404}
!190 = !{i64 70424}
!191 = !{i64 70436}
!192 = !{i64 70444}
!193 = !{i64 70452}
!194 = !{i64 70456}
!195 = !{i64 70476}
!196 = !{i64 70488}
!197 = !{i64 70492}
!198 = !{i64 70500}
!199 = !{i64 70504}
!200 = !{i64 70524}
!201 = !{i64 70536}
!202 = !{i64 70540}
!203 = !{i64 70548}
!204 = !{i64 70552}
!205 = !{i64 70572}
!206 = !{i64 70584}
!207 = !{i64 70588}
!208 = !{i64 70596}
!209 = !{i64 70600}
!210 = !{i64 70620}
!211 = !{i64 70632}
!212 = !{i64 70636}
!213 = !{i64 70640}
!214 = !{i64 70648}
!215 = !{i64 70656}
!216 = !{i64 70676}
!217 = !{i64 70688}
!218 = !{i64 70692}
!219 = !{i64 70724}
!220 = !{i64 70732}
!221 = !{i64 70736}
!222 = !{i64 70748}
!223 = !{i64 70752}
!224 = !{i64 70776}
!225 = !{i64 70784}
!226 = !{i64 70816}
!227 = !{i64 70836}
!228 = !{i64 70840}
!229 = !{i64 70844}
!230 = !{i64 70884}
!231 = !{i64 70888}
!232 = !{i64 70908}
!233 = !{i64 70920}
!234 = !{i64 70924}
!235 = !{i64 70928}
!236 = !{i64 70932}
!237 = !{i64 70936}
!238 = !{i64 70956}
!239 = !{i64 70968}
!240 = !{i64 70972}
!241 = !{i64 71004}
!242 = !{i64 71008}
!243 = !{i64 71012}
!244 = !{i64 71036}
!245 = !{i64 71044}
!246 = !{i64 71156}
!247 = !{i64 71088}
!248 = !{i64 71092}
!249 = !{i64 71096}
!250 = !{i64 71100}
!251 = !{i64 71104}
!252 = !{i64 71116}
!253 = !{i64 71120}
!254 = !{i64 71128}
!255 = !{i64 71136}
!256 = !{i64 71140}
!257 = !{i64 71148}
!258 = !{i64 71192}
!259 = !{i64 71196}
!260 = !{i64 71204}
!261 = !{i64 71216}
!262 = !{i64 71220}
!263 = !{i64 71224}
!264 = !{i64 71240}
!265 = !{i64 71244}
!266 = !{i64 71272}
!267 = !{i64 71276}
!268 = !{i64 71284}
!269 = !{i64 71288}
!270 = !{i64 71292}
!271 = !{i64 71296}
!272 = !{i64 71300}
!273 = !{i64 71336}
!274 = !{i64 71344}
!275 = !{i64 71356}
!276 = !{i64 71360}
!277 = !{i64 71388}
!278 = !{i64 71392}
!279 = !{i64 71404}
!280 = !{i64 71408}
!281 = !{i64 71420}
!282 = !{i64 71428}
!283 = !{i64 71440}
!284 = !{i64 71448}
!285 = !{i64 71456}
!286 = !{i64 71464}
!287 = !{i64 71564}
!288 = !{i64 71576}
!289 = !{i64 71584}
!290 = !{i64 71592}
!291 = !{i64 71596}
!292 = !{i64 71608}
!293 = !{i64 71612}
!294 = !{i64 71688}
!295 = !{i64 71704}
!296 = !{i64 71712}
!297 = !{i64 71732}
!298 = !{i64 71744}
!299 = !{i64 71752}
!300 = !{i64 71764}
!301 = !{i64 71768}
!302 = !{i64 71776}
!303 = !{i64 71780}
!304 = !{i64 71800}
!305 = !{i64 71812}
!306 = !{i64 71820}
!307 = !{i64 71824}
!308 = !{i64 71828}
!309 = !{i64 71832}
!310 = !{i64 71844}
!311 = !{i64 71860}
!312 = !{i64 71884}
!313 = !{i64 71888}
!314 = !{i64 71892}
!315 = !{i64 71896}
!316 = !{i64 71908}
!317 = !{i64 71928}
!318 = !{i64 71964}
!319 = !{i64 71972}
!320 = !{i64 71992}
!321 = !{i64 72264}
!322 = !{i64 72056}
!323 = !{i64 72068}
!324 = !{i64 72072}
!325 = !{i64 72076}
!326 = !{i64 72080}
!327 = !{i64 72088}
!328 = !{i64 72092}
!329 = !{i64 72096}
!330 = !{i64 72104}
!331 = !{i64 72112}
!332 = !{i64 72128}
!333 = !{i64 72136}
!334 = !{i64 72156}
!335 = !{i64 72212}
!336 = !{i64 72216}
!337 = !{i64 72220}
!338 = !{i64 72192}
!339 = !{i64 72200}
!340 = !{i64 72204}
!341 = !{i64 72208}
!342 = !{i64 72276}
!343 = !{i64 72292}
!344 = !{i64 72296}
!345 = !{i64 72300}
!346 = !{i64 72316}
!347 = !{i64 72320}
!348 = !{i64 72324}
!349 = !{i64 72340}
!350 = !{i64 72344}
!351 = !{i64 72356}
!352 = !{i64 72360}
!353 = !{i64 72364}
!354 = !{i64 72368}
!355 = !{i64 72388}
!356 = !{i64 72392}
!357 = !{i64 72424}
!358 = !{i64 72428}
!359 = !{i64 72434}
!360 = !{i64 72456}
!361 = !{i64 72460}
!362 = !{i64 72464}
!363 = !{i64 72468}
!364 = !{i64 72480}
!365 = !{i64 72512}
!366 = !{i64 72536}
!367 = !{i64 72532}
!368 = !{i64 72544}
!369 = !{i64 72556}
!370 = !{i64 72560}
!371 = !{i64 72564}
!372 = !{i64 72566}
!373 = !{i64 72570}
!374 = !{i64 72572}
!375 = !{i64 72574}
!376 = !{i64 72580}
!377 = !{i64 72582}
!378 = !{i64 72584}
!379 = !{i64 72608}
!380 = !{i64 72620}
!381 = !{i64 72628}
!382 = !{i64 72632}
!383 = !{i64 72640}
!384 = !{i64 72644}
!385 = !{i64 72648}
!386 = !{i64 72652}
!387 = !{i64 72660}
!388 = !{i64 72708}
!389 = !{i64 72712}
!390 = !{i64 72716}
!391 = !{i64 72684}
!392 = !{i64 72704}
!393 = !{i64 72724}
!394 = !{i64 72728}
!395 = !{i64 72732}
!396 = !{i64 72736}
!397 = !{i64 72740}
!398 = !{i64 72744}
!399 = !{i64 72752}
!400 = !{i64 72756}
!401 = !{i64 72760}
!402 = !{i64 72768}
!403 = !{i64 72772}
!404 = !{i64 72776}
!405 = !{i64 72780}
!406 = !{i64 72784}
!407 = !{i64 72796}
!408 = !{i64 72800}
!409 = !{i64 72808}
!410 = !{i64 72820}
!411 = !{i64 72824}
!412 = !{i64 72828}
!413 = !{i64 72840}
!414 = !{i64 72848}
!415 = !{i64 72856}
!416 = !{i64 72864}
!417 = !{i64 72868}
!418 = !{i64 72872}
!419 = !{i64 72896}
!420 = !{i64 72900}
!421 = !{i64 72904}
!422 = !{i64 72908}
!423 = !{i64 72920}
!424 = !{i64 72912}
!425 = !{i64 72928}
!426 = !{i64 72952}
!427 = !{i64 72964}
!428 = !{i64 72968}
!429 = !{i64 72972}
!430 = !{i64 72980}
!431 = !{i64 73000}
!432 = !{i64 73012}
!433 = !{i64 73020}
!434 = !{i64 73040}
!435 = !{i64 73044}
!436 = !{i64 73052}
!437 = !{i64 73056}
!438 = !{i64 73104}
!439 = !{i64 73100}
!440 = !{i64 73116}
!441 = !{i64 73124}
!442 = !{i64 73128}
!443 = !{i64 73132}
!444 = !{i64 73144}
!445 = !{i64 73148}
!446 = !{i64 73152}
!447 = !{i64 73336}
!448 = !{i64 73348}
!449 = !{i64 73356}
!450 = !{i64 73360}
!451 = !{i64 73376}
!452 = !{i64 73380}
!453 = !{i64 73384}
!454 = !{i64 73404}
!455 = !{i64 73408}
!456 = !{i64 73416}
!457 = !{i64 73696}
!458 = !{i64 73700}
!459 = !{i64 73716}
!460 = !{i64 73448}
!461 = !{i64 73456}
!462 = !{i64 73480}
!463 = !{i64 73488}
!464 = !{i64 73512}
!465 = !{i64 73520}
!466 = !{i64 73560}
!467 = !{i64 73564}
!468 = !{i64 73576}
!469 = !{i64 73580}
!470 = !{i64 73584}
!471 = !{i64 73588}
!472 = !{i64 73484}
!473 = !{i64 73516}
!474 = !{i64 73548}
!475 = !{i64 73600}
!476 = !{i64 73604}
!477 = !{i64 73612}
!478 = !{i64 73616}
!479 = !{i64 73452}
!480 = !{i64 73596}
!481 = !{i64 73620}
!482 = !{i64 73624}
!483 = !{i64 73628}
!484 = !{i64 73632}
!485 = !{i64 73644}
!486 = !{i64 73648}
!487 = !{i64 73652}
!488 = !{i64 73664}
!489 = !{i64 73668}
!490 = !{i64 73672}
!491 = !{i64 73676}
!492 = !{i64 73704}
!493 = !{i64 73724}
!494 = !{i64 73736}
!495 = !{i64 73744}
!496 = !{i64 73780}
!497 = !{i64 73784}
!498 = !{i64 73788}
!499 = !{i64 73812}
!500 = !{i64 73824}
!501 = !{i64 73828}
!502 = !{i64 73832}
!503 = !{i64 73848}
!504 = !{i64 73852}
!505 = !{i64 73872}
!506 = !{i64 73880}
!507 = !{i64 73884}
!508 = !{i64 73860}
!509 = !{i64 73896}
!510 = !{i64 73908}
!511 = !{i64 73924}
!512 = !{i64 73936}
!513 = !{i64 73952}
!514 = !{i64 73956}
!515 = !{i64 73960}
!516 = !{i64 73964}
!517 = !{i64 73968}
!518 = !{i64 73972}
!519 = !{i64 73976}
!520 = !{i64 74012}
!521 = !{i64 74016}
!522 = !{i64 74020}
!523 = !{i64 74024}
!524 = !{i64 74028}
!525 = !{i64 74032}
!526 = !{i64 74060}
!527 = !{i64 74068}
!528 = !{i64 74080}
!529 = !{i64 74084}
!530 = !{i64 74088}
!531 = !{i64 74112}
!532 = !{i64 74128}
!533 = !{i64 74132}
!534 = !{i64 74136}
!535 = !{i64 74148}
!536 = !{i64 74152}
!537 = !{i64 74168}
!538 = !{i64 74176}
!539 = !{i64 74180}
!540 = !{i64 74184}
!541 = !{i64 74204}
!542 = !{i64 74208}
!543 = !{i64 74216}
!544 = !{i64 74220}
!545 = !{i64 74224}
!546 = !{i64 74228}
!547 = !{i64 74244}
!548 = !{i64 74248}
!549 = !{i64 74256}
!550 = !{i64 74260}
!551 = !{i64 74272}
!552 = !{i64 74276}
!553 = !{i64 74280}
!554 = !{i64 74284}
!555 = !{i64 74288}
!556 = !{i64 74296}
!557 = !{i64 74320}
!558 = !{i64 74324}
!559 = !{i64 74328}
!560 = !{i64 74332}
!561 = !{i64 74336}
!562 = !{i64 74340}
!563 = !{i64 74348}
!564 = !{i64 74352}
!565 = !{i64 74356}
!566 = !{i64 74376}
!567 = !{i64 74380}
!568 = !{i64 74384}
!569 = !{i64 74408}
!570 = !{i64 74416}
!571 = !{i64 74420}
!572 = !{i64 74448}
!573 = !{i64 74456}
!574 = !{i64 74468}
!575 = !{i64 74472}
!576 = !{i64 74476}
!577 = !{i64 74504}
!578 = !{i64 74512}
!579 = !{i64 74520}
!580 = !{i64 74524}
!581 = !{i64 74528}
!582 = !{i64 74556}
!583 = !{i64 74560}
!584 = !{i64 74580}
!585 = !{i64 74568}
!586 = !{i64 74584}
!587 = !{i64 74588}
!588 = !{i64 74592}
!589 = !{i64 74600}
!590 = !{i64 74604}
!591 = !{i64 74612}
!592 = !{i64 74640}
!593 = !{i64 74656}
!594 = !{i64 74660}
!595 = !{i64 74664}
!596 = !{i64 74668}
!597 = !{i64 74680}
!598 = !{i64 74700}
!599 = !{i64 74704}
!600 = !{i64 74708}
!601 = !{i64 74728}
!602 = !{i64 74732}
!603 = !{i64 74736}
!604 = !{i64 74744}
!605 = !{i64 74756}
!606 = !{i64 74760}
!607 = !{i64 74768}
!608 = !{i64 74804}
!609 = !{i64 74808}
!610 = !{i64 74828}
!611 = !{i64 74836}
!612 = !{i64 74840}
!613 = !{i64 74860}
!614 = !{i64 74868}
!615 = !{i64 74872}
!616 = !{i64 74876}
!617 = !{i64 74896}
!618 = !{i64 74900}
!619 = !{i64 74904}
!620 = !{i64 74908}
!621 = !{i64 74920}
!622 = !{i64 74912}
!623 = !{i64 74928}
!624 = !{i64 74936}
!625 = !{i64 74948}
!626 = !{i64 74952}
!627 = !{i64 74956}
!628 = !{i64 74960}
!629 = !{i64 74964}
!630 = !{i64 74968}
!631 = !{i64 74980}
!632 = !{i64 74988}
!633 = !{i64 74992}
!634 = !{i64 74996}
!635 = !{i64 75000}
!636 = !{i64 75004}
!637 = !{i64 75008}
!638 = !{i64 75016}
!639 = !{i64 75020}
!640 = !{i64 75024}
!641 = !{i64 75028}
!642 = !{i64 75032}
!643 = !{i64 75040}
!644 = !{i64 75052}
!645 = !{i64 75072}
!646 = !{i64 75088}
!647 = !{i64 75092}
!648 = !{i64 75112}
!649 = !{i64 75128}
!650 = !{i64 75132}
!651 = !{i64 75152}
!652 = !{i64 75168}
!653 = !{i64 75172}
!654 = !{i64 75192}
!655 = !{i64 75208}
!656 = !{i64 75212}
!657 = !{i64 75216}
!658 = !{i64 75248}
!659 = !{i64 75252}
!660 = !{i64 75256}
!661 = !{i64 75264}
!662 = !{i64 75276}
!663 = !{i64 75280}
!664 = !{i64 75288}
!665 = !{i64 75292}
!666 = !{i64 75316}
!667 = !{i64 75320}
!668 = !{i64 75324}
!669 = !{i64 75328}
!670 = !{i64 75332}
!671 = !{i64 75356}
!672 = !{i64 75364}
!673 = !{i64 75368}
!674 = !{i64 75372}
!675 = !{i64 75376}
!676 = !{i64 75380}
!677 = !{i64 75384}
!678 = !{i64 75388}
!679 = !{i64 75444}
!680 = !{i64 75420}
!681 = !{i64 75424}
!682 = !{i64 75428}
!683 = !{i64 75432}
!684 = !{i64 75436}
!685 = !{i64 75440}
!686 = !{i64 75448}
!687 = !{i64 75464}
!688 = !{i64 75480}
!689 = !{i64 75488}
!690 = !{i64 75508}
!691 = !{i64 75540}
!692 = !{i64 75552}
!693 = !{i64 75560}
