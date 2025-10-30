int sub_3E2BC()
{
  int v0; // r4
  int *v1; // r3
  int v2; // t1
  int v3; // r2

  if ( pthread_rwlock_rdlock(&stru_24638C) )
    sub_3E12C("numascs", 1381);
  if ( dword_245140 > 0 )
  {
    v0 = 0;
    v1 = (int *)dword_242FEC;
    do
    {
      v2 = *v1++;
      v3 = **(_DWORD **)(v2 + 4);
      if ( v3 == 2 || v3 == 3 )
        ++v0;
    }
    while ( v1 != (int *)(dword_242FEC + 4 * dword_245140) );
  }
  else
  {
    v0 = 0;
  }
  if ( pthread_rwlock_unlock(&stru_24638C) )
    sub_3E258("numascs", 1386);
  off_9E444();
  return v0;
}
