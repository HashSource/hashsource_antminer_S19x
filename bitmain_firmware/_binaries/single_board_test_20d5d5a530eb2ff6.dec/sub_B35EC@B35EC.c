_DWORD *__fastcall sub_B35EC(_DWORD *result)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r4
  _DWORD *v3; // r7

  v1 = (_DWORD *)*result;
  v2 = 0;
  result[1] = 0;
  result[2] = 0;
  if ( v1 )
  {
    v3 = result;
    do
    {
      while ( 1 )
      {
        result = v1;
        if ( !v1[5] )
          break;
        if ( v2 )
        {
          v2[6] = v1[6];
          result = (_DWORD *)CRYPTO_free(v1, "crypto/async/async_wait.c", 200);
          v1 = (_DWORD *)v2[6];
          if ( !v1 )
            return result;
        }
        else
        {
          *v3 = v1[6];
          result = (_DWORD *)CRYPTO_free(v1, "crypto/async/async_wait.c", 200);
          v1 = (_DWORD *)*v3;
          if ( !*v3 )
            return result;
        }
      }
      v2 = v1;
      if ( v1[4] )
        v1[4] = 0;
      v1 = (_DWORD *)v1[6];
    }
    while ( v1 );
  }
  return result;
}
