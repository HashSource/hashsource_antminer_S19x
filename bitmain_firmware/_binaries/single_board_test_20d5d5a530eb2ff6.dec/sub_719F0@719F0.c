int __fastcall sub_719F0(int *a1, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  pthread_mutex_lock(&stru_65E3FC);
  sub_6E0BC(28, *a1);
  sub_6E0BC(29, a1[1]);
  sub_6E0BC(30, a1[2]);
  sub_6E060(28, &v5);
  sub_6E060(29, &v5);
  sub_6E060(30, &v5);
  sub_6E060(27, &v5);
  sub_70D20(v5 & 0x7F70FFFF | 0x80800000 | (a2 << 16));
  return pthread_mutex_unlock(&stru_65E3FC);
}
