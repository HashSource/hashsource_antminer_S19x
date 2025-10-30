int __fastcall sub_D7A10(int *a1)
{
  int (*v2)(void); // r3
  int result; // r0
  int v4; // r0
  size_t v5; // r1

  if ( !a1 )
    return 1;
  if ( !*a1 )
    goto LABEL_10;
  v2 = *(int (**)(void))(*a1 + 28);
  if ( !v2 || (result = v2()) != 0 )
  {
    v4 = a1[24];
    if ( !v4 )
      goto LABEL_7;
    v5 = *(_DWORD *)(*a1 + 32);
    if ( !v5 )
      goto LABEL_7;
    sub_E07F8(v4, v5);
LABEL_10:
    v4 = a1[24];
LABEL_7:
    CRYPTO_free(v4, "crypto/evp/evp_enc.c", 33);
    sub_CDDF8(a1[1]);
    memset(a1, 0, 0x8Cu);
    return 1;
  }
  return result;
}
