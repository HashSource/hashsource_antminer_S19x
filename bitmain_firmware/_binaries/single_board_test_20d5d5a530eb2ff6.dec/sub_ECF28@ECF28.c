int __fastcall sub_ECF28(int a1, int *a2)
{
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r4

  v3 = (_DWORD *)sub_EEFEC(a1, 0);
  if ( !v3 )
    return 0;
  v4 = (int)v3;
  v5 = sub_DA0D8(v3);
  sub_DA240(v4);
  if ( !v5 )
    return 0;
  if ( a2 )
  {
    sub_C09D0(*a2);
    *a2 = v5;
  }
  return v5;
}
