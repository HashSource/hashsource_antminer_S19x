void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v5; // r3
  char *v6; // r2
  int v7; // r4
  char **v8; // r1
  int v9; // r10
  int v10; // r0
  int v11; // r11
  int v12; // r8
  int v13; // r7
  char *v14; // t1
  int v15; // r0
  int v16; // r0
  int v17; // r10
  unsigned int v18; // r6
  int v19; // r3
  int v20; // r7
  const char *v21; // r9
  int v22; // r3
  const char *v23; // r9
  int v24; // r11
  size_t v25; // r10
  int v26; // r0
  _WORD *v27; // r3
  FILE *v28; // r3
  unsigned int v29; // r0
  char v30; // r3
  unsigned int v31; // r1
  unsigned int v32; // r12
  _DWORD *v33; // r6
  int v34; // r4
  void *v35; // r0
  int v36; // r3
  int v37; // r0
  int v38; // r4
  unsigned int v39; // r2
  int v40; // r4
  _DWORD *v41; // r3
  FILE *v42; // r4
  int *v43; // r0
  char *v44; // r0
  FILE *v45; // r4
  int *v46; // r0
  char *v47; // r0
  int fd; // [sp+4h] [bp-238h]
  int v49; // [sp+8h] [bp-234h]
  int v50; // [sp+Ch] [bp-230h]
  const char **v51; // [sp+10h] [bp-22Ch]
  const char **v52; // [sp+14h] [bp-228h]
  void *v53; // [sp+14h] [bp-228h]
  int v54; // [sp+18h] [bp-224h]
  int v55; // [sp+1Ch] [bp-220h]
  char *endptr[2]; // [sp+24h] [bp-218h] BYREF
  char s[20]; // [sp+2Ch] [bp-210h] BYREF
  _DWORD v58[126]; // [sp+40h] [bp-1FCh] BYREF
  char v59; // [sp+238h] [bp-4h] BYREF

  v5 = (char *)v58;
  do
  {
    *((_DWORD *)v5 + 2) = 0;
    v5 += 12;
  }
  while ( v5 != &v59 );
  if ( a1 <= 1 )
  {
    if ( a1 == 1 )
    {
LABEL_33:
      v28 = (FILE *)stderr;
LABEL_38:
      fwrite(
        "Usage: i2ctransfer [-f] [-y] [-v] [-V] [-a] I2CBUS DESC [DATA] [DESC [DATA]]...\n"
        "  I2CBUS is an integer or an I2C bus name\n"
        "  DESC describes the transfer in the form: {r|w}LENGTH[@address]\n"
        "    1) read/write-flag 2) LENGTH (range 0-65535) 3) I2C address (use last one if omitted)\n"
        "  DATA are LENGTH bytes for a write message. They can be shortened by a suffix:\n"
        "    = (keep value constant until LENGTH)\n"
        "    + (increase value by 1 until LENGTH)\n"
        "    - (decrease value by 1 until LENGTH)\n"
        "    p (use pseudo random generator until LENGTH with value as seed)\n"
        "\n"
        "Example (bus 0, read 8 byte at offset 0x64 from EEPROM at 0x50):\n"
        "  # i2ctransfer 0 w1@0x50 0x64 r8\n"
        "Example (same EEPROM, at offset 0x42 write 0xff 0xfe ... 0xf0):\n"
        "  # i2ctransfer 0 w17@0x50 0x42 0xff-\n",
        1u,
        0x2EEu,
        v28);
      goto LABEL_39;
    }
    v7 = 0;
  }
  else
  {
    v6 = a2[1];
    v7 = 0;
    if ( *v6 == 45 )
    {
      v8 = a2 + 1;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 1;
      while ( 2 )
      {
        switch ( v6[1] )
        {
          case 'V':
            v10 = 1;
            goto LABEL_8;
          case 'a':
            ++v13;
            v7 = 1;
            if ( v13 == a1 )
              goto LABEL_32;
            goto LABEL_9;
          case 'f':
            v12 = 1;
            goto LABEL_8;
          case 'v':
            v9 = 1;
            goto LABEL_8;
          case 'y':
            v11 = 1;
LABEL_8:
            if ( ++v13 == a1 )
            {
LABEL_32:
              if ( !v10 )
                goto LABEL_33;
LABEL_44:
              fprintf((FILE *)stderr, "i2ctransfer version %s\n", "4.1");
              exit(0);
            }
LABEL_9:
            v14 = v8[1];
            ++v8;
            v6 = v14;
            if ( *v14 == 45 )
              continue;
            if ( v10 )
              goto LABEL_44;
            break;
          default:
            fprintf((FILE *)stderr, "Error: Unsupported option \"%s\"!\n", v6);
            v28 = (FILE *)stderr;
            goto LABEL_38;
        }
        goto LABEL_11;
      }
    }
  }
  v13 = 1;
  v9 = 0;
  v11 = 0;
  v12 = 0;
