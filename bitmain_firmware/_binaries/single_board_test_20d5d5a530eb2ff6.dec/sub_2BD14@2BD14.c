int sub_2BD14()
{
  unsigned int v0; // r11
  char *v1; // r9
  int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // lr
  char *v6; // r7
  int v7; // r2
  char *v8; // r9
  _BYTE *v9; // r4
  char *v10; // r7
  char *v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // t1
  unsigned int v14; // r7
  int v15; // r4
  int v16; // r1
  bool v17; // cc
  char *v18; // r2
  int v19; // r9
  unsigned int v20; // r11
  bool v21; // zf
  int v22; // r2
  int v23; // r3
  int v24; // r4
  char *v25; // r3
  int v26; // r4
  _DWORD *v27; // r3
  const char *v28; // r2
  int v29; // r0
  int v30; // r1
  int v31; // r2
  _BYTE *v32; // r3
  _DWORD *v33; // r6
  const char *v34; // r3
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  _WORD *v39; // r6
  int v40; // r3
  int v41; // r1
  char *v42; // r3
  _DWORD *v44; // r6
  const char *v45; // r3
  int v46; // r0
  int v47; // r1
  int v48; // r2
  int v49; // r3
  _WORD *v50; // r6
  int v51; // r1
  char *v52; // r3
  _DWORD *v54; // r6
  const char *v55; // r3
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  char *v60; // r3
  unsigned int v62; // r8
  char *v63; // r4
  char *v64; // r2
  unsigned int v65; // [sp+8h] [bp-74h]
  int v66; // [sp+Ch] [bp-70h]
  int v67; // [sp+10h] [bp-6Ch]
  int v68; // [sp+14h] [bp-68h]
  char *v69; // [sp+28h] [bp-54h]
  int v70; // [sp+30h] [bp-4Ch]
  int v71; // [sp+38h] [bp-44h]
  int v72; // [sp+3Ch] [bp-40h]
  unsigned int v73; // [sp+40h] [bp-3Ch]
  char v74[52]; // [sp+48h] [bp-34h] BYREF

  v0 = *(_DWORD *)(dword_223680 + 72);
  v1 = *(char **)(dword_223680 + 84);
  v2 = *(_DWORD *)(dword_223680 + 64);
  v71 = v2;
  v70 = *(_DWORD *)(dword_223680 + 80);
  puts("\n\n------------------------------------------------------------------------------------------------------\n");
  if ( v2 == 1 )
  {
    v72 = v0;
  }
  else
  {
    v72 = v0 * v2;
    sub_1E938(v74, 0x30u);
    printf("%s ", v74);
    printf("%s : Hashboard require nonce number:               %d\n\n", "get_result_super_software_pattern", v0 * v2);
    snprintf(byte_612BD8, 0x100u, "Hashboard require nonce number:               %d\n", v0 * v2);
    sub_3CC5C(byte_612BD8, v74);
  }
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf(
    "%s : every voltage domain require nonce number:     %d\n\n",
    "get_result_super_software_pattern",
    (_DWORD)v1 * v0);
  snprintf(byte_612CD8, 0x100u, "every voltage domain require nonce number:     %d\n", (_DWORD)v1 * v0);
  sub_3CC5C(byte_612CD8, v74);
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : every ASIC require nonce number:               %d\n\n", "get_result_super_software_pattern", v0);
  snprintf(byte_612DD8, 0x100u, "every ASIC require nonce number:               %d\n", v0);
  sub_3CC5C(byte_612DD8, v74);
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : every CORE require nonce number:               %d\n\n", "get_result_super_software_pattern", 1);
  snprintf(byte_612ED8, 0x100u, "every CORE require nonce number:               %d\n", 1);
  sub_3CC5C(byte_612ED8, v74);
  puts(
    "--------------------------every_asic_got_nonce_num---------------------------------------------------------------\n");
  puts(
    "----------every_asic_reg_ntick_nonce_num----------------------------------------------------------------------------"
    "----------------\n");
  v3 = dword_223680;
  if ( !*(_BYTE *)(dword_223680 + 640) )
  {
    v68 = *(unsigned __int8 *)(dword_223680 + 640);
    goto LABEL_23;
  }
  byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1032] = 1;
  if ( v70 )
  {
    v66 = 0;
    v68 = 0;
    v67 = 0;
    v73 = (unsigned int)v1 >> 1;
    while ( !v1 )
    {
      printf("Voltage domain [%02d] :", v67);
      putchar(10);
LABEL_74:
      v66 += (int)v1;
      if ( v70 == ++v67 )
      {
        v3 = dword_223680;
        goto LABEL_23;
      }
    }
    v4 = 0;
    v5 = dword_223680;
    v69 = v1;
    v6 = &v1[(_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894 + 131351 + v66];
    v7 = (int)&unk_2337B0;
    v8 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
    v9 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v66 + 264496;
    v10 = (char *)&unk_2337B0 + 2 * (_DWORD)v6;
    v11 = (char *)&unk_2337B0 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894 + 2 * v66 + 262702;
    do
    {
      v13 = *((unsigned __int16 *)v11 + 1);
      v11 += 2;
      v12 = v13;
      v4 += v13;
      if ( v0 > v13 )
      {
        v7 = 1566804174 * *(_DWORD *)(v5 + 332) * *(_DWORD *)(v5 + 312);
        if ( v12 < 894 * *(_DWORD *)(v5 + 332) * *(_DWORD *)(v5 + 312) / 0x2710u )
        {
          v8[1032] = 0;
          *v9 = 0;
        }
      }
      ++v9;
    }
    while ( v11 != v10 );
    v1 = v69;
    v68 += v4;
    if ( (unsigned int)v69 > 5 )
    {
      printf("Voltage domain [%02d] nonce number :   %5d\n", v67, v4);
      v14 = 1;
      v15 = v66 - 1;
      do
      {
        while ( 1 )
        {
          v18 = &byte_2333A8[2 * v15 + 262704 + 2 * v14 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
          if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + v15 + v14] )
            printf("      asic[%03d] = %4d,", v15 + v14, *((unsigned __int16 *)v18 + 516));
          else
            printf("  !!! asic[%03d] = %4d,", v15 + v14, *((unsigned __int16 *)v18 + 516));
          if ( v14 != 1 )
          {
            sub_1892EC(v14, v73);
            if ( !v16 )
              break;
          }
          v17 = (unsigned int)v69 > v14++;
          if ( !v17 )
            goto LABEL_74;
        }
        putchar(10);
        v17 = (unsigned int)v69 > v14++;
      }
      while ( v17 );
      goto LABEL_74;
    }
    v62 = 0;
    v63 = v69 - 1;
    printf("Voltage domain [%02d] :", v67, v7);
    while ( 1 )
    {
      v64 = &byte_2333A8[2 * v66 + 262704 + 2 * v62 + 2 * (_DWORD)&loc_20528 * (unsigned __int8)byte_5FE894];
      if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + v66 + v62] )
      {
        printf("      asic[%03d] = %4d,", v66 + v62, *((unsigned __int16 *)v64 + 516));
        v21 = v62++ == (_DWORD)v63;
        if ( v21 )
          goto LABEL_82;
LABEL_78:
        if ( (unsigned int)v69 <= v62 )
          goto LABEL_83;
      }
      else
      {
        printf("  !!! asic[%03d] = %4d,", v66 + v62, *((unsigned __int16 *)v64 + 516));
        v21 = v62++ == (_DWORD)v63;
        if ( !v21 )
          goto LABEL_78;
LABEL_82:
        printf("      : domain nonce number :  %5d\n", v4);
        if ( (unsigned int)v69 <= v62 )
        {
LABEL_83:
          putchar(10);
          goto LABEL_74;
        }
      }
    }
  }
  v68 = 0;
