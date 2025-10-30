int __fastcall sub_1D11B0(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r2
  int v9; // r7
  int v10; // r8
  int v11; // r7
  int v12; // r8
  int v13; // r6
  int v14; // t1
  int v15; // r3
  int v16; // r7
  int v17; // r8
  int v18; // r7
  int v19; // r8
  int v20; // r6
  int v21; // t1
  int v22; // r3
  _DWORD *v23; // r0
  int **v24; // r3
  int v25; // r1
  int v26; // r2

  result = (int)sub_1D0878(a1, 1);
  v6 = *(_DWORD **)(result + 24);
  if ( !v6 )
    goto LABEL_6;
  v7 = a1[38];
  if ( v7 != -1 )
  {
    result = *(_DWORD *)(a3 + 4 * v7);
    do
    {
      v8 = v6[5] + result;
      v6[4] += result;
      v6[5] = v8;
      v6 = (_DWORD *)*v6;
    }
    while ( v6 );
LABEL_6:
    v9 = a1[27];
    v10 = a1[28];
    if ( v9 != v10 )
    {
      v11 = v9 - 4;
      v12 = v10 - 4;
      do
      {
        v14 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        v13 = v14;
        result = ((int (__fastcall *)(int, _DWORD *))loc_1CEC20)(v14, a1);
        v15 = *(__int16 *)(v14 + 22);
        if ( v15 >= 0 )
          *(_DWORD *)(v13 + 8) += *(_DWORD *)(a3 + 4 * v15);
      }
      while ( v11 != v12 );
    }
    v16 = a1[30];
    v17 = a1[31];
    if ( v17 != v16 )
    {
      v18 = v16 - 4;
      v19 = v17 - 4;
      do
      {
        v21 = *(_DWORD *)(v18 + 4);
        v18 += 4;
        v20 = v21;
        result = ((int (__fastcall *)(int, _DWORD *))loc_1CEC20)(v21, a1);
        v22 = *(__int16 *)(v21 + 22);
        if ( v22 >= 0 )
          *(_DWORD *)(v20 + 8) += *(_DWORD *)(a3 + 4 * v22);
      }
      while ( v19 != v18 );
    }
    a1[25] = a1[24];
    return result;
  }
  v23 = (_DWORD *)sub_94700((int)"psymtab.c", 810, "sect_index_text not initialized");
  v24 = (int **)sub_1D0878(v23, 1)[6];
  if ( v24 )
  {
    v25 = 0;
    do
    {
      v26 = *((unsigned __int8 *)v24 + 52);
      v24 = (int **)*v24;
      if ( !v26 )
        ++v25;
    }
    while ( v24 );
  }
  else
  {
    v25 = 0;
  }
  return sub_259F10("  Number of psym tables (not yet expanded): %d\n", v25);
}
