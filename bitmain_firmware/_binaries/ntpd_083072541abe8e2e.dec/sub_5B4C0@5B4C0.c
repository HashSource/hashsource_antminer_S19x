int __fastcall sub_5B4C0(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r3
  char *v7; // r0

  v4 = (_DWORD *)sub_63BA4(0, 160, 0, 1);
  v5 = *(_DWORD **)(a2 + 84);
  *v4 = a1;
  v5[7] = -1;
  v5[3] = sub_5ACF0;
  v5[6] = 0;
  *v5 = v4;
  v5[5] = a2;
  *(_BYTE *)(a2 + 95) = -10;
  v5[11] = "Automated Computer Time Service";
  v5[191] = *(_DWORD *)"NONE";
  *(_BYTE *)(a2 + 90) = 9;
  v4[7] = v4 + 8;
  if ( modem_setup == "ATB1&C0&D2E0L1M1Q0V1Y1" )
  {
    v7 = sub_24D10("modemsetup");
    if ( v7 )
      modem_setup = (char *)sub_63D08(v7);
  }
  return 1;
}
