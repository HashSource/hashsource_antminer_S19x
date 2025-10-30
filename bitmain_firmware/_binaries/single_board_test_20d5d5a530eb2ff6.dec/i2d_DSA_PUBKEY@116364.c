int __fastcall i2d_DSA_PUBKEY(int result, _BYTE **a2)
{
  int v2; // r4
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r4

  if ( result )
  {
    v2 = result;
    v4 = EVP_PKEY_new();
    v5 = (int)v4;
    if ( v4 )
    {
      sub_DA08C(v4, v2);
      v6 = i2d_PUBKEY(v5, a2);
      sub_DA240(v5);
      return v6;
    }
    else
    {
      sub_D0048(13, 161, 65, (int)"crypto/x509/x_pubkey.c", 292);
      return -1;
    }
  }
  return result;
}
