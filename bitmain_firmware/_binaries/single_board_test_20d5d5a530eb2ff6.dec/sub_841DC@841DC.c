int __fastcall sub_841DC(int *a1, int *a2)
{
  int v2; // r5
  int v3; // r0
  size_t v4; // r4
  int v5; // r0
  void *v6; // r6
  int v7; // r4
  void *s1; // [sp+0h] [bp-8h] BYREF
  void *s2; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  v3 = *a1;
  s1 = 0;
  s2 = 0;
  v4 = sub_115C40(v3, &s1);
  v5 = sub_115C40(v2, &s2);
  if ( ((v4 | v5) & 0x80000000) == 0 )
  {
    v6 = s1;
    if ( v4 == v5 )
      v7 = memcmp(s1, s2, v4);
    else
      v7 = v4 - v5;
  }
  else
  {
    v6 = s1;
    v7 = -2;
  }
  CRYPTO_free(v6, "ssl/ssl_cert.c", 588);
  CRYPTO_free(s2, "ssl/ssl_cert.c", 589);
  return v7;
}
