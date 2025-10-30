int __fastcall sub_175740(int **a1, int **a2, int *a3, int ***a4)
{
  int **v8; // r1
  int *v9; // r0
  int *v10; // r8
  int v11; // r4

  if ( *a3 )
  {
    sub_130BC0((int)a4);
    v9 = (int *)sub_130CCC(a4, v8);
    v10 = v9;
    if ( v9 && sub_B8A68(v9, *a3 - 1) )
      v11 = sub_175680(a1, a2, v10, a3, a4);
    else
      v11 = 0;
    sub_130C74(a4);
    return v11;
  }
  else
  {
    sub_B8930(a1, 0);
    return 1;
  }
}
