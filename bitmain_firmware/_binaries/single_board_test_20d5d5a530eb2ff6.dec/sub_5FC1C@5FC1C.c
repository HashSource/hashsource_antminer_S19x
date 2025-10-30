int sub_5FC1C()
{
  int v0; // r7
  int v1; // r0
  int result; // r0
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  if ( *(_BYTE *)(dword_223680 + 276) )
  {
    sub_778F0((unsigned __int8)dword_21B3A4, 127);
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Set TM as 0x%08x\n", "set_asic_register_stage_3", 127);
    snprintf(byte_64CD3C, 0x100u, "Set TM as 0x%08x", 127);
    sub_3CC5C((int)byte_64CD3C, v3);
  }
  else if ( *(_BYTE *)(dword_223680 + 269) )
  {
    sub_778F0((unsigned __int8)dword_21B3A4, 0xFFFF);
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Set TM as 0x%08x\n", "set_asic_register_stage_3", 0xFFFF);
    snprintf(byte_64CE3C, 0x100u, "Set TM as 0x%08x", 0xFFFF);
    sub_3CC5C((int)byte_64CE3C, v3);
  }
  else
  {
    sub_778F0((unsigned __int8)dword_21B3A4, 127);
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Set TM as 0x%08x\n", "set_asic_register_stage_3", 127);
    snprintf(byte_64CF3C, 0x100u, "Set TM as 0x%08x", 127);
    sub_3CC5C((int)byte_64CF3C, v3);
  }
  sub_6F42C(dword_21B3A4);
  v0 = dword_223680;
  if ( !strcmp((const char *)dword_223680, "PT1+") )
    v1 = 400;
  else
    v1 = *(_DWORD *)(v0 + 580);
  sub_711D0(v1);
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : Set timeout by using config value: %d\n", "set_asic_register_stage_3", *(_DWORD *)(dword_223680 + 580));
  snprintf(byte_64D03C, 0x100u, "Set timeout by using config value: %d", *(_DWORD *)(dword_223680 + 580));
  result = sub_3CC5C((int)byte_64D03C, v3);
  if ( *(_BYTE *)(dword_223680 + 276) )
    return sub_779D4((unsigned __int8)dword_21B3A4, dword_6084C8, *(_DWORD *)(dword_223680 + 64));
  return result;
}
