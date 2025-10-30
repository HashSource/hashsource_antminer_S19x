int __fastcall sub_32B0C(
        const char *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char *a7,
        int a8)
{
  int v12; // r6
  char *v13; // r11
  int v14; // r4
  int v15; // r4
  _DWORD *v16; // r4
  int v17; // r3
  unsigned int v19; // r5
  unsigned __int8 *v20; // r6
  int v21; // r4
  int v22; // t1
  unsigned __int8 *v23; // r8
  int v24; // t1
  unsigned int v25; // r3
  _DWORD *v26; // r4
  int v27; // r3
  int v28; // r6
  const char *v29; // r5
  int v30; // r0
  const char *v31; // r4
  int v32; // r4
  int v33; // r4
  int v34; // r4
  const char *v35; // r5
  int v36; // r3
  const char *v37; // r4
  const char *v38; // r4
  int v39; // r0
  _BYTE *v40; // r3
  const char *v41; // r2
  const char *v42; // r3
  unsigned int v43; // r6
  _DWORD *v44; // r5
  int v45; // r2
  char *v46; // r5
  unsigned int v47; // r4
  int v48; // r8
  int v49; // t1
  int v50; // r11
  int v51; // r2
  int v52; // r7
  unsigned int v53; // r6
  _DWORD *v54; // r11
  int v55; // r4
  int v56; // t1
  unsigned int v57; // r3
  _BYTE *v58; // r2
  const char *v59; // r2
  const char *v60; // r3
  _BYTE *v61; // r2
  const char *v62; // r2
  const char *v63; // r3
  int v64; // r2
  const char *v65; // r2
  const char *v66; // r3
  int format; // [sp+20h] [bp-8Ch]
  char *formata; // [sp+20h] [bp-8Ch]
  char *formatb; // [sp+20h] [bp-8Ch]
  char *s1; // [sp+24h] [bp-88h]
  char *v71; // [sp+2Ch] [bp-80h]
  int v75; // [sp+3Ch] [bp-70h]
  int v76; // [sp+40h] [bp-6Ch]
  int v77; // [sp+44h] [bp-68h]
  int v78; // [sp+48h] [bp-64h]
  int v79; // [sp+4Ch] [bp-60h]
  int v80; // [sp+50h] [bp-5Ch]
  int v81; // [sp+54h] [bp-58h]
  int v82; // [sp+58h] [bp-54h]
  int v83; // [sp+5Ch] [bp-50h]
  int v84; // [sp+60h] [bp-4Ch]
  const char *v85; // [sp+64h] [bp-48h] BYREF
  _DWORD v86[2]; // [sp+68h] [bp-44h] BYREF
  _DWORD v87[2]; // [sp+70h] [bp-3Ch]
  char v88[52]; // [sp+78h] [bp-34h] BYREF

  v85 = a4;
  v87[0] = 0;
  v86[0] = 0;
  v86[1] = 0;
  *(_DWORD *)((char *)v87 + 3) = 0;
  sub_1E938(v88, 0x30u);
  printf("%s ", v88);
  printf("%s : %s %s %s%s%s %s %s BIN%d\n", "find_test_standard_position", a1, a2, a4, a5, a6, a3, a7, a8);
  snprintf(byte_61F644, 0x100u, "%s %s %s%s%s %s %s BIN%d", a1, a2, a4, a5, a6, a3, a7, a8);
  sub_3CC5C(byte_61F644, v88);
  s1 = *(char **)(dword_61CB1C + 100);
  if ( !s1 )
    return 0;
  v12 = 0;
  v13 = 0;
  v79 = 0;
  v77 = 0;
  v75 = 0;
  v81 = 0;
  v78 = 0;
  v76 = 0;
  v84 = 0;
  v83 = 0;
  v80 = 0;
  format = 0;
  v82 = 1;
  while ( 1 )
  {
    if ( strcmp(s1, a1) )
      goto LABEL_22;
    v14 = *((_DWORD *)s1 + 6);
    if ( v14 )
    {
      while ( strcmp((const char *)(v14 + 4), a2) || strcmp((const char *)(v14 + 28), a3) )
      {
        v14 = *(_DWORD *)(v14 + 128);
        if ( !v14 )
          goto LABEL_8;
      }
      v19 = 0;
      *(_DWORD *)(dword_223680 + 64) = *(_DWORD *)(v14 + 52);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : Asic_Num: %d\n", "find_test_standard_position", *(_DWORD *)(dword_223680 + 64));
      snprintf(byte_61F744, 0x100u, "Asic_Num: %d", *(_DWORD *)(dword_223680 + 64));
      sub_3CC5C(byte_61F744, v88);
      *(_DWORD *)(dword_223680 + 80) = *(_DWORD *)(v14 + 56);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : Voltage_Domain: %d\n", "find_test_standard_position", *(_DWORD *)(dword_223680 + 80));
      snprintf(byte_61F844, 0x100u, "Voltage_Domain: %d", *(_DWORD *)(dword_223680 + 80));
      sub_3CC5C(byte_61F844, v88);
      *(_DWORD *)(dword_223680 + 84) = *(_DWORD *)(v14 + 60);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : Asic_Num_Per_Voltage_Domain: %d\n", "find_test_standard_position", *(_DWORD *)(dword_223680 + 84));
      snprintf(byte_61F944, 0x100u, "Asic_Num_Per_Voltage_Domain: %d", *(_DWORD *)(dword_223680 + 84));
      sub_3CC5C(byte_61F944, v88);
      if ( dword_61DD28 )
      {
        v20 = byte_6E3308;
        v21 = v14 + 60;
        do
        {
          v22 = *(_DWORD *)(v21 + 4);
          v21 += 4;
          v23 = v20;
          *v20 = v22;
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          v24 = *v20++;
          printf("%s : APW_power_version[%d]: %d\n", "find_test_standard_position", v19, v24);
          v25 = v19++;
          snprintf(byte_61FA44, 0x100u, "APW_power_version[%d]: %d", v25, *v23);
          sub_3CC5C(byte_61FA44, v88);
        }
        while ( dword_61DD28 > v19 );
      }
    }
    else
    {
LABEL_8:
      if ( !v12 )
      {
        sub_1E938(v88, 0x30u);
        printf("%s ", v88);
        printf("%s : can't find:: board_name: %s, asic_type: %s\n", "find_test_standard_position", a2, a3);
        snprintf(byte_61FB44, 0x100u, "can't find:: board_name: %s, asic_type: %s", a2, a3);
        sub_3CC5C(byte_61FB44, v88);
        goto LABEL_22;
      }
    }
    v15 = *((_DWORD *)s1 + 11);
    if ( v15 )
    {
      while ( strcmp((const char *)(v15 + 72), a7) || a8 != *(_DWORD *)(v15 + 96) )
      {
        v15 = *(_DWORD *)(v15 + 104);
        if ( !v15 )
          goto LABEL_13;
      }
      v28 = *(_DWORD *)(v15 + 100);
      v29 = *(const char **)(v28 + 112);
      if ( !v29 || (v30 = strcmp(*(const char **)(v15 + 100), *(const char **)(v28 + 112)), v31 = v29, v30 >= 0) )
      {
        v31 = (const char *)v28;
        v29 = (const char *)v28;
      }
      strcpy((char *)(dword_223680 + 648), v31);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : version: %s\n", "find_test_standard_position", (const char *)(dword_223680 + 648));
      snprintf(byte_61FC44, 0x100u, "version: %s", (const char *)(dword_223680 + 648));
      sub_3CC5C(byte_61FC44, v88);
      v32 = *((_DWORD *)v29 + 6);
      v75 = v32;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : pattern_id: %d\n", "find_test_standard_position", v32);
      snprintf(byte_61FD44, 0x100u, "pattern_id: %d", v32);
      sub_3CC5C(byte_61FD44, v88);
      v33 = *((_DWORD *)v29 + 7);
      v77 = v33;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg_id: %d\n", "find_test_standard_position", v33);
      snprintf(byte_61FE44, 0x100u, "asic_reg_id: %d", v33);
      sub_3CC5C(byte_61FE44, v88);
      v34 = *((_DWORD *)v29 + 8);
      v79 = v34;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : test_method_id: %d\n", "find_test_standard_position", v34);
      snprintf(byte_61FF44, 0x100u, "test_method_id: %d", v34);
      sub_3CC5C(byte_61FF44, v88);
      *(_DWORD *)(dword_223680 + 664) = *((_DWORD *)v29 + 9);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : version: %d\n", "find_test_standard_position", *(_DWORD *)(dword_223680 + 664));
      snprintf(byte_620044, 0x100u, "version: %d", *(_DWORD *)(dword_223680 + 664));
      sub_3CC5C(byte_620044, v88);
      *(_DWORD *)(dword_223680 + 632) = *((_DWORD *)v29 + 10);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : Fan_Speed: %d\n", "find_test_standard_position", *(_DWORD *)(dword_223680 + 632));
      snprintf(byte_620144, 0x100u, "Fan_Speed: %d", *(_DWORD *)(dword_223680 + 632));
      sub_3CC5C(byte_620144, v88);
      dword_620244 = *((_DWORD *)v29 + 26);
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : gTest_loop_id_array_size: %d\n", "find_test_standard_position", dword_620244);
      snprintf(byte_620248, 0x100u, "gTest_loop_id_array_size: %d", dword_620244);
      sub_3CC5C(byte_620248, v88);
      if ( (unsigned int)dword_620244 > 0xF )
      {
        sub_1E938(v88, 0x30u);
        v12 = 1;
        printf("%s ", v88);
        printf("%s : gTest_loop_id_array_size is %d, bigger than %d\n", "find_test_standard_position", dword_620244, 15);
        snprintf(byte_620348, 0x100u, "gTest_loop_id_array_size is %d, bigger than %d", dword_620244, 15);
        sub_3CC5C(byte_620348, v88);
        goto LABEL_22;
      }
      dword_22B69C = dword_620244;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : gTest_loop: %d\n", "find_test_standard_position", dword_620244);
      snprintf(byte_620448, 0x100u, "gTest_loop: %d", dword_620244);
      sub_3CC5C(byte_620448, v88);
      if ( dword_620244 )
      {
        v71 = v13;
        v53 = 0;
        v54 = v29 + 40;
        do
        {
          v55 = 16 * v53;
          v56 = v54[1];
          ++v54;
          *(_DWORD *)(dword_223680 + 16 * v53 + 336) = v56;
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          printf(
            "%s : Test_Loop[%d]->Level: %d\n",
            "find_test_standard_position",
            v53,
            *(_DWORD *)(dword_223680 + 16 * v53 + 336));
          snprintf(byte_620548, 0x100u, "Test_Loop[%d]->Level: %d", v53, *(_DWORD *)(dword_223680 + 16 * v53 + 336));
          sub_3CC5C(byte_620548, v88);
          *(_DWORD *)(dword_223680 + v55 + 340) = *((_DWORD *)v29 + 27);
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          printf(
            "%s : Test_Loop[%d]->Pre_Open_Core_Voltage: %d\n",
            "find_test_standard_position",
            v53,
            *(_DWORD *)(dword_223680 + 16 * v53 + 340));
          v57 = v53++;
          snprintf(
            byte_620648,
            0x100u,
            "Test_Loop[%d]->Pre_Open_Core_Voltage: %d",
            v57,
            *(_DWORD *)(v55 + dword_223680 + 340));
          sub_3CC5C(byte_620648, v88);
        }
        while ( dword_620244 > v53 );
        v13 = v71;
      }
    }
    else
    {
LABEL_13:
      if ( !format )
      {
        sub_1E938(v88, 0x30u);
        v12 = 1;
        printf("%s ", v88);
        v37 = v85;
        printf("%s : can't find::  %s%s%s, %s, BIN%d\n", "find_test_standard_position", v85, a5, a6, a7, a8);
        snprintf(byte_620748, 0x100u, "can't find::  %s%s%s, %s, BIN%d", v37, a5, a6, a7, a8);
        sub_3CC5C(byte_620748, v88);
        goto LABEL_22;
      }
    }
    v16 = (_DWORD *)*((_DWORD *)s1 + 7);
    if ( v16 )
    {
      if ( v75 != *v16 )
      {
        v17 = v76;
        do
        {
          v16 = (_DWORD *)v16[7];
          ++v17;
          if ( !v16 )
          {
            v76 = v17;
            goto LABEL_20;
          }
        }
        while ( *v16 != v75 );
        v76 = v17;
      }
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : pattern[%d]->id: %d\n", "find_test_standard_position", v76, *v16);
      snprintf(byte_620848, 0x100u, "pattern[%d]->id: %d", v76, *v16);
      sub_3CC5C(byte_620848, v88);
      *(_DWORD *)(dword_223680 + 312) = v16[1];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : pattern[%d]->Pattern_Number: %d\n",
        "find_test_standard_position",
        v76,
        *(_DWORD *)(dword_223680 + 312));
      snprintf(byte_620948, 0x100u, "pattern[%d]->Pattern_Number: %d", v76, *(_DWORD *)(dword_223680 + 312));
      sub_3CC5C(byte_620948, v88);
      *(_DWORD *)(dword_223680 + 316) = v16[2];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : pattern[%d]->Invalid_Core_Number: %d\n",
        "find_test_standard_position",
        v76,
        *(_DWORD *)(dword_223680 + 316));
      snprintf(byte_620A48, 0x100u, "pattern[%d]->Invalid_Core_Number: %d", v76, *(_DWORD *)(dword_223680 + 316));
      sub_3CC5C(byte_620A48, v88);
      *(_DWORD *)(dword_223680 + 328) = v16[3];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : pattern[%d]->Most_HW_Num: %d\n", "find_test_standard_position", v76, *(_DWORD *)(dword_223680 + 328));
      snprintf(byte_620B48, 0x100u, "pattern[%d]->Most_HW_Num: %d", v76, *(_DWORD *)(dword_223680 + 328));
      sub_3CC5C(byte_620B48, v88);
      *(_DWORD *)(dword_223680 + 320) = v16[4];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : pattern[%d]->Least_Nonce_Per_Core: %d\n",
        "find_test_standard_position",
        v76,
        *(_DWORD *)(dword_223680 + 320));
      snprintf(byte_620C48, 0x100u, "pattern[%d]->Least_Nonce_Per_Core: %d", v76, *(_DWORD *)(dword_223680 + 320));
      sub_3CC5C(byte_620C48, v88);
      *(_DWORD *)(dword_223680 + 324) = v16[5];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : pattern[%d]->Nonce_Rate: %d\n", "find_test_standard_position", v76, *(_DWORD *)(dword_223680 + 324));
      snprintf(byte_620D48, 0x100u, "pattern[%d]->Nonce_Rate: %d", v76, *(_DWORD *)(dword_223680 + 324));
      sub_3CC5C(byte_620D48, v88);
      *(_DWORD *)(dword_223680 + 272) = v16[6];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : pattern[%d]->Midstate_Number: %d\n",
        "find_test_standard_position",
        v76,
        *(_DWORD *)(dword_223680 + 272));
      snprintf(byte_620E48, 0x100u, "pattern[%d]->Midstate_Number: %d", v76, *(_DWORD *)(dword_223680 + 272));
      sub_3CC5C(byte_620E48, v88);
    }
    else
    {
LABEL_20:
      if ( !v80 )
      {
        sub_1E938(v88, 0x30u);
        v12 = 1;
        format = 1;
        printf("%s ", v88);
        printf("%s : can't find:: pattern_id: %d\n", "find_test_standard_position", v75);
        snprintf(byte_620F48, 0x100u, "can't find:: pattern_id: %d", v75);
        sub_3CC5C(byte_620F48, v88);
        goto LABEL_22;
      }
    }
    v26 = (_DWORD *)*((_DWORD *)s1 + 8);
    if ( v26 )
    {
      if ( v77 != *v26 )
      {
        v27 = v78;
        do
        {
          v26 = (_DWORD *)v26[9];
          ++v27;
          if ( !v26 )
          {
            v78 = v27;
            goto LABEL_36;
          }
        }
        while ( *v26 != v77 );
        v78 = v27;
      }
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->id: %d\n", "find_test_standard_position", v78, *v26);
      snprintf(byte_621048, 0x100u, "asic_reg[%d]->id: %d", v78, *v26);
      sub_3CC5C(byte_621048, v88);
      *(_DWORD *)(dword_223680 + 584) = v26[1];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->CCdly_Sel: %d\n", "find_test_standard_position", v78, *(_DWORD *)(dword_223680 + 584));
      snprintf(byte_621148, 0x100u, "asic_reg[%d]->CCdly_Sel: %d", v78, *(_DWORD *)(dword_223680 + 584));
      sub_3CC5C(byte_621148, v88);
      *(_DWORD *)(dword_223680 + 588) = v26[2];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->Pwth_Sel: %d\n", "find_test_standard_position", v78, *(_DWORD *)(dword_223680 + 588));
      snprintf(byte_621248, 0x100u, "asic_reg[%d]->Pwth_Sel: %d", v78, *(_DWORD *)(dword_223680 + 588));
      sub_3CC5C(byte_621248, v88);
      *(_DWORD *)(dword_223680 + 592) = v26[3];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->Swpf_Mode: %d\n", "find_test_standard_position", v78, *(_DWORD *)(dword_223680 + 592));
      snprintf(byte_621348, 0x100u, "asic_reg[%d]->Swpf_Mode: %d", v78, *(_DWORD *)(dword_223680 + 592));
      sub_3CC5C(byte_621348, v88);
      *(_DWORD *)(dword_223680 + 596) = v26[4];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->Pulse_Mode: %d\n", "find_test_standard_position", v78, *(_DWORD *)(dword_223680 + 596));
      snprintf(byte_621448, 0x100u, "asic_reg[%d]->Pulse_Mode: %d", v78, *(_DWORD *)(dword_223680 + 596));
      sub_3CC5C(byte_621448, v88);
      *(_DWORD *)(dword_223680 + 600) = v26[5];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : asic_reg[%d]->Clk_Sel: %d\n", "find_test_standard_position", v78, *(_DWORD *)(dword_223680 + 600));
      snprintf(byte_621548, 0x100u, "asic_reg[%d]->Clk_Sel: %d", v78, *(_DWORD *)(dword_223680 + 600));
      sub_3CC5C(byte_621548, v88);
      *(_DWORD *)(dword_223680 + 604) = v26[6];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : asic_reg[%d]->RO_Relay_En: %d\n",
        "find_test_standard_position",
        v78,
        *(_DWORD *)(dword_223680 + 604));
      snprintf(byte_621648, 0x100u, "asic_reg[%d]->RO_Relay_En: %d", v78, *(_DWORD *)(dword_223680 + 604));
      sub_3CC5C(byte_621648, v88);
      *(_DWORD *)(dword_223680 + 608) = v26[6];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : asic_reg[%d]->CO_Relay_En: %d\n",
        "find_test_standard_position",
        v78,
        *(_DWORD *)(dword_223680 + 608));
      snprintf(byte_621748, 0x100u, "asic_reg[%d]->CO_Relay_En: %d", v78, *(_DWORD *)(dword_223680 + 608));
      sub_3CC5C(byte_621748, v88);
      *(_DWORD *)(dword_223680 + 612) = v26[8];
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf(
        "%s : asic_reg[%d]->Diode_Vdd_Mux_Sel: %d\n",
        "find_test_standard_position",
        v78,
        *(_DWORD *)(dword_223680 + 612));
      snprintf(byte_621848, 0x100u, "asic_reg[%d]->Diode_Vdd_Mux_Sel: %d", v78, *(_DWORD *)(dword_223680 + 612));
      sub_3CC5C(byte_621848, v88);
    }
    else
    {
LABEL_36:
      if ( !v83 )
      {
        sub_1E938(v88, 0x30u);
        v12 = 1;
        v80 = 1;
        printf("%s ", v88);
        printf("%s : can't find:: asic_reg_id: %d\n", "find_test_standard_position", v77);
        snprintf(byte_621948, 0x100u, "can't find:: asic_reg_id: %d", v77);
        format = 1;
        sub_3CC5C(byte_621948, v88);
        goto LABEL_22;
      }
    }
    v35 = (const char *)*((_DWORD *)s1 + 9);
    if ( v35 )
      break;
