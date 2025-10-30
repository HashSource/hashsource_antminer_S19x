void *__fastcall sub_2AB3B4(unsigned int a1, unsigned int a2)
{
  _BOOL4 v2; // r3

  v2 = (a1 | a2) >= 0x10000;
  if ( !a2 )
    v2 = 0;
  if ( !v2 || is_mul_ok(a1, a2) )
    return sub_2AB368(a2 * a1);
  ((void (__fastcall *)(int))loc_2A6C48)(6);
  return 0;
}
