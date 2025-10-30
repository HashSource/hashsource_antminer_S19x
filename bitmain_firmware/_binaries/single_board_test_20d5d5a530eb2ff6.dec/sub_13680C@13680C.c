int __fastcall sub_13680C(int **a1, _DWORD *a2, int a3, int ***a4)
{
  int **v8; // r1
  int *v9; // r0
  int *v10; // r7

  sub_130BC0((int)a4);
  v9 = (int *)sub_130CCC(a4, v8);
  if ( v9 && (v10 = v9, sub_B8A68(v9, a3)) && sub_131220(a1, 0, v10, a2, a4) )
  {
    sub_130C74(a4);
    return a3;
  }
  else
  {
    sub_130C74(a4);
    return -1;
  }
}
