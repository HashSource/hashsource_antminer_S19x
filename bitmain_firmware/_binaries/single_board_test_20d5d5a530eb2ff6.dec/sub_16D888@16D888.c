char **__fastcall sub_16D888(char *a1)
{
  char **v2; // r4
  char *v3; // r0

  v2 = (char **)sub_E0740((void *)0x28);
  if ( v2 )
  {
    v3 = sub_E9E3C(a1);
    *v2 = v3;
    if ( v3 )
    {
      if ( sub_DBE44(0xEu, (int)v2, v2 + 9) )
        return v2;
      v3 = *v2;
    }
    CRYPTO_free(v3);
  }
  CRYPTO_free(v2);
  sub_D0048(40, 112, 65, (int)"crypto/ui/ui_lib.c", 608);
  return 0;
}
