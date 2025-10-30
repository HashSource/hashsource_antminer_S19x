int __fastcall sub_CB084(int result, int a2, int a3, unsigned int a4)
{
  int v4; // r9
  int v5; // r6
  unsigned int v6; // r7
  int v7; // r12
  unsigned int v8; // r4
  unsigned int *v9; // r5
  int v10; // r3
  int v11; // r10
  bool v12; // cc
  bool v13; // r10
  int v15; // lr
  int v16; // r7
  unsigned int v17; // r4
  int v18; // r6
  bool v19; // r6
  unsigned int v21; // [sp+4h] [bp-8h]

  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v9 = (unsigned int *)(result + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_23;
    v7 = a2;
    goto LABEL_11;
  }
  v5 = a2;
  v21 = a4;
  do
  {
    v6 = *(_DWORD *)(result + 8 * (v5 + 1));
    v7 = 2 * (v5 + 1) - 1;
    v8 = *(_DWORD *)(result + 4 * v7);
    v9 = (unsigned int *)(result + 4 * v7);
    v10 = *(_DWORD *)(v6 + 24);
    v11 = *(_DWORD *)(v8 + 24);
    v12 = v10 < v11;
    v13 = v10 <= v11;
    if ( !v12 && (v6 >= v8 || !v13) )
    {
      v8 = *(_DWORD *)(result + 8 * (v5 + 1));
      v9 = (unsigned int *)(result + 8 * (v5 + 1));
      v7 = 2 * (v5 + 1);
    }
    *(_DWORD *)(result + 4 * v5) = v8;
    v5 = v7;
  }
  while ( v7 < v4 );
  a4 = v21;
  if ( (a3 & 1) == 0 )
  {
LABEL_11:
    if ( v7 == (a3 - 2) / 2 )
    {
      v7 = 2 * v7 + 1;
      *v9 = *(_DWORD *)(result + 4 * v7);
      v9 = (unsigned int *)(result + 4 * v7);
    }
  }
  v15 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    v16 = *(_DWORD *)(a4 + 24);
    while ( 1 )
    {
      v17 = *(_DWORD *)(result + 4 * v15);
      v9 = (unsigned int *)(result + 4 * v15);
      v18 = *(_DWORD *)(v17 + 24);
      v12 = v18 < v16;
      v19 = v18 <= v16;
      if ( !v12 && (v17 >= a4 || !v19) )
        break;
      v12 = a2 < v15;
      *(_DWORD *)(result + 4 * v7) = v17;
      v7 = v15;
      v15 = (v15 - 1) / 2;
      if ( !v12 )
        goto LABEL_23;
    }
    v9 = (unsigned int *)(result + 4 * v7);
  }
LABEL_23:
  *v9 = a4;
  return result;
}
