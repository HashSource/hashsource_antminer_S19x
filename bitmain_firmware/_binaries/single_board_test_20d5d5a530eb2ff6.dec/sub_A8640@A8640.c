_DWORD *__fastcall sub_A8640(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r4

  result = *(_DWORD **)(a1 + 20);
  if ( result )
  {
    do
    {
      v3 = (_DWORD *)*result;
      CRYPTO_free(result, "ssl/packet.c", 421);
      result = v3;
    }
    while ( v3 );
  }
  *(_DWORD *)(a1 + 20) = 0;
  return result;
}
