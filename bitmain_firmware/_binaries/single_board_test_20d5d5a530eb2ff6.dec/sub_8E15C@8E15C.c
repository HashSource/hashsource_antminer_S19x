int __fastcall sub_8E15C(int a1, const void *a2, size_t a3)
{
  if ( a3 > 0x20 )
  {
    sub_D0048(20, 423, 408, "ssl/ssl_sess.c", 815);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 328) = a3;
    if ( (const void *)(a1 + 332) != a2 )
      memcpy((void *)(a1 + 332), a2, a3);
    return 1;
  }
}
