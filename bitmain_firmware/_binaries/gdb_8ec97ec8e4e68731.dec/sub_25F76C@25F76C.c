int __fastcall sub_25F76C(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int *a10)
{
  int v11; // r9
  int v12; // r2
  unsigned int v13; // kr00_4
  int v14; // r4
  __int16 *v15; // r3
  int v16; // r2
  _BOOL4 v17; // r3
  int v18; // r5
  int v19; // r0
  __int64 v20; // r10
  int v22; // r0
  int v23; // r0
  unsigned __int64 v24; // [sp+18h] [bp-24h]
  int v27; // [sp+2Ch] [bp-10h]
  unsigned __int64 v28; // [sp+30h] [bp-Ch]

  v11 = 0;
  v12 = *(_DWORD *)(a7 + 24);
  v24 = __PAIR64__(a4, a3);
  v13 = a3;
  v14 = 0;
  v28 = __PAIR64__(a4, v13) + (unsigned int)a5;
  while ( 1 )
  {
    if ( (*(_WORD *)(v12 + 2) & 0x380) == 0x80 )
      v15 = *(__int16 **)(v12 + 28);
    else
      v15 = &word_3B4A2C;
    v16 = *v15;
    v17 = v11 > 1;
    if ( v16 <= v14 )
      v17 = 1;
    if ( v17 )
      break;
    v18 = 24 * v14;
    v19 = sub_FC59C(a7, v14, a2, a5, v24, SHIDWORD(v24), a5, a6);
    v20 = v19;
    v27 = v19;
    if ( sub_173904(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a7 + 24) + 24) + 24 * v14 + 12)) )
    {
      v12 = *(_DWORD *)(a7 + 24);
      if ( (__int64)(v28 + v20) >= a8 && (__int64)(v28 + v20) < a8 + *(_DWORD *)(a9 + 20) )
      {
        ++v11;
        if ( !*a10 )
        {
          v23 = sub_25F714(*(_DWORD **)(*(_DWORD *)(v12 + 24) + v18 + 12), a5 + v24 + v27, 1);
          v12 = *(_DWORD *)(a7 + 24);
          *a10 = v23;
        }
      }
    }
    else
    {
      v22 = sub_25F76C(
              a1,
              a2,
              v24 + v20,
              (v24 + v20) >> 32,
              a5,
              a6,
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a7 + 24) + 24) + v18 + 12),
              a8,
              a9,
              a10);
      v12 = *(_DWORD *)(a7 + 24);
      v11 += v22;
    }
    ++v14;
  }
  return v11;
}
