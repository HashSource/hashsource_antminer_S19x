int __fastcall sub_17900(int *a1)
{
  int v2; // r0
  int v3; // r6
  void **v4; // r4
  void **v5; // r5
  void **v6; // r0

  if ( pthread_mutex_lock(&stru_68A88) )
    sub_17604("tidyup", 4510);
  v2 = *a1;
  byte_68A7C = 1;
  if ( v2 != -1 )
  {
    shutdown(v2, 2);
    close(*a1);
    *a1 = -1;
  }
  if ( dword_68A80 )
  {
    free((void *)dword_68A80);
    dword_68A80 = 0;
  }
  v3 = dword_68AA0;
  if ( dword_68AA0 )
  {
    v4 = (void **)dword_68AA0;
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
    dword_68AA0 = 0;
  }
  if ( pthread_mutex_unlock(&stru_68A88) )
    sub_17668("tidyup", 4531);
  return off_67ED8();
}
