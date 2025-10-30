// Decompiled: eeprog_53253b687e108061

void _DT_INIT(void)

{
    FUN_00010d88();
    return;
}

undefined4 FUN_00010920(int param_1, char **param_2)

{
    int iVar1;
    size_t sVar2;
    char *__nptr;
    ulong uVar3;
    undefined4 uVar4;
    int extraout_r3;
    char *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    undefined4 in_stack_ffffff40;
    undefined1 auStack_bc[8];
    int local_b4;
    int local_b0;
    char *local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined1 auStack_a0[16];
    stat64 sStack_90;

    iVar6 = 0;
    iVar8 = 0;
    DAT_000230a8 = 0;
    local_ac = (char *)0x0;
    local_b4 = 0;
    local_b0 = 0;
    iVar7 = 0;
    while (iVar1 = getopt(param_1, param_2, "1:8fr:qhw:xd"), iVar1 != -1) {
        if (iVar1 == 0x66) {
            local_b4 = local_b4 + 1;
        } else if (iVar1 < 0x67) {
            if (iVar1 == 0x38) {
                if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00010e48("EEPROM type switch (-8 or -16) used twice",
                                 0xc1);
                }
                iVar6 = 1;
            } else if (iVar1 == 100) {
                iVar8 = iVar8 + 1;
            } else if (iVar1 == 0x31) {
                if ((*optarg != '6') || (sVar2 = strlen(optarg), sVar2 != 1)) {
                    FUN_00010e18(0xb6);
                    goto LAB_00010d10;
                }
                if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00010e48("EEPROM type switch (-8 or -16) used twice",
                                 0xb7);
                }
                iVar6 = 2;
            } else {
            LAB_000109a4:
                if (iVar7 != 0) {
                LAB_00010d10:
                    /* WARNING: Subroutine does not return */
                    FUN_00010e48("Both read and write requested", 0xce);
                }
                local_ac = optarg;
                iVar7 = iVar1;
            }
        } else if (iVar1 == 0x71) {
            DAT_000230a8 = DAT_000230a8 + 1;
        } else {
            if (iVar1 != 0x78) {
                if (iVar1 != 0x68)
                    goto LAB_000109a4;
                FUN_00010e18(0xcb);
                break;
            }
            local_b0 = local_b0 + 1;
        }
    }
    if (iVar6 == 0) {
        iVar6 = 1;
    }
    if (iVar7 == 0) {
        FUN_00010e18(0xd6);
        goto LAB_00010d38;
    }
    if (param_1 - optind == 1) {
        iVar1 = __xstat64(3, param_2[optind], &sStack_90);
        if (iVar1 == -1) {
            pcVar5 = getenv("EEPROG_DEV");
            __nptr = param_2[optind];
        } else {
            pcVar5 = param_2[optind];
            __nptr = getenv("EEPROG_I2C_ADDR");
        }
    } else {
        if (param_1 - optind != 2) {
            if (param_1 == optind) {
                pcVar5 = getenv("EEPROG_DEV");
                __nptr = getenv("EEPROG_I2C_ADDR");
                goto LAB_00010aa4;
            }
            FUN_00010e18(0xee);
            optind = extraout_r3;
        }
        pcVar5 = param_2[optind];
        __nptr = param_2[optind + 1];
        optind = optind + 1;
    }
