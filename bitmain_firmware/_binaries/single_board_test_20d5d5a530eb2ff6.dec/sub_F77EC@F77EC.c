int __fastcall sub_F77EC(int a1, int *a2)
{
  int v4; // r0

  if ( !a1 )
  {
    v4 = RSA_new();
    *a2 = v4;
    if ( !v4 )
      return 0;
    return 2;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 5 || *(_DWORD *)(*a2 + 4) != 1 )
      return 1;
    if ( sub_F8AC0() != 1 )
      return 0;
    return 2;
  }
  sub_F8154(*a2);
  *a2 = 0;
  return 2;
}
