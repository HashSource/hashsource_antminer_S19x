int __fastcall sub_853D4(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  int v13; // r3
  bool v14; // r0
  int v15; // r0
  int v16; // [sp+4h] [bp-4h] BYREF

  v9 = sub_853A4(a1, a2, &v16);
  if ( !v16 )
  {
    v10 = a4 == 79;
    if ( a4 <= 79 )
      v10 = a3 == 262151;
    v11 = v10;
    return v11 ^ 1;
  }
  if ( a3 == 15 )
    return v16 <= 1;
  if ( a3 > 15 )
  {
    if ( (unsigned int)(a3 - 65537) > 2 )
      return v9 <= a4;
    if ( v9 <= a4 && (a6[5] & 4) == 0 )
    {
      v13 = a6[7];
      if ( (v13 & 1) != 0 )
        return a6[5] & 4;
      if ( v9 > 160 && (v13 & 2) != 0 )
        return a6[7] & 1;
      if ( v16 <= 1 )
        return 1;
      if ( a6[6] != 4 )
      {
        if ( v16 != 2 && a6[8] != 772 )
          return (a6[4] & 0x186) != 0;
        return 1;
      }
    }
    return 0;
  }
  if ( a3 != 9 )
  {
    if ( a3 == 10 )
      return v16 <= 2;
    return v9 <= a4;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) == 0 )
  {
    if ( a5 <= 768 )
      return v16 <= 1;
    if ( a5 == 769 )
      return v16 <= 2;
    if ( a5 == 770 )
      return v16 <= 3;
    return 1;
  }
  v14 = a5 > 65277;
  if ( a5 == 256 )
    v14 = 1;
  v15 = v16 > 3 && v14;
  return v15 ^ 1;
}
