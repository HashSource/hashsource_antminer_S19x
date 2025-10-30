_DWORD *__fastcall sub_323E68(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v7; // r7
  int v8; // r2
  int v9; // r3
  int v10; // r12
  int v11; // r2
  int v12; // lr
  unsigned __int64 v13; // r0
  unsigned int v14; // r4
  int v15; // r0
  int v16; // r10
  _DWORD *v17; // r8
  int v18; // r2
  int v19; // r11
  unsigned int v20; // r6
  int v21; // r12

  v7 = *(_DWORD *)(a1 + 16);
  if ( a4 == 1 && 3 * v7 <= 4 * *(_DWORD *)(a1 + 20) )
  {
    if ( !sub_323784(a1) )
      return 0;
    v7 = *(_DWORD *)(a1 + 16);
  }
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 12);
  v10 = dword_4381A8[4 * v8];
  v11 = 4 * v8;
  ++*(_DWORD *)(a1 + 28);
  v12 = dword_4381A8[v11 + 3];
  v13 = a3 * (unsigned __int64)(unsigned int)dword_4381A8[v11 + 1];
  v14 = a3 - v10 * ((HIDWORD(v13) + ((a3 - HIDWORD(v13)) >> 1)) >> v12);
  v15 = *(_DWORD *)(v9 + 4 * v14);
  v16 = 4 * v14;
  v17 = (_DWORD *)(v9 + 4 * v14);
  if ( !v15 )
  {
    if ( a4 )
    {
LABEL_20:
      ++*(_DWORD *)(a1 + 20);
      return v17;
    }
    return 0;
  }
  if ( v15 != 1 )
  {
    v17 = (_DWORD *)(*(int (__fastcall **)(int, int))(a1 + 4))(v15, a2);
    if ( v17 )
      return (_DWORD *)(*(_DWORD *)(a1 + 12) + v16);
    v18 = *(_DWORD *)(a1 + 56);
    v9 = *(_DWORD *)(a1 + 12);
    v10 = dword_4381A8[4 * v18];
    v11 = 4 * v18;
    v12 = dword_4381A8[v11 + 3];
  }
  v19 = *(_DWORD *)(a1 + 32);
  v20 = a3
      + 1
      - (v10 - 2)
      * ((unsigned int)(((a3 * (unsigned __int64)(unsigned int)dword_4381A8[v11 + 2]) >> 32)
                      + ((unsigned int)(a3 - ((a3 * (unsigned __int64)(unsigned int)dword_4381A8[v11 + 2]) >> 32)) >> 1)) >> v12);
  while ( 1 )
  {
    v14 += v20;
    ++v19;
    if ( v7 <= v14 )
      v14 -= v7;
    v21 = *(_DWORD *)(v9 + 4 * v14);
    v16 = 4 * v14;
    *(_DWORD *)(a1 + 32) = v19;
    if ( !v21 )
      break;
    if ( v21 == 1 )
    {
      if ( !v17 )
        v17 = (_DWORD *)(v9 + 4 * v14);
    }
    else
    {
      if ( (*(int (__fastcall **)(int, int))(a1 + 4))(v21, a2) )
        return (_DWORD *)(*(_DWORD *)(a1 + 12) + v16);
      v19 = *(_DWORD *)(a1 + 32);
      v9 = *(_DWORD *)(a1 + 12);
    }
  }
  if ( !a4 )
    return 0;
  if ( !v17 )
  {
    v17 = (_DWORD *)(v9 + 4 * v14);
    goto LABEL_20;
  }
  --*(_DWORD *)(a1 + 24);
  *v17 = 0;
  return v17;
}