LABEL_52:
    if ( v84 )
      goto LABEL_67;
    sub_1E938(v88, 0x30u);
    v83 = 1;
    printf("%s ", v88);
    v12 = 1;
    printf("%s : can't find:: test_method_id: %d\n", "find_test_standard_position", v79);
    snprintf(byte_622048, 0x100u, "can't find:: test_method_id: %d", v79);
    v80 = 1;
    sub_3CC5C(byte_622048, v88);
    format = 1;
LABEL_22:
    s1 = (char *)*((_DWORD *)s1 + 12);
    if ( !s1 )
      return 0;
  }
  if ( *(_DWORD *)v35 != v79 )
  {
    v36 = v81;
    do
    {
      v35 = (const char *)*((_DWORD *)v35 + 7);
      ++v36;
      if ( !v35 )
      {
        v81 = v36;
        goto LABEL_52;
      }
    }
    while ( *(_DWORD *)v35 != v79 );
    v81 = v36;
  }
  sub_1E938(v88, 0x30u);
  printf("%s ", v88);
  printf("%s : test_method[%d]->id: %d\n", "find_test_standard_position", v81, *(_DWORD *)v35);
  v38 = v35 + 4;
  snprintf(byte_621A48, 0x100u, "test_method[%d]->id: %d", v81, *(_DWORD *)v35);
  sub_3CC5C(byte_621A48, v88);
  if ( !strcmp(v35 + 4, "SOFTWARE_PATTERN") )
  {
    v58 = (_BYTE *)dword_223680;
    *(_BYTE *)(dword_223680 + 269) = 0;
    v58[270] = 0;
    v58[271] = 0;
    v58[268] = 1;
    sub_1E938(v88, 0x30u);
    printf("%s ", v88);
    if ( *(_BYTE *)(dword_223680 + 268) )
      v59 = "true";
    else
      v59 = "false";
    printf("%s : Software_Pattern : %s\n", "find_test_standard_position", v59);
    if ( *(_BYTE *)(dword_223680 + 268) )
      v60 = "true";
    else
      v60 = "false";
    snprintf(byte_621B48, 0x100u, "Software_Pattern : %s", v60);
    sub_3CC5C(byte_621B48, v88);
  }
  else if ( !strcmp(v38, "SUPER_SOFTWARE_PATTERN") )
  {
    v61 = (_BYTE *)dword_223680;
    *(_BYTE *)(dword_223680 + 268) = 0;
    v61[270] = 0;
    v61[271] = 0;
    v61[269] = 1;
    sub_1E938(v88, 0x30u);
    printf("%s ", v88);
    if ( *(_BYTE *)(dword_223680 + 269) )
      v62 = "true";
    else
      v62 = "false";
    printf("%s : Super_Software_Pattern : %s\n", "find_test_standard_position", v62);
    if ( *(_BYTE *)(dword_223680 + 269) )
      v63 = "true";
    else
      v63 = "false";
    snprintf(byte_621C48, 0x100u, "Super_Software_Pattern : %s", v63);
    sub_3CC5C(byte_621C48, v88);
  }
  else if ( !strcmp(v38, "HARDWARE_PATTERN") )
  {
    v64 = dword_223680;
    *(_BYTE *)(dword_223680 + 268) = 0;
    *(_BYTE *)(v64 + 271) = 0;
    *(_BYTE *)(v64 + 270) = 1;
    sub_1E938(v88, 0x30u);
    printf("%s ", v88);
    if ( *(_BYTE *)(dword_223680 + 270) )
      v65 = "true";
    else
      v65 = "false";
    printf("%s : Software_Pattern : %s\n", "find_test_standard_position", v65);
    if ( *(_BYTE *)(dword_223680 + 270) )
      v66 = "true";
    else
      v66 = "false";
    snprintf(byte_621D48, 0x100u, "Software_Pattern : %s", v66);
    sub_3CC5C(byte_621D48, v88);
  }
  else
  {
    v39 = strcmp(v38, "AUTOGEN_PATTERN");
    v40 = (_BYTE *)dword_223680;
    if ( v39 )
    {
      *(_BYTE *)(dword_223680 + 268) = 0;
      v40[269] = 0;
      v40[270] = 0;
      v40[271] = 0;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      printf("%s : test_method[%d]: %s. error\n", "find_test_standard_position", v81, v38);
      snprintf(byte_621F48, 0x100u, "test_method[%d]: %s. error", v81, v38);
      sub_3CC5C(byte_621F48, v88);
    }
    else
    {
      *(_BYTE *)(dword_223680 + 268) = 0;
      v40[269] = 0;
      v40[270] = 0;
      v40[271] = 1;
      sub_1E938(v88, 0x30u);
      printf("%s ", v88);
      if ( *(_BYTE *)(dword_223680 + 271) )
        v41 = "true";
      else
        v41 = "false";
      printf("%s : Software_Pattern : %s\n", "find_test_standard_position", v41);
      if ( *(_BYTE *)(dword_223680 + 271) )
        v42 = "true";
      else
        v42 = "false";
      snprintf(byte_621E48, 0x100u, "Software_Pattern : %s", v42);
      sub_3CC5C(byte_621E48, v88);
    }
  }
