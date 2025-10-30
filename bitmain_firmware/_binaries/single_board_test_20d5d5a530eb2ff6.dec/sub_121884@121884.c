const char *sub_121884()
{
  const char *result; // r0
  char *v1; // r5
  void *v2; // r6
  unsigned __int8 *v3; // r0
  unsigned __int8 *v4; // r4

  result = (const char *)sub_13575C();
  v1 = (char *)result;
  if ( result )
  {
    v2 = (void *)(strlen(result) + 3);
    v3 = (unsigned __int8 *)CRYPTO_malloc(v2);
    v4 = v3;
    if ( v3 )
    {
      if ( *v1 == 45 )
      {
        sub_E9F28(v3, "-0x", (unsigned int)v2);
        sub_E9F6C(v4, v1 + 1, (unsigned int)v2);
      }
      else
      {
        sub_E9F28(v3, &byte_1C3AB0, (unsigned int)v2);
        sub_E9F6C(v4, v1, (unsigned int)v2);
      }
      CRYPTO_free(v1);
      return (const char *)v4;
    }
    else
    {
      sub_D0048(34, 167, 65, (int)"crypto/x509v3/v3_utl.c", 150);
      CRYPTO_free(v1);
      return 0;
    }
  }
  return result;
}
