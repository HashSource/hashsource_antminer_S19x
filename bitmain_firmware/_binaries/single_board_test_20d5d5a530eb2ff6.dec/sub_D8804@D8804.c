int __fastcall sub_D8804(int *a1, const void **a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r3
  int v6; // r0
  void *v7; // r5
  void *v9; // r0

  if ( !a2 || !*a2 )
  {
    sub_D0048(6, 163, 111, (int)"crypto/evp/evp_enc.c", 688);
    return 0;
  }
  v4 = a2[1];
  if ( v4 && !sub_CDD6C(v4) )
  {
    sub_D0048(6, 163, 38, (int)"crypto/evp/evp_enc.c", 694);
    return 0;
  }
  sub_D7A10(a1);
  memcpy(a1, a2, 0x8Cu);
  if ( a2[24] )
  {
    v5 = *a2;
    v6 = *((_DWORD *)*a2 + 8);
    if ( !v6 )
    {
      if ( (v5[4] & 0x400) == 0 )
        return 1;
      goto LABEL_10;
    }
    v9 = (void *)CRYPTO_malloc(v6, "crypto/evp/evp_enc.c", 703);
    v7 = v9;
    a1[24] = (int)v9;
    if ( !v9 )
    {
      *a1 = 0;
      sub_D0048(6, 163, 65, (int)"crypto/evp/evp_enc.c", 706);
      return (int)v7;
    }
    memcpy(v9, a2[24], *((_DWORD *)*a2 + 8));
  }
  v5 = *a2;
  if ( (*((_DWORD *)*a2 + 4) & 0x400) == 0 )
    return 1;
LABEL_10:
  if ( ((int (__fastcall *)(const void **, int, _DWORD, int *))v5[11])(a2, 8, 0, a1) )
    return 1;
  *a1 = 0;
  sub_D0048(6, 163, 134, (int)"crypto/evp/evp_enc.c", 715);
  return 0;
}
