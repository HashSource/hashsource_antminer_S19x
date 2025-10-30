int __fastcall sub_6B004(int a1, unsigned int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_5364C0);
  for ( i = 0; a2 >> 2 > i; ++i )
    sub_5485C();
  return pthread_mutex_unlock(&stru_5364C0);
}
