int *__fastcall sub_B268C(int *result, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r5
  int v5; // r6

  if ( result )
  {
    v2 = *result;
    if ( *result )
    {
      v3 = *(_DWORD *)(a2 + 16);
      if ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
        {
          v4 = *(_DWORD *)(v3 + 20);
          v5 = v2 + v4;
          if ( v2 + v4 )
          {
            result = (int *)CRYPTO_free(*(_DWORD *)(v2 + v4), "crypto/asn1/tasn_utl.c", 131);
            *(_DWORD *)(v2 + v4) = 0;
            *(_DWORD *)(v5 + 4) = 0;
            *(_DWORD *)(v5 + 8) = 1;
          }
        }
      }
    }
  }
  return result;
}
