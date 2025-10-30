int __fastcall sub_B26C4(int *a1, const void *a2, size_t a3, int a4)
{
  int v4; // r6
  int v5; // r3
  int v6; // r8
  int v7; // r10
  void *v10; // r0

  if ( !a1 )
    return 1;
  v4 = *a1;
  if ( !*a1 )
    return 1;
  v5 = *(_DWORD *)(a4 + 16);
  if ( !v5 )
    return 1;
  if ( (*(_DWORD *)(v5 + 4) & 2) == 0 )
    return 1;
  v6 = *(_DWORD *)(v5 + 20);
  v7 = v4 + v6;
  if ( !(v4 + v6) )
    return 1;
  CRYPTO_free(*(_DWORD *)(v4 + v6), "crypto/asn1/tasn_utl.c", 146);
  v10 = (void *)CRYPTO_malloc(a3, "crypto/asn1/tasn_utl.c", 147);
  *(_DWORD *)(v4 + v6) = v10;
  if ( v10 )
  {
    memcpy(v10, a2, a3);
    *(_DWORD *)(v7 + 4) = a3;
    *(_DWORD *)(v7 + 8) = 0;
    return 1;
  }
  else
  {
    sub_D0048(13, 115, 65, "crypto/asn1/tasn_utl.c", 148);
    return 0;
  }
}
