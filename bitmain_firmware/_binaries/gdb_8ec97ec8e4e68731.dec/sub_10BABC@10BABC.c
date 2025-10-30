_DWORD *__fastcall sub_10BABC(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r6
  int v8; // r0
  _DWORD *v9; // r0

  v5 = a1 + 1;
  *a1 = a2;
  a1[39] = 0;
  sub_29C168(a1 + 1, a3, sub_10B864);
  a1[19] = sub_10B7D8;
  a1[20] = sub_10B844;
  a1[4] = 0;
  a1[18] = a4;
  a1[5] = *(_DWORD *)(((int (__fastcall *)(int))loc_163EB0)(a2) + 12);
  a1[6] = *(_DWORD *)(((int (__fastcall *)(int))loc_163EB0)(a2) + 16);
  a1[7] = ((int (__fastcall *)(int))loc_165BB8)(a2);
  v8 = ((int (__fastcall *)(int))loc_165C28)(a2);
  a1[3] = a1;
  a1[8] = v8;
  v9 = (_DWORD *)((int (__fastcall *)(int))loc_16EAC8)(a2);
  if ( v9 )
    v9 = (_DWORD *)*v9;
  a1[37] = v9;
  sub_29BF68(v5);
  return a1;
}
