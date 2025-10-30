int __fastcall sub_B1444(size_t *a1, _BYTE **a2, unsigned __int8 *a3)
{
  int result; // r0
  int v6; // r5
  _BYTE *v7; // r9
  size_t *v8; // [sp+8h] [bp-8h] BYREF
  _BYTE *v9; // [sp+Ch] [bp-4h] BYREF

  v8 = a1;
  if ( !a2 || *a2 )
    return sub_B0D50(&v8, a2, a3, -1, 2048);
  result = sub_B0D50(&v8, 0, a3, -1, 2048);
  v6 = result;
  if ( result > 0 )
  {
    v7 = (_BYTE *)CRYPTO_malloc(result, "crypto/asn1/tasn_enc.c", 64);
    if ( v7 )
    {
      v9 = v7;
      sub_B0D50(&v8, &v9, a3, -1, 2048);
      *a2 = v7;
      return v6;
    }
    else
    {
      sub_D0048(13, 118, 65, "crypto/asn1/tasn_enc.c", 65);
      return -1;
    }
  }
  return result;
}
