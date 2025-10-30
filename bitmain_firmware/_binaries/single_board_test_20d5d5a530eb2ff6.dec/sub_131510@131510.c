bool __fastcall sub_131510(int a1, int a2, _DWORD *a3, int ***a4)
{
  int **v9; // r1
  bool v10; // zf
  int **v11; // r9
  int **v12; // r0
  bool v13; // zf
  int **v14; // r8
  _BOOL4 v15; // r4
  int v16; // r10
  int v17; // r6
  int v18; // r1

  if ( sub_B87C0((int)a3, 4) || sub_B87C0(a2, 4) )
  {
    sub_D0048(3, 123, 66, (int)"crypto/bn/bn_exp.c", 49);
    return 0;
  }
  sub_130BC0((int)a4);
  v10 = a3 == (_DWORD *)a1;
  if ( a3 != (_DWORD *)a1 )
    v10 = a2 == a1;
  if ( v10 )
    v11 = sub_130CCC(a4, v9);
  else
    v11 = (int **)a1;
  v12 = sub_130CCC(a4, v9);
  v13 = v12 == 0;
  if ( v12 )
    v13 = v11 == 0;
  v14 = v12;
  if ( v13 || !sub_B89E4((int)v12, a2) )
    goto LABEL_13;
  v16 = sub_B85BC(a3);
  if ( sub_B870C((int)a3) )
  {
    if ( !sub_B89E4((int)v11, a2) )
      goto LABEL_13;
  }
  else if ( !sub_B8930(v11, 1) )
  {
    goto LABEL_13;
  }
  if ( v16 <= 1 )
  {
LABEL_28:
    v15 = v11 == (int **)a1 || sub_B89E4(a1, (int)v11) != 0;
    goto LABEL_14;
  }
  v17 = 1;
  while ( sub_BABCC(v14, (int)v14, (int)a4) )
  {
    v18 = v17++;
    if ( sub_B83F0(a3, v18) )
    {
      if ( !sub_BA0CC(v11, v11, v14, (int)a4) )
        break;
    }
    if ( v16 == v17 )
      goto LABEL_28;
  }
LABEL_13:
  v15 = 0;
LABEL_14:
  sub_130C74(a4);
  return v15;
}
