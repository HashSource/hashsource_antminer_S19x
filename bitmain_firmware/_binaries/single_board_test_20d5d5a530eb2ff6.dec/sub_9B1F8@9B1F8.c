bool __fastcall sub_9B1F8(_DWORD *a1, int a2, int a3)
{
  int v6; // r3
  int v7; // r2
  _BOOL4 result; // r0
  int v9; // [sp+4h] [bp-4h] BYREF

  if ( a3 != 257 && !sub_A7EDC(a2) )
    return 0;
  if ( !sub_A821C(a2, &v9) )
    return 0;
  v6 = v9;
  if ( v9 < 0 )
    return 0;
  if ( a3 == 257 )
  {
    a1[29] = v9;
    a1[30] = 0;
    return sub_9A8D8(a1, a3 == 257) != 0;
  }
  v7 = a1[32];
  *(_DWORD *)(v7 + 292) = v9 - 12;
  *(_DWORD *)(v7 + 304) = v6 - 12;
  a1[30] = 0;
  result = a3 == 3;
  a1[29] = v6;
  if ( a3 != 3 )
    return sub_9A8D8(a1, a3 == 257) != 0;
  return result;
}
