int __fastcall sub_82358(int a1)
{
  int result; // r0
  int v3; // r0

  sub_A8DC4();
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 540), "ssl/s3_lib.c", 3347);
  sub_10BFDC(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 548), X509_NAME_free);
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 584), "ssl/s3_lib.c", 3349);
  sub_E0758(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 592), *(_DWORD *)(*(_DWORD *)(a1 + 124) + 596), (size_t)"ssl/s3_lib.c");
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 616), "ssl/s3_lib.c", 3351);
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 620), "ssl/s3_lib.c", 3352);
  sub_DA240(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 532));
  sub_DA240(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 856));
  sub_A9134(a1);
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 832), "ssl/s3_lib.c", 3361);
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 840), "ssl/s3_lib.c", 3362);
  memset(*(void **)(a1 + 124), 0, 0x35Cu);
  result = sub_8A8AC(a1);
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 1436);
    *(_DWORD *)a1 = 768;
    CRYPTO_free(v3, "ssl/s3_lib.c", 3373);
    *(_DWORD *)(a1 + 1436) = 0;
    *(_DWORD *)(a1 + 1440) = 0;
    return 1;
  }
  return result;
}
