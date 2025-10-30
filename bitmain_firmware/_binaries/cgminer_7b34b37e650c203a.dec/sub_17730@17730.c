int sub_17730()
{
  int v0; // r4
  int *v1; // r3
  int v2; // t1
  int v3; // r2

  if ( pthread_rwlock_rdlock(&stru_7680C) )
    sub_175A0("numascs", 1381);
  if ( dword_755C0 > 0 )
  {
    v0 = 0;
    v1 = (int *)dword_7346C;
    do
    {
      v2 = *v1++;
      v3 = **(_DWORD **)(v2 + 4);
      if ( v3 == 2 || v3 == 3 )
        ++v0;
    }
    while ( v1 != (int *)(dword_7346C + 4 * dword_755C0) );
  }
  else
  {
    v0 = 0;
  }
  if ( pthread_rwlock_unlock(&stru_7680C) )
    sub_176CC("numascs", 1386);
  off_67ED8();
  return v0;
}
