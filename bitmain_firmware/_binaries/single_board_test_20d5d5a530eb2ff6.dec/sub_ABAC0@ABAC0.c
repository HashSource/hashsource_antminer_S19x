int __fastcall sub_ABAC0(int a1, int a2)
{
  int v4; // r0

  if ( a2 )
  {
    v4 = sub_A4D60(0, a1, a2, 0, 1);
    if ( v4 == 1 )
    {
      return sub_AAFF8(*(_DWORD **)(a1 + 192), a2);
    }
    else
    {
      sub_D0048(20, 171, v4, "ssl/ssl_rsa.c", 301);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 171, 67, "ssl/ssl_rsa.c", 296);
    return 0;
  }
}
