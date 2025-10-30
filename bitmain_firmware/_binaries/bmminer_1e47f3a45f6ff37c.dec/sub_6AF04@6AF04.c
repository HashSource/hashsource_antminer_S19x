int __fastcall sub_6AF04(int a1, char a2)
{
  unsigned int v5; // [sp+Ch] [bp-8h]
  int v6; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5364D8);
  v5 = (a1 << 16) | sub_6AD94() & 0xFFF0FFFF | 0x800000;
  if ( a2 )
    v6 = v5 | 0x400000;
  else
    v6 = v5 & 0xFFBFFFFF;
  sub_6ADC0(v6);
  return pthread_mutex_unlock(&stru_5364D8);
}
