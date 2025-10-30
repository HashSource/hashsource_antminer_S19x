int __fastcall sub_2F30E0(int a1)
{
  int v2; // r5
  size_t v3; // r1
  _DWORD *v4; // r0
  size_t v5; // r2
  _DWORD *v6; // r3
  size_t v7; // r12
  unsigned int v8; // r4
  _DWORD **v9; // r12
  _DWORD *v10; // r3
  unsigned int v11; // r0
  bool v12; // cc
  int v13; // r1
  _DWORD *v14; // lr
  int v15; // r6
  int v16; // r0
  int v17; // r2
  int v18; // r0

  if ( (*(_BYTE *)(a1 + 3) & 0x60) != 0x40 )
    return 0;
  v2 = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(v2 + 172);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD **)(v2 + 184);
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = &v4[v5];
      v7 = v5 + 1;
      if ( (*(_DWORD *)(*v6 + 20) & 0x8000) != 0 )
        break;
      v3 = *(_DWORD *)(v2 + 172);
      ++v5;
      if ( v3 <= v7 )
        goto LABEL_10;
    }
    if ( v3 > v7 )
    {
      do
      {
        *v6 = v6[1];
        ++v6;
      }
      while ( &v4[v3 - 1] != v6 );
    }
    *(_DWORD *)(v2 + 172) = --v3;
    v4[v3] = 0;
  }
  while ( v3 > v5 );
LABEL_10:
  v8 = 0;
  qsort(v4, v3, 4u, (__compar_fn_t)sub_2F1670);
  v9 = *(_DWORD ***)(v2 + 184);
  v10 = *v9;
  v11 = *(_DWORD *)(v2 + 172) - 1;
  while ( 1 )
  {
    v12 = v11 > v8;
    v13 = (int)v10;
    ++v8;
    if ( !v12 )
      break;
    while ( 1 )
    {
      v14 = v9[v8];
      v15 = v8;
      if ( v14 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v10[35] + 136) + 56)
           + *(_DWORD *)(*(_DWORD *)(v10[35] + 136) + 36)
           + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10[35] + 136) + 60) + 28) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14[35] + 136) + 60)
                                                                                         + 28)
                                                                             + *(_DWORD *)(*(_DWORD *)(v14[35] + 136)
                                                                                         + 56) )
          break;
      }
      v16 = v10[9];
      if ( !v10[10] )
        v10[10] = v16;
      sub_2ADDBC(v10[37], v13, v16 + 8);
      v9 = *(_DWORD ***)(v2 + 184);
      v10 = v9[v8];
      v11 = *(_DWORD *)(v2 + 172) - 1;
      v12 = v11 > v8++;
      v13 = (int)v9[v15];
      if ( !v12 )
        goto LABEL_19;
    }
    v10 = v9[v8];
  }
LABEL_19:
  v17 = v10[9];
  v18 = v10[37];
  if ( !v10[10] )
    v10[10] = v17;
  sub_2ADDBC(v18, (int)v10, v17 + 8);
  return 1;
}
