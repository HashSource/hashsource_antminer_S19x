void *__fastcall CRYPTO_realloc(void *a1, void *a2, int a3, int a4)
{
  bool v4; // zf

  v4 = off_21FB3C == (_UNKNOWN *)CRYPTO_realloc;
  if ( off_21FB3C != (_UNKNOWN *)CRYPTO_realloc )
    v4 = off_21FB3C == 0;
  if ( !v4 )
    return (void *)((int (__fastcall *)(void *, void *, int, int))off_21FB3C)(a1, a2, a3, a4);
  if ( !a1 )
    return CRYPTO_malloc(a2);
  if ( a2 )
    return j_realloc(a1, (size_t)a2);
  CRYPTO_free(a1);
  return a2;
}
