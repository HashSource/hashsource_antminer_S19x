bool __fastcall sub_133F3C(int *a1, int **a2, int **a3, int *a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r0
  int *v11; // r6
  int v12; // r4

  sub_130BC0((int)a5);
  v10 = sub_130CCC(a5, v9);
  if ( v10 )
  {
    v11 = (int *)v10;
    if ( a2 == a3 )
    {
      if ( sub_BABCC(v10, (int)a2, (int)a5) )
        goto LABEL_4;
    }
    else if ( sub_BA0CC(v10, a2, a3, (int)a5) )
    {
LABEL_4:
      v12 = sub_1337FC(a1, v11, a4, a5);
      sub_130C74(a5);
      return v12 != 0;
    }
  }
  sub_130C74(a5);
  return 0;
}
