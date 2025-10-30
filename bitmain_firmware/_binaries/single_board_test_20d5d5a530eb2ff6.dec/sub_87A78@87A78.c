int __fastcall sub_87A78(int a1, const void *a2, size_t a3)
{
  if ( a3 > 0x20 )
  {
    sub_D0048(20, 219, 273, "ssl/ssl_lib.c", 883);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = a3;
    memcpy((void *)(a1 + 216), a2, a3);
    return 1;
  }
}
