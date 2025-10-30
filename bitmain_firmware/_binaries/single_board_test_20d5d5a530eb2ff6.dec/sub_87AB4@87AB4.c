int __fastcall sub_87AB4(int a1, const void *a2, size_t a3)
{
  if ( a3 > 0x20 )
  {
    sub_D0048(20, 218, 273, "ssl/ssl_lib.c", 897);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1104) = a3;
    memcpy((void *)(a1 + 1108), a2, a3);
    return 1;
  }
}