LAB_00010aa4:
    if (pcVar5 == (char *)0x0 || __nptr == (char *)0x0) {
    LAB_00010d50:
        uVar4 = FUN_00010e18(0xf0);
        __libc_start_main(FUN_00010920, in_stack_ffffff40, auStack_bc, 0x11511,
                          &DAT_0001154d, uVar4, auStack_bc);
        /* WARNING: Subroutine does not return */
        abort();
    }
    uVar3 = strtoul(__nptr, (char **)0x0, 0);
    if (((DAT_000230a8 == 0) &&
         (fprintf(stderr, "eeprog %s, a 24Cxx EEPROM reader/writer\n", "0.7.5"),
          DAT_000230a8 == 0)) &&
        (fwrite(
             "Copyright (c) 2003 by Stefano Barbato - All rights reserved.\n",
             1, 0x3d, stderr),
         DAT_000230a8 == 0)) {
        if (iVar6 == 1) {
            in_stack_ffffff40 = 8;
        } else {
            in_stack_ffffff40 = 0x10;
        }
        fprintf(stderr, "  Bus: %s, Address: 0x%x, Mode: %dbit\n", pcVar5,
                uVar3);
    }
    if (iVar8 == 0) {
        iVar6 = FUN_00011190(pcVar5, uVar3, iVar6, auStack_a0);
        if (iVar6 < 0) {
        LAB_00010d38:
            /* WARNING: Subroutine does not return */
            FUN_00010e48("unable to open eeprom device file (check that the "
                         "file exists and that it\'s readable)",
                         0xfe);
        }
        if (iVar7 == 0x72) {
            if (local_b4 == 0) {
                FUN_00010efc();
            }
            local_a4 = 1;
            FUN_00010ea0(local_ac, &local_a8);
            if (DAT_000230a8 == 0) {
                fprintf(stderr, "  Reading %d bytes from 0x%x\n", local_a4,
                        local_a8);
            }
            FUN_00010f38(auStack_a0, local_a8, local_a4, local_b0);
        } else {
            if (iVar7 != 0x77) {
                FUN_00010e18(0x112);
                goto LAB_00010d50;
            }
            if (local_b4 == 0) {
                FUN_00010efc();
            }
            FUN_00010ea0(local_ac, &local_a8, &local_a4);
            if (DAT_000230a8 == 0) {
                fprintf(stderr, "  Writing stdin starting at address 0x%x\n",
                        local_a8);
            }
            FUN_00011074(auStack_a0, local_a8);
        }
        FUN_00011314(auStack_a0);
    } else {
        fwrite("Dummy mode selected, nothing done.\n", 1, 0x23, stderr);
    }
    return 0;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010920, in_stack_00000000, &stack0x00000004,
                      0x11511, &DAT_0001154d, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010d9c) */

void FUN_00010d88(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010dc0) */
/* WARNING: Removing unreachable block (ram,0x00010dca) */

void FUN_00010dac(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010dec) */
/* WARNING: Removing unreachable block (ram,0x00010df6) */

void FUN_00010dd0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000230a4 == '\0') {
        FUN_00010dac();
        DAT_000230a4 = '\x01';
    }
    return;
}

void FUN_00010e18(undefined4 param_1)

