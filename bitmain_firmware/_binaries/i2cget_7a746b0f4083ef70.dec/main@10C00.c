void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r11
  int v4; // r4
  int v5; // r5
  int v6; // r3
  char **v7; // r12
  _BOOL4 v8; // r6
  int v9; // r8
  int i; // r7
  char *v11; // r2
  char *v12; // t1
  int v13; // r10
  int v14; // r9
  char **v15; // r10
  int v16; // r11
  char *v17; // r2
  int v18; // r3
  size_t v19; // r0
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r4
  int word_data; // r5
  int v25; // r1
  bool v26; // zf
  FILE *v27; // r0
  const char *v28; // r2
  const char *v29; // r2
  FILE *v30; // r5
  int *v31; // r0
  char *v32; // r0
  int byte_data; // r0
  bool v34; // zf
  FILE *v35; // r4
  int *v36; // r0
  char *v37; // r0
  size_t sizea; // [sp+0h] [bp-2Ch]
  int v40; // [sp+4h] [bp-28h]
  char *endptr; // [sp+Ch] [bp-20h] BYREF
  int v42; // [sp+10h] [bp-1Ch] BYREF
  char s[24]; // [sp+14h] [bp-18h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = a1;
  v6 = 1;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  for ( i = 0; v6 < v5; v4 = v6++ )
  {
    v12 = v7[1];
    ++v7;
    v11 = v12;
    a1 = (unsigned __int8)*v12;
    if ( a1 != 45 )
      break;
    a1 = (unsigned __int8)v11[1] - 86;
    switch ( v11[1] )
    {
      case 'V':
        v8 = 1;
        break;
      case 'a':
        v3 = 1;
        break;
      case 'f':
        i = 1;
        break;
      case 'y':
        v9 = 1;
        break;
      default:
        v20 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v11);
        sub_11480(v20);
    }
  }
  if ( v8 )
  {
    fprintf((FILE *)stderr, "i2cget version %s\n", "4.1");
    exit(0);
  }
  if ( v4 + 2 < v5 )
  {
    v13 = v6;
    a1 = sub_11D70(a2[v6]);
    v14 = a1;
    if ( a1 >= 0 )
    {
      v15 = &a2[v13];
      a1 = sub_1159C(v15[1], v3);
      v40 = a1;
      if ( a1 >= 0 )
      {
        if ( v4 + 3 >= v5 )
        {
          v16 = -1;
          sizea = 1;
          goto LABEL_13;
        }
        v21 = strtol(v15[2], &endptr, 0);
        v16 = v21;
        if ( !*endptr && v21 <= 0xFF )
        {
          sizea = 2;
LABEL_13:
          if ( v4 + 4 < v5 )
          {
            v17 = v15[3];
            v18 = (unsigned __int8)*v17;
            switch ( v18 )
            {
              case 'c':
                sizea = 1;
                break;
              case 'w':
                sizea = 3;
                break;
              case 'b':
                sizea = 2;
                break;
              default:
                v19 = fwrite("Error: Invalid mode!\n", 1u, 0x15u, (FILE *)stderr);
                sub_11480(v19);
            }
            v8 = v17[1] == 112;
          }
          v22 = sub_11654(v14, s, 0x14u);
          v23 = v22;
          if ( v22 >= 0 )
          {
            if ( ioctl(v22, 0x705u, &v42) < 0 )
            {
              v35 = (FILE *)stderr;
              v36 = _errno_location();
              v37 = strerror(*v36);
              fprintf(v35, "Error: Could not get the adapter functionality matrix: %s\n", v37);
            }
            else
            {
              if ( sizea == 2 )
              {
                if ( (v42 & 0x80000) == 0 )
                {
                  fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read byte");
                  goto LABEL_52;
                }
              }
              else if ( sizea == 3 )
              {
                if ( (v42 & 0x200000) == 0 )
                {
                  fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read word");
                  goto LABEL_52;
                }
              }
              else
              {
                if ( (v42 & 0x20000) == 0 )
                {
                  fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus receive byte");
                  goto LABEL_52;
                }
                if ( v16 != -1 && (v42 & 0x40000) == 0 )
                {
                  fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                  goto LABEL_52;
                }
              }
              if ( v8 && (v42 & 9) == 0 )
                fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
              if ( !sub_11EC4(v23, v40, i) )
              {
                if ( v9 )
                {
LABEL_40:
                  if ( v8 && ioctl(v23, 0x708u, 1) < 0 )
                  {
                    v30 = (FILE *)stderr;
                    v31 = _errno_location();
                    v32 = strerror(*v31);
                    fprintf(v30, "Error: Could not set PEC: %s\n", v32);
                    close(v23);
                    goto LABEL_52;
                  }
                  if ( sizea != 1 )
                  {
                    if ( sizea == 3 )
                    {
                      word_data = i2c_smbus_read_word_data(v23, (unsigned __int8)v16);
                      close(v23);
                      if ( word_data >= 0 )
                      {
                        v25 = 4;
LABEL_46:
                        printf("0x%0*x\n", v25, word_data);
                        goto LABEL_47;
                      }
                      goto LABEL_76;
                    }
                    byte_data = i2c_smbus_read_byte_data(v23, (unsigned __int8)v16);
LABEL_74:
                    word_data = byte_data;
                    close(v23);
                    if ( word_data >= 0 )
                    {
                      v25 = 2;
                      goto LABEL_46;
                    }
LABEL_76:
                    fwrite("Error: Read failed\n", 1u, 0x13u, (FILE *)stderr);
                    exit(2);
                  }
                  if ( v16 != -1 && i2c_smbus_write_byte(v23, (unsigned __int8)v16) < 0 )
                    fwrite("Warning - write failed\n", 1u, 0x17u, (FILE *)stderr);
LABEL_78:
                  byte_data = i2c_smbus_read_byte(v23);
                  goto LABEL_74;
                }
                fwrite(
                  "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                  1u,
                  0x4Bu,
                  (FILE *)stderr);
                if ( (unsigned int)(v40 - 80) > 7 )
                {
                  v34 = v16 == 0;
                  if ( v16 >= 0 )
                    v34 = sizea == 1;
                  if ( !v34 )
                    goto LABEL_62;
                  if ( v8 )
                  {
                    v9 = v8;
                    fwrite(
                      "WARNING! All I2C chips and some SMBus chips will interpret a write\n"
                      "byte command with PEC as awrite byte data command, effectively writing a\n"
                      "value into a register!\n",
                      1u,
                      0xA3u,
                      (FILE *)stderr);
LABEL_85:
                    fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", s, v40);
                    fprintf((FILE *)stderr, "data address\n0x%02x", v16);
                    v27 = (FILE *)stderr;
                    if ( sizea == 1 )
                    {
                      v28 = "write byte/read byte";
                      if ( v16 == -1 )
                        v28 = "read byte";
LABEL_66:
                      fprintf(v27, ", using %s.\n", v28);
                      if ( !v8 )
                        goto LABEL_67;
                      goto LABEL_92;
                    }
LABEL_64:
                    v28 = "read word data";
                    if ( sizea == 2 )
                      v28 = "read byte data";
                    goto LABEL_66;
                  }
                }
                else
                {
                  if ( v8 )
                  {
                    fwrite(
                      "STOP! EEPROMs are I2C devices, not SMBus devices. Using PEC\n"
                      "on I2C devices may result in unexpected results, such as\n"
                      "trashing the contents of EEPROMs. We can't let you do that, sorry.\n",
                      1u,
                      0xB8u,
                      (FILE *)stderr);
LABEL_47:
                    exit(0);
                  }
                  v26 = v16 == 0;
                  if ( v16 >= 0 )
                    v26 = sizea == 1;
                  if ( !v26 )
                  {
LABEL_62:
                    fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", s, v40);
                    if ( v16 == -1 )
                    {
                      fwrite("current data\naddress", 1u, 0x14u, (FILE *)stderr);
                      v27 = (FILE *)stderr;
                      if ( sizea == 1 )
                      {
                        fprintf((FILE *)stderr, ", using %s.\n", "read byte");
                        if ( !v8 )
                        {
                          fprintf((FILE *)stderr, "Continue? [%s] ", "Y/n");
                          fflush((FILE *)stderr);
                          if ( sub_11F38(1) )
                            goto LABEL_78;
LABEL_70:
                          fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
                          goto LABEL_47;
                        }
LABEL_92:
                        fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
LABEL_67:
                        v29 = "Y/n";
                        if ( v9 )
                          v29 = "y/N";
                        fprintf((FILE *)stderr, "Continue? [%s] ", v29);
                        fflush((FILE *)stderr);
                        if ( sub_11F38(v9 ^ 1) )
                          goto LABEL_40;
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      fprintf((FILE *)stderr, "data address\n0x%02x", v16);
                      v27 = (FILE *)stderr;
                      if ( sizea == 1 )
                      {
                        v28 = "write byte/read byte";
                        goto LABEL_66;
                      }
                    }
                    goto LABEL_64;
                  }
                }
                v9 = 0;
                goto LABEL_85;
              }
            }
          }
LABEL_52:
          exit(1);
        }
        a1 = fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
      }
    }
  }
  sub_11480(a1);
}
