int __fastcall sub_CDDF8(int a1)
{
  int (*v2)(void); // r2
  int v3; // r4
  int result; // r0

  if ( !a1 )
    return 1;
  sub_10C554(global_engine_lock);
  v3 = sub_CDCEC(a1, 1, v2);
  sub_10C564(global_engine_lock);
  result = v3;
  if ( !v3 )
  {
    sub_D0048(38, 107, 106, "crypto/engine/eng_init.c", 105);
    return 0;
  }
  return result;
}
