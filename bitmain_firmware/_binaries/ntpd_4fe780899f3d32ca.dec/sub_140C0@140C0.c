int __fastcall sub_140C0(int result, int a2)
{
  int v2; // r3
  const char *v3; // r2
  int optval; // [sp+Ch] [bp-Ch] BYREF

  optval = a2;
  if ( result == 2 )
    v2 = any_interface;
  else
    v2 = any6_interface;
  if ( v2 )
  {
    result = *(_DWORD *)(v2 + 12);
    if ( result != -1 )
    {
      result = setsockopt(result, 1, 2, &optval, 4u);
      if ( result )
      {
        if ( optval )
          v3 = "on";
        else
          v3 = "off";
        return sub_64E00(3, "set_wildcard_reuse: setsockopt(SO_REUSEADDR, %s) failed: %m", v3);
      }
    }
  }
  return result;
}
