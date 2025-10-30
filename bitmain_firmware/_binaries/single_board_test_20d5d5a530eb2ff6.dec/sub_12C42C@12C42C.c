int __fastcall sub_12C42C(const char *a1, int a2, size_t *a3)
{
  signed int v6; // r0
  char *endptr; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 )
    return 0;
  v6 = strtoul(a1, &endptr, 10);
  if ( endptr )
  {
    if ( *endptr && endptr != &a1[a2] )
      return 0;
  }
  if ( v6 < 0 )
  {
    sub_D0048(13, 180, 187, (int)"crypto/asn1/asn1_gen.c", 755);
    return 0;
  }
  if ( sub_125A14(a3, v6, 1) )
    return 1;
  sub_D0048(13, 180, 65, (int)"crypto/asn1/asn1_gen.c", 759);
  return 0;
}
