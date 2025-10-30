int __fastcall sub_2AD048(int a1, unsigned int a2, unsigned int a3)
{
  _BOOL4 v3; // r3
  int v4; // r1

  v3 = (a2 | a3) >= 0x10000;
  if ( !a3 )
    v3 = 0;
  if ( !v3 )
  {
    v4 = a3 * a2;
    return sub_2ACBF4(a1, v4);
  }
  if ( is_mul_ok(a2, a3) )
  {
    v4 = a3 * a2;
    return sub_2ACBF4(a1, v4);
  }
  ((void (__fastcall *)(int))loc_2A6C48)(6);
  return 0;
}
