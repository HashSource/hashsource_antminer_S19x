int do_engine_lock_init_ossl_()
{
  int result; // r0
  int v1; // r2

  result = sub_DE05C(0, 0, 0);
  if ( result )
  {
    v1 = sub_10C510(result);
    result = v1 != 0;
    global_engine_lock = v1;
  }
  do_engine_lock_init_ossl_ret_ = result;
  return result;
}
