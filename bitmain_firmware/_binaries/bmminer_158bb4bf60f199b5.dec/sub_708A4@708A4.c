int __fastcall sub_708A4(int *a1, unsigned int a2)
{
  unsigned int v4; // r5
  int *v5; // r5
  int v6; // r0
  int v7; // t1

  pthread_mutex_lock(&stru_1B1464);
  v4 = a2 >> 2;
  if ( v4 )
  {
    v5 = &a1[v4];
    v6 = 16;
    do
    {
      v7 = *a1++;
      sub_66908(v6, v7);
      v6 = 17;
    }
    while ( a1 != v5 );
  }
  return pthread_mutex_unlock(&stru_1B1464);
}
