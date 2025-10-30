int __fastcall sub_C6298(int a1, const void *a2, size_t a3)
{
  bool v6; // zf
  void *v8; // r0

  CRYPTO_free(*(_DWORD *)(a1 + 32), "crypto/ec/ec_lib.c", 481);
  v6 = a2 == 0;
  if ( a2 )
    v6 = a3 == 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  if ( v6 )
    return 1;
  v8 = (void *)CRYPTO_malloc(a3, "crypto/ec/ec_lib.c", 488);
  *(_DWORD *)(a1 + 32) = v8;
  if ( v8 )
  {
    memcpy(v8, a2, a3);
    *(_DWORD *)(a1 + 36) = a3;
    return a3;
  }
  else
  {
    sub_D0048(16, 286, 65, "crypto/ec/ec_lib.c", 489);
    return 0;
  }
}