LABEL_11:
  v15 = sub_11DF8(a2[v13]);
  if ( v15 < 0 )
    goto LABEL_39;
  v16 = sub_11718(v15, s, 0x14u);
  fd = v16;
  if ( v16 < 0 )
    goto LABEL_39;
  if ( ioctl(v16, 0x705u, endptr) < 0 )
  {
    v45 = (FILE *)stderr;
    v46 = _errno_location();
    v47 = strerror(*v46);
    fprintf(v45, "Error: Could not get the adapter functionality matrix: %s\n", v47);
    goto LABEL_39;
  }
  if ( ((int)endptr[0] & 1) == 0 )
  {
    fprintf((FILE *)stderr, "Error: Adapter does not have %s capability\n", "I2C transfers");
    goto LABEL_39;
  }
  v55 = v9;
  v17 = 0;
  v18 = 0;
  v51 = (const char **)&a2[v13 + 1];
  v19 = v13 + 1;
  v20 = 0;
  v50 = v19;
  v49 = -1;
  v54 = v11;
  while ( 1 )
  {
    if ( v50 >= a1 )
    {
      v36 = v17;
      if ( !v20 )
        v36 = v17 | 1;
      v33 = v58;
      if ( v36 )
      {
        fwrite("Error: Incomplete message\n", 1u, 0x1Au, (FILE *)stderr);
        goto LABEL_61;
      }
      if ( v54
        || (fwrite(
              "WARNING! This program can confuse your I2C bus, cause data loss and worse!\n",
              1u,
              0x4Bu,
              (FILE *)stderr),
            fprintf((FILE *)stderr, "I will send the following messages to device file %s:\n", s),
            sub_10B30((int)v58, v20, 0xDu),
            fwrite("Continue? [y/N] ", 1u, 0x10u, (FILE *)stderr),
            fflush((FILE *)stderr),
            sub_11FB8(0)) )
      {
        endptr[1] = (char *)v20;
        endptr[0] = (char *)v58;
        v37 = ioctl(fd, 0x707u, endptr);
        v38 = v37;
        if ( v37 < 0 )
        {
          v42 = (FILE *)stderr;
          v43 = _errno_location();
          v44 = strerror(*v43);
          fprintf(v42, "Error: Sending messages failed: %s\n", v44);
          goto LABEL_61;
        }
        if ( v20 > v37 )
          fprintf((FILE *)stderr, "Warning: only %d/%d messages were sent\n", v37, v20);
        if ( v55 )
          v39 = 14;
        else
          v39 = 2;
        sub_10B30((int)v58, v38, v39);
      }
      else
      {
        fwrite("Aborting on user request.\n", 1u, 0x1Au, (FILE *)stderr);
      }
      v40 = 0;
      close(fd);
      do
      {
        v41 = &v58[3 * v40++];
        free((void *)v41[2]);
      }
      while ( v20 > v40 );
      exit(0);
    }
    v52 = v51;
    v21 = *v51++;
    if ( v20 > 42 )
    {
      v33 = v58;
      fprintf((FILE *)stderr, "Error: Too many messages (max: %d)\n", 42);
      goto LABEL_61;
    }
    if ( v17 == 1 )
    {
      v29 = strtoul(v21, endptr, 0);
      if ( v29 > 0xFF || v21 == endptr[0] )
      {
        v33 = v58;
        fwrite("Error: Invalid data byte\n", 1u, 0x19u, (FILE *)stderr);
        goto LABEL_60;
      }
      v30 = v29;
      v31 = LOWORD(v58[3 * v20 + 1]);
      while ( 1 )
      {
        if ( v18 >= v31 )
          goto LABEL_66;
        *(_BYTE *)(v58[3 * v20 + 2] + v18) = v30;
        v32 = (unsigned __int8)*endptr[0];
        if ( !*endptr[0] )
          break;
        if ( v32 == 45 )
        {
          --v30;
        }
        else if ( v32 <= 0x2D )
        {
          if ( v32 != 43 )
          {
LABEL_59:
            v33 = v58;
            fwrite("Error: Invalid data byte suffix\n", 1u, 0x20u, (FILE *)stderr);
            goto LABEL_60;
          }
          ++v30;
        }
        else if ( v32 != 61 )
        {
          if ( v32 != 112 )
            goto LABEL_59;
          v30 = ((unsigned __int8)((v30 ^ 0x1B) + 13) >> 7) | (2 * ((v30 ^ 0x1B) + 13));
        }
        ++v18;
      }
      ++v18;
LABEL_66:
      if ( v18 == v31 )
        goto LABEL_29;
    }
    else
    {
      v22 = *(unsigned __int8 *)v21;
      v23 = v21 + 1;
      if ( v22 == 114 )
      {
        v24 = 1;
      }
      else
      {
        if ( v22 != 119 )
        {
          v33 = v58;
          fwrite("Error: Invalid direction\n", 1u, 0x19u, (FILE *)stderr);
          goto LABEL_60;
        }
        v24 = 0;
      }
      v25 = strtoul(v23, endptr, 0);
      if ( v25 >= 0x10000 || v23 == endptr[0] )
      {
        v33 = v58;
        fwrite("Error: Length invalid\n", 1u, 0x16u, (FILE *)stderr);
        goto LABEL_60;
      }
      if ( *endptr[0] )
      {
        if ( *endptr[0] != 64 )
        {
          v33 = v58;
          fwrite("Error: Unknown separator after length\n", 1u, 0x26u, (FILE *)stderr);
LABEL_60:
          fprintf((FILE *)stderr, "Error: faulty argument is '%s'\n", *v52);
LABEL_61:
          v34 = 0;
          close(fd);
          do
          {
            ++v34;
            free((void *)v33[2]);
            v33 += 3;
          }
          while ( v34 <= v20 );
LABEL_39:
          exit(1);
        }
        v26 = sub_11660(endptr[0] + 1, v7);
        v49 = v26;
        if ( v26 < 0 || !v12 && sub_11F44(fd, v26, 0) )
        {
          v33 = v58;
          goto LABEL_60;
        }
      }
      else if ( v49 == -1 )
      {
        v33 = v58;
        fwrite("Error: No address given\n", 1u, 0x18u, (FILE *)stderr);
        goto LABEL_60;
      }
      v27 = &v58[3 * v20];
      *v27 = v49;
      v27[1] = v24;
      v27[2] = v25;
      if ( !v25 )
        goto LABEL_29;
      v35 = malloc(v25);
      if ( !v35 )
      {
        v33 = v58;
        fwrite("Error: No memory for buffer\n", 1u, 0x1Cu, (FILE *)stderr);
        goto LABEL_60;
      }
      v53 = v35;
      memset(v35, 0, v25);
      v58[3 * v20 + 2] = v53;
      if ( v24 )
      {
LABEL_29:
        ++v20;
        v17 = 0;
        goto LABEL_30;
      }
      v18 = 0;
      v17 = 1;
    }
LABEL_30:
    ++v50;
  }
}
