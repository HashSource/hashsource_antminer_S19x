int __fastcall sub_5C72C(int a1, char a2)
{
  unsigned int v5; // [sp+Ch] [bp-8h]
  int v6; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5314DC);
  v5 = (a1 << 16) | sub_5C5B0() & 0xFFF0FFFF | 0x800000;
  if ( a2 )
    v6 = v5 | 0x400000;
  else
    v6 = v5 & 0xFFBFFFFF;
  sub_5C5DC(v6);
  return pthread_mutex_unlock(&stru_5314DC);
}
