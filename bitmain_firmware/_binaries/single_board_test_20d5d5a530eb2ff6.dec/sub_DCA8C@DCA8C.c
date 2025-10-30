int __fastcall sub_DCA8C(int result)
{
  int v1; // r4
  int *v2; // r0

  if ( result )
  {
    v1 = result;
    sub_D1478(*(int **)(result + 8));
    sub_D1478(*(int **)(v1 + 12));
    sub_D1478(*(int **)(v1 + 4));
    v2 = *(int **)(v1 + 8);
    *(_DWORD *)v1 = 0;
    sub_D1504(v2);
    sub_D1504(*(int **)(v1 + 12));
    sub_D1504(*(int **)(v1 + 4));
    return CRYPTO_free(v1, "crypto/hmac/hmac.c", 163);
  }
  return result;
}
