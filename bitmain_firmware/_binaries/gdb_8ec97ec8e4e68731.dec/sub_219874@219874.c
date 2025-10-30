int __fastcall sub_219874(_DWORD *a1, char *a2, int *a3)
{
  int v5; // r0
  int v6; // r2
  int v7; // r6
  int v8; // r4
  int v9; // r3
  int i; // r8
  __int16 *v11; // r1
  int v12; // r9
  bool v13; // zf
  __int16 *v14; // r3
  int v15; // r4
  int v16; // r0
  __int16 v17; // r3
  int result; // r0
  __int16 *v19; // r3
  __int16 *v20; // r3
  int v21; // r3
  int v22; // r4
  int v23; // r8
  int v24; // r3

  v5 = sub_171258(a1);
  v6 = *(_DWORD *)(v5 + 24);
  v7 = v5;
  v8 = *(__int16 *)(v6 + 4) - 1;
  v9 = *(_WORD *)(v6 + 2) & 0x380;
  for ( i = 24 * v8; ; i -= 24 )
  {
    v11 = &word_3B4A2C;
    if ( (unsigned __int16)v9 == 128 )
      v11 = *(__int16 **)(v6 + 28);
    if ( *v11 > v8 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 24) + i + 16) )
    {
      if ( !sub_25BD2C(*(_DWORD *)(*(_DWORD *)(v6 + 24) + i + 16), a2) )
      {
        v21 = *(_DWORD *)(v7 + 24);
        *a3 = v7;
        a3[1] = *(_DWORD *)(v21 + 24) + i;
        return 1;
      }
      v6 = *(_DWORD *)(v7 + 24);
      v9 = *(_WORD *)(v6 + 2) & 0x380;
    }
    --v8;
  }
  if ( (unsigned __int16)v9 == 128 )
  {
    v15 = *(__int16 *)(*(_DWORD *)(v6 + 28) + 4) - 1;
    if ( v15 < 0 )
    {
LABEL_21:
      v20 = *(__int16 **)(v6 + 28);
      goto LABEL_25;
    }
    v12 = 12 * v15;
    do
    {
      v13 = v9 == 128;
      v14 = &word_3B4A2C;
      if ( v13 )
        v14 = *(__int16 **)(v6 + 28);
      --v15;
      v16 = sub_25BD2C(*(_DWORD *)(*((_DWORD *)v14 + 8) + v12), a2);
      v6 = *(_DWORD *)(v7 + 24);
      if ( !v16 )
      {
        v17 = *(_WORD *)(v6 + 2);
        result = 1;
        *a3 = v7;
        if ( (v17 & 0x380) == 0x80 )
          v19 = *(__int16 **)(v6 + 28);
        else
          v19 = &word_3B4A2C;
        a3[2] = *((_DWORD *)v19 + 8) + v12;
        return result;
      }
      v12 -= 12;
      v9 = *(_WORD *)(v6 + 2) & 0x380;
    }
    while ( v15 != -1 );
    if ( v9 == 128 )
      goto LABEL_21;
  }
  v20 = &word_3B4A2C;
LABEL_25:
  v22 = *v20 - 1;
  if ( v22 < 0 )
    return 0;
  v23 = 24 * v22;
  while ( 1 )
  {
    --v22;
    v24 = *(_DWORD *)(v6 + 24) + v23;
    v23 -= 24;
    if ( sub_219874(*(_DWORD *)(v24 + 12), a2, a3) )
      break;
    if ( v22 == -1 )
      return 0;
    v6 = *(_DWORD *)(v7 + 24);
  }
  return 1;
}