LABEL_23:
  if ( *(_BYTE *)(v3 + 269) )
    *(_DWORD *)&byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1072] = v68;
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : bad asic list:\n", "get_result_super_software_pattern");
  strcpy(byte_612FD8, "bad asic list:");
  sub_3CC5C(byte_612FD8, v74);
  if ( v71 )
  {
    v19 = 0;
    v65 = v0;
    v20 = 0;
    do
    {
      if ( !byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265528 + v19] )
      {
        v21 = v20 == 5 * (v20 / 5);
        ++v20;
        if ( v21 )
          putchar(10);
        printf("asic[%03d]      ", v19);
      }
      ++v19;
    }
    while ( v71 != v19 );
    v0 = v65;
  }
  puts("\n");
  puts("------------------------------------------------------------------------------------------------------\n");
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : gPattern_test_counter = %d\n\n", "get_result_super_software_pattern", (unsigned __int8)byte_5FE894);
  snprintf(byte_6130D8, 0x100u, "gPattern_test_counter = %d\n", (unsigned __int8)byte_5FE894);
  sub_3CC5C(byte_6130D8, v74);
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : asic_num = %d, core_num = %d, pattern_num = %d\n\n", "get_result_super_software_pattern", v71, v0, 1);
  snprintf(byte_6131D8, 0x100u, "asic_num = %d, core_num = %d, pattern_num = %d\n", v71, v0, 1);
  sub_3CC5C(byte_6131D8, v74);
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  v22 = *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  printf(
    "%s : valid nonce number = %d,      lost nonce number = %d\n\n",
    "get_result_super_software_pattern",
    v22,
    v72 - v22);
  v23 = *(_DWORD *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072];
  snprintf(byte_6132D8, 0x100u, "valid nonce number = %d,      lost nonce number = %d\n", v23, v72 - v23);
  sub_3CC5C(byte_6132D8, v74);
  *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) = (double)*(unsigned int *)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1072]
                                                                                            / (double)(unsigned int)v72;
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf(
    "%s : nonce_rate = %f %%\n\n",
    "get_result_super_software_pattern",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  snprintf(
    byte_6133D8,
    0x100u,
    "nonce_rate = %f %%\n",
    *(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 16) * 100.0);
  sub_3CC5C(byte_6133D8, v74);
  v24 = (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894;
  v25 = &byte_2333A8[264784 * (unsigned __int8)byte_5FE894];
  if ( *(double *)((char *)&unk_2337B0 + v24 + 16) * 10000.0 >= (double)*(unsigned int *)(dword_223680 + 324) )
    byte_2333A8[v24 + 1033] = 1;
  v26 = (unsigned __int8)v25[1032];
  if ( v25[1032] )
  {
    sub_1E938(v74, 0x30u);
    v26 = 1;
    printf("%s ", v74);
    printf("%s : ASIC OK\n\n", "get_result_super_software_pattern");
    v27 = &unk_6134D8;
    v28 = "ASIC OK\n";
  }
  else
  {
    sub_1E938(v74, 0x30u);
    printf("%s ", v74);
    printf("%s : ASIC NG\n\n", "get_result_super_software_pattern");
    v28 = "ASIC NG\n";
    v27 = &unk_6135D8;
  }
  v29 = *(_DWORD *)v28;
  v30 = *((_DWORD *)v28 + 1);
  v31 = *((_DWORD *)v28 + 2);
  *v27 = v29;
  v27[1] = v30;
  v32 = v27 + 2;
  *v32 = v31;
  sub_3CC5C(v32 - 8, v74);
  if ( byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1033] )
  {
    sub_1E938(v74, 0x30u);
    v33 = &unk_6136D8;
    printf("%s ", v74);
    v26 |= 2u;
    printf("%s : NONCE RATE OK\n\n", "get_result_super_software_pattern");
    v34 = "NONCE RATE OK\n";
  }
  else
  {
    sub_1E938(v74, 0x30u);
    v33 = &unk_6137D8;
    printf("%s ", v74);
    printf("%s : NONCE RATE NG\n\n", "get_result_super_software_pattern");
    v34 = "NONCE RATE NG\n";
  }
  v35 = *(_DWORD *)v34;
  v36 = *((_DWORD *)v34 + 1);
  v37 = *((_DWORD *)v34 + 2);
  v38 = *((_DWORD *)v34 + 3);
  *v33 = v35;
  v33[1] = v36;
  v33[2] = v37;
  v39 = v33 + 3;
  *v39++ = v38;
  *(_BYTE *)v39 = BYTE2(v38);
  sub_3CC5C(v39 - 7, v74);
  v40 = dword_223680;
  if ( *(_DWORD *)(dword_223680 + 64) != 1 )
  {
    if ( byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1034] )
    {
      sub_1E938(v74, 0x30u);
      v26 |= 4u;
      printf("%s ", v74);
      printf("%s : EEPROM OK\n\n", "get_result_super_software_pattern");
      strcpy(byte_6138D8, "EEPROM OK\n");
      sub_3CC5C(byte_6138D8, v74);
    }
    else
    {
      sub_1E938(v74, 0x30u);
      printf("%s ", v74);
      printf("%s : EEPROM OK\n\n", "get_result_super_software_pattern");
      strcpy(byte_6139D8, "EEPROM OK\n");
      sub_3CC5C(byte_6139D8, v74);
    }
    v40 = dword_223680;
  }
  if ( *(_BYTE *)(v40 + 89) )
  {
    if ( !dword_226084 )
      goto LABEL_72;
    v41 = 1;
    v42 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264751;
    do
    {
      if ( !*++v42 )
        v41 = 0;
    }
    while ( v42 != (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + dword_226084 + 264751 );
    if ( v41 )
    {
LABEL_72:
      v44 = &unk_613AD8;
      v26 |= 8u;
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1035] = 1;
      sub_1E938(v74, 0x30u);
      printf("%s ", v74);
      printf("%s : PIC sensor OK\n\n", "get_result_super_software_pattern");
      v45 = "PIC sensor OK\n";
    }
    else
    {
      v44 = &unk_613BD8;
      sub_1E938(v74, 0x30u);
      printf("%s ", v74);
      printf("%s : PIC sensor NG\n\n", "get_result_super_software_pattern");
      v45 = "PIC sensor NG\n";
    }
    v46 = *(_DWORD *)v45;
    v47 = *((_DWORD *)v45 + 1);
    v48 = *((_DWORD *)v45 + 2);
    v49 = *((_DWORD *)v45 + 3);
    *v44 = v46;
    v44[1] = v47;
    v44[2] = v48;
    v50 = v44 + 3;
    *v50++ = v49;
    *(_BYTE *)v50 = BYTE2(v49);
    sub_3CC5C(v50 - 7, v74);
    v40 = dword_223680;
  }
  if ( *(_BYTE *)(v40 + 90) )
  {
    if ( !dword_22688C )
      goto LABEL_71;
    v51 = 1;
    v52 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755;
    do
    {
      if ( !*++v52 )
        v51 = 0;
    }
    while ( v52 != (char *)&unk_2337B0 + dword_22688C + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264755 );
    if ( v51 )
    {
LABEL_71:
      v54 = &unk_613CD8;
      v26 |= 0x10u;
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1036] = 1;
      sub_1E938(v74, 0x30u);
      printf("%s ", v74);
      printf("%s : ASIC sensor OK\n\n", "get_result_super_software_pattern");
      v55 = "ASIC sensor OK\n";
    }
    else
    {
      v54 = &unk_613DD8;
      sub_1E938(v74, 0x30u);
      printf("%s ", v74);
      printf("%s : ASIC sensor NG\n\n", "get_result_super_software_pattern");
      v55 = "ASIC sensor NG\n";
    }
    v56 = *(_DWORD *)v55;
    v57 = *((_DWORD *)v55 + 1);
    v58 = *((_DWORD *)v55 + 2);
    v59 = *((_DWORD *)v55 + 3);
    *v54 = v56;
    v54[1] = v57;
    v54[2] = v58;
    v54[3] = v59;
    sub_3CC5C(v54, v74);
  }
  v60 = &byte_2333A8[264784 * (unsigned __int8)byte_5FE894];
  if ( v60[1032] )
  {
    if ( v60[1033] )
    {
      v60[265808] = 0;
      goto LABEL_65;
    }
  }
  else if ( v60[1033] )
  {
    v60[265808] = 1;
    goto LABEL_65;
  }
  byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265808] = -16;
LABEL_65:
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf("%s : result = 0x%08x\n\n", "get_result_super_software_pattern", v26);
  snprintf(byte_613ED8, 0x100u, "result = 0x%08x\n", v26);
  sub_3CC5C(byte_613ED8, v74);
  sub_1E938(v74, 0x30u);
  printf("%s ", v74);
  printf(
    "%s : test level: %d\n\n",
    "get_result_super_software_pattern",
    *(_DWORD *)&byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1056]);
  snprintf(
    byte_613FD8,
    0x100u,
    "test level: %d\n",
    *(_DWORD *)&byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1056]);
  sub_3CC5C(byte_613FD8, v74);
  sub_1EB3C((unsigned __int8)byte_5FE894);
  return v26;
}
