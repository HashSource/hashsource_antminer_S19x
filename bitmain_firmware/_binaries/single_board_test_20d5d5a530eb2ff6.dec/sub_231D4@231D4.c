int __fastcall sub_231D4(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r8
  unsigned __int8 v8; // r0
  unsigned int v9; // r9
  int v10; // r6
  int v11; // r5
  int v12; // r4
  unsigned __int8 v13; // r3
  int v14; // r0
  int v16; // r8
  int v17; // r4
  int v18; // r0
  char v19; // r1
  int v21; // [sp+14h] [bp-38h]
  char v22[52]; // [sp+18h] [bp-34h] BYREF

  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pre_voltage = %d, target_voltage = %d, step_num = %d\n", "set_pattern_test_voltage_by_step", a1, a2, a3);
  snprintf(byte_6057C4, 0x100u, "pre_voltage = %d, target_voltage = %d, step_num = %d", a1, a2, a3);
  v5 = sub_3CC5C(byte_6057C4, v22);
  v6 = sub_75864(v5);
  v7 = (unsigned __int8)v6;
  v8 = sub_75864(v6);
  v9 = v8;
  if ( v7 <= v8 )
  {
    if ( v7 >= v8 )
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : target_voltage = pre_voltage. Don't need do anything.\n", "set_pattern_test_voltage_by_step");
      strcpy(byte_6058C4, "target_voltage = pre_voltage. Don't need do anything.");
      sub_3CC5C(byte_6058C4, v22);
      return 1;
    }
    v21 = (unsigned __int8)(v8 - v7);
  }
  else
  {
    v21 = (unsigned __int8)(v7 - v8);
  }
  v10 = (unsigned __int8)sub_189090(v21, a3);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf(
    "%s : pre_N = %d, target_N = %d, N_gap = %d, step_length = %d\n",
    "set_pattern_test_voltage_by_step",
    v7,
    v9,
    v21,
    v10);
  snprintf(byte_6059C4, 0x100u, "pre_N = %d, target_N = %d, N_gap = %d, step_length = %d", v7, v9, v21, v10);
  sub_3CC5C(byte_6059C4, v22);
  if ( !v10 )
  {
    if ( v21 )
    {
      if ( v7 <= v9 )
        v16 = (unsigned __int8)(v7 + 1);
      else
        v16 = (unsigned __int8)(v7 - 1);
      v17 = v16;
    }
    else
    {
      v17 = 0;
      v16 = 0;
    }
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : setting_N = %d\n", "set_pattern_test_voltage_by_step", v17);
    snprintf(byte_605CC4, 0x100u, "setting_N = %d", v17);
    sub_3CC5C(byte_605CC4, v22);
    if ( sub_75814(v16) )
    {
      v18 = sub_75814(v16);
      if ( v18 )
      {
        sub_6FBF4(v18);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Set APW voltage");
        sub_1F650(2, "fail");
        sub_1E938(v22, 0x30u);
        printf("%s ", v22);
        printf("%s : Set APW voltage by N fail\n", "set_pattern_test_voltage_by_step");
        strcpy(byte_605DC4, "Set APW voltage by N fail");
        sub_3CC5C(byte_605DC4, v22);
        return 0;
      }
    }
    return 1;
  }
  if ( !a3 )
    return 1;
  v11 = 0;
  LOBYTE(v12) = 0;
  while ( 1 )
  {
    v13 = v10 + v12;
    LOBYTE(v12) = v12 - v10;
    if ( v11 )
    {
      v12 = v7 <= v9 ? v13 : (unsigned __int8)v12;
    }
    else
    {
      sub_1892EC(v21, a3);
      v12 = v7 <= v9 ? (unsigned __int8)(v7 + v19 + v10) : (unsigned __int8)(v7 - v10 - v19);
    }
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : setting_N = %d\n", "set_pattern_test_voltage_by_step", v12);
    snprintf(byte_605AC4, 0x100u, "setting_N = %d", v12);
    sub_3CC5C(byte_605AC4, v22);
    if ( v12 != sub_75814(v12) )
    {
      v14 = sub_75814(v12);
      if ( v12 != v14 )
        break;
    }
    v11 = (unsigned __int8)(v11 + 1);
    if ( a3 == v11 )
      return 1;
  }
  sub_6FBF4(v14);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Set APW voltage");
  sub_1F650(2, "fail");
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : Set APW voltage by N = %d fail\n", "set_pattern_test_voltage_by_step", v12);
  snprintf(byte_605BC4, 0x100u, "Set APW voltage by N = %d fail", v12);
  sub_3CC5C(byte_605BC4, v22);
  return 0;
}
