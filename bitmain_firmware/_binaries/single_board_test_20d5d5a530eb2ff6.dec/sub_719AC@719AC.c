int __fastcall sub_719AC(int a1, int a2)
{
  unsigned int v4; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  pthread_mutex_lock(&stru_65E3FC);
  sub_6E060(27, &v6);
  if ( a2 )
    v4 = v6 & 0xFFF0FFFF | (a1 << 16) | 0xC00000;
  else
    v4 = v6 & 0xFF30FFFF | (a1 << 16) & 0xFF3FFFFF | 0x800000;
  sub_70D20(v4);
  return pthread_mutex_unlock(&stru_65E3FC);
}
