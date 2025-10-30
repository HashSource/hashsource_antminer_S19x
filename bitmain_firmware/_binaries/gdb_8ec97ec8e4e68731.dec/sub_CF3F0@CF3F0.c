bool __fastcall sub_CF3F0(_DWORD *a1, int a2, unsigned int a3)
{
  int v6; // r8
  unsigned int v8; // r9
  int v9; // r4
  int v10; // r0
  _BOOL4 v11; // r6

  if ( sub_CF3B0(*(_DWORD *)(a1[12] + 20), a1[13], a2, a3) )
    return 1;
  v6 = a1[14];
  if ( !v6 )
    return 0;
  v8 = a1[13];
  v9 = *(_DWORD *)(a1[12] + 20);
  v10 = sub_16F654(0);
  v11 = v9 == a2;
  if ( ((int (__fastcall *)(int))loc_16D8FC)(v10) )
    v11 = 1;
  return v11 && v8 <= a3 && a3 < v6 + v8;
}
