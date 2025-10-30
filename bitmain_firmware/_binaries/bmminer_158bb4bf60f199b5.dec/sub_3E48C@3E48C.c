int __fastcall sub_3E48C(int *a1)
{
  int v2; // r0
  int v3; // r6
  void **v4; // r4
  void **v5; // r5
  void **v6; // r0

  if ( pthread_mutex_lock(&stru_1AEB78) )
    sub_3E190("tidyup", 4500);
  v2 = *a1;
  byte_1AEB6C = 1;
  if ( v2 != -1 )
  {
    shutdown(v2, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_1AEB70 )
  {
    free((void *)dword_1AEB70);
    dword_1AEB70 = 0;
  }
  v3 = dword_1AEB90;
  if ( dword_1AEB90 )
  {
    v4 = (void **)dword_1AEB90;
    do
    {
      v5 = (void **)v4[2];
      free(*((void **)*v4 + 1));
      free(*v4);
      v6 = v4;
      v4 = v5;
      free(v6);
    }
    while ( (void **)v3 != v5 );
    dword_1AEB90 = 0;
  }
  if ( pthread_mutex_unlock(&stru_1AEB78) )
    sub_3E1F4("tidyup", 4521);
  return off_9E444();
}
