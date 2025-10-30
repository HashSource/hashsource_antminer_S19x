int __fastcall sub_3C404(const char *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r9
  unsigned int v10; // r4
  int v11; // r5
  int v12; // r6
  int v13; // r5
  unsigned int v14; // r6
  int v15; // r1
  int v16; // r1
  unsigned int v18; // [sp+10h] [bp-4Ch]
  unsigned int v19; // [sp+1Ch] [bp-40h]
  unsigned int v20; // [sp+20h] [bp-3Ch] BYREF
  unsigned int v21; // [sp+24h] [bp-38h] BYREF
  char v22[52]; // [sp+28h] [bp-34h] BYREF

  v20 = 0;
  v21 = 0;
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : pre_voltage = %d, target_voltage = %d, step_num = %d\n", "set_dac_voltage_step_by_step", a3, a4, a5);
  snprintf(byte_634368, 0x100u, "pre_voltage = %d, target_voltage = %d, step_num = %d", a3, a4, a5);
  sub_3CC5C(byte_634368, v22);
  if ( !sub_3BEB8(a1, &v20) )
    return 0;
  v8 = sub_3BEB8(a1, &v21);
  if ( !v8 )
    return 0;
  if ( v20 <= v21 )
  {
    if ( v20 >= v21 )
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : target_voltage = pre_voltage. Don't need do anything.\n", "set_dac_voltage_step_by_step");
      strcpy(byte_634468, "target_voltage = pre_voltage. Don't need do anything.");
      sub_3CC5C(byte_634468, v22);
      return v8;
    }
    v18 = v21 - v20;
  }
  else
  {
    v18 = v20 - v21;
  }
  LOBYTE(v10) = sub_189090(v18, a5);
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf(
    "%s : pre_N = %d, target_N = %d, N_gap = %d, step_length = %d\n",
    "set_dac_voltage_step_by_step",
    v20,
    v21,
    v18,
    (unsigned __int8)v10);
  snprintf(
    byte_634568,
    0x100u,
    "pre_N = %d, target_N = %d, N_gap = %d, step_length = %d",
    v20,
    v21,
    v18,
    (unsigned __int8)v10);
  sub_3CC5C(byte_634568, v22);
  if ( (_BYTE)v10 )
  {
    if ( a5 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( (_BYTE)v11 )
        {
          if ( v20 <= v21 )
            v12 += (unsigned __int8)v10;
          else
            v12 -= (unsigned __int8)v10;
        }
        else
        {
          v14 = v20;
          v19 = v20 - (unsigned __int8)v10;
          if ( v20 <= v21 )
          {
            sub_1892EC(v18, a5);
            v12 = v16 + v14 + (unsigned __int8)v10;
          }
          else
          {
            sub_1892EC(v18, a5);
            v12 = v19 - v15;
          }
        }
        sub_1E938(v22, 0x30u);
        printf("%s ", v22);
        printf("%s : setting_N = %d, step=%d\n", "set_dac_voltage_step_by_step", v12, v11);
        snprintf(byte_634668, 0x100u, "setting_N = %d, step=%d", v12, v11);
        sub_3CC5C(byte_634668, v22);
        ++v11;
        if ( !sub_3C1E8(a1, a2, v12) )
          break;
        usleep(0x493E0u);
        if ( v11 == (unsigned __int8)(a5 - 1) + 1 )
          return v8;
      }
      sub_6FBF4(0);
      v8 = 0;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Set ADC voltage");
      sub_1F650(2, "fail");
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : Set adc voltage by N = %d fail\n", "set_dac_voltage_step_by_step", v12);
      snprintf(byte_634768, 0x100u, "Set adc voltage by N = %d fail", v12);
      sub_3CC5C(byte_634768, v22);
    }
  }
  else
  {
    v13 = v20 - 1;
    if ( v21 >= v20 )
      v13 = v20 + 1;
    do
      v10 = (unsigned __int8)(v10 + 1);
    while ( v18 > v10 );
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : setting_N = %d\n", "set_dac_voltage_step_by_step", v13);
    snprintf(byte_634868, 0x100u, "setting_N = %d", v13);
    sub_3CC5C(byte_634868, v22);
    if ( !sub_3C1E8(a1, a2, v13) )
    {
      sub_6FBF4(0);
      v8 = 0;
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Set ADC voltage");
      sub_1F650(2, "fail");
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : Set adc voltage by N fail\n", "set_dac_voltage_step_by_step");
      strcpy(byte_634968, "Set adc voltage by N fail");
      sub_3CC5C(byte_634968, v22);
    }
  }
  return v8;
}
