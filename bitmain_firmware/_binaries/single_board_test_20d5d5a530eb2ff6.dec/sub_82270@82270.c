int __fastcall sub_82270(int result)
{
  int v1; // r4
  int v2; // r3
  int v3; // r0
  int v4; // r3
  int v5; // r0

  if ( result )
  {
    v1 = result;
    if ( *(_DWORD *)(result + 124) )
    {
      sub_A8DC4();
      sub_DA240(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 856));
      v2 = *(_DWORD *)(v1 + 124);
      v3 = *(_DWORD *)(v2 + 532);
      *(_DWORD *)(v2 + 856) = 0;
      sub_DA240(v3);
      v4 = *(_DWORD *)(v1 + 124);
      v5 = *(_DWORD *)(v4 + 540);
      *(_DWORD *)(v4 + 532) = 0;
      CRYPTO_free(v5, "ssl/s3_lib.c", 3327);
      sub_10BFDC(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 548), X509_NAME_free);
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 584), "ssl/s3_lib.c", 3329);
      sub_E0758(
        *(_DWORD *)(*(_DWORD *)(v1 + 124) + 592),
        *(_DWORD *)(*(_DWORD *)(v1 + 124) + 596),
        (size_t)"ssl/s3_lib.c");
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 616), "ssl/s3_lib.c", 3331);
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 620), "ssl/s3_lib.c", 3332);
      sub_A9134(v1);
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 832), "ssl/s3_lib.c", 3334);
      CRYPTO_free(*(_DWORD *)(*(_DWORD *)(v1 + 124) + 840), "ssl/s3_lib.c", 3335);
      sub_A6578(v1);
      result = sub_E0758(*(_DWORD *)(v1 + 124), 860, (size_t)"ssl/s3_lib.c");
      *(_DWORD *)(v1 + 124) = 0;
    }
  }
  return result;
}
