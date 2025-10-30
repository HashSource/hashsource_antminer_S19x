int sub_2A640()
{
  unsigned int v0; // r9
  int v1; // r4
  int v2; // r4
  unsigned int v3; // r10
  int i; // r4
  bool v5; // zf
  int v6; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r4
  char *v10; // r3
  int v11; // r4
  _DWORD *v12; // r3
  const char *v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r2
  _BYTE *v17; // r3
  _DWORD *v18; // r6
  const char *v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _WORD *v24; // r6
  int v25; // r3
  _DWORD *v26; // r3
  int *v27; // r2
  int v28; // r0
  int v29; // r1
  int v30; // r2
  _WORD *v31; // r3
  int v32; // r1
  char *v33; // r3
  _DWORD *v35; // r6
  const char *v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  _WORD *v41; // r6
  int v42; // r1
  char *v43; // r3
  _DWORD *v45; // r6
  const char *v46; // r3
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  char *v51; // r3
  unsigned int v53; // r4
  unsigned int v54; // r10
  int v55; // r8
  int v56; // r2
  int v57; // r3
  char *v58; // r2
  char *v59; // r3
  int v60; // t1
  unsigned int v61; // r11
  int v62; // r9
  int v63; // r1
  bool v64; // cc
  char *v65; // r2
  unsigned int v66; // r11
  unsigned int v67; // r8
  char *v68; // r2
  int v69; // [sp+Ch] [bp-68h]
  int v70; // [sp+10h] [bp-64h]
  int v71; // [sp+1Ch] [bp-58h]
  int v72; // [sp+24h] [bp-50h]
  int v73; // [sp+28h] [bp-4Ch]
  int v74; // [sp+30h] [bp-44h]
  int v75; // [sp+34h] [bp-40h]
  int v76; // [sp+3Ch] [bp-38h]
  char v77[52]; // [sp+40h] [bp-34h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 84);
  v1 = *(_DWORD *)(dword_223680 + 64);
  v72 = v1;
  v76 = *(_DWORD *)(dword_223680 + 72);
  v74 = *(_DWORD *)(dword_223680 + 312);
  v71 = *(_DWORD *)(dword_223680 + 80);
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  if ( v1 == 1 )
  {
    v2 = v74 * v76;
    v73 = v74 * v76;
  }
  else
  {
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    v2 = v74 * v76;
    v73 = v74 * v76 * v72;
    printf("%s : Hashboard require nonce number:               %d\n\n", "get_result_hw_sweep", v73);
    snprintf(byte_6105D4, 0x100u, "Hashboard require nonce number:               %d\n", v73);
    sub_3CC5C(byte_6105D4, v77);
  }
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : every voltage domain require nonce number:     %d\n\n", "get_result_hw_sweep", v2 * v0);
  snprintf(byte_6106D4, 0x100u, "every voltage domain require nonce number:     %d\n", v2 * v0);
  sub_3CC5C(byte_6106D4, v77);
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : every ASIC require nonce number:               %d\n\n", "get_result_hw_sweep", v2);
  snprintf(byte_6107D4, 0x100u, "every ASIC require nonce number:               %d\n", v2);
  sub_3CC5C(byte_6107D4, v77);
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : every CORE require nonce number:               %d\n\n", "get_result_hw_sweep", v74);
  snprintf(byte_6108D4, 0x100u, "every CORE require nonce number:               %d\n", v74);
  sub_3CC5C(byte_6108D4, v77);
  puts("------------------------------------------------------------------------------------------------------\n");
  if ( *(_BYTE *)(dword_223680 + 640) )
  {
    byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1032] = 1;
    if ( v71 )
    {
      v53 = v0;
      v54 = v0 >> 1;
      v69 = 0;
      v70 = 0;
      while ( 1 )
      {
        if ( !v53 )
        {
          printf("Voltage domain [%02d] :", v70);
LABEL_77:
          putchar(10);
          goto LABEL_68;
        }
        v55 = 0;
        v56 = (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894;
        v57 = 2 * (v56 + 131096 + v69) - 2;
        v58 = (char *)&unk_2337B0 + 2 * v56 + 2 * v53 + 2 * v69 + 262190;
        v59 = (char *)&unk_2337B0 + v57;
        do
        {
          v60 = *((unsigned __int16 *)v59 + 1);
          v59 += 2;
          v55 += v60;
        }
        while ( v59 != v58 );
        if ( v53 <= 5 )
          break;
        printf("Voltage domain [%02d] nonce number :   %5d\n", v70, v55);
        v61 = 1;
        v62 = v69 - 1;
        do
        {
          while ( 1 )
          {
            v65 = &byte_2333A8[2 * v62 + 262192 + 2 * v61 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
            if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + v62 + v61] )
              printf("      asic[%03d] = %4d,", v62 + v61, *((unsigned __int16 *)v65 + 516));
            else
              printf("  !!! asic[%03d] = %4d,", v62 + v61, *((unsigned __int16 *)v65 + 516));
            if ( v61 != 1 )
            {
              sub_1892EC(v61, v54);
              if ( !v63 )
                break;
            }
            v64 = v53 > v61++;
            if ( !v64 )
              goto LABEL_67;
          }
          putchar(10);
          v64 = v53 > v61++;
        }
        while ( v64 );
LABEL_67:
        puts("\n");
LABEL_68:
        v69 += v53;
        if ( v71 == ++v70 )
          goto LABEL_4;
      }
      printf("Voltage domain [%02d] :", v70);
      v66 = 0;
      v75 = v55;
      v67 = v53 - 1;
      while ( 1 )
      {
        v68 = &byte_2333A8[2 * v69 + 262192 + 2 * v66 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
        if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + v69 + v66] )
        {
          printf("      asic[%03d] = %4d,", v69 + v66, *((unsigned __int16 *)v68 + 516));
          v5 = v66++ == v67;
          if ( v5 )
            goto LABEL_76;
LABEL_72:
          if ( v53 <= v66 )
            goto LABEL_77;
        }
        else
        {
          printf("  !!! asic[%03d] = %4d,", v69 + v66, *((unsigned __int16 *)v68 + 516));
          v5 = v66++ == v67;
          if ( !v5 )
            goto LABEL_72;
LABEL_76:
          printf("      : domain nonce number :  %5d\n", v75);
          if ( v53 <= v66 )
            goto LABEL_77;
        }
      }
    }
  }
