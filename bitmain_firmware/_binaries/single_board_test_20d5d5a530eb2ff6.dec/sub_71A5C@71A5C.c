int __fastcall sub_71A5C(int *a1, unsigned int a2)
{
  unsigned int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // t1

  pthread_mutex_lock(&stru_65E414);
  v4 = a2 >> 2;
  if ( v4 )
  {
    v5 = 0;
    v6 = 16;
    do
    {
      ++v5;
      v7 = *a1++;
      sub_6E0BC(v6, v7);
      v6 = 17;
    }
    while ( v5 != v4 );
  }
  return j_pthread_mutex_unlock(&stru_65E414);
}
