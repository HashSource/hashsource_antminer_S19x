signed int __fastcall sub_13B78C(const char *a1, _DWORD *a2)
{
  signed int result; // r0
  signed int v5; // r4
  void *v6; // r0
  void *v7; // r8
  const char *v8; // r4

  result = strlen(a1);
  v5 = result;
  if ( !result )
  {
    *a2 = 0;
    return result;
  }
  v6 = CRYPTO_malloc((void *)(3 * ((unsigned int)result >> 2)));
  v7 = v6;
  if ( !v6 )
  {
    sub_D0048(50, 124, 65, (int)"crypto/ct/ct_b64.c", 38);
    goto LABEL_8;
  }
  result = sub_15DD90(v6, a1, v5);
  if ( result < 0 )
  {
    sub_D0048(50, 124, 108, (int)"crypto/ct/ct_b64.c", 44);
    goto LABEL_8;
  }
  v8 = &a1[v5];
  if ( *(v8 - 1) == 61 )
  {
    if ( *(v8 - 2) == 61 )
    {
      result -= 2;
      if ( *(v8 - 3) == 61 )
      {
LABEL_8:
        CRYPTO_free(v7);
        return -1;
      }
    }
    else
    {
      --result;
    }
  }
  *a2 = v7;
  return result;
}
