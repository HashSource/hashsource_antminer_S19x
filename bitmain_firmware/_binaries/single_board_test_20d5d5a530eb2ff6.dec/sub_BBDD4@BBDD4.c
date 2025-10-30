int sub_BBDD4()
{
  int v0; // r0
  const char *v2; // r0
  unsigned int v3; // r7
  const void *v4; // r4
  const char *v5; // r0

  v0 = j_j_secure_getenv("OPENSSL_CONF");
  if ( v0 )
    return sub_E9E3C(v0, "crypto/conf/conf_mod.c", 487);
  v2 = (const char *)sub_10ECDC();
  v3 = strlen(v2) + 13;
  v4 = (const void *)CRYPTO_malloc(v3, "crypto/conf/conf_mod.c", 496);
  if ( v4 )
  {
    v5 = (const char *)sub_10ECDC();
    sub_B5560(v4, v3, "%s%s%s", v5, "/", "openssl.cnf");
  }
  return (int)v4;
}
