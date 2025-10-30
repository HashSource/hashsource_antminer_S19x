int __fastcall sub_1369D8(int **a1, int **a2, int **a3, int a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r0
  int *v11; // r6
  int v12; // r4

  sub_130BC0((int)a5);
  v10 = sub_130CCC(a5, v9);
  if ( !v10 )
    goto LABEL_8;
  if ( !a3 )
  {
    v11 = (int *)a2;
    goto LABEL_5;
  }
  v11 = (int *)v10;
  if ( a3 == a2 )
  {
    if ( sub_BABCC(v10, (int)a3, (int)a5) )
      goto LABEL_5;
LABEL_8:
    v12 = 0;
    goto LABEL_6;
  }
  if ( !sub_BA0CC(v10, a2, a3, (int)a5) )
    goto LABEL_8;
LABEL_5:
  v12 = sub_136864(0, a1, v11, a4, a5);
LABEL_6:
  sub_130C74(a5);
  return v12;
}
