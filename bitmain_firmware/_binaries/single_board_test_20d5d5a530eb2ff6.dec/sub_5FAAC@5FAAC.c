int __fastcall sub_5FAAC(unsigned int a1, unsigned int a2)
{
  char v5[52]; // [sp+18h] [bp-34h] BYREF

  usleep(0x1388u);
  sub_787A8((unsigned __int8)dword_21B3A4, 0, 0);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf(
    "%s : Set Pll0: userdivider0 = 0x%02x, userdivider1 = 0x%02x, userdivider2 = 0x%02x, userdivider3 = 0x%02x\n",
    "inc_target_freq_from_to",
    0,
    0,
    0,
    0);
  snprintf(
    byte_64CA3C,
    0x100u,
    "Set Pll0: userdivider0 = 0x%02x, userdivider1 = 0x%02x, userdivider2 = 0x%02x, userdivider3 = 0x%02x",
    0,
    0,
    0,
    0);
  sub_3CC5C((int)byte_64CA3C, v5);
  usleep(0x2710u);
  if ( *(_BYTE *)(dword_223680 + 245) )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : use config smooth_voltage\n", "inc_target_freq_from_to");
    strcpy(byte_64CB3C, "use config smooth_voltage");
    sub_3CC5C((int)byte_64CB3C, v5);
    sub_5F290((unsigned __int8)dword_21B3A4, *(unsigned __int8 *)(dword_223680 + 600), a1, a2);
  }
  else
  {
    sub_5F070((unsigned __int8)dword_21B3A4, *(unsigned __int8 *)(dword_223680 + 600), a1, a2);
  }
  sub_7778C((unsigned __int8)dword_21B3A4, *(_DWORD *)(dword_223680 + 576));
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Set chain baud as %d\n", "inc_target_freq_from_to", *(_DWORD *)(dword_223680 + 576));
  snprintf(byte_64CC3C, 0x100u, "Set chain baud as %d", *(_DWORD *)(dword_223680 + 576));
  return sub_3CC5C((int)byte_64CC3C, v5);
}
