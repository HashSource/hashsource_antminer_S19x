int __fastcall sub_19E630(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // r10
  __int16 *v4; // r2
  int v5; // r9
  int v6; // r3
  int v7; // lr
  int v8; // r0
  __int64 v9; // r4
  int v10; // r3
  int v11; // r2
  _BYTE *v12; // r12
  int v13; // r1
  bool v14; // cc
  int v15; // r12

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 != 3 )
    return 0;
  v3 = *(__int16 *)(v1 + 4);
  if ( (*(_WORD *)(v1 + 2) & 0x380) == 0x80 )
    v4 = *(__int16 **)(v1 + 28);
  else
    v4 = &word_3B4A2C;
  v5 = *v4;
  if ( v3 <= v5 )
    return v3 > 0;
  v6 = *(_DWORD *)(v1 + 24);
  v7 = v6 + 24 * v5;
  result = *(_DWORD *)(v7 + 12);
  if ( result )
  {
    v8 = *(_DWORD *)(result + 24);
    if ( *(_BYTE *)v8 == 11 )
    {
      v9 = 0;
      v10 = v6 + 24 * v5 + 24;
      v11 = *v4;
      do
      {
        v12 = *(_BYTE **)(v7 + 16);
        v7 = v10;
        v13 = v10;
        v10 += 24;
        if ( v12 && *v12 )
          break;
        v14 = v5 < v11++;
        v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 12) + 24) + 24);
        if ( v14 && v9 + 1 != *(_QWORD *)(v15 + 8) )
          break;
        v9 = *(_QWORD *)(v15 + 24);
        if ( v3 == v11 )
          return v3 > 0;
        result = *(_DWORD *)(v13 + 12);
        if ( !result )
          return result;
        v8 = *(_DWORD *)(result + 24);
      }
      while ( *(_BYTE *)v8 == 11 );
    }
    return 0;
  }
  return result;
}
