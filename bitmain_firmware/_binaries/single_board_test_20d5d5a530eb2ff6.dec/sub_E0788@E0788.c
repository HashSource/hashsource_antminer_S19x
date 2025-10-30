void *__fastcall sub_E0788(void *a1, size_t a2, void *a3, size_t a4, int a5)
{
  void *result; // r0
  void *v10; // r4

  if ( !a1 )
    return CRYPTO_malloc(a3);
  if ( a3 )
  {
    if ( (unsigned int)a3 < a2 )
    {
      sub_E07F8((int)a3 + (_DWORD)a1, a2 - (_DWORD)a3);
      return a1;
    }
    else
    {
      result = CRYPTO_malloc(a3);
      v10 = result;
      if ( result )
      {
        memcpy(result, a1, a2);
        sub_E0758(a1, a2, a4);
        return v10;
      }
    }
  }
  else
  {
    sub_E0758(a1, a2, a4);
    return a3;
  }
  return result;
}
