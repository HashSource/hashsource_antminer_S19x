_DWORD *__fastcall sub_275BDC(int a1, char *a2)
{
  int v4; // r0
  bool v5; // zf
  int *v6; // r4
  int *v7; // r7
  int v8; // r0
  int *v9; // r5
  int v10; // r4
  _DWORD *result; // r0
  int v12; // r1
  int v13; // r12
  _DWORD *v14; // r3
  _DWORD *v15; // r12
  int v16; // r1
  int *v17; // t1
  int v18; // r2

  sub_2755DC(a1);
  v4 = ((int (__fastcall *)(int))loc_16CE10)(a1);
  v5 = v4 == 0;
  if ( v4 )
    v5 = a2 == 0;
  if ( v5 )
    return 0;
  v6 = *(int **)(v4 + 12);
  v7 = *(int **)(v4 + 16);
  if ( v6 == v7 )
    return 0;
  while ( 1 )
  {
    v8 = sub_33CAA0(*v6, a2);
    v9 = v6++;
    if ( !v8 )
      break;
    if ( v7 == v6 )
      return 0;
  }
  v10 = *v9;
  if ( !*v9 )
    return 0;
  result = sub_93028(8 * (((*(_DWORD *)(v10 + 28) - *(_DWORD *)(v10 + 24)) >> 2) + 1));
  v12 = *(_DWORD *)(v10 + 24);
  v13 = (*(_DWORD *)(v10 + 28) - v12) >> 2;
  if ( v13 )
  {
    v15 = &result[2 * v13];
    v16 = v12 - 4;
    v14 = result;
    do
    {
      v17 = *(int **)(v16 + 4);
      v16 += 4;
      v18 = *v17;
      v14[1] = v17[1];
      *v14 = v18;
      v14 += 2;
    }
    while ( v14 != v15 );
  }
  else
  {
    v14 = result;
  }
  v14[1] = 0;
  *v14 = 0;
  return result;
}
