int __fastcall sub_6F028(sem_t *a1, struct timespec *abstime)
{
  int v5; // r4

  if ( a1 )
  {
    while ( 1 )
    {
      if ( abstime )
      {
        v5 = sem_timedwait(a1, abstime);
        if ( v5 != -1 )
          return v5;
      }
      else
      {
        v5 = sem_wait(a1);
        if ( v5 != -1 )
          return v5;
      }
      if ( *_errno_location() != 4 )
        return v5;
    }
  }
  v5 = -1;
  *_errno_location() = 22;
  return v5;
}
