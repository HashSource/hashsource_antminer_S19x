int __fastcall sub_CE10(int a1, unsigned __int16 *a2)
{
  int v3; // r1
  _BOOL4 v4; // r2
  int result; // r0

  v3 = *a2;
  v4 = v3 == 10;
  if ( (v3 & 0xFFFD) == 0 )
    v4 = 1;
  if ( !v4 )
    sub_6ECC0(
      "ntp_config.c",
      5181,
      0,
      "0 == ((addr)->sa.sa_family) || 2 == ((addr)->sa.sa_family) || 10 == ((addr)->sa.sa_family)");
  result = sub_64054(a1, v3, a2, _stack_chk_guard);
  if ( result )
  {
    if ( *a2 != 10 || ipv6_works )
    {
      result = 1;
      a2[1] = 31488;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
