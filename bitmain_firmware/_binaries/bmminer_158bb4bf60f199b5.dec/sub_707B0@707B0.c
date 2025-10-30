int __fastcall sub_707B0(int a1, int a2)
{
  unsigned int v4; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  pthread_mutex_lock(&stru_1B144C);
  sub_6688C(27, &v6);
  if ( a2 )
    v4 = v6 & 0xFFF0FFFF | (a1 << 16) | 0xC00000;
  else
    v4 = v6 & 0xFFB0FFFF | (a1 << 16) & 0xFFBFFFFF;
  if ( !a2 )
    v4 |= 0x800000u;
  sub_6F610(v4);
  return pthread_mutex_unlock(&stru_1B144C);
}
