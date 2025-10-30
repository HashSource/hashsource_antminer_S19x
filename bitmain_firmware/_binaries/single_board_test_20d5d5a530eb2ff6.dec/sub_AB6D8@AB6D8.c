int __fastcall sub_AB6D8(int a1, int a2)
{
  int v4; // r5
  int v5; // r3
  int v6; // r4

  if ( a2 )
  {
    v4 = EVP_PKEY_new();
    if ( v4 )
    {
      sub_F8320(a2);
      if ( sub_D9F44(v4, 6, a2, v5) <= 0 )
      {
        sub_F8154(a2);
        sub_DA240(v4);
        return 0;
      }
      else
      {
        v6 = sub_AB108(*(_DWORD **)(a1 + 1028), v4);
        sub_DA240(v4);
        return v6;
      }
    }
    else
    {
      sub_D0048(20, 204, 6, "ssl/ssl_rsa.c", 111);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 204, 67, "ssl/ssl_rsa.c", 107);
    return 0;
  }
}
