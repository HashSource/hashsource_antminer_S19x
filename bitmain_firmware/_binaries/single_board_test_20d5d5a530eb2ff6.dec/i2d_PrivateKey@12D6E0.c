int __fastcall i2d_PrivateKey(int a1, int a2)
{
  int v2; // r3
  int (*v3)(void); // r2
  int result; // r0
  int v6; // r5
  int v7; // r4

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    goto LABEL_8;
  v3 = *(int (**)(void))(v2 + 100);
  if ( v3 )
    return v3();
  if ( *(_DWORD *)(v2 + 40) )
  {
    result = sub_D8EE4(a1);
    v6 = result;
    if ( result )
    {
      v7 = i2d_PKCS8_PRIV_KEY_INFO(result, a2);
      sub_AE5FC(v6);
      return v7;
    }
  }
  else
  {
LABEL_8:
    sub_D0048(13, 163, 167, (int)"crypto/asn1/i2d_pr.c", 31);
    return -1;
  }
  return result;
}
