_DWORD *__fastcall sub_2553A4(_DWORD *result, int a2)
{
  _DWORD *v2; // r6
  int v3; // r5
  unsigned int v5; // r4
  int v6; // r10
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r4
  __int16 *v12; // r1
  int v13; // r12

  v2 = result;
  if ( result )
  {
    v3 = 0;
    v5 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a2 + 24);
      v9 = *(_WORD *)(v8 + 2) & 0x380;
      if ( v9 != 128 )
        break;
      v10 = *(_DWORD *)(v8 + 28);
      if ( (__int16 *)v10 == &word_3B4A2C || *(_DWORD *)(v10 + 40) <= v5 )
        break;
      ++v5;
      v6 = *(_DWORD *)(v10 + 36) + v3;
      v3 += 12;
      v7 = (_DWORD *)sub_324030(*v2, v6, 1);
      if ( !*v7 )
        *v7 = v6;
    }
    v11 = 0;
    while ( 1 )
    {
      v12 = &word_3B4A2C;
      if ( v9 == 128 )
        v12 = *(__int16 **)(v8 + 28);
      v13 = 3 * v11;
      result = v2;
      if ( *v12 <= v11++ )
        break;
      sub_2553A4(v2, *(_DWORD *)(*(_DWORD *)(v8 + 24) + 8 * v13 + 12));
      v8 = *(_DWORD *)(a2 + 24);
      v9 = *(_WORD *)(v8 + 2) & 0x380;
    }
  }
  return result;
}
