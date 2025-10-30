int __fastcall sub_179B2C(_DWORD *a1, int a2, __int64 a3)
{
  int v5; // r12
  int v6; // r2
  int v7; // r10
  __int16 *v8; // r3
  int v9; // r9
  int v10; // r5
  int v11; // r11
  int v12; // r3
  unsigned __int16 *j; // r4
  int v14; // r10
  unsigned __int16 *v15; // r1
  int v16; // r2
  __int16 v17; // r2
  int v18; // r0
  int i; // r1
  int v20; // r3
  __int16 *v21; // r3
  int v22; // r3

LABEL_1:
  v5 = a1[6];
  v6 = *(_WORD *)(v5 + 2) & 0x380;
  v7 = (unsigned __int16)v6;
  if ( a3 || ((unsigned __int16)v6 != 128 ? (v8 = &word_3B4A2C) : (v8 = *(__int16 **)(v5 + 28)), v9 = v8[2], v9 <= 0) )
  {
LABEL_17:
    v18 = 0;
    for ( i = 0; ; ++i )
    {
      if ( v7 != 128 || (v21 = *(__int16 **)(v5 + 28), v21 == &word_3B4A2C) )
      {
        if ( i >= 0 )
          return 0;
      }
      else
      {
        if ( *v21 <= i )
          return 0;
        v22 = *((_DWORD *)v21 + 4);
        if ( v22 && (((int)*(unsigned __int8 *)(v22 + (i >> 3)) >> (i & 7)) & 1) != 0 )
          goto LABEL_23;
      }
      v20 = *(_QWORD *)(*(_DWORD *)(v5 + 24) + v18) / 8LL;
      if ( a3 >= v20 )
      {
        a1 = *(_DWORD **)(*(_DWORD *)(v5 + 24) + v18 + 12);
        if ( a3 < (unsigned int)(a1[5] + v20) )
        {
          a3 -= (int)(*(_QWORD *)(*(_DWORD *)(v5 + 24) + v18) / 8LL);
          goto LABEL_1;
        }
      }
LABEL_23:
      v18 += 24;
    }
  }
  v10 = 0;
  v11 = 0;
  if ( v6 == 128 )
    goto LABEL_15;
LABEL_7:
  v12 = v10;
  for ( j = *(unsigned __int16 **)(v10 + 8); ; j = *(unsigned __int16 **)(v12 + 8) )
  {
    v14 = *(_DWORD *)(v12 + 4);
    sub_172A40(a1, v11);
    if ( v14 <= 0 )
      goto LABEL_13;
    if ( a2 == j[7] - 2 )
      break;
    v15 = j + 8;
    v16 = 0;
    while ( 1 )
    {
      ++v16;
      j = v15;
      v15 += 8;
      if ( v14 == v16 )
        break;
      if ( a2 == j[7] - 2 )
        return *(_DWORD *)j;
    }
LABEL_13:
    ++v11;
    v5 = a1[6];
    v10 += 12;
    v17 = *(_WORD *)(v5 + 2);
    if ( v11 == v9 )
    {
      v7 = v17 & 0x380;
      goto LABEL_17;
    }
    if ( (v17 & 0x380) != 0x80 )
      goto LABEL_7;
LABEL_15:
    v12 = *(_DWORD *)(*(_DWORD *)(v5 + 28) + 32) + v10;
  }
  return *(_DWORD *)j;
}
