void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // r11
  int v4; // r4
  int v5; // r10
  bool v7; // cc
  char **v8; // r0
  int v9; // r8
  int v10; // r6
  int v11; // r7
  char *v12; // r2
  char *v13; // t1
  char *v14; // r0
  int v15; // r10
  int v16; // r9
  char **v17; // r10
  int v18; // r11
  int v19; // r8
  char *v20; // r2
  int v21; // r3
  size_t v22; // r0
  int v23; // r0
  unsigned int v24; // r0
  _BOOL4 v25; // r4
  int v26; // r0
  int v27; // r5
  int word_data; // r4
  int v29; // r1
  int byte; // r0
  FILE *v31; // r4
  int *v32; // r0
  char *v33; // r0
  bool v35; // zf
  FILE *v36; // r0
  const char *v37; // r2
  _BOOL4 v38; // r6
  FILE *v39; // r0
  const char *v40; // r2
  FILE *v41; // r4
  int *v42; // r0
  char *v43; // r0
  char **v45; // [sp+4h] [bp-28h]
  char *endptr; // [sp+Ch] [bp-20h] BYREF
  int v47; // [sp+10h] [bp-1Ch] BYREF
  char v48[24]; // [sp+14h] [bp-18h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 1;
  v7 = a1 > 1;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v7 )
  {
    do
    {
      v13 = v8[1];
      ++v8;
      v12 = v13;
      if ( *v13 != 45 )
        break;
      switch ( v12[1] )
      {
        case 'V':
          v9 = 1;
          break;
        case 'a':
          v3 = 1;
          break;
        case 'f':
          v11 = 1;
          break;
        case 'y':
          v10 = 1;
          break;
        default:
          v23 = fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v12);
          sub_11468(v23);
      }
      v4 = v5++;
    }
    while ( v5 < a1 );
  }
  if ( v9 )
  {
    fprintf((FILE *)stderr, "i2cget version %s\n", "4.1");
    exit(0);
  }
  if ( a1 > v4 + 2 )
  {
    v14 = a2[v5];
    v15 = v5;
    v8 = (char **)sub_11D08(v14);
    v16 = (int)v8;
    if ( (int)v8 >= 0 )
    {
      v17 = &a2[v15];
      v8 = (char **)sub_11570(v17[1], v3);
      v45 = v8;
      if ( (int)v8 >= 0 )
      {
        if ( a1 <= v4 + 3 )
        {
          v18 = -1;
          v19 = 1;
          goto LABEL_14;
        }
        v24 = strtol(v17[2], &endptr, 0);
        v18 = v24;
        if ( !*endptr && v24 <= 0xFF )
        {
          v19 = 2;
LABEL_14:
          if ( a1 <= v4 + 4 )
          {
            v25 = 0;
          }
          else
          {
            v20 = v17[3];
            v21 = (unsigned __int8)*v20;
            switch ( v21 )
            {
              case 'c':
                v19 = 1;
                break;
              case 'w':
                v19 = 3;
                break;
              case 'b':
                v19 = 2;
                break;
              default:
                v22 = fwrite("Error: Invalid mode!\n", 1u, 0x15u, (FILE *)stderr);
                sub_11468(v22);
            }
            v25 = v20[1] == 112;
          }
          v26 = sub_11628(v16, v48, 0x14u);
          v27 = v26;
          if ( v26 >= 0 )
          {
            if ( ioctl(v26, 0x705u, &v47) < 0 )
            {
              v41 = (FILE *)stderr;
              v42 = _errno_location();
              v43 = strerror(*v42);
              fprintf(v41, "Error: Could not get the adapter functionality matrix: %s\n", v43);
              goto LABEL_51;
            }
            if ( v19 == 2 )
            {
              if ( (v47 & 0x80000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read byte");
                goto LABEL_51;
              }
            }
            else if ( v19 == 3 )
            {
              if ( (v47 & 0x200000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus read word");
                goto LABEL_51;
              }
            }
            else
            {
              if ( (v47 & 0x20000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus receive byte");
                goto LABEL_51;
              }
              if ( v18 != -1 && (v47 & 0x40000) == 0 )
              {
                fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "SMBus send byte");
                goto LABEL_51;
              }
            }
            if ( v25 && (v47 & 9) == 0 )
              fwrite("Warning: Adapter does not seem to support PEC\n", 1u, 0x2Eu, (FILE *)stderr);
            if ( !sub_11E54(v27, v45, v11) )
            {
              if ( v10 )
              {
LABEL_40:
                if ( v25 && ioctl(v27, 0x708u, 1) < 0 )
                {
                  v31 = (FILE *)stderr;
                  v32 = _errno_location();
                  v33 = strerror(*v32);
                  fprintf(v31, "Error: Could not set PEC: %s\n", v33);
                  close(v27);
                  goto LABEL_51;
                }
                if ( v19 == 1 )
                {
                  if ( v18 != -1 && i2c_smbus_write_byte(v27, (unsigned __int8)v18) < 0 )
                    fwrite("Warning - write failed\n", 1u, 0x17u, (FILE *)stderr);
                  byte = i2c_smbus_read_byte(v27);
                }
                else
                {
                  if ( v19 == 3 )
                  {
                    word_data = i2c_smbus_read_word_data(v27, (unsigned __int8)v18);
                    close(v27);
                    if ( word_data >= 0 )
                    {
                      v29 = 4;
                      goto LABEL_46;
                    }
                    goto LABEL_61;
                  }
                  byte = i2c_smbus_read_byte_data(v27, (unsigned __int8)v18);
                }
                word_data = byte;
                close(v27);
                if ( word_data >= 0 )
                {
                  v29 = 2;
LABEL_46:
                  printf("0x%0*x\n", v29, word_data);
                  exit(0);
                }
LABEL_61:
                fwrite("Error: Read failed\n", 1u, 0x13u, (FILE *)stderr);
                exit(2);
              }
              fwrite(
                "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
                1u,
                0x4Bu,
                (FILE *)stderr);
              if ( (unsigned int)(v45 - 20) <= 7 && v25 )
              {
                fwrite(
                  "STOP! EEPROMs are I2C devices, not SMBus devices. Using PEC\n"
                  "on I2C devices may result in unexpected results, such as\n"
                  "trashing the contents of EEPROMs. We can't let you do that, sorry.\n",
                  1u,
                  0xB8u,
                  (FILE *)stderr);
                goto LABEL_86;
              }
              v35 = v18 == 0;
              if ( v18 >= 0 )
                v35 = v19 == 1;
              if ( v35 )
              {
                if ( v25 )
                {
                  v10 = 1;
                  fwrite(
                    "WARNING! All I2C chips and some SMBus chips will interpret a write\n"
                    "byte command with PEC as awrite byte data command, effectively writing a\n"
                    "value into a register!\n",
                    1u,
                    0xA3u,
                    (FILE *)stderr);
                }
                else
                {
                  v10 = 0;
                }
                fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", v48, v45);
                fprintf((FILE *)stderr, "data address\n0x%02x", v18);
                fprintf((FILE *)stderr, ", using %s.\n", "write byte/read byte");
                if ( !v25 )
                  goto LABEL_80;
                goto LABEL_94;
              }
              fprintf((FILE *)stderr, "I will read from device file %s, chip address 0x%02x, ", v48, v45);
              if ( v18 == -1 )
              {
                fwrite("current data\naddress", 1u, 0x14u, (FILE *)stderr);
                v39 = (FILE *)stderr;
                if ( v19 == 1 )
                {
                  fprintf((FILE *)stderr, ", using %s.\n", "read byte");
                  if ( !v25 )
                    goto LABEL_92;
LABEL_94:
                  fwrite("PEC checking enabled.\n", 1u, 0x16u, (FILE *)stderr);
LABEL_80:
                  v36 = (FILE *)stderr;
                  if ( v10 )
                    LOWORD(v37) = 8440;
                  else
                    LOWORD(v37) = 8444;
                  v38 = v10 != 0;
                  HIWORD(v37) = 1;
                  goto LABEL_84;
                }
              }
              else
              {
                fprintf((FILE *)stderr, "data address\n0x%02x", v18);
                v39 = (FILE *)stderr;
                if ( v19 == 1 )
                {
                  v40 = "write byte/read byte";
                  goto LABEL_91;
                }
              }
              v40 = "read word data";
              v10 = 0;
              if ( v19 == 2 )
                v40 = "read byte data";
LABEL_91:
              fprintf(v39, ", using %s.\n", v40);
              if ( !v25 )
              {
LABEL_92:
                v37 = "Y/n";
                v36 = (FILE *)stderr;
                v38 = v25;
LABEL_84:
                fprintf(v36, "Continue? [%s] ", v37);
                fflush((FILE *)stderr);
                if ( sub_11EC8(!v38) )
                  goto LABEL_40;
                fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
LABEL_86:
                exit(0);
              }
              goto LABEL_94;
            }
          }
LABEL_51:
          exit(1);
        }
        v8 = (char **)fwrite("Error: Data address invalid!\n", 1u, 0x1Du, (FILE *)stderr);
      }
    }
  }
  sub_11468(v8);
}
