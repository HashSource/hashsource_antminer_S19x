int __fastcall sub_5C7C0(int *a1, int a2)
{
  unsigned int v5; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5314DC);
  sub_5C520(a1);
  v5 = (a2 << 16) | sub_5C5B0() & 0xFFF0FFFF | 0x80800000;
  sub_5C5DC(v5);
  return pthread_mutex_unlock(&stru_5314DC);
}
