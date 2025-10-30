int __fastcall sub_5C888(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  int result; // r0
  char v5[52]; // [sp+0h] [bp-34h] BYREF

  sub_6E9D8(dword_21B3B0, 100);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Sleep %d seconds then power down\n", "_power_down", *(_DWORD *)(dword_223680 + 668));
  snprintf(byte_648938, 0x100u, "Sleep %d seconds then power down", *(_DWORD *)(dword_223680 + 668));
  sub_3CC5C((int)byte_648938, v5);
  sleep(*(_DWORD *)(dword_223680 + 668));
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : drive mos low\n", "_power_down");
    strcpy(byte_648A38, "drive mos low");
    sub_3CC5C((int)byte_648A38, v5);
    sub_72644((unsigned __int8)a1);
  }
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : APW off\n", "_power_down");
  strcpy(byte_648B38, "APW off");
  v2 = sub_3CC5C((int)byte_648B38, v5);
  sub_6F490(v2);
  usleep(0x7530u);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : reset low\n", "_power_down");
  strcpy(byte_648C38, "reset low");
  sub_3CC5C((int)byte_648C38, v5);
  sub_71AF4(a1);
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Sleep %d seconds then slow down FAN\n", "_power_down", *(_DWORD *)(dword_223680 + 624));
  snprintf(byte_648D38, 0x100u, "Sleep %d seconds then slow down FAN", *(_DWORD *)(dword_223680 + 624));
  sub_3CC5C((int)byte_648D38, v5);
  v3 = *(_DWORD *)(dword_223680 + 624);
  if ( v3 )
    byte_5FE776 = 1;
  sleep(v3);
  result = sub_6E9D8(dword_21B3B0, 100);
  byte_5FE775 = 0;
  return result;
}
