_DWORD *__fastcall sub_B3430(_DWORD *result)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r4
  void (__fastcall *v3)(_DWORD *, _DWORD, _DWORD, _DWORD); // r5
  _DWORD *v4; // r5

  if ( result )
  {
    v1 = result;
    v2 = (_DWORD *)*result;
    if ( *result )
    {
      do
      {
        if ( !v2[5] )
        {
          v3 = (void (__fastcall *)(_DWORD *, _DWORD, _DWORD, _DWORD))v2[3];
          if ( v3 )
            v3(v1, *v2, v2[1], v2[2]);
        }
        v4 = (_DWORD *)v2[6];
        CRYPTO_free(v2, "crypto/async/async_wait.c", 37);
        v2 = v4;
      }
      while ( v4 );
    }
    return (_DWORD *)CRYPTO_free(v1, "crypto/async/async_wait.c", 41);
  }
  return result;
}
