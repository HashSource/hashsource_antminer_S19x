int __fastcall sub_E06C4(int (*a1)(void), void *a2, int (*a3)(void))
{
  int v3; // r3

  v3 = dword_21FB30;
  if ( dword_21FB30 )
  {
    if ( a1 )
      off_21FB38 = a1;
    if ( a2 )
      off_21FB3C = a2;
    v3 = 1;
    if ( a3 )
      off_21FB34 = a3;
  }
  return v3;
}
