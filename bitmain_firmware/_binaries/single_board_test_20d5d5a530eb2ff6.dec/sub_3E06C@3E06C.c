int __fastcall sub_3E06C(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r6
  unsigned __int8 v8; // r0
  unsigned int v9; // r7
  int v10; // r9
  int v11; // r5
  int v12; // r11
  int v13; // r4
  unsigned __int8 v14; // r3
  int v16; // r6
  char v17; // r1
  char s[260]; // [sp+18h] [bp-104h] BYREF

  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : pre_voltage = %d, target_voltage = %d, step_num = %d\n", "set_voltage_by_step", a1, a2, a3);
  snprintf(byte_635FCC, 0x100u, "pre_voltage = %d, target_voltage = %d, step_num = %d", a1, a2, a3);
  v5 = sub_3CC5C((int)byte_635FCC, s);
  v6 = sub_75864(v5);
  v7 = (unsigned __int8)v6;
  v8 = sub_75864(v6);
  v9 = v8;
  if ( v7 <= v8 )
  {
    if ( v7 >= v8 )
    {
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf("%s : target_voltage = pre_voltage. Don't need do anything.\n", "set_voltage_by_step");
      strcpy(byte_6360CC, "target_voltage = pre_voltage. Don't need do anything.");
      sub_3CC5C((int)byte_6360CC, s);
      return 1;
    }
    v10 = (unsigned __int8)(v8 - v7);
  }
  else
  {
    v10 = (unsigned __int8)(v7 - v8);
  }
  v11 = (unsigned __int8)sub_189090(v10, a3);
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : pre_N = %d, target_N = %d, N_gap = %d, step_length = %d\n", "set_voltage_by_step", v7, v9, v10, v11);
  snprintf(byte_6361CC, 0x100u, "pre_N = %d, target_N = %d, N_gap = %d, step_length = %d", v7, v9, v10, v11);
  sub_3CC5C((int)byte_6361CC, s);
  if ( v11 )
  {
    v12 = 0;
    LOBYTE(v13) = 0;
    if ( !a3 )
      return 1;
    while ( 1 )
    {
      v14 = v11 + v13;
      LOBYTE(v13) = v13 - v11;
      if ( v12 )
      {
        v13 = v7 <= v9 ? v14 : (unsigned __int8)v13;
      }
      else
      {
        sub_1892EC(v10, a3);
        v13 = v7 <= v9 ? (unsigned __int8)(v7 + v17 + v11) : (unsigned __int8)(v7 - v11 - v17);
      }
      if ( sub_75814(v13) != v13 && v13 != sub_75814(v13) )
        break;
      v12 = (unsigned __int8)(v12 + 1);
      if ( a3 == v12 )
        return 1;
    }
    snprintf(s, 0x100u, "Set APW voltage by N = %d fail", v13);
    puts(s);
    return 0;
  }
  else
  {
    if ( v10 )
    {
      if ( v7 <= v9 )
        v16 = (unsigned __int8)(v7 + 1);
      else
        v16 = (unsigned __int8)(v7 - 1);
    }
    else
    {
      v16 = 0;
    }
    if ( !sub_75814(v16) || !sub_75814(v16) )
      return 1;
    strcpy(s, "Set APW voltage by N fail");
    puts(s);
    return 0;
  }
}