LABEL_4:
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : bad asic list:\n", "get_result_hw_sweep");
  strcpy(byte_6109D4, "bad asic list:");
  sub_3CC5C(byte_6109D4, v77);
  if ( v72 )
  {
    v3 = 0;
    for ( i = 0; i != v72; ++i )
    {
      if ( !byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + i] )
      {
        v5 = v3 == 5 * (v3 / 5);
        ++v3;
        if ( v5 )
          putchar(10);
        printf("asic[%03d]      ", i);
      }
    }
  }
  puts("\n");
  puts("------------------------------------------------------------------------------------------------------\n");
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : gPattern_test_counter = %d\n\n", "get_result_hw_sweep", (unsigned __int8)byte_5FE894);
  snprintf(byte_610AD4, 0x100u, "gPattern_test_counter = %d\n", (unsigned __int8)byte_5FE894);
  sub_3CC5C(byte_610AD4, v77);
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : asic_num = %d, core_num = %d, pattern_num = %d\n\n", "get_result_hw_sweep", v72, v76, v74);
  snprintf(byte_610BD4, 0x100u, "asic_num = %d, core_num = %d, pattern_num = %d\n", v72, v76, v74);
  sub_3CC5C(byte_610BD4, v77);
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  v6 = *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  printf("%s : valid nonce number = %d,      lost nonce number = %d\n\n", "get_result_hw_sweep", v6, v73 - v6);
  v7 = *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  snprintf(byte_610CD4, 0x100u, "valid nonce number = %d,      lost nonce number = %d\n", v7, v73 - v7);
  sub_3CC5C(byte_610CD4, v77);
  *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) = (double)*(unsigned int *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]
                                                                                            / (double)(unsigned int)v73;
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf(
    "%s : nonce_rate = %f %%\n\n",
    "get_result_hw_sweep",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  snprintf(
    byte_610DD4,
    0x100u,
    "nonce_rate = %f %%\n",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  sub_3CC5C(byte_610DD4, v77);
  v8 = (unsigned __int8)byte_5FE894;
  v9 = (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894;
  if ( *(double *)((char *)&unk_2337B0 + v9 + 16) * 10000.0 >= (double)*(unsigned int *)(dword_223680 + 324) )
    byte_2333A8[v9 + 1033] = 1;
  v10 = &byte_2333A8[(_DWORD)&loc_40A50 * v8];
  v11 = (unsigned __int8)v10[1032];
  if ( v10[1032] )
  {
    sub_1E938(v77, 0x30u);
    v11 = 1;
    printf("%s ", v77);
    printf("%s : ASIC OK\n\n", "get_result_hw_sweep");
    v12 = &unk_610ED4;
    v13 = "ASIC OK\n";
  }
  else
  {
    sub_1E938(v77, 0x30u);
    printf("%s ", v77);
    printf("%s : ASIC NG\n\n", "get_result_hw_sweep");
    v13 = "ASIC NG\n";
    v12 = &unk_610FD4;
  }
  v14 = *(_DWORD *)v13;
  v15 = *((_DWORD *)v13 + 1);
  v16 = *((_DWORD *)v13 + 2);
  *v12 = v14;
  v12[1] = v15;
  v17 = v12 + 2;
  *v17 = v16;
  sub_3CC5C(v17 - 8, v77);
  if ( byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1033] )
  {
    sub_1E938(v77, 0x30u);
    v18 = &unk_6110D4;
    printf("%s ", v77);
    v11 |= 2u;
    printf("%s : NONCE RATE OK\n\n", "get_result_hw_sweep");
    v19 = "NONCE RATE OK\n";
  }
  else
  {
    sub_1E938(v77, 0x30u);
    v18 = &unk_6111D4;
    printf("%s ", v77);
    printf("%s : NONCE RATE NG\n\n", "get_result_hw_sweep");
    v19 = "NONCE RATE NG\n";
  }
  v20 = *(_DWORD *)v19;
  v21 = *((_DWORD *)v19 + 1);
  v22 = *((_DWORD *)v19 + 2);
  v23 = *((_DWORD *)v19 + 3);
  *v18 = v20;
  v18[1] = v21;
  v18[2] = v22;
  v24 = v18 + 3;
  *v24++ = v23;
  *(_BYTE *)v24 = BYTE2(v23);
  sub_3CC5C(v24 - 7, v77);
  v25 = dword_223680;
  if ( *(_DWORD *)(dword_223680 + 64) != 1 )
  {
    if ( byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1034] )
    {
      sub_1E938(v77, 0x30u);
      v11 |= 4u;
      printf("%s ", v77);
      printf("%s : EEPROM OK\n\n", "get_result_hw_sweep");
      LOWORD(v27) = 10956;
      v26 = &unk_6112D4;
    }
    else
    {
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : EEPROM OK\n\n", "get_result_hw_sweep");
      v26 = &unk_6113D4;
      LOWORD(v27) = (unsigned __int16)"EEPROM OK\n";
    }
    HIWORD(v27) = (unsigned int)"EEPROM OK\n" >> 16;
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    *v26 = v28;
    v26[1] = v29;
    v31 = v26 + 2;
    *v31++ = v30;
    *(_BYTE *)v31 = BYTE2(v30);
    sub_3CC5C(v31 - 5, v77);
    v25 = dword_223680;
  }
  if ( *(_BYTE *)(v25 + 89) )
  {
    if ( !dword_226084 )
      goto LABEL_65;
    v32 = 1;
    v33 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264751;
    do
    {
      if ( !*++v33 )
        v32 = 0;
    }
    while ( (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + dword_226084 + 264751 != v33 );
    if ( v32 )
    {
LABEL_65:
      v35 = &unk_6114D4;
      v11 |= 8u;
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1035] = 1;
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : PIC sensor OK\n\n", "get_result_hw_sweep");
      v36 = "PIC sensor OK\n";
    }
    else
    {
      v35 = &unk_6115D4;
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : PIC sensor NG\n\n", "get_result_hw_sweep");
      v36 = "PIC sensor NG\n";
    }
    v37 = *(_DWORD *)v36;
    v38 = *((_DWORD *)v36 + 1);
    v39 = *((_DWORD *)v36 + 2);
    v40 = *((_DWORD *)v36 + 3);
    *v35 = v37;
    v35[1] = v38;
    v35[2] = v39;
    v41 = v35 + 3;
    *v41++ = v40;
    *(_BYTE *)v41 = BYTE2(v40);
    sub_3CC5C(v41 - 7, v77);
    v25 = dword_223680;
  }
  if ( *(_BYTE *)(v25 + 90) )
  {
    if ( !dword_22688C )
      goto LABEL_64;
    v42 = 1;
    v43 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755;
    do
    {
      if ( !*++v43 )
        v42 = 0;
    }
    while ( (char *)&unk_2337B0 + dword_22688C + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755 != v43 );
    if ( v42 )
    {
LABEL_64:
      v45 = &unk_6116D4;
      v11 |= 0x10u;
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1036] = 1;
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : ASIC sensor OK\n\n", "get_result_hw_sweep");
      v46 = "ASIC sensor OK\n";
    }
    else
    {
      v45 = &unk_6117D4;
      sub_1E938(v77, 0x30u);
      printf("%s ", v77);
      printf("%s : ASIC sensor NG\n\n", "get_result_hw_sweep");
      v46 = "ASIC sensor NG\n";
    }
    v47 = *(_DWORD *)v46;
    v48 = *((_DWORD *)v46 + 1);
    v49 = *((_DWORD *)v46 + 2);
    v50 = *((_DWORD *)v46 + 3);
    *v45 = v47;
    v45[1] = v48;
    v45[2] = v49;
    v45[3] = v50;
    sub_3CC5C(v45, v77);
  }
  v51 = &byte_2333A8[264784 * (unsigned __int8)byte_5FE894];
  if ( v51[1032] )
  {
    if ( v51[1033] )
    {
      v51[265808] = 0;
      goto LABEL_43;
    }
  }
  else if ( v51[1033] )
  {
    v51[265808] = 1;
    goto LABEL_43;
  }
  byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265808] = -16;
LABEL_43:
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf("%s : result = 0x%08x\n\n", "get_result_hw_sweep", v11);
  snprintf(byte_6118D4, 0x100u, "result = 0x%08x\n", v11);
  sub_3CC5C(byte_6118D4, v77);
  sub_1E938(v77, 0x30u);
  printf("%s ", v77);
  printf(
    "%s : test level: %d\n\n",
    "get_result_hw_sweep",
    *(_DWORD *)&byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1056]);
  snprintf(
    byte_6119D4,
    0x100u,
    "test level: %d\n",
    *(_DWORD *)&byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1056]);
  sub_3CC5C(byte_6119D4, v77);
  sub_1EB3C((unsigned __int8)byte_5FE894);
  return v11;
}
