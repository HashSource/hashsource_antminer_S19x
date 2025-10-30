int __fastcall sub_25F94C(int a1, int a2, __int64 a3, int a4, int a5, int a6, int *a7)
{
  int v7; // r4
  int v8; // r6
  int v9; // r12
  int v10; // r1
  _BOOL4 v11; // r3
  int v12; // r7
  int v13; // r10
  __int16 *v14; // r2
  int v15; // r3
  int v16; // r3
  int v18; // r0
  __int16 v19; // r1
  int v20; // r0
  int v24; // [sp+24h] [bp-8h]

  v7 = 0;
  v8 = 0;
  v9 = *(_DWORD *)(a6 + 24);
  v24 = a4 + a3;
  v10 = *(_WORD *)(v9 + 2) & 0x380;
  while ( 1 )
  {
    v11 = v8 > 1;
    if ( v10 == 128 )
      break;
    if ( v7 >= 0 )
      v11 = 1;
    if ( v11 )
      return v8;
LABEL_8:
    v12 = 24 * v7;
    v13 = sub_FC59C(a6, v7, a2, a4, a3, SHIDWORD(a3), a4, a5);
    if ( !sub_173904(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a6 + 24) + 24) + 24 * v7 + 12)) )
    {
      v20 = sub_25F94C(
              a1,
              a2,
              a3 + v13,
              (unsigned __int64)(a3 + v13) >> 32,
              a4,
              a5,
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a6 + 24) + 24) + v12 + 12),
              a7);
      v9 = *(_DWORD *)(a6 + 24);
      v8 += v20;
LABEL_10:
      v10 = *(_WORD *)(v9 + 2) & 0x380;
      goto LABEL_11;
    }
    ++v8;
    v9 = *(_DWORD *)(a6 + 24);
    if ( *a7 )
      goto LABEL_10;
    v18 = sub_25F714(*(_DWORD **)(*(_DWORD *)(v9 + 24) + v12 + 12), v24 + v13, 1);
    v9 = *(_DWORD *)(a6 + 24);
    v19 = *(_WORD *)(v9 + 2);
    *a7 = v18;
    v10 = v19 & 0x380;
LABEL_11:
    ++v7;
  }
  v14 = *(__int16 **)(v9 + 28);
  if ( v7 >= *v14 )
    v11 = 1;
  if ( !v11 )
  {
    if ( v14 != &word_3B4A2C )
    {
      v15 = *((_DWORD *)v14 + 5);
      if ( v15 )
      {
        if ( (*(unsigned __int8 *)(v15 + (v7 >> 3)) & (1 << (v7 & 7))) != 0 )
          goto LABEL_11;
      }
      v16 = *((_DWORD *)v14 + 6);
      if ( v16 )
      {
        if ( (*(unsigned __int8 *)(v16 + (v7 >> 3)) & (1 << (v7 & 7))) != 0 )
          goto LABEL_11;
      }
    }
    goto LABEL_8;
  }
  return v8;
}
