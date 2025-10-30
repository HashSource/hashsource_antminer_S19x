int __fastcall sub_19F88(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r6
  int v7; // r4
  int v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r2
  __int64 v12; // r0

  v5 = sub_15ECB4();
  if ( *(_DWORD *)(sub_163E78() + 32) )
    v6 = 0x1000000;
  else
    v6 = 32;
  if ( a3 == 15 )
  {
    v9 = ((int (__fastcall *)(int, int))loc_15EBBC)(a1, 14);
    v10 = sub_19DB0(v5, v9);
    return sub_160FC0(a1, 15, v10, 0);
  }
  else if ( a3 == 25 )
  {
    v7 = sub_15ECAC(a1, 25);
    if ( (((int (__fastcall *)(int, int))loc_15EBBC)(a1, 14) & 1) != 0 )
      v8 = v6 | v7;
    else
      v8 = v7 & ~v6;
    return sub_160FC0(a1, 25, v8, 0);
  }
  else
  {
    v12 = sub_94700("arm-tdep.c", 3129, "Unexpected register %d", a3);
    return sub_1A048(v12, HIDWORD(v12));
  }
}
