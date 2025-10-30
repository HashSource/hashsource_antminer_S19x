int __fastcall sub_CDD6C(_DWORD *a1)
{
  int v3; // r4

  if ( a1 )
  {
    if ( sub_10C594(&engine_lock_init, do_engine_lock_init_ossl_) && do_engine_lock_init_ossl_ret_ )
    {
      sub_10C554(global_engine_lock);
      v3 = sub_CDC90(a1);
      sub_10C564(global_engine_lock);
      return v3;
    }
    else
    {
      sub_D0048(38, 119, 65, "crypto/engine/eng_init.c", 85);
      return 0;
    }
  }
  else
  {
    sub_D0048(38, 119, 67, "crypto/engine/eng_init.c", 81);
    return 0;
  }
}
