void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r5
  char *v4; // r2
  int v6; // r1
  int v7; // r8
  int v8; // lr
  int v9; // r7
  int v10; // r9
  int v11; // r4
  const char *v12; // r11
  int v13; // r10
  char **v14; // r10
  unsigned int v15; // r0
  char *v16; // r6
  size_t v17; // r0
  unsigned int v18; // r2
  int v19; // r2
  int v20; // r6
  int v21; // r0
  int v22; // r2
  int v23; // r10
  _BOOL4 v24; // r2
  bool v25; // zf
  const char *v26; // r0
  size_t v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r4
  int v32; // r3
  size_t v33; // r0
  unsigned int v34; // r1
  int v35; // r0
  char *v36; // r1
  const char *v37; // r0
  size_t v38; // r0
  _BOOL4 v39; // r2
  size_t v40; // r0
  size_t v41; // r0
  int i; // r4
  int v43; // r0
  int v44; // r5
  FILE *v45; // r4
  int *v46; // r0
  char *v47; // r0
  int byte; // r0
  int v49; // r12
  const char *v50; // t1
  int v51; // r0
  int v52; // r3
  bool v53; // zf
  char *v54; // r2
  char *v55; // r3
  const char *v56; // r2
  int v57; // r6
  int v58; // r5
  int j; // r4
  int v60; // r2
  int v61; // r0
  int word_data; // r4
  int v63; // r3
  int v64; // r1
  FILE *v65; // r4
  int *v66; // r0
  char *v67; // r0
  FILE *v68; // r4
  int *v69; // r0
  char *v70; // r0
  const char *v71; // r2
  int v72; // [sp+1Ch] [bp-60h]
  unsigned int v73; // [sp+1Ch] [bp-60h]
  int v74; // [sp+20h] [bp-5Ch]
  int v75; // [sp+20h] [bp-5Ch]
  int v76; // [sp+24h] [bp-58h]
  _BOOL4 v77; // [sp+24h] [bp-58h]
  char **v78; // [sp+28h] [bp-54h]
  _BOOL4 v79; // [sp+2Ch] [bp-50h]
  int v80; // [sp+30h] [bp-4Ch]
  int v81; // [sp+30h] [bp-4Ch]
  int v82; // [sp+34h] [bp-48h]
  char *endptr; // [sp+3Ch] [bp-40h] BYREF
  int v84; // [sp+40h] [bp-3Ch] BYREF
  char s[20]; // [sp+44h] [bp-38h] BYREF
  _BYTE v86[36]; // [sp+58h] [bp-24h] BYREF

  v3 = a1;
  if ( a1 > 1 )
  {
    v4 = a2[1];
    v6 = 0;
    if ( *v4 == 45 )
    {
      a1 = 1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        switch ( v4[1] )
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
            v28 = v11 + 2;
            if ( v3 > v28 )
              v12 = a2[v28];
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
            v29 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v4);
            sub_11BC8(v29);
        }
        v11 = a1 + 1;
        a1 += 2;
        if ( a1 >= v3 )
          break;
        v4 = a2[a1];
      }
      while ( *v4 == 45 );
      if ( v8 )
      {
        fprintf((FILE *)stderr, "i2cset version %s\n", "4.1");
        exit(0);
      }
    }
    else
    {
      v7 = 0;
      v11 = 0;
      v9 = 0;
      v10 = 0;
      v12 = 0;
    }
    if ( v3 > v11 + 3 )
    {
      v72 = v6;
      v13 = v11 + 1;
      a1 = sub_12468(a2[v13]);
      v74 = a1;
      if ( a1 >= 0 )
      {
        v78 = &a2[v13];
        a1 = sub_11CD0(a2[v13 + 1], v72);
        v76 = a1;
        if ( a1 >= 0 )
        {
          v14 = &a2[v13 + 2];
          v15 = strtol(*v14, &endptr, 0);
          v73 = v15;
          if ( !*endptr && v15 <= 0xFF )
          {
            if ( v11 + 4 == v3 )
            {
              v79 = 0;
            }
            else
            {
              v80 = v11 + 5;
              if ( v11 + 5 != v3 )
              {
                v16 = (&a2[v3])[-1];
                v17 = strlen(v16);
                if ( v17 > 2 )
                  goto LABEL_68;
                if ( v17 == 2 )
                {
                  v19 = (unsigned __int8)v16[1];
                  if ( v19 != 112 )
                    goto LABEL_68;
                  v34 = (unsigned __int8)*v16;
                  if ( v34 != 105 )
                  {
                    if ( v34 > 0x69 )
                    {
                      if ( v34 == 115 )
                        goto LABEL_86;
                      if ( v34 == 119 )
                      {
LABEL_25:
                        if ( v11 + 6 == v3 )
                        {
                          v20 = 3;
                          v79 = v19 == 112;
                          goto LABEL_27;
                        }
LABEL_89:
                        v37 = "Error: Too many arguments!\n";
LABEL_75:
                        v38 = fwrite(v37, 1u, 0x1Bu, (FILE *)stderr);
                        sub_11BC8(v38);
                      }
LABEL_68:
                      v35 = fprintf((FILE *)stderr, "Error: Invalid mode '%s'!\n", v16);
                      sub_11BC8(v35);
                    }
                    if ( v34 != 98 )
                      goto LABEL_68;
                    goto LABEL_80;
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
LABEL_86:
                        v20 = 5;
                        v39 = v19 == 112;
LABEL_87:
                        if ( v12 )
                        {
                          v41 = fwrite("Error: Mask not supported for block writes!\n", 1u, 0x2Cu, (FILE *)stderr);
                          sub_11BC8(v41);
                        }
                        if ( v3 <= v11 + 37 )
                        {
                          v79 = v39;
                          for ( i = 0; v3 > v80 + i; ++i )
                          {
                            v50 = v14[1];
                            ++v14;
                            v51 = strtol(v50, &endptr, 0);
                            v52 = (unsigned __int8)*endptr;
                            if ( *endptr )
                              v52 = 1;
                            if ( v52 | ((unsigned int)v51 >> 31) )
                              goto LABEL_74;
                            if ( v51 > 255 )
                              goto LABEL_37;
                            v86[i] = v51;
                          }
                          v23 = -1;
                          v12 = 0;
LABEL_92:
                          v43 = sub_11D88(v74, s, 0x14u);
                          v44 = v43;
                          if ( v43 >= 0 )
                          {
                            if ( ioctl(v43, 0x705u, &v84) < 0 )
                            {
                              v68 = (FILE *)stderr;
                              v69 = _errno_location();
                              v70 = strerror(*v69);
                              fprintf(v68, "Error: Could not get the adapter functionality matrix: %s\n", v70);
                            }
                            else
                            {
                              v81 = v20 - 1;
                              switch ( v20 )
                              {
                                case 1:
                                  if ( (v84 & 0x40000) != 0 )
                                    goto LABEL_99;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Error: Adapter does not have %s capability\n",
                                    "SMBus send byte");
                                  break;
                                case 2:
                                  if ( (v84 & 0x100000) != 0 )
                                    goto LABEL_99;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Error: Adapter does not have %s capability\n",
                                    "SMBus write byte");
                                  break;
                                case 3:
                                  if ( (v84 & 0x400000) != 0 )
                                    goto LABEL_99;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Error: Adapter does not have %s capability\n",
                                    "SMBus write word");
                                  break;
                                case 5:
                                  if ( (v84 & 0x2000000) != 0 )
                                    goto LABEL_99;
                                  fprintf(
                                    (FILE *)stderr,
                                    "Error: Adapter does not have %s capability\n",
                                    "SMBus block write");
                                  break;
                                case 8:
                                  if ( (v84 & 0x8000000) != 0 )
                                  {
LABEL_99:
                                    if ( v79 && (v84 & 9) == 0 )
                                      fwrite(
                                        "Warning: Adapter does not seem to support PEC\n",
                                        1u,
                                        0x2Eu,
                                        (FILE *)stderr);
                                    if ( !sub_125B4(v44, v76, v10) )
                                    {
                                      if ( !v9 )
                                      {
                                        fwrite(
                                          "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                                          1u,
                                          0x4Bu,
                                          (FILE *)stderr);
                                        if ( (unsigned int)(v76 - 80) <= 7 )
                                        {
                                          v75 = 1;
                                          fwrite(
                                            "DANGEROUS! Writing to a serial EEPROM on a memory DIMM\n"
                                            "may render your memory USELESS and make your system UNBOOTABLE!\n",
                                            1u,
                                            0x77u,
                                            (FILE *)stderr);
                                        }
                                        else
                                        {
                                          v75 = 0;
                                        }
                                        fprintf(
                                          (FILE *)stderr,
                                          "I will write to device file %s, chip address 0x%02x, data address\n0x%02x, ",
                                          s,
                                          v76,
                                          v73);
                                        if ( v20 == 1 )
                                        {
                                          fwrite("no data.\n", 1u, 9u, (FILE *)stderr);
                                        }
                                        else
                                        {
                                          v53 = v20 == 5;
                                          if ( v20 != 5 )
                                            v53 = v20 == 8;
                                          v77 = v20 == 5;
                                          if ( v53 )
                                          {
                                            fwrite("data", 1u, 4u, (FILE *)stderr);
                                            v82 = v20;
                                            v57 = v44;
                                            v58 = i;
                                            for ( j = 0; j != v58; ++j )
                                            {
                                              v60 = (unsigned __int8)v86[j];
                                              fprintf((FILE *)stderr, " 0x%02x", v60);
                                            }
                                            v71 = "i2c block";
                                            if ( v77 )
                                              v71 = "smbus block";
                                            LOBYTE(i) = v58;
                                            v44 = v57;
                                            v20 = v82;
                                            fprintf((FILE *)stderr, ", mode %s.\n", v71);
                                          }
                                          else
                                          {
                                            v54 = "byte";
                                            if ( v20 != 2 )
                                              v54 = "word";
                                            v55 = "";
                                            if ( v12 )
                                              v55 = " (masked)";
                                            fprintf((FILE *)stderr, "data 0x%02x%s, mode %s.\n", v23, v55, v54);
                                          }
                                        }
                                        if ( v79 )
                                          fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
                                        v56 = "y/N";
                                        if ( !v75 )
                                          v56 = "Y/n";
                                        fprintf((FILE *)stderr, "Continue? [%s] ", v56);
                                        fflush((FILE *)stderr);
                                        if ( !sub_12628(v75 ^ 1) )
                                        {
                                          fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                          exit(0);
                                        }
                                      }
                                      if ( v12 )
                                      {
                                        if ( v20 == 1 )
                                        {
                                          byte = i2c_smbus_read_byte(v44);
                                        }
                                        else if ( v20 == 3 )
                                        {
                                          byte = i2c_smbus_read_word_data(v44, (unsigned __int8)v73);
                                        }
                                        else
                                        {
                                          byte = i2c_smbus_read_byte_data(v44, (unsigned __int8)v73);
                                        }
                                        if ( byte < 0 )
                                        {
                                          fwrite("Error: Failed to read old value\n", 1u, 0x20u, (FILE *)stderr);
                                          exit(1);
                                        }
                                        v23 = byte & ~(unsigned int)v12 | v23 & (unsigned int)v12;
                                        if ( !v9 )
                                        {
                                          v49 = v20 == 3 ? 4 : 2;
                                          fprintf(
                                            (FILE *)stderr,
                                            "Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\n",
                                            v49,
                                            byte,
                                            v49,
                                            v12,
                                            v49,
                                            v23,
                                            v73);
                                          fwrite("Continue? [Y/n] ", 1u, 0x10u, (FILE *)stderr);
                                          fflush((FILE *)stderr);
                                          if ( !sub_12628(1) )
                                          {
                                            fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                                            exit(0);
                                          }
                                        }
                                      }
                                      if ( v79 && ioctl(v44, 0x708u, 1) < 0 )
                                      {
                                        v65 = (FILE *)stderr;
                                        v66 = _errno_location();
                                        v67 = strerror(*v66);
                                        fprintf(v65, "Error: Could not set PEC: %s\n", v67);
                                      }
                                      else
                                      {
                                        switch ( v81 )
                                        {
                                          case 0:
                                            v61 = i2c_smbus_write_byte(v44, (unsigned __int8)v73);
                                            break;
                                          case 2:
                                            v61 = i2c_smbus_write_word_data(
                                                    v44,
                                                    (unsigned __int8)v73,
                                                    (unsigned __int16)v23);
                                            break;
                                          case 4:
                                            v61 = i2c_smbus_write_block_data(
                                                    v44,
                                                    (unsigned __int8)v73,
                                                    (unsigned __int8)i,
                                                    v86);
                                            break;
                                          case 7:
                                            v61 = i2c_smbus_write_i2c_block_data(
                                                    v44,
                                                    (unsigned __int8)v73,
                                                    (unsigned __int8)i,
                                                    v86);
                                            break;
                                          default:
                                            v61 = i2c_smbus_write_byte_data(
                                                    v44,
                                                    (unsigned __int8)v73,
                                                    (unsigned __int8)v23);
                                            break;
                                        }
                                        if ( v61 < 0 )
                                        {
                                          fwrite("Error: Write failed\n", 1u, 0x14u, (FILE *)stderr);
                                          close(v44);
                                          exit(1);
                                        }
                                        if ( !v79 || ioctl(v44, 0x708u, 0) >= 0 )
                                        {
                                          if ( v7 )
                                          {
                                            if ( v20 == 1 )
                                            {
                                              v23 = v73;
                                              word_data = i2c_smbus_read_byte(v44);
                                            }
                                            else if ( v20 == 3 )
                                            {
                                              word_data = i2c_smbus_read_word_data(v44, (unsigned __int8)v73);
                                            }
                                            else
                                            {
                                              word_data = i2c_smbus_read_byte_data(v44, (unsigned __int8)v73);
                                            }
                                            close(v44);
                                            if ( word_data < 0 )
                                            {
                                              puts("Warning - readback failed");
                                            }
                                            else if ( word_data == v23 )
                                            {
                                              if ( v20 == 3 )
                                                v64 = 4;
                                              else
                                                v64 = 2;
                                              printf("Value 0x%0*x written, readback matched\n", v64, word_data);
                                            }
                                            else
                                            {
                                              if ( v20 == 3 )
                                                v63 = 4;
                                              else
                                                v63 = 2;
                                              printf(
                                                "Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\n",
                                                v63,
                                                v23);
                                            }
                                            exit(0);
                                          }
                                          close(v44);
                                          exit(0);
                                        }
                                        v45 = (FILE *)stderr;
                                        v46 = _errno_location();
                                        v47 = strerror(*v46);
                                        fprintf(v45, "Error: Could not clear PEC: %s\n", v47);
                                      }
                                      close(v44);
                                    }
                                  }
                                  else
                                  {
                                    fprintf(
                                      (FILE *)stderr,
                                      "Error: Adapter does not have %s capability\n",
                                      "I2C block write");
                                  }
                                  break;
                              }
                            }
                          }
                          exit(1);
                        }
                        goto LABEL_89;
                      }
                      if ( v18 == 119 )
                      {
                        v19 = (unsigned __int8)v16[1];
                        goto LABEL_25;
                      }
                      goto LABEL_68;
                    }
                    if ( v18 != 98 )
                      goto LABEL_68;
                    v19 = (unsigned __int8)v16[1];
LABEL_80:
                    if ( v11 + 6 != v3 )
                      goto LABEL_89;
                    v20 = 2;
                    v79 = v19 == 112;
LABEL_27:
                    v21 = strtol(v78[3], &endptr, 0);
                    v22 = (unsigned __int8)*endptr;
                    if ( *endptr )
                      v22 = 1;
                    v23 = v21;
                    if ( v22 | ((unsigned int)v21 >> 31) )
                    {
LABEL_74:
                      v37 = "Error: Data value invalid!\n";
                      goto LABEL_75;
                    }
                    v24 = v21 > 255;
                    if ( v20 != 2 )
                      v24 = 0;
                    if ( v24 )
                      goto LABEL_37;
                    v25 = v21 == 0x10000;
                    if ( v21 >= 0x10000 )
                      v25 = v20 == 3;
                    if ( v25 )
                    {
LABEL_37:
                      v26 = "Error: Data value out of range!\n";
                      goto LABEL_38;
                    }
LABEL_53:
                    if ( !v12 )
                    {
                      i = 0;
                      goto LABEL_92;
                    }
                    v30 = strtol(v12, &endptr, 0);
                    v31 = (unsigned __int8)*endptr;
                    if ( *endptr )
                      v31 = 1;
                    if ( v30 )
                      v32 = v31;
                    else
                      v32 = v31 | 1;
                    v12 = (const char *)v30;
                    if ( !v32 )
                    {
                      if ( v20 == 3 )
                      {
                        if ( v30 >= 0x10000 )
                          goto LABEL_62;
                      }
                      else if ( v30 > 255 )
                      {
LABEL_62:
                        v33 = fwrite("Error: Data value mask out of range!\n", 1u, 0x25u, (FILE *)stderr);
                        sub_11BC8(v33);
                      }
                      i = 0;
                      goto LABEL_92;
                    }
                    v26 = "Error: Data value mask invalid!\n";
LABEL_38:
                    v27 = fwrite(v26, 1u, 0x20u, (FILE *)stderr);
                    sub_11BC8(v27);
                  }
                  if ( v16[1] != 112 )
                  {
                    v39 = 0;
                    v20 = 8;
                    goto LABEL_87;
                  }
                }
                v40 = fwrite("Error: PEC not supported for I2C block writes!\n", 1u, 0x2Fu, (FILE *)stderr);
                sub_11BC8(v40);
              }
              v36 = v78[3];
              if ( *v36 != 99 )
              {
                v79 = 0;
                v20 = 2;
                goto LABEL_27;
              }
              if ( v36[1] && (v36[1] != 112 || v36[2]) )
              {
                v20 = 2;
                v79 = 0;
                goto LABEL_27;
              }
              v79 = v36[1] == 112;
            }
            v20 = 1;
            v23 = -1;
            goto LABEL_53;
          }
          a1 = fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
        }
      }
    }
  }
  sub_11BC8(a1);
}
