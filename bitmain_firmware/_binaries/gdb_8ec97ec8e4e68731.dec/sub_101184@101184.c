int __fastcall sub_101184(int *a1, unsigned int *a2, signed __int64 a3)
{
  int result; // r0
  int v5; // r10
  int v6; // r3
  unsigned int v7; // r11
  int v8; // r12
  __int16 *v9; // r2
  unsigned int v10; // r7
  int v11; // r6
  __int64 v12; // r8
  int v13; // r1
  unsigned int v14; // lr
  __int16 *v15; // r2
  int v17; // r2
  __int64 v18; // r8
  int v19; // r2

  for ( result = *a1; ; *a1 = result )
  {
    result = sub_171258(result);
    v5 = result;
    v6 = *(_DWORD *)(result + 24);
    *a1 = result;
    v7 = *(__int16 *)(v6 + 4);
    v8 = *(_WORD *)(v6 + 2) & 0x380;
    v9 = v8 == 128 ? *(__int16 **)(v6 + 28) : &word_3B4A2C;
    v10 = *v9;
    if ( v7 > v10 )
      break;
LABEL_12:
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = &word_3B4A2C;
      if ( v8 == 128 )
        v15 = *(__int16 **)(v6 + 28);
      if ( *v15 <= v14++ )
      {
        *a1 = 0;
        return result;
      }
      v17 = *(_DWORD *)(v6 + 24);
      v18 = *(_QWORD *)(v17 + v13);
      v19 = v17 + v13;
      v13 += 24;
      result = (unsigned __int64)(a3 - v18) >> 32;
      if ( a3 >= v18 )
      {
        result = *(_DWORD *)(v19 + 12);
        if ( a3 < v18 + (unsigned int)(8 * *(_DWORD *)(result + 20)) )
          break;
      }
    }
    a3 -= v18;
  }
  v11 = 24 * v10;
  while ( 1 )
  {
    v12 = *(_QWORD *)(*(_DWORD *)(v6 + 24) + v11);
    v11 += 24;
    result = sub_258BD4(result);
    if ( v12 == a3 )
      break;
    ++v10;
    v6 = *(_DWORD *)(v5 + 24);
    if ( v7 <= v10 )
    {
      v8 = *(_WORD *)(v6 + 2) & 0x380;
      goto LABEL_12;
    }
  }
  *a2 = v10;
  return result;
}
