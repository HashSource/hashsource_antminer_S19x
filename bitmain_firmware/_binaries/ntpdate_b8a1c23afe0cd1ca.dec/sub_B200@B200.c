_QWORD *__fastcall sub_B200(_QWORD *a1, int a2, time_t *timer)
{
  __int64 v5; // r0

  if ( timer )
    v5 = *timer;
  else
    v5 = off_31048(0);
  *a1 = v5 + 61505152 + (unsigned int)(a2 - (v5 + 61505152));
  return a1;
}
