int sub_CDEA4()
{
  int v0; // r0
  int v1; // r4
  int v2; // r6
  int result; // r0

  if ( sub_10C594(&engine_lock_init, do_engine_lock_init_ossl_)
    && do_engine_lock_init_ossl_ret_
    && (v0 = sub_E0740(112, "crypto/engine/eng_lib.c", 34), (v1 = v0) != 0) )
  {
    __dmb(0xBu);
    *(_DWORD *)(v0 + 80) = 1;
    __dmb(0xBu);
    v2 = sub_DBE44(10, v0, v0 + 88);
    result = v1;
    if ( !v2 )
    {
      CRYPTO_free(v1, "crypto/engine/eng_lib.c", 41);
      return 0;
    }
  }
  else
  {
    sub_D0048(38, 122, 65, "crypto/engine/eng_lib.c", 35);
    return 0;
  }
  return result;
}
