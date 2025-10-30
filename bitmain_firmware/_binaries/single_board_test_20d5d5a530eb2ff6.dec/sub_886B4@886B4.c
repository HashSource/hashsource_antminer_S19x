int __fastcall sub_886B4(int a1)
{
  _DWORD *v1; // r3

  if ( a1 && (v1 = **(_DWORD ***)(a1 + 192), *v1) )
  {
    if ( v1[1] )
      return sub_10E8B4();
    sub_D0048(20, 168, 190, "ssl/ssl_lib.c", 1613);
  }
  else
  {
    sub_D0048(20, 168, 177, "ssl/ssl_lib.c", 1609);
  }
  return 0;
}
