int __fastcall sub_D8EE4(int a1)
{
  int v2; // r4
  int v3; // r3
  int (*v4)(void); // r3

  v2 = PKCS8_PRIV_KEY_INFO_new();
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 12);
    if ( v3 )
    {
      v4 = *(int (**)(void))(v3 + 40);
      if ( v4 )
      {
        if ( v4() )
          return v2;
        sub_D0048(6, 113, 146, (int)"crypto/evp/evp_pkey.c", 72);
      }
      else
      {
        sub_D0048(6, 113, 144, (int)"crypto/evp/evp_pkey.c", 76);
      }
    }
    else
    {
      sub_D0048(6, 113, 118, (int)"crypto/evp/evp_pkey.c", 80);
    }
    sub_AE5FC(v2);
    return 0;
  }
  else
  {
    sub_D0048(6, 113, 65, (int)"crypto/evp/evp_pkey.c", 65);
    return 0;
  }
}
