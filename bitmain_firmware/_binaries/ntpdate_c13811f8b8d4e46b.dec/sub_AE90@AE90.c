void *__fastcall sub_AE90(time_t (**a1)(time_t *timer))
{
  bool v1; // zf
  time_t (**v2)(time_t *); // r12
  void *result; // r0

  v2 = a1;
  v1 = a1 == 0;
  result = off_31048;
  if ( v1 )
    v2 = &time;
  off_31048 = v2;
  return result;
}
