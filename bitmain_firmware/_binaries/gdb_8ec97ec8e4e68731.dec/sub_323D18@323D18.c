int __fastcall sub_323D18(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r7
  int v5; // r3
  int v6; // r12
  int v7; // lr
  int v8; // r5
  unsigned int v9; // r4
  int v10; // r6
  unsigned int v14; // r10
  int v15; // r3
  unsigned int v16; // r0
  int v17; // r3
  unsigned int v18; // r7

  v3 = *(_DWORD *)(a1 + 56);
  v4 = dword_4381A8[4 * v3];
  v5 = 4 * v3;
  v6 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 28);
  v7 = dword_4381A8[v5 + 3];
  v8 = (a3 * (unsigned __int64)(unsigned int)dword_4381A8[v5 + 1]) >> 32;
  v9 = a3 - v4 * ((v8 + ((a3 - v8) >> 1)) >> v7);
  v10 = *(_DWORD *)(v6 + 4 * v9);
  if ( !v10 )
    return 0;
  v14 = *(_DWORD *)(a1 + 16);
  if ( v10 == 1 )
  {
LABEL_5:
    v16 = dword_4381A8[v5 + 2];
    v17 = *(_DWORD *)(a1 + 32);
    v18 = a3
        + 1
        - (v4 - 2)
        * ((unsigned int)(((a3 * (unsigned __int64)v16) >> 32)
                        + ((unsigned int)(a3 - ((a3 * (unsigned __int64)v16) >> 32)) >> 1)) >> v7);
    while ( 1 )
    {
      v9 += v18;
      ++v17;
      if ( v14 <= v9 )
        v9 -= v14;
      v10 = *(_DWORD *)(v6 + 4 * v9);
      *(_DWORD *)(a1 + 32) = v17;
      if ( !v10 )
        break;
      if ( v10 != 1 )
      {
        if ( (*(int (__fastcall **)(int, int))(a1 + 4))(v10, a2) )
          return v10;
        v17 = *(_DWORD *)(a1 + 32);
        v6 = *(_DWORD *)(a1 + 12);
      }
    }
    return 0;
  }
  if ( !(*(int (__fastcall **)(_DWORD))(a1 + 4))(*(_DWORD *)(v6 + 4 * v9)) )
  {
    v15 = *(_DWORD *)(a1 + 56);
    v6 = *(_DWORD *)(a1 + 12);
    v4 = dword_4381A8[4 * v15];
    v5 = 4 * v15;
    v7 = dword_4381A8[v5 + 3];
    goto LABEL_5;
  }
  return v10;
}
