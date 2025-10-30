bool __fastcall sub_A95B4(int *a1, _DWORD *a2)
{
  int v4; // r0

  CRYPTO_free(*a1, "ssl/ssl_asn1.c", 213);
  *a1 = 0;
  if ( !a2 )
    return 1;
  v4 = sub_E9EF4(a2[2], *a2, "ssl/ssl_asn1.c", 217);
  *a1 = v4;
  return v4 != 0;
}
