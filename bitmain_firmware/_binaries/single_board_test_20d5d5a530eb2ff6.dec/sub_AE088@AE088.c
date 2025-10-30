int __fastcall sub_AE088(size_t *a1, char *s, int n)
{
  size_t v5; // r4
  void *v6; // r7
  int result; // r0
  int v8; // r0

  if ( n >= 0 )
  {
    v5 = n;
    if ( (unsigned int)n <= 0x7FFFFFFE )
      goto LABEL_5;
LABEL_14:
    sub_D0048(13, 0, 223, "crypto/asn1/asn1_lib.c", 290);
    return 0;
  }
  result = (int)s;
  if ( !s )
    return result;
  v5 = strlen(s);
  if ( v5 > 0x7FFFFFFE )
    goto LABEL_14;
LABEL_5:
  v6 = (void *)a1[2];
  if ( v5 >= *a1 || !v6 )
  {
    v8 = CRYPTO_realloc(a1[2], v5 + 1, "crypto/asn1/asn1_lib.c", 299);
    a1[2] = v8;
    if ( !v8 )
    {
      sub_D0048(13, 186, 65, "crypto/asn1/asn1_lib.c", 302);
      a1[2] = (size_t)v6;
      return 0;
    }
    v6 = (void *)v8;
  }
  *a1 = v5;
  result = 1;
  if ( s )
  {
    memcpy(v6, s, v5);
    result = 1;
    *(_BYTE *)(a1[2] + v5) = 0;
  }
  return result;
}
