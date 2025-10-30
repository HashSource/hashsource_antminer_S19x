int __fastcall sub_133634(int a1, int a2, int ***a3)
{
  int **v6; // r1
  int **v7; // r5
  int **v8; // r1
  int **v9; // r0
  int **v10; // r6
  int v11; // r0
  _BOOL4 v12; // r4
  int i; // r8
  int v14; // r0
  int v15; // r8
  int j; // r4
  int *v17; // r3
  int v18; // r2
  int v19; // r0
  int **v20; // r3

  sub_130BC0((int)a3);
  v7 = sub_130CCC(a3, v6);
  v9 = sub_130CCC(a3, v8);
  if ( !v9 || (v10 = v9, !sub_B89E4((int)v7, a1)) )
  {
LABEL_31:
    sub_130C74(a3);
    return -2;
  }
  v11 = sub_B89E4((int)v10, a2);
  v12 = v11 == 0;
  if ( !v11 )
    goto LABEL_32;
  if ( sub_B85B0((int)v10) )
  {
    v15 = sub_B8590((int)v7, 1);
    goto LABEL_33;
  }
  if ( !sub_B870C((int)v7) && !sub_B870C((int)v10) )
  {
    v15 = 0;
    goto LABEL_33;
  }
  for ( i = 0; !sub_B83F0(v10, i); ++i )
    ;
  v14 = sub_BA7EC(v10, v10, i);
  v12 = v14 == 0;
  if ( !v14 )
  {
LABEL_32:
    v15 = -2;
    goto LABEL_33;
  }
  if ( (i & 1) != 0 )
  {
    v15 = (int)v7[1];
    if ( v15 )
      v15 = dword_1CB2D8[**v7 & 7];
  }
  else
  {
    v15 = 1;
  }
  if ( v10[3] )
  {
    v10[3] = 0;
    if ( v7[3] )
      v15 = -v15;
  }
  while ( !sub_B85B0((int)v7) )
  {
    for ( j = 0; !sub_B83F0(v7, j); ++j )
      ;
    if ( !sub_BA7EC(v7, v7, j) )
      goto LABEL_31;
    v17 = v10[1];
    if ( (j & 1) != 0 )
    {
      if ( v17 )
        v15 *= dword_1CB2D8[**v10 & 7];
      else
        v15 = 0;
    }
    if ( v7[3] )
    {
      if ( v7[1] )
        v18 = ~**v7;
      else
        LOBYTE(v18) = -1;
    }
    else
    {
      if ( !v7[1] )
        goto LABEL_29;
      v18 = **v7;
    }
    if ( v17 && (*(_BYTE *)*v10 & 2 & (unsigned __int8)v18) != 0 )
      v15 = -v15;
LABEL_29:
    v19 = sub_1337FC(v10, v10, v7, a3);
    v12 = v19 == 0;
    if ( !v19 )
      goto LABEL_33;
    v20 = v7;
    v7[3] = 0;
    v7 = v10;
    v10 = v20;
  }
  if ( !sub_B86D8((int)v10) )
    v15 = 0;
LABEL_33:
  sub_130C74(a3);
  if ( v12 )
    return -2;
  else
    return v15;
}
