size_t *__fastcall sub_170C2C(int a1, int a2, char *a3)
{
  size_t *v4; // r4
  size_t v5; // r0
  int v6; // r5
  size_t *result; // r0

  if ( a3 )
  {
    v4 = (size_t *)sub_B220C();
    if ( v4 )
    {
      v5 = strlen(a3);
      v6 = sub_AE088(v4, a3, v5);
      result = v4;
      if ( !v6 )
      {
        j_ASN1_STRING_free_5((int)v4);
        return 0;
      }
    }
    else
    {
      sub_D0048(34, 100, 65, (int)"crypto/x509v3/v3_ia5.c", 63);
      return 0;
    }
  }
  else
  {
    sub_D0048(34, 100, 107, (int)"crypto/x509v3/v3_ia5.c", 49);
    return 0;
  }
  return result;
}
