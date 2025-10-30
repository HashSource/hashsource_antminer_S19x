int __fastcall sub_C8950(_DWORD *a1, _DWORD *a2, int a3, int *a4)
{
  int result; // r0
  int v8; // r5

  result = sub_C8824(a1, a2);
  if ( result )
  {
    v8 = CRYPTO_malloc(result, "crypto/ec/ec_oct.c", 139);
    if ( v8 )
    {
      result = sub_C8824(a1, a2);
      if ( result )
      {
        *a4 = v8;
      }
      else
      {
        CRYPTO_free(v8, "crypto/ec/ec_oct.c", 145);
        return 0;
      }
    }
    else
    {
      sub_D0048(16, 281, 65, "crypto/ec/ec_oct.c", 140);
      return 0;
    }
  }
  return result;
}
