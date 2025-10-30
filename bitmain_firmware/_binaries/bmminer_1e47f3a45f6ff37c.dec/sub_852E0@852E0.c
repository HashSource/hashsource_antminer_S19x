int __fastcall sub_852E0(pthread_mutex_t *a1)
{
  unsigned int count; // r4
  int *v3; // r0
  int *v4; // r0
  _WORD v7[2]; // [sp+14h] [bp-20h] BYREF
  int v8; // [sp+18h] [bp-1Ch]
  int v9; // [sp+1Ch] [bp-18h]
  int v10; // [sp+24h] [bp-10h]

  v7[0] = 1;
  v8 = 0;
  v7[1] = 0;
  v9 = 0;
  v10 = pthread_mutex_trylock(a1);
  if ( v10 == 16 )
  {
    sub_8CD10(1, "src/rotater.c", 481, "pthread_mutex_trylock fail, as lock_mutex is locked by other threads");
    return -1;
  }
  else if ( v10 )
  {
    sub_8CD10(2, "src/rotater.c", 484, "pthread_mutex_trylock fail, rc[%d]", v10);
    return -1;
  }
  else if ( fcntl(a1[1].__count, 6, v7) )
  {
    if ( *_errno_location() == 11 || *_errno_location() == 13 )
    {
      sub_8CD10(1, "src/rotater.c", 493, "fcntl lock fail, as file is lock by other process");
    }
    else
    {
      count = a1[1].__count;
      v3 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 495, "lock fd[%d] fail, errno[%d]", count, *v3);
    }
    if ( pthread_mutex_unlock(a1) )
    {
      v4 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 498, "pthread_mutex_unlock fail, errno[%d]", *v4);
    }
    return -1;
  }
  else
  {
    return 0;
  }
}
