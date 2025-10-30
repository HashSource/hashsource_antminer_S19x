int __fastcall sub_2CE110(int a1, int a2)
{
  int v3; // r3
  int v4; // r2
  int v7; // r12
  int v8; // r11
  int v9; // r10
  int v10; // r2
  bool v11; // zf
  int v12; // r1
  unsigned int v13; // r9
  _DWORD *v14; // r4
  _DWORD *v15; // t1
  unsigned int v16; // r3
  _BOOL4 v17; // r2
  int v18; // r12
  unsigned int v19; // lr
  int v20; // r0
  unsigned int i; // r7
  _DWORD *v22; // r2
  _DWORD *v23; // t1
  int v24; // r3
  int v25; // r1
  int v26; // r1
  _BOOL4 v27; // r3
  int v28; // r8
  int v29; // r7
  unsigned int v30; // r3
  _DWORD *v31; // r2
  _DWORD *v32; // t1
  int v33; // r3
  int v34; // r0
  unsigned int v35; // r3
  void (__fastcall *v36)(int, int, _DWORD, _DWORD *); // r7
  int v37; // [sp+Ch] [bp-2Ch]

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 || *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4) != 5 )
    return 1;
  v3 = *(_DWORD *)(a2 + 160);
  v4 = *(_DWORD *)(a1 + 160);
  v7 = *(_DWORD *)(v3 + 2348);
  v8 = *(_DWORD *)(v4 + 64);
  v9 = *(_DWORD *)(v3 + 64);
  if ( !*(_DWORD *)(v7 + 60) )
  {
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(v7 + 60) = 1;
  }
  *(_DWORD *)(v3 + 524) = *(_DWORD *)(v4 + 524);
  *(_BYTE *)(v3 + 7) = *(_BYTE *)(v4 + 7);
  v10 = *(unsigned __int8 *)(v4 + 8);
  if ( v10 )
    *(_BYTE *)(v3 + 8) = v10;
  sub_2EF7F4(a1, a2);
  v11 = v9 == 0;
  if ( v9 )
    v11 = v8 == 0;
  if ( v11 )
    return 1;
  v12 = *(_DWORD *)(a2 + 160);
  v37 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 444);
  if ( *(_DWORD *)(v12 + 532) <= 1u )
    return 1;
  v13 = 1;
  do
  {
    v15 = *(_DWORD **)(v9 + 4);
    v9 += 4;
    v14 = v15;
    if ( !v15 )
      goto LABEL_52;
    v16 = v14[1];
    v17 = v16 != 8;
    if ( v16 > 0x5FFFFFFF )
      v17 = 0;
    if ( v17 || !v14[6] || v14[8] && v14[7] )
      goto LABEL_52;
    v18 = *(_DWORD *)(a1 + 160);
    v19 = *(_DWORD *)(v18 + 532);
    if ( v19 <= 1 )
      goto LABEL_46;
    v20 = v8;
    for ( i = 1; i != v19; ++i )
    {
      v23 = *(_DWORD **)(v20 + 4);
      v20 += 4;
      v22 = v23;
      if ( v23 )
      {
        v24 = v14[11];
        if ( v24 )
        {
          v25 = v22[11];
          if ( v25 )
          {
            v26 = *(_DWORD *)(v25 + 60);
            v27 = v24 == v26;
            if ( !v26 )
              v27 = 0;
            if ( v27 )
              break;
          }
        }
      }
    }
    v34 = sub_2CC28C(a1, a2, v22, v14, v13);
    v18 = *(_DWORD *)(a1 + 160);
    v35 = *(_DWORD *)(v18 + 532);
    if ( v34 && v35 > i )
      goto LABEL_51;
    if ( v35 <= 1 )
    {
LABEL_46:
      v30 = *(_DWORD *)(v18 + 532);
      v29 = 1;
      goto LABEL_47;
    }
    v28 = v8;
    v29 = 1;
    while ( 1 )
    {
      v32 = *(_DWORD **)(v28 + 4);
      v28 += 4;
      v31 = v32;
      if ( !v32 )
        goto LABEL_32;
      v33 = v14[1];
      if ( v33 != 8 && v33 != v31[1] )
        goto LABEL_32;
      if ( ((v31[2] ^ v14[2]) & 0xFFFFFFBF) != 0
        || v31[9] != v14[9]
        || v31[10] != v14[10]
        || v31[6] != v14[6]
        || v31[3] != v14[3]
        || v31[8] == v14[8] && v31[7] == v14[7] )
      {
        goto LABEL_32;
      }
      if ( sub_2CC28C(a1, a2, v31, v14, v13) )
        break;
      v18 = *(_DWORD *)(a1 + 160);
LABEL_32:
      v30 = *(_DWORD *)(v18 + 532);
      if ( v30 <= ++v29 )
        goto LABEL_47;
    }
    v30 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 532);
LABEL_47:
    if ( v29 == v30 && v14[1] > 0x5FFFFFFFu )
    {
      v36 = *(void (__fastcall **)(int, int, _DWORD, _DWORD *))(v37 + 372);
      if ( v36 )
        v36(a1, a2, 0, v14);
    }
LABEL_51:
    v12 = *(_DWORD *)(a2 + 160);
LABEL_52:
    ++v13;
  }
  while ( *(_DWORD *)(v12 + 532) > v13 );
  return 1;
}
