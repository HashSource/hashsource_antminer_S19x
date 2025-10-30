void *__fastcall sub_10B088(int a1, char *a2, int a3)
{
  int v5; // r4
  int v6; // r6
  bool v7; // cc
  int v8; // r1
  void **v9; // r4

  if ( !a1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = v5 < sub_10C010(a1, a2, a3);
    v8 = v5++;
    if ( !v7 )
      break;
    v6 = sub_10C01C(a1, v8);
    if ( !strcmp(*(const char **)v6, a2) )
      return *(void **)(v6 + 4);
  }
  v9 = sub_10B004(a2);
  if ( v9 )
  {
    if ( sub_10BA90(a1, v9, 0) > 0 )
      return v9[1];
    CRYPTO_free(*v9);
    sub_B895C((int)v9[1]);
    CRYPTO_free(v9);
  }
  return 0;
}