LABEL_67:
  if ( dword_620244 )
  {
    v43 = 0;
    formata = (char *)v86;
    do
    {
      v44 = (_DWORD *)*((_DWORD *)s1 + 10);
      *formata = 0;
      if ( v44 )
      {
        v45 = *(_DWORD *)(dword_223680 + 16 * v43 + 336);
        if ( *v44 == v45 )
        {
LABEL_83:
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          printf("%s : test_loop[%d]->id: %d\n", "find_test_standard_position", v13, *v44);
          snprintf(byte_622148, 0x100u, "test_loop[%d]->id: %d", v13, *v44);
          sub_3CC5C(byte_622148, v88);
          v52 = 16 * (v43 + 21);
          *(_DWORD *)(dword_223680 + v52 + 12) = v44[1];
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          printf(
            "%s : test_loop[%d]->Frequence: %d\n",
            "find_test_standard_position",
            v13,
            *(_DWORD *)(dword_223680 + v52 + 12));
          snprintf(byte_622248, 0x100u, "test_loop[%d]->Frequence: %d", v13, *(_DWORD *)(dword_223680 + v52 + 12));
          sub_3CC5C(byte_622248, v88);
          *(_DWORD *)(dword_223680 + v52 + 8) = v44[2];
          sub_1E938(v88, 0x30u);
          printf("%s ", v88);
          printf(
            "%s : test_loop[%d]->Voltage: %d\n",
            "find_test_standard_position",
            v13,
            *(_DWORD *)(dword_223680 + v52 + 8));
          snprintf(byte_622348, 0x100u, "test_loop[%d]->Voltage: %d", v13, *(_DWORD *)(v52 + dword_223680 + 8));
          sub_3CC5C(byte_622348, v88);
          *formata = 1;
        }
        else
        {
          while ( 1 )
          {
            v44 = (_DWORD *)v44[3];
            ++v13;
            if ( !v44 )
              break;
            if ( *v44 == v45 )
              goto LABEL_83;
          }
        }
      }
      ++v43;
      ++formata;
    }
    while ( dword_620244 > v43 );
    if ( dword_620244 )
    {
      v46 = (char *)&v85 + 3;
      v47 = 0;
      v48 = v82;
      formatb = v13;
      do
      {
        while ( 1 )
        {
          v49 = (unsigned __int8)*++v46;
          v48 &= v49;
          if ( !v49 )
            break;
          if ( dword_620244 <= ++v47 )
            goto LABEL_80;
        }
        sub_1E938(v88, 0x30u);
        printf("%s ", v88);
        v50 = 16 * v47;
        v51 = dword_223680 + 16 * v47++;
        printf("%s : can't find:: test_loop id: %d\n", "find_test_standard_position", *(_DWORD *)(v51 + 336));
        snprintf(byte_622448, 0x100u, "can't find:: test_loop id: %d", *(_DWORD *)(dword_223680 + v50 + 336));
        sub_3CC5C(byte_622448, v88);
      }
      while ( dword_620244 > v47 );
LABEL_80:
      v13 = formatb;
      v82 = v48;
    }
  }
  if ( !v82 )
  {
    v84 = 1;
    v12 = 1;
    v83 = 1;
    v80 = 1;
    format = 1;
    goto LABEL_22;
  }
  sub_1E938(v88, 0x30u);
  printf("%s ", v88);
  printf("%s : find all test standard\n", "find_test_standard_position");
  strcpy(byte_622548, "find all test standard");
  sub_3CC5C(byte_622548, v88);
  return 1;
}
