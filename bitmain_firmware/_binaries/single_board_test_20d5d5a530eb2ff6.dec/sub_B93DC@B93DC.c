int __fastcall sub_B93DC(int *a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r5

  sub_130BC0(a4);
  v8 = sub_130CCC(a4);
  if ( v8 && (v9 = (_DWORD *)v8, sub_B89E4(v8, a2)) )
  {
    v10 = sub_B8E64(a1, v9, a3);
    sub_130C74(a4);
    return v10;
  }
  else
  {
    sub_130C74(a4);
    return 0;
  }
}
