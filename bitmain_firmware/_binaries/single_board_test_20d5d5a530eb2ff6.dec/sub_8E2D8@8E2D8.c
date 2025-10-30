int __fastcall sub_8E2D8(int a1, const void *a2, size_t a3)
{
  if ( a3 > 0x20 )
  {
    sub_D0048(20, 312, 273, "ssl/ssl_sess.c", 960);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 364) = a3;
    if ( (const void *)(a1 + 368) != a2 )
      memcpy((void *)(a1 + 368), a2, a3);
    return 1;
  }
}
