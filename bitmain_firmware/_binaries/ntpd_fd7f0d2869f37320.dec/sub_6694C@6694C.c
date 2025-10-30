_QWORD *__fastcall sub_6694C(_QWORD *a1, int a2, time_t *timer)
{
  __int64 v4; // d16
  unsigned int v6; // r0
  int v7; // [sp+4h] [bp-10h]

  if ( timer )
  {
    v4 = vshrd_n_s64(vdup_n_s32(*timer).n64_i64[0], 0x20u);
  }
  else
  {
    v7 = a2;
    v6 = off_B8CE8(0);
    a2 = v7;
    v4 = vshrd_n_s64(vdup_n_s32(v6).n64_i64[0], 0x20u);
  }
  *a1 = v4 + 61505152 + (unsigned int)(a2 - (v4 + 61505152));
  return a1;
}
