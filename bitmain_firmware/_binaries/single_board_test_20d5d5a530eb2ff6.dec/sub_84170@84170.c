int __fastcall sub_84170(int a1, int a2)
{
  size_t v3; // r4
  int v4; // r0
  void *v5; // r6
  int v6; // r4
  void *s1; // [sp+0h] [bp-8h] BYREF
  void *s2; // [sp+4h] [bp-4h] BYREF

  s1 = 0;
  s2 = 0;
  v3 = sub_115C40(a1, &s1);
  v4 = sub_115C40(a2, &s2);
  if ( ((v3 | v4) & 0x80000000) == 0 )
  {
    v5 = s1;
    if ( v3 == v4 )
      v6 = memcmp(s1, s2, v3);
    else
      v6 = v3 - v4;
  }
  else
  {
    v5 = s1;
    v6 = -2;
  }
  CRYPTO_free(v5, "ssl/ssl_cert.c", 588);
  CRYPTO_free(s2, "ssl/ssl_cert.c", 589);
  return v6;
}