{
    fprintf(
        stderr, "%s\n[line %d]\n",
        "eeprog 0.7.5, a 24Cxx EEPROM reader/writer\nCopyright (c) 2003 by "
        "Stefano Barbato - All rights reserved.\nUsage: eeprog [-fqxdh] "
        "[-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\n\n  "
        "Address modes:\n\t-8\t\tUse 8bit address mode for 24c0x...24C16 "
        "[default]\n\t-16\t\tUse 16bit address mode for 24c32...24C256\n  "
        "Actions:\n\t-r addr[:count]\tRead [count] (1 if omitted) bytes from "
        "[addr]\n\t\t\tand print them to the standard output\n\t-w "
        "addr\t\tWrite input (stdin) at address [addr] of the "
        "EEPROM\n\t-h\t\tPrint this help\n  Options:\n\t-x\t\tSet hex output "
        "mode\n\t-d\t\tDummy mode, display what *would* have been "
        "done\n\t-f\t\tDisable warnings and don\'t ask "
        "confirmation\n\t-q\t\tQuiet mode\n\nThe following environment "
        "variables could be set instead of the command\nline "
        "arguments:\n\tEEPROG_DEV\t\tdevice "
        "name(/dev/"
        "i2c-N)\n\tEEPROG_I2C_ADDR\t\ti2c-address\n\n\tExamples\n\t1- read 64 "
        "bytes from the EEPROM at address 0x54 on bus 0 starting\n\t   at "
        "address 123 (decimal)\n\t\teeprog /dev/i2c-0 0x54 -r 123:64\n\t2- "
        "prints the hex codes of the first 32 bytes read from bus 1\n\t   at "
        "address 0x22\n\t\teeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\n\t3- write "
        "the current timestamp at address 0x200 of the EEPROM on\n\t   bus 0 "
        "at address 0x33\n\t\tdate | eeprog /dev/i2c-0 0x33 -w 0x200\n",
        param_1);
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00010e48(undefined4 param_1, undefined4 param_2)

{
    fprintf(stderr, "Error at line %d: %s\n", param_2, param_1);
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00010ea0(char *param_1, ulong *param_2, ulong *param_3)

{
    ulong uVar1;
    char *local_14[2];

    uVar1 = strtoul(param_1, local_14, 0);
    *param_2 = uVar1;
    if (*local_14[0] != ':') {
        return;
    }
    local_14[0] = local_14[0] + 1;
    uVar1 = strtoul(local_14[0], (char **)0x0, 0);
    *param_3 = uVar1;
    return;
}

undefined4 FUN_00010efc(void)

{
    fwrite("\n____________________________WARNING____________________________"
           "\nErroneously writing to a system EEPROM (like DIMM SPD "
           "modules)\ncan break your system.  It will NOT boot anymore so "
           "you\'ll not\nbe able to fix it.\n\nReading from 8bit EEPROMs (like "
           "that in your DIMM) without using\nthe -8 switch can also "
           "UNEXPECTEDLY write to them, so be sure to\nuse the -8 command "
           "param when required.\n\nUse -f to disable this warning "
           "message\n\nPress ENTER to continue or hit CTRL-C to exit\n\n",
           1, 0x1d5, stderr);
    _IO_getc(stdin);
    return 1;
}

undefined4 FUN_00010f38(undefined4 param_1, uint param_2, int param_3,
                        int param_4)

{
    int iVar1;
    uint uVar2;

    iVar1 = FUN_00011360(param_1, param_2 & 0xffff);
    if (iVar1 < 0) {
        /* WARNING: Subroutine does not return */
        FUN_00010e48("read error", 0x7d);
    }
    if (param_4 == 0) {
        _IO_putc(iVar1, stdout);
    } else {
        printf("\n %.4x|  %.2x ", param_2);
    }
    uVar2 = 1;
    while (param_3 = param_3 + -1, param_3 != 0) {
        while (true) {
            iVar1 = FUN_00011340(param_1);
            if (iVar1 < 0) {
                /* WARNING: Subroutine does not return */
                FUN_00010e48("read error", 0x85);
            }
            if (param_4 == 0)
                break;
            param_2 = param_2 + 1;
            if ((uVar2 & 0xf) == 0) {
                printf("\n %.4x|  ", param_2);
            } else if ((uVar2 & 7) == 0) {
                printf("  ");
            }
            printf("%.2x ", iVar1);
            param_3 = param_3 + -1;
            uVar2 = uVar2 + 1;
            if (param_3 == 0)
                goto LAB_00010fe4;
        }
        _IO_putc(iVar1, stdout);
    }
LAB_00010fe4:
    if (param_4 != 0) {
        puts("\n");
    }
    fflush(stdout);
    return 0;
}

undefined4 FUN_00011074(undefined4 param_1, short param_2)

{
    int iVar1;
    uint uVar2;

    do {
        uVar2 = _IO_getc(stdin);
        if (uVar2 == 0xffffffff) {
            if (DAT_000230a8 == 0) {
                fwrite("\n\n", 1, 2, stderr);
            }
            return 0;
        }
        if (DAT_000230a8 == 0) {
            fputc(0x2e, stderr);
        }
        fflush(stdout);
        iVar1 = FUN_00011444(param_1, param_2, uVar2 & 0xff);
        param_2 = param_2 + 1;
    } while (iVar1 == 0);
    /* WARNING: Subroutine does not return */
    FUN_00010e48("write error", 0xa0);
}

int FUN_00011138(undefined4 param_1, undefined1 *param_2)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;

    iVar1 = i2c_smbus_write_byte_data(param_1, *param_2, param_2[1]);
    __stream = stderr;
    if (iVar1 < 0) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(__stream, "Error i2c_write_2b: %s\n", pcVar3);
    }
    usleep(5000);
    return iVar1;
}

int FUN_00011190(char *param_1, undefined4 param_2, undefined4 param_3,
                 undefined4 *param_4)

