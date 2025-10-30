int __fastcall sub_ECDAC(int a1, int *a2, int a3, char *a4)
{
  _DWORD *v5; // r0
  int v6; // r6
  int v7; // r4

  v5 = (_DWORD *)sub_EEC84(a1, 0, a3, a4);
  if ( !v5 )
    return 0;
  v6 = (int)v5;
  v7 = sub_DA0D8(v5);
  sub_DA240(v6);
  if ( !v7 )
    return 0;
  if ( a2 )
  {
    sub_C09D0(*a2);
    *a2 = v7;
  }
  return v7;
}
