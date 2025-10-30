unsigned int __fastcall sub_12F7C0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // r4
  _DWORD *v5; // lr
  _DWORD *v6; // r5
  int v7; // r6
  int v8; // r7
  unsigned int v9; // r12
  unsigned int v10; // r4
  unsigned int v11; // r7
  _BOOL4 v12; // r12
  unsigned int v13; // r4
  int v14; // r7
  unsigned int v15; // r6
  unsigned int v16; // r4
  int v17; // r7
  unsigned int v18; // r6
  unsigned int v19; // r6
  _BOOL4 v20; // r7
  int v21; // r6
  unsigned int v22; // r5
  bool v23; // cf
  int v24; // r5
  int v25; // r2
  unsigned int v26; // r3
  int v27; // r3
  int v29; // [sp+4h] [bp-1Ch]

  if ( a3 <= 0 )
    return 0;
  v4 = a3 & 0x7FFFFFFC;
  if ( (a3 & 0xFFFFFFFC) == 0 )
    goto LABEL_14;
  v5 = a2 + 4;
  v6 = a1 + 4;
  v4 = 0;
  do
  {
    v7 = *(v5 - 4);
    a3 -= 4;
    v8 = *(v6 - 4);
    a2 = v5;
    v5 += 4;
    v9 = v4 + v7 * a4;
    v29 = *(v6 - 3);
    a1 = v6;
    v6 += 4;
    v10 = v9 < v4;
    *(v6 - 8) = v9 + v8;
    if ( __CFADD__(v9, v8) )
      ++v10;
    v11 = v10 + *(v5 - 7) * a4;
    v12 = v10 > v11;
    v13 = v12 + 1;
    *(v6 - 7) = v11 + v29;
    if ( !__CFADD__(v11, v29) )
      v13 = v12;
    v14 = *(v6 - 6);
    v15 = v13 + *(v5 - 6) * a4;
    v16 = v13 > v15;
    *(v6 - 6) = v15 + v14;
    if ( __CFADD__(v15, v14) )
      ++v16;
    v17 = *(v6 - 5);
    v18 = v16 + *(v5 - 5) * a4;
    v4 = v16 > v18;
    *(v6 - 5) = v18 + v17;
    if ( __CFADD__(v18, v17) )
      ++v4;
  }
  while ( (a3 & 0xFFFFFFFC) != 0 );
  if ( a3 )
  {
LABEL_14:
    v19 = v4 + *a2 * a4;
    v20 = v4 > v19;
    v4 = v20 + 1;
    if ( !__CFADD__(*a1, v19) )
      v4 = v20;
    *a1 += v19;
    if ( a3 != 1 )
    {
      v21 = a1[1];
      v22 = v4 + a2[1] * a4;
      v4 = v4 > v22;
      v23 = __CFADD__(v22, v21);
      v24 = v22 + v21;
      if ( v23 )
        ++v4;
      a1[1] = v24;
      if ( a3 != 2 )
      {
        v25 = a1[2];
        v26 = v4 + a2[2] * a4;
        v4 = v26 < v4;
        v23 = __CFADD__(v26, v25);
        v27 = v26 + v25;
        if ( v23 )
          ++v4;
        a1[2] = v27;
      }
    }
  }
  return v4;
}
