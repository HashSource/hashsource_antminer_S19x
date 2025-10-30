int __fastcall sub_AB55C(int a1, int a2)
{
  int v4; // r0

  if ( a2 )
  {
    v4 = sub_A4D60(a1, 0, a2, 0, 1);
    if ( v4 == 1 )
    {
      return sub_AAFF8(*(_DWORD **)(a1 + 1028), a2);
    }
    else
    {
      sub_D0048(20, 198, v4, "ssl/ssl_rsa.c", 36);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 198, 67, "ssl/ssl_rsa.c", 31);
    return 0;
  }
}
