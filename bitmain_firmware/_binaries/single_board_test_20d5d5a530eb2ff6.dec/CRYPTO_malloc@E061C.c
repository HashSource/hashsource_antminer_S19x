void *__fastcall CRYPTO_malloc(void *result)
{
  bool v1; // zf

  v1 = off_21FB38 == 0;
  if ( off_21FB38 )
    v1 = (char *)off_21FB38 == (char *)CRYPTO_malloc;
  if ( !v1 )
    return (void *)off_21FB38();
  if ( result )
  {
    if ( dword_21FB30 )
      dword_21FB30 = 0;
    return j_malloc((size_t)result);
  }
  return result;
}
