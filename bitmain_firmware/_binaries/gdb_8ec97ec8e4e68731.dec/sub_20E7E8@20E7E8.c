int __fastcall sub_20E7E8(int *a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v8; // r0
  void *v9; // r7

  v8 = (_DWORD *)sub_242FDC(a1);
  if ( sub_2573F0(*v8) )
    a3 = 2;
  v9 = sub_92E28();
  sub_20DE90(a1, a2, a3, 1, a4);
  if ( a4 )
    sub_20DB1C((int)a1);
  return sub_92E40((int)v9);
}
