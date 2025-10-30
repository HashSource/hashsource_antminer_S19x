bool __fastcall sub_17628C(int a1, int **a2, int **a3, int *a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r0
  int **v11; // r4
  _BOOL4 v12; // r4

  sub_130BC0((int)a5);
  v10 = sub_130CCC(a5, v9);
  v12 = v10 && (v11 = v10, sub_17620C(a4, v10)) && sub_175F84(a1, a2, a3, v11, a5);
  sub_130C74(a5);
  return v12;
}
