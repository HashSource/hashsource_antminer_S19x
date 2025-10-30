int __fastcall sub_D27C(int a1, _WORD *a2)
{
  int v3; // r1
  bool v4; // zf
  int v5; // r2
  int result; // r0

  v3 = (unsigned __int16)*a2;
  v4 = v3 == 10;
  if ( v3 != 10 )
    v4 = (v3 & 0xFFFFFFFD) == 0;
  v5 = v4;
  if ( !v4 )
    sub_6FC54(
      "ntp_config.c",
      5181,
      v5,
      "0 == ((addr)->sa.sa_family) || 2 == ((addr)->sa.sa_family) || 10 == ((addr)->sa.sa_family)");
  result = sub_64FD8(a1, v3, a2);
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
