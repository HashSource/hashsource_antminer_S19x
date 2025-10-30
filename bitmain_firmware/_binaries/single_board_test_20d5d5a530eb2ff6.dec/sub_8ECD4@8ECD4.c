int __fastcall sub_8ECD4(_DWORD *a1, int a2, int a3)
{
  int v3; // r4
  bool v4; // zf

  v3 = a1[7];
  if ( v3 )
  {
    if ( a1[379] && ((a3 == 0) & ((a1[315] ^ 0x40000u) >> 18)) != 0 )
    {
      v3 = 0;
      sub_95494(a1, 40, 483, 338, "ssl/statem/extensions.c", 908);
      return v3;
    }
  }
  else
  {
    v4 = a3 == 0;
    if ( !a3 )
      v4 = (a1[315] & 0x40004) == 0;
    if ( v4 )
    {
      sub_95494(a1, 40, 483, 338, "ssl/statem/extensions.c", 896);
      return v3;
    }
  }
  return 1;
}