{
    int __fd;
    int iVar1;
    char *pcVar2;
    uint local_24[2];

    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    __fd = open64(param_1, 2);
    if (__fd < 1) {
        iVar1 = -1;
    } else {
        iVar1 = ioctl(__fd, 0x705, local_24);
        if (-1 < iVar1) {
            if ((local_24[0] & 0x20000) == 0) {
                fwrite("\nError: I2C_FUNC_SMBUS_READ_BYTE function is "
                       "required. Program halted.\n\n",
                       1, 0x48, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x40000) == 0) {
                fwrite("\nError: I2C_FUNC_SMBUS_WRITE_BYTE function is "
                       "required. Program halted.\n\n",
                       1, 0x49, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x80000) == 0) {
                pcVar2 = "\nError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is "
                         "required. Program halted.\n\n";
            LAB_0001125c:
                fwrite(pcVar2, 1, 0x4d, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x100000) == 0) {
                pcVar2 = "\nError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is "
                         "required. Program halted.\n\n";
            } else {
                if ((local_24[0] & 0x200000) == 0) {
                    pcVar2 = "\nError: I2C_FUNC_SMBUS_READ_WORD_DATA function "
                             "is required. Program halted.\n\n";
                    goto LAB_0001125c;
                }
                if ((local_24[0] & 0x400000) != 0) {
                    iVar1 = ioctl(__fd, 0x703, param_2);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    param_4[2] = __fd;
                    param_4[1] = param_2;
                    *param_4 = param_1;
                    param_4[3] = param_3;
                    return 0;
                }
                pcVar2 = "\nError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is "
                         "required. Program halted.\n\n";
            }
            fwrite(pcVar2, 1, 0x4e, stderr);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    return iVar1;
}

undefined4 FUN_00011314(undefined4 *param_1)

{
    close(param_1[2]);
    param_1[2] = 0xffffffff;
    *param_1 = 0;
    param_1[3] = 0;
    return 0;
}

void FUN_00011340(int param_1)

{
    ioctl(*(int *)(param_1 + 8), 0x1261);
    i2c_smbus_read_byte(*(undefined4 *)(param_1 + 8));
    return;
}

int FUN_00011360(int param_1, uint param_2)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    undefined1 local_14;
    undefined1 local_13;

    ioctl(*(int *)(param_1 + 8), 0x1261);
    if (*(int *)(param_1 + 0xc) == 1) {
        iVar1 =
            i2c_smbus_write_byte(*(undefined4 *)(param_1 + 8), param_2 & 0xff);
        __stream = stderr;
        if (iVar1 < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            fprintf(__stream, "Error i2c_write_1b: %s\n", pcVar3);
        }
        usleep(5000);
    } else {
        if (*(int *)(param_1 + 0xc) != 2) {
            fwrite("ERR: unknown eeprom type\n", 1, 0x19, stderr);
            return -1;
        }
        local_13 = (undefined1)param_2;
        local_14 = (undefined1)(param_2 >> 8);
        iVar1 = FUN_00011138(*(undefined4 *)(param_1 + 8), &local_14);
    }
    if (-1 < iVar1) {
        iVar1 = i2c_smbus_read_byte(*(undefined4 *)(param_1 + 8));
    }
    return iVar1;
}

int FUN_00011444(int param_1, uint param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    undefined1 local_14;
    undefined1 local_13;

    if (*(int *)(param_1 + 0xc) != 1) {
        if (*(int *)(param_1 + 0xc) == 2) {
            iVar1 = i2c_smbus_write_word_data(*(undefined4 *)(param_1 + 8),
                                              param_2 >> 8,
                                              param_2 & 0xff | param_3 << 8);
            __stream = stderr;
            if (iVar1 < 0) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                fprintf(__stream, "Error i2c_write_3b: %s\n", pcVar3);
            }
            usleep(5000);
        } else {
            iVar1 = -1;
            fwrite("ERR: unknown eeprom type\n", 1, 0x19, stderr);
        }
        return iVar1;
    }
    local_14 = (undefined1)param_2;
    local_13 = (undefined1)param_3;
    iVar1 = FUN_00011138(*(undefined4 *)(param_1 + 8), &local_14);
    return iVar1;
}

void FUN_00011510(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _DT_INIT();
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void _DT_FINI(void)

{
    return;
}
