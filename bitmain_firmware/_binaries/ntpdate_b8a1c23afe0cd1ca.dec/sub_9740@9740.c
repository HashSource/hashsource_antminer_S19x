void *__fastcall sub_9740(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  bool v4; // cc
  int v5; // r12

  v4 = a3 > 0xFFFF;
  if ( a3 <= 0xFFFF )
    v4 = a2 > 0xFFFF;
  v5 = v4;
  if ( !a2 )
    v5 = 0;
  if ( v5 && !is_mul_ok(a3, a2) )
  {
    sub_A828(3, "fatal allocation size overflow");
    exit(1);
  }
  return sub_967C(a1, a4 + a3 * a2, 0, 1);
}
