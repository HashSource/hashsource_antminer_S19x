int __fastcall sub_8870C(int a1)
{
  _DWORD *v1; // r3

  if ( a1 )
  {
    v1 = **(_DWORD ***)(a1 + 1028);
    if ( *v1 )
    {
      if ( v1[1] )
        return sub_10E8B4();
      sub_D0048(20, 163, 190, "ssl/ssl_lib.c", 1632);
    }
    else
    {
      sub_D0048(20, 163, 177, "ssl/ssl_lib.c", 1628);
    }
  }
  else
  {
    sub_D0048(20, 163, 67, "ssl/ssl_lib.c", 1624);
  }
  return 0;
}
