unsigned int __fastcall sub_2FF798(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  unsigned int v4; // r4
  unsigned int v5; // r0
  int v6; // r6
  unsigned int v7; // r1
  int v8; // r5
  unsigned int v9; // r12
  unsigned int v10; // lr
  int v11; // r3
  int v12; // r2
  int v13; // r12
  int v14; // r1
  int v15; // lr
  int v16; // t1
  int v17; // t1

  v2 = *a2;
  v3 = *a1;
  v4 = *(_DWORD *)(*a2 + 12);
  v5 = *(_DWORD *)(*a1 + 12);
  v6 = *(_DWORD *)(v3 + 4);
  v7 = v4 - 1;
  v8 = *(_DWORD *)(v2 + 4);
  v9 = v5 - 1;
  if ( v5 >= v4 )
    v10 = v4;
  else
    v10 = v5;
  v11 = v6 + v9;
  v12 = v8 + v7;
  if ( !v10 )
    return v5 - v4;
  v13 = *(unsigned __int8 *)(v6 + v9);
  v14 = *(unsigned __int8 *)(v8 + v7);
  if ( v13 == v14 )
  {
    v15 = v11 + 1 - v10;
    while ( v11 != v15 )
    {
      v16 = *(unsigned __int8 *)--v11;
      v13 = v16;
      v17 = *(unsigned __int8 *)--v12;
      v14 = v17;
      if ( v13 != v17 )
        return v13 - v14;
    }
    return v5 - v4;
  }
  return v13 - v14;
}
