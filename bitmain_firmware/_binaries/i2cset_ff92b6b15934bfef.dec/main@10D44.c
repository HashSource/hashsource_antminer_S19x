void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // r2
  int v4; // r5
  int v6; // r1
  int v7; // r9
  int v8; // lr
  int v9; // r8
  int v10; // r7
  int v11; // r4
  const char *i; // r11
  int v13; // r10
  unsigned int v14; // r0
  unsigned int v15; // r10
  char *v16; // r6
  size_t v17; // r0
  unsigned int v18; // r2
  int v19; // r2
  int v20; // r6
  const char *v21; // r0
  size_t v22; // r0
  int v23; // r4
  int v24; // r0
  int v25; // r4
  int v26; // r0
  _BOOL4 v27; // r3
  const char *v28; // r0
  size_t v29; // r0
  unsigned int v30; // r1
  int v31; // r0
  char *v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r5
  int byte; // r0
  int v37; // r12
  size_t v38; // r0
  int v39; // r0
  int v40; // r2
  size_t v41; // r0
  size_t v42; // r0
  _BOOL4 v43; // r2
  bool v44; // zf
  const char **v45; // r4
  const char *v46; // t1
  int v47; // r0
  int v48; // r3
  int v49; // r0
  int word_data; // r7
  int v51; // r3
  int v52; // r1
  FILE *v53; // r4
  int *v54; // r0
  char *v55; // r0
  FILE *v56; // r4
  int *v57; // r0
  char *v58; // r0
  bool v59; // zf
  char *v60; // r2
  char *v61; // r3
  const char *v62; // r2
  int v63; // r5
  const char *j; // r4
  int v65; // r2
  const char *v66; // r2
  FILE *v67; // r4
  int *v68; // r0
  char *v69; // r0
  int status; // [sp+18h] [bp-5Ch]
  int statusa; // [sp+18h] [bp-5Ch]
  int v72; // [sp+1Ch] [bp-58h]
  int v73; // [sp+1Ch] [bp-58h]
  char **v74; // [sp+20h] [bp-54h]
  int v75; // [sp+20h] [bp-54h]
  const char **v76; // [sp+24h] [bp-50h]
  int v77; // [sp+28h] [bp-4Ch]
  int v78; // [sp+2Ch] [bp-48h]
  int v79; // [sp+2Ch] [bp-48h]
  char *endptr; // [sp+34h] [bp-40h] BYREF
  int v81; // [sp+38h] [bp-3Ch] BYREF
  char s[20]; // [sp+3Ch] [bp-38h] BYREF
  unsigned __int8 v83[36]; // [sp+50h] [bp-24h] BYREF

  if ( a1 > 1 )
  {
    v3 = a2[1];
    v4 = a1;
    if ( *v3 == 45 )
    {
      v6 = 0;
      a1 = 1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      i = 0;
      do
      {
        switch ( v3[1] )
        {
          case 'V':
            a1 = v11;
            v8 = 1;
            break;
          case 'a':
            a1 = v11;
            v6 = 1;
            break;
          case 'f':
            a1 = v11;
            v10 = 1;
            break;
          case 'm':
            v23 = v11 + 2;
            if ( v23 < v4 )
              i = a2[v23];
            break;
          case 'r':
            a1 = v11;
            v7 = 1;
            break;
          case 'y':
            a1 = v11;
            v9 = 1;
            break;
          default:
            v24 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v3);
            sub_11B8C(v24);
        }
        v11 = a1 + 1;
        a1 += 2;
        if ( a1 >= v4 )
          break;
        v3 = a2[a1];
      }
      while ( *v3 == 45 );
      if ( v8 )
      {
        fprintf((FILE *)stderr, "i2cset version %s\n", "4.1");
        exit(0);
      }
    }
    else
    {
      i = 0;
      v11 = 0;
      v10 = 0;
      v6 = 0;
      v9 = 0;
      v7 = 0;
    }
    if ( v11 + 3 < v4 )
    {
      status = v6;
      v13 = v11 + 1;
      a1 = sub_1247C(a2[v13]);
      v72 = a1;
      if ( a1 >= 0 )
      {
        v74 = &a2[v13];
        a1 = sub_11CA8(a2[v13 + 1], status);
        statusa = a1;
        if ( a1 >= 0 )
        {
          v76 = (const char **)&a2[v13 + 2];
          v14 = strtol(*v76, &endptr, 0);
          v15 = v14;
          if ( !*endptr && v14 <= 0xFF )
          {
            if ( v11 + 4 == v4 )
            {
              v20 = 1;
              v25 = -1;
              v77 = (unsigned __int8)*endptr;
              goto LABEL_42;
            }
            v78 = v11 + 5;
            if ( v11 + 5 == v4 )
            {
              v32 = v74[3];
              if ( *v32 == 99 )
              {
                v33 = (unsigned __int8)v32[1];
                if ( !v32[1] || v33 == 112 && !v32[2] )
                {
                  v20 = 1;
                  v25 = -1;
                  v77 = v33 == 112;
                  goto LABEL_42;
                }
                v20 = 2;
                v77 = 0;
              }
              else
              {
                v20 = 2;
                v77 = (unsigned __int8)*endptr;
              }
LABEL_93:
              v39 = strtol(v74[3], &endptr, 0);
              v25 = v39;
              if ( *endptr )
                v40 = 1;
              else
                v40 = (unsigned int)v39 >> 31;
              if ( v40 )
              {
LABEL_97:
                v21 = "Error: Data value invalid!\n";
LABEL_28:
                v22 = fwrite(v21, 1u, 0x1Bu, (FILE *)stderr);
                sub_11B8C(v22);
              }
              v43 = v20 == 2;
              if ( v39 <= 255 )
                v43 = 0;
              if ( v43 )
                goto LABEL_119;
              v44 = v39 == 0x10000;
              if ( v39 >= 0x10000 )
                v44 = v20 == 3;
              if ( v44 )
              {
LABEL_119:
                v28 = "Error: Data value out of range!\n";
LABEL_47:
                v29 = fwrite(v28, 1u, 0x20u, (FILE *)stderr);
                sub_11B8C(v29);
              }
LABEL_42:
              if ( !i )
              {
                v75 = (int)i;
                goto LABEL_58;
              }
              v26 = strtol(i, &endptr, 0);
              v27 = v26 == 0;
              v75 = v26;
              if ( *endptr )
                v27 = 1;
              if ( v27 )
              {
                v28 = "Error: Data value mask invalid!\n";
                goto LABEL_47;
              }
              if ( v20 == 3 )
              {
                if ( v26 >= 0x10000 )
                  goto LABEL_91;
              }
              else if ( v26 > 255 )
              {
LABEL_91:
                v38 = fwrite("Error: Data value mask out of range!\n", 1u, 0x25u, (FILE *)stderr);
                sub_11B8C(v38);
              }
              i = 0;
              goto LABEL_58;
            }
            v16 = (&a2[v4])[-1];
            v17 = strlen(v16);
            if ( v17 > 2 )
              goto LABEL_53;
            if ( v17 == 2 )
            {
              v19 = (unsigned __int8)v16[1];
              if ( v19 != 112 )
                goto LABEL_53;
              v30 = (unsigned __int8)*v16;
              if ( v30 != 105 )
              {
                if ( v30 > 0x69 )
                {
                  if ( v30 == 115 )
                    goto LABEL_107;
                  if ( v30 == 119 )
                    goto LABEL_25;
                  goto LABEL_53;
                }
                if ( v30 != 98 )
                  goto LABEL_53;
LABEL_101:
                v20 = 2;
                v77 = v19 == 112;
LABEL_26:
                if ( v11 + 6 != v4 )
                {
LABEL_27:
                  v21 = "Error: Too many arguments!\n";
                  goto LABEL_28;
                }
                goto LABEL_93;
              }
            }
            else
            {
              v18 = (unsigned __int8)*v16;
              if ( v18 != 105 )
              {
                if ( v18 > 0x69 )
                {
                  if ( v18 == 115 )
                  {
                    v19 = (unsigned __int8)v16[1];
LABEL_107:
                    v20 = 5;
                    v77 = v19 == 112;
                    goto LABEL_108;
                  }
                  if ( v18 == 119 )
                  {
                    v19 = (unsigned __int8)v16[1];
LABEL_25:
                    v20 = 3;
                    v77 = v19 == 112;
                    goto LABEL_26;
                  }
LABEL_53:
                  v31 = fprintf((FILE *)stderr, "Error: Invalid mode '%s'!\n", v16);
                  sub_11B8C(v31);
                }
                if ( v18 != 98 )
                  goto LABEL_53;
                v19 = (unsigned __int8)v16[1];
                goto LABEL_101;
              }
              if ( v16[1] != 112 )
              {
                v20 = 8;
                v77 = 0;
LABEL_108:
                if ( i )
                {
                  v41 = fwrite("Error: Mask not supported for block writes!\n", 1u, 0x2Cu, (FILE *)stderr);
                  sub_11B8C(v41);
                }
                if ( v11 + 37 >= v4 )
                {
                  v45 = v76;
                  for ( i = 0; (int)&i[v78] < v4; ++i )
                  {
                    v46 = v45[1];
                    ++v45;
                    v47 = strtol(v46, &endptr, 0);
                    if ( *endptr )
                      v48 = 1;
                    else
                      v48 = (unsigned int)v47 >> 31;
                    if ( v48 )
                      goto LABEL_97;
                    if ( v47 > 255 )
                      goto LABEL_119;
                    v83[(_DWORD)i] = v47;
                  }
                  v25 = -1;
                  v75 = 0;
LABEL_58:
                  v34 = sub_11D60(v72, s, 0x14u);
                  v35 = v34;
                  if ( v34 >= 0 )
                  {
                    if ( ioctl(v34, 0x705u, &v81) < 0 )
                    {
                      v67 = (FILE *)stderr;
                      v68 = _errno_location();
                      v69 = strerror(*v68);
                      fprintf(v67, "Error: Could not get the adapter functionality matrix: %s\n", v69);
                    }
                    else
                    {
                      switch ( v20 )
                      {
                        case 1:
                          if ( (v81 & 0x40000) != 0 )
                            goto LABEL_61;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                          break;
                        case 2:
                          if ( (v81 & 0x100000) != 0 )
                            goto LABEL_61;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write byte");
                          break;
                        case 3:
                          if ( (v81 & 0x400000) != 0 )
                            goto LABEL_61;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus write word");
                          break;
                        case 5:
                          if ( (v81 & 0x2000000) != 0 )
                            goto LABEL_61;
                          fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus block write");
                          break;
                        case 8:
                          if ( (v81 & 0x8000000) != 0 )
                          {
LABEL_61:
                            if ( v77 && (v81 & 9) == 0 )
                              fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
                            if ( !sub_125D0(v35, statusa, v10) )
                            {
                              if ( !v9 )
                              {
                                fwrite(
                                  "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                                  1u,
                                  0x4Bu,
                                  (FILE *)stderr);
                                if ( (unsigned int)(statusa - 80) <= 7 )
                                {
                                  v73 = 1;
                                  fwrite(
                                    "DANGEROUS! Writing to a serial EEPROM on a memory DIMM\n"
                                    "may render your memory USELESS and make your system UNBOOTABLE!\n",
                                    1u,
                                    0x77u,
                                    (FILE *)stderr);
                                }
                                else
                                {
                                  v73 = 0;
                                }
                                fprintf(
                                  (FILE *)stderr,
                                  "I will write to device file %s, chip address 0x%02x, data address\n0x%02x, ",
                                  s,
                                  statusa,
                                  v15);
                                if ( v20 == 1 )
                                {
                                  fwrite("no data.\n", 1u, 9u, (FILE *)stderr);
                                }
                                else
                                {
                                  v59 = v20 == 8;
                                  if ( v20 != 8 )
                                    v59 = v20 == 5;
                                  if ( v59 )
                                  {
                                    fwrite("data", 1u, 4u, (FILE *)stderr);
                                    v79 = v35;
                                    v63 = v25;
                                    for ( j = 0; j != i; ++j )
                                    {
                                      v65 = v83[(_DWORD)j];
                                      fprintf((FILE *)stderr, " 0x%02x", v65);
                                    }
                                    v66 = "smbus block";
                                    if ( v20 != 5 )
                                      v66 = "i2c block";
                                    v25 = v63;
                                    v35 = v79;
                                    fprintf((FILE *)stderr, ", mode %s.\n", v66);
                                  }
                                  else
                                  {
                                    v60 = "word";
                                    if ( v20 == 2 )
                                      v60 = "byte";
                                    if ( v75 )
                                      v61 = " (masked)";
                                    else
                                      v61 = "";
                                    fprintf((FILE *)stderr, "data 0x%02x%s, mode %s.\n", v25, v61, v60);
                                  }
                                }
                                if ( v77 )
                                  fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
                                v62 = "Y/n";
                                if ( v73 )
                                  v62 = "y/N";
                                fprintf((FILE *)stderr, "Continue? [%s] ", v62);
                                fflush((FILE *)stderr);
                                if ( !sub_12644(v73 ^ 1) )
                                {
                                  fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                  exit(0);
                                }
                              }
                              if ( v75 )
                              {
                                if ( v20 == 1 )
                                {
                                  byte = i2c_smbus_read_byte(v35);
                                }
                                else if ( v20 == 3 )
                                {
                                  byte = i2c_smbus_read_word_data(v35, (unsigned __int8)v15);
                                }
                                else
                                {
                                  byte = i2c_smbus_read_byte_data(v35, (unsigned __int8)v15);
                                }
                                if ( byte < 0 )
                                {
                                  fwrite("Error: Failed to read old value\n", 1u, 0x20u, (FILE *)stderr);
                                  exit(1);
                                }
                                v25 = (v25 ^ byte) & v75 ^ byte;
                                if ( !v9 )
                                {
                                  v37 = v20 == 3 ? 4 : 2;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\n",
                                    v37,
                                    byte,
                                    v37,
                                    v75,
                                    v37,
                                    v25,
                                    v15);
                                  fwrite("Continue? [Y/n] ", 1u, 0x10u, (FILE *)stderr);
                                  fflush((FILE *)stderr);
                                  if ( !sub_12644(1) )
                                  {
                                    fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                    exit(0);
                                  }
                                }
                              }
                              if ( v77 && ioctl(v35, 0x708u, 1) < 0 )
                              {
                                v56 = (FILE *)stderr;
                                v57 = _errno_location();
                                v58 = strerror(*v57);
                                fprintf(v56, "Error: Could not set PEC: %s\n", v58);
                              }
                              else
                              {
                                switch ( v20 )
                                {
                                  case 1:
                                    v49 = i2c_smbus_write_byte(v35, (unsigned __int8)v15);
                                    break;
                                  case 3:
                                    v49 = i2c_smbus_write_word_data(v35, (unsigned __int8)v15, (unsigned __int16)v25);
                                    break;
                                  case 5:
                                    v49 = i2c_smbus_write_block_data(v35, (unsigned __int8)v15, (unsigned __int8)i, v83);
                                    break;
                                  case 8:
                                    v49 = i2c_smbus_write_i2c_block_data(
                                            v35,
                                            (unsigned __int8)v15,
                                            (unsigned __int8)i,
                                            v83);
                                    break;
                                  default:
                                    v49 = i2c_smbus_write_byte_data(v35, (unsigned __int8)v15, (unsigned __int8)v25);
                                    break;
                                }
                                if ( v49 < 0 )
                                {
                                  fwrite("Error: Write failed\n", 1u, 0x14u, (FILE *)stderr);
                                  close(v35);
                                  exit(1);
                                }
                                if ( !v77 || ioctl(v35, 0x708u, 0) >= 0 )
                                {
                                  if ( v7 )
                                  {
                                    if ( v20 == 1 )
                                    {
                                      v25 = v15;
                                      word_data = i2c_smbus_read_byte(v35);
                                    }
                                    else if ( v20 == 3 )
                                    {
                                      word_data = i2c_smbus_read_word_data(v35, (unsigned __int8)v15);
                                    }
                                    else
                                    {
                                      word_data = i2c_smbus_read_byte_data(v35, (unsigned __int8)v15);
                                    }
                                    close(v35);
                                    if ( word_data < 0 )
                                    {
                                      puts("Warning - readback failed");
                                    }
                                    else if ( word_data == v25 )
                                    {
                                      if ( v20 == 3 )
                                        v52 = 4;
                                      else
                                        v52 = 2;
                                      printf("Value 0x%0*x written, readback matched\n", v52, word_data);
                                    }
                                    else
                                    {
                                      if ( v20 == 3 )
                                        v51 = 4;
                                      else
                                        v51 = 2;
                                      printf("Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\n", v51, v25);
                                    }
                                    exit(0);
                                  }
                                  close(v35);
                                  exit(0);
                                }
                                v53 = (FILE *)stderr;
                                v54 = _errno_location();
                                v55 = strerror(*v54);
                                fprintf(v53, "Error: Could not clear PEC: %s\n", v55);
                              }
                              close(v35);
                            }
                          }
                          else
                          {
                            fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "I2C block write");
                          }
                          break;
                      }
                    }
                  }
                  exit(1);
                }
                goto LABEL_27;
              }
            }
            v42 = fwrite("Error: PEC not supported for I2C block writes!\n", 1u, 0x2Fu, (FILE *)stderr);
            sub_11B8C(v42);
          }
          a1 = fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
        }
      }
    }
  }
  sub_11B8C(a1);
}
