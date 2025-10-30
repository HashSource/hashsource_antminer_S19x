int __fastcall sub_154FB0(int a1, int a2)
{
  int *v4; // r4
  _DWORD *v5; // r0

  v4 = (int *)sub_D14F4();
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)sub_15E674();
  if ( !sub_D1520(v4, v5, 0) || !sub_D16D8((int)v4, a2, 57) || !sub_D1748(v4, a1, 56) )
  {
    sub_D1504(v4);
    return 0;
  }
  sub_D1504(v4);
  return -1;
}
