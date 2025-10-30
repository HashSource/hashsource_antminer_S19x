_DWORD *__fastcall sub_162490(const char *a1, size_t a2, size_t *a3, int *a4)
{
  _DWORD *v5; // r5
  _DWORD *result; // r0

  v5 = sub_162014(a4, PKCS8_PRIV_KEY_INFO_it, a1, a2, a3, 1);
  if ( v5 )
  {
    result = sub_E0740((void *)8);
    if ( result )
    {
      *result = a4;
      result[1] = v5;
    }
    else
    {
      sub_D0048(35, 132, 65, (int)"crypto/pkcs12/p12_p8e.c", 61);
      j_ASN1_STRING_free(v5);
      return 0;
    }
  }
  else
  {
    sub_D0048(35, 132, 103, (int)"crypto/pkcs12/p12_p8e.c", 54);
    return 0;
  }
  return result;
}
