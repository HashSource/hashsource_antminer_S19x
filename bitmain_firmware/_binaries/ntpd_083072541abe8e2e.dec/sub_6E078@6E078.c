int __fastcall sub_6E078(sem_t *a1, struct timespec *abstime)
{
  int v4; // r4

  if ( a1 )
  {
    while ( 1 )
    {
      if ( abstime )
      {
        v4 = sem_timedwait(a1, abstime);
        if ( v4 != -1 )
          return v4;
      }
      else
      {
        v4 = sem_wait(a1);
        if ( v4 != -1 )
          return v4;
      }
      if ( *_errno_location() != 4 )
        return v4;
    }
  }
  v4 = -1;
  *_errno_location() = 22;
  return v4;
}
