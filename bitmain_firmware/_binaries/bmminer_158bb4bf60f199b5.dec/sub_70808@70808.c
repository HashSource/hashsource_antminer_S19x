int __fastcall sub_70808(int *a1, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  pthread_mutex_lock(&stru_1B144C);
  sub_66908(28, *a1);
  sub_66908(29, a1[1]);
  sub_66908(30, a1[2]);
  sub_6688C(28, &v5);
  sub_6688C(29, &v5);
  sub_6688C(30, &v5);
  sub_6688C(27, &v5);
  sub_6F610(v5 & 0x7F70FFFF | 0x80800000 | (a2 << 16));
  return pthread_mutex_unlock(&stru_1B144C);
}
