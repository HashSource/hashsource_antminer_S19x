bool __fastcall sub_17623C(int **a1, int **a2, int *a3, int ***a4)
{
  int **v8; // r1
  int **v9; // r0
  int **v10; // r5
  _BOOL4 v12; // r5

  sub_130BC0((int)a4);
  v9 = sub_130CCC(a4, v8);
  if ( v9 && (v10 = v9, sub_17620C(a3, v9)) )
  {
    v12 = sub_175AF4(a1, a2, v10, (int)a4);
    sub_130C74(a4);
    return v12;
  }
  else
  {
    sub_130C74(a4);
    return 0;
  }
}
