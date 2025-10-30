int sub_26F24()
{
  const char *v0; // r6
  int v1; // r4
  int v2; // r11
  char *v3; // r10
  unsigned int v4; // r9
  unsigned int v5; // r5
  unsigned int i; // r4
  bool v7; // zf
  int v8; // r3
  int v9; // r6
  int v10; // r4
  unsigned int v11; // r9
  unsigned int v12; // r5
  int v13; // r7
  int v14; // r0
  unsigned int v15; // r2
  int v16; // r2
  int v17; // r5
  int v18; // r11
  int v19; // r3
  int v20; // r1
  unsigned int v21; // lr
  int v22; // r11
  int v23; // r8
  int v24; // r0
  int v25; // r1
  char *v26; // r6
  unsigned __int8 *v27; // r4
  char *v28; // r10
  int v29; // r3
  _BYTE *v30; // r7
  unsigned int v31; // r5
  unsigned int v32; // t1
  int v33; // r0
  unsigned int v34; // r1
  char *v35; // r2
  unsigned int v36; // r12
  unsigned int v37; // r6
  int v38; // r4
  int v39; // r1
  bool v40; // cc
  char *v41; // r2
  unsigned int v42; // r6
  unsigned int v43; // r8
  char *v44; // lr
  int v45; // r2
  int v46; // r3
  int v47; // r3
  char *v48; // r3
  int v49; // r4
  _DWORD *v50; // r3
  const char *v51; // r2
  int v52; // r0
  int v53; // r1
  int v54; // r2
  _BYTE *v55; // r3
  _DWORD *v56; // r5
  const char *v57; // r3
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3
  _WORD *v62; // r5
  int v63; // r3
  int v64; // r5
  char *v65; // r2
  _DWORD *v67; // r5
  const char *v68; // r3
  int v69; // r0
  int v70; // r1
  int v71; // r2
  int v72; // r3
  _WORD *v73; // r5
  int v74; // r1
  char *v75; // r3
  _DWORD *v77; // r5
  const char *v78; // r3
  int v79; // r0
  int v80; // r1
  int v81; // r2
  int v82; // r3
  char *v83; // r3
  int v85; // [sp+10h] [bp-84h]
  int v86; // [sp+14h] [bp-80h]
  int v87; // [sp+14h] [bp-80h]
  unsigned int v88; // [sp+20h] [bp-74h]
  char *s2; // [sp+24h] [bp-70h]
  unsigned int v90; // [sp+2Ch] [bp-68h]
  int v91; // [sp+2Ch] [bp-68h]
  unsigned int v92; // [sp+30h] [bp-64h]
  unsigned int v93; // [sp+34h] [bp-60h]
  int v94; // [sp+38h] [bp-5Ch]
  char *format; // [sp+3Ch] [bp-58h]
  char *v96; // [sp+48h] [bp-4Ch]
  int v97; // [sp+4Ch] [bp-48h]
  int v98; // [sp+58h] [bp-3Ch]
  char *v99; // [sp+5Ch] [bp-38h]
  char v100[52]; // [sp+60h] [bp-34h] BYREF

  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : get result.\n", "get_result");
  strcpy(byte_60AFD0, "get result.");
  sub_3CC5C(byte_60AFD0, v100);
  v0 = (const char *)(dword_223680 + 48);
  v1 = *(_DWORD *)(dword_223680 + 72);
  v2 = *(_DWORD *)(dword_223680 + 312);
  v92 = *(_DWORD *)(dword_223680 + 64);
  v96 = *(char **)(dword_223680 + 80);
  v90 = *(_DWORD *)(dword_223680 + 84);
  if ( !strcmp((const char *)(dword_223680 + 48), "BM1398") || !strcmp(v0, "BM1360") || !strcmp(v0, "BM1366") )
  {
    v85 = v1;
  }
  else if ( !strcmp(v0, "BM1399") )
  {
    v85 = v1 + 1;
  }
  else
  {
    if ( strcmp(v0, "BM1362") )
    {
      sub_1E938(v100, 0x30u);
      printf("%s ", v100);
      printf("%s : Don't support this type ASIC: %s\n\n", "get_result", (const char *)(dword_223680 + 48));
      snprintf(byte_60B0D0, 0x100u, "Don't support this type ASIC: %s\n", (const char *)(dword_223680 + 48));
      sub_3CC5C(byte_60B0D0, v100);
      return 0;
    }
    v85 = v1 + 3;
  }
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  if ( v92 == 1 )
  {
    v93 = v2 * v1;
    v97 = v2 * v1;
  }
  else
  {
    sub_1E938(v100, 0x30u);
    v93 = v2 * v1;
    printf("%s ", v100);
    v97 = v2 * v1 * v92;
    printf("%s : Hashboard require nonce number:                %d\n\n", "get_result", v97);
    snprintf(byte_60B1D0, 0x100u, "Hashboard require nonce number:                %d\n", v97);
    sub_3CC5C(byte_60B1D0, v100);
  }
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : every voltage domain require nonce number:     %d\n\n", "get_result", v93 * v90);
  snprintf(byte_60B2D0, 0x100u, "every voltage domain require nonce number:     %d\n", v93 * v90);
  sub_3CC5C(byte_60B2D0, v100);
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : every ASIC require nonce number:               %d\n\n", "get_result", v93);
  snprintf(byte_60B3D0, 0x100u, "every ASIC require nonce number:               %d\n", v93);
  sub_3CC5C(byte_60B3D0, v100);
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : every CORE require nonce number:               %d\n\n", "get_result", v2);
  snprintf(byte_60B4D0, 0x100u, "every CORE require nonce number:               %d\n", v2);
  sub_3CC5C(byte_60B4D0, v100);
  puts("------------------------------------------------------------------------------------------------------\n");
  if ( !*(_BYTE *)(dword_223680 + 640) )
  {
    v3 = byte_2333A8;
LABEL_10:
    v4 = 0;
    goto LABEL_11;
  }
  v3 = byte_2333A8;
  byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1032] = 1;
  if ( !v96 )
    goto LABEL_10;
  v4 = 0;
  v94 = 0;
  format = 0;
  v98 = v2;
  do
  {
    if ( v90 )
    {
      v21 = v4;
      v22 = 0;
      v23 = dword_223680;
      v99 = v3;
      v24 = (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894;
      v25 = 264784 * (unsigned __int8)byte_5FE894;
      s2 = &v3[v25];
      v26 = (char *)&unk_2337B0 + 2 * v24 + 2 * v94 + 262190;
      v27 = (unsigned __int8 *)&unk_2337B0 + 1024 * v94 + v25 + v85 + 48;
      v28 = (char *)&unk_2337B0 + 2 * v90 + 2 * v24 + 2 * v94 + 262190;
      v29 = v85;
      v30 = (char *)&unk_2337B0 + v25 + v94 + 264496;
      while ( 1 )
      {
        v32 = *((unsigned __int16 *)v26 + 1);
        v26 += 2;
        v31 = v32;
        v22 += v32;
        if ( v93 <= v32 )
          goto LABEL_61;
        if ( !v29 )
        {
          v21 = 0;
          goto LABEL_59;
        }
        v87 = v29;
        v33 = strcmp((const char *)v23, "PT1+");
        v29 = v87;
        v21 = 0;
        v34 = *(_DWORD *)(v23 + 320);
        v35 = (char *)&v27[-v87];
        do
        {
          while ( 1 )
          {
            v36 = (unsigned __int8)*v35;
            if ( v33 )
              break;
            if ( v36 <= v34 )
              goto LABEL_52;
LABEL_53:
            if ( v27 == (unsigned __int8 *)++v35 )
              goto LABEL_57;
          }
          if ( v36 < v34 )
          {
LABEL_52:
            ++v21;
            goto LABEL_53;
          }
          ++v35;
        }
        while ( v27 != (unsigned __int8 *)v35 );
LABEL_57:
        if ( v21 > *(_DWORD *)(v23 + 316) )
        {
          s2[1032] = 0;
          *v30 = 0;
        }
LABEL_59:
        if ( v31 < 894 * *(_DWORD *)(v23 + 332) * *(_DWORD *)(v23 + 312) / 0x2710u )
        {
          s2[1032] = 0;
          *v30 = 0;
        }
LABEL_61:
        ++v30;
        v27 += 1024;
        if ( v28 == v26 )
        {
          v4 = v21;
          v3 = v99;
          if ( v90 > 5 )
          {
            printf("Voltage domain [%02d] nonce number :   %5d\n", format, v22);
            v37 = 1;
            v38 = v94 - 1;
            do
            {
              while ( 1 )
              {
                v41 = &v99[2 * v38 + 262192 + 2 * v37 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
                if ( v99[264784 * (unsigned __int8)byte_5FE894 + 265528 + v38 + v37] )
                  printf("      asic[%03d] = %4d,", v38 + v37, *((unsigned __int16 *)v41 + 516));
                else
                  printf("  !!! asic[%03d] = %4d,", v38 + v37, *((unsigned __int16 *)v41 + 516));
                if ( v37 != 1 )
                {
                  sub_1892EC(v37, v90 >> 1);
                  if ( !v39 )
                    break;
                }
                v40 = v90 > v37++;
                if ( !v40 )
                  goto LABEL_72;
              }
              putchar(10);
              v40 = v90 > v37++;
            }
            while ( v40 );
LABEL_72:
            puts("\n");
            goto LABEL_82;
          }
          v42 = 0;
          v43 = v90 - 1;
          printf("Voltage domain [%02d] :", format);
          while ( 1 )
          {
            v44 = &v99[2 * v94 + 262192 + 2 * v42 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
            if ( v99[264784 * (unsigned __int8)byte_5FE894 + 265528 + v94 + v42] )
            {
              printf("      asic[%03d] = %4d,", v94 + v42, *((unsigned __int16 *)v44 + 516));
              v7 = v42++ == v43;
              if ( !v7 )
                goto LABEL_76;
            }
            else
            {
              printf("  !!! asic[%03d] = %4d,", v94 + v42, *((unsigned __int16 *)v44 + 516));
              v7 = v42++ == v43;
              if ( !v7 )
              {
LABEL_76:
                if ( v90 <= v42 )
                  goto LABEL_81;
                continue;
              }
            }
            printf("      : domain nonce number :  %5d\n", v22);
            if ( v90 <= v42 )
              goto LABEL_81;
          }
        }
      }
    }
    printf("Voltage domain [%02d] :", format);
LABEL_81:
    putchar(10);
LABEL_82:
    v94 += v90;
    ++format;
  }
  while ( v96 != format );
  v2 = v98;
LABEL_11:
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  if ( *(_BYTE *)(dword_223680 + 641) )
  {
    v8 = (unsigned __int8)byte_5FE894;
    v3[264784 * (unsigned __int8)byte_5FE894 + 1032] = 1;
    if ( !v92 )
    {
      puts("------------------------------------------------------------------------------------------------------\n");
      sub_1E938(v100, 0x30u);
      printf("%s ", v100);
      printf("%s : bad asic list:\n", "get_result");
      strcpy(byte_60B5D0, "bad asic list:");
      sub_3CC5C(byte_60B5D0, v100);
      goto LABEL_85;
    }
    v88 = v4;
    v86 = 60 * v2;
    v91 = 0;
    while ( 1 )
    {
      if ( v93 > *(unsigned __int16 *)&v3[2 * v91 + 263224 + 2 * (_DWORD)&loc_20528 * v8] )
      {
        printf("asic[%03d] = %d\n");
        v9 = dword_7169B0[v91];
        if ( v85 )
        {
          v10 = 0;
          v88 = 0;
          v11 = v2;
          while ( 1 )
          {
            v12 = (unsigned __int8)v3[1024 * v91 + 1080 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v10];
            if ( v11 > v12 )
              break;
LABEL_38:
            ++v10;
            v9 += v86;
            if ( v85 == v10 )
            {
              v2 = v11;
              goto LABEL_40;
            }
          }
          v13 = dword_223680;
          v14 = strcmp((const char *)dword_223680, "PT1+");
          v15 = *(_DWORD *)(v13 + 320);
          if ( v14 )
          {
            if ( v12 < v15 )
LABEL_32:
              ++v88;
          }
          else if ( v12 <= v15 )
          {
            goto LABEL_32;
          }
          v16 = v12;
          v17 = v9;
          printf("core[%03d] = %d,      lost these nonce : ", v10, v16);
          v18 = 0;
          do
          {
            while ( 1 )
            {
              v19 = *(_DWORD *)(v17 + 4);
              v17 += 60;
              if ( !v19 )
                break;
              if ( v11 == ++v18 )
                goto LABEL_37;
            }
            v20 = v18++;
            printf("%d  ", v20);
          }
          while ( v11 != v18 );
LABEL_37:
          putchar(10);
          goto LABEL_38;
        }
        v88 = 0;
LABEL_40:
        putchar(10);
      }
      if ( v88 > *(_DWORD *)(dword_223680 + 316) )
      {
        v3[264784 * (unsigned __int8)byte_5FE894 + 1032] = 0;
        printf("asic[%03d] has %d cores not receive %d nonce\n", v91, v88, v2);
      }
      v7 = v92 == ++v91;
      if ( v7 )
      {
        puts("------------------------------------------------------------------------------------------------------\n");
        sub_1E938(v100, 0x30u);
        printf("%s ", v100);
        printf("%s : bad asic list:\n", "get_result");
        strcpy(byte_60B5D0, "bad asic list:");
        sub_3CC5C(byte_60B5D0, v100);
        goto LABEL_13;
      }
      v8 = (unsigned __int8)byte_5FE894;
    }
  }
  puts("------------------------------------------------------------------------------------------------------\n");
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : bad asic list:\n", "get_result");
  strcpy(byte_60B5D0, "bad asic list:");
  sub_3CC5C(byte_60B5D0, v100);
  if ( v92 )
  {
LABEL_13:
    v5 = 0;
    for ( i = 0; i < v92; ++i )
    {
      if ( !v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + i] )
      {
        v7 = v5 == 5 * (v5 / 5);
        ++v5;
        if ( v7 )
          putchar(10);
        printf("asic[%03d]      ", i);
      }
    }
  }
LABEL_85:
  puts("\n");
  puts("------------------------------------------------------------------------------------------------------\n");
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : gPattern_test_counter = %d\n\n", "get_result", (unsigned __int8)byte_5FE894);
  snprintf(byte_60B6D0, 0x100u, "gPattern_test_counter = %d\n", (unsigned __int8)byte_5FE894);
  sub_3CC5C(byte_60B6D0, v100);
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  v45 = *(_DWORD *)&v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  printf("%s : valid nonce number = %d,      lost nonce number = %d\n\n", "get_result", v45, v97 - v45);
  v46 = *(_DWORD *)&v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  snprintf(byte_60B7D0, 0x100u, "valid nonce number = %d,      lost nonce number = %d\n", v46, v97 - v46);
  sub_3CC5C(byte_60B7D0, v100);
  *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) = (double)*(unsigned int *)&v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]
                                                                                            / (double)(unsigned int)v97;
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf(
    "%s : nonce_rate = %f %%\n\n",
    "get_result",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  snprintf(
    byte_60B8D0,
    0x100u,
    "nonce_rate = %f %%\n",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  sub_3CC5C(byte_60B8D0, v100);
  v47 = (unsigned __int8)byte_5FE894;
  if ( *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 10000.0 >= (double)*(unsigned int *)(dword_223680 + 324) )
    v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1033] = 1;
  v48 = &v3[264784 * v47];
  v49 = (unsigned __int8)v48[1032];
  if ( v48[1032] )
  {
    sub_1E938(v100, 0x30u);
    v49 = 1;
    printf("%s ", v100);
    printf("%s : ASIC OK\n\n", "get_result");
    v50 = &unk_60B9D0;
    v51 = "ASIC OK\n";
  }
  else
  {
    sub_1E938(v100, 0x30u);
    printf("%s ", v100);
    printf("%s : ASIC NG\n\n", "get_result");
    v51 = "ASIC NG\n";
    v50 = &unk_60BAD0;
  }
  v52 = *(_DWORD *)v51;
  v53 = *((_DWORD *)v51 + 1);
  v54 = *((_DWORD *)v51 + 2);
  *v50 = v52;
  v50[1] = v53;
  v55 = v50 + 2;
  *v55 = v54;
  sub_3CC5C(v55 - 8, v100);
  if ( v3[264784 * (unsigned __int8)byte_5FE894 + 1033] )
  {
    sub_1E938(v100, 0x30u);
    v56 = &unk_60BBD0;
    printf("%s ", v100);
    v49 |= 2u;
    printf("%s : NONCE RATE OK\n\n", "get_result");
    v57 = "NONCE RATE OK\n";
  }
  else
  {
    sub_1E938(v100, 0x30u);
    v56 = &unk_60BCD0;
    printf("%s ", v100);
    printf("%s : NONCE RATE NG\n\n", "get_result");
    v57 = "NONCE RATE NG\n";
  }
  v58 = *(_DWORD *)v57;
  v59 = *((_DWORD *)v57 + 1);
  v60 = *((_DWORD *)v57 + 2);
  v61 = *((_DWORD *)v57 + 3);
  *v56 = v58;
  v56[1] = v59;
  v56[2] = v60;
  v62 = v56 + 3;
  *v62++ = v61;
  *(_BYTE *)v62 = BYTE2(v61);
  sub_3CC5C(v62 - 7, v100);
  v63 = dword_223680;
  if ( *(_DWORD *)(dword_223680 + 64) != 1 )
  {
    if ( v3[264784 * (unsigned __int8)byte_5FE894 + 1034] )
    {
      sub_1E938(v100, 0x30u);
      v49 |= 4u;
      printf("%s ", v100);
      printf("%s : EEPROM OK\n\n", "get_result");
      strcpy(byte_60BDD0, "EEPROM OK\n");
      sub_3CC5C(byte_60BDD0, v100);
    }
    else
    {
      sub_1E938(v100, 0x30u);
      printf("%s ", v100);
      printf("%s : EEPROM OK\n\n", "get_result");
      strcpy(byte_60BED0, "EEPROM OK\n");
      sub_3CC5C(byte_60BED0, v100);
    }
    v63 = dword_223680;
  }
  if ( *(_BYTE *)(v63 + 89) )
  {
    if ( !dword_226084 )
      goto LABEL_130;
    v64 = 1;
    v65 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264751;
    do
    {
      if ( !*++v65 )
        v64 = 0;
    }
    while ( v65 != (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + dword_226084 + 264751 );
    if ( v64 )
    {
LABEL_130:
      v67 = &unk_60BFD0;
      v49 |= 8u;
      v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1035] = 1;
      sub_1E938(v100, 0x30u);
      printf("%s ", v100);
      printf("%s : PIC sensor OK\n\n", "get_result");
      v68 = "PIC sensor OK\n";
    }
    else
    {
      sub_1E938(v100, 0x30u);
      v67 = &unk_60C0D0;
      printf("%s ", v100);
      printf("%s : PIC sensor NG\n\n", "get_result");
      v68 = "PIC sensor NG\n";
    }
    v69 = *(_DWORD *)v68;
    v70 = *((_DWORD *)v68 + 1);
    v71 = *((_DWORD *)v68 + 2);
    v72 = *((_DWORD *)v68 + 3);
    *v67 = v69;
    v67[1] = v70;
    v67[2] = v71;
    v73 = v67 + 3;
    *v73++ = v72;
    *(_BYTE *)v73 = BYTE2(v72);
    sub_3CC5C(v73 - 7, v100);
    v63 = dword_223680;
  }
  if ( *(_BYTE *)(v63 + 90) )
  {
    if ( !dword_22688C )
      goto LABEL_129;
    v74 = 1;
    v75 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755;
    do
    {
      if ( !*++v75 )
        v74 = 0;
    }
    while ( (char *)&unk_2337B0 + dword_22688C + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755 != v75 );
    if ( v74 )
    {
LABEL_129:
      v77 = &unk_60C1D0;
      v49 |= 0x10u;
      v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1036] = 1;
      sub_1E938(v100, 0x30u);
      printf("%s ", v100);
      printf("%s : ASIC sensor OK\n\n", "get_result");
      v78 = "ASIC sensor OK\n";
    }
    else
    {
      sub_1E938(v100, 0x30u);
      v77 = &unk_60C2D0;
      printf("%s ", v100);
      printf("%s : ASIC sensor NG\n\n", "get_result");
      v78 = "ASIC sensor NG\n";
    }
    v79 = *(_DWORD *)v78;
    v80 = *((_DWORD *)v78 + 1);
    v81 = *((_DWORD *)v78 + 2);
    v82 = *((_DWORD *)v78 + 3);
    *v77 = v79;
    v77[1] = v80;
    v77[2] = v81;
    v77[3] = v82;
    sub_3CC5C(v77, v100);
  }
  v83 = &v3[264784 * (unsigned __int8)byte_5FE894];
  if ( v83[1032] )
  {
    if ( !v83[1033] )
      goto LABEL_118;
    v83[265808] = 0;
  }
  else
  {
    if ( v83[1033] )
    {
      v83[265808] = 1;
      goto LABEL_116;
    }
LABEL_118:
    v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265808] = -16;
  }
LABEL_116:
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf("%s : result = 0x%08x\n\n", "get_result", v49);
  snprintf(byte_60C3D0, 0x100u, "result = 0x%08x\n", v49);
  sub_3CC5C(byte_60C3D0, v100);
  sub_1E938(v100, 0x30u);
  printf("%s ", v100);
  printf(
    "%s : test level: %d\n\n",
    "get_result",
    *(_DWORD *)&v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1056]);
  snprintf(
    byte_60C4D0,
    0x100u,
    "test level: %d\n",
    *(_DWORD *)&v3[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1056]);
  sub_3CC5C(byte_60C4D0, v100);
  sub_1EB3C((unsigned __int8)byte_5FE894);
  return v49;
}
