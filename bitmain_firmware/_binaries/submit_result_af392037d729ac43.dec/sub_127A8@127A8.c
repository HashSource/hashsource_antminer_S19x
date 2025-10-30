int __fastcall sub_127A8(int oflag)
{
  unsigned __int8 v1; // r2
  int v2; // r0
  int v3; // r5
  ssize_t v4; // r7
  int v5; // r5
  struct timeval v6; // [sp+0h] [bp-Ch] BYREF

  if ( !dword_27DF4 )
  {
    do
      v1 = __ldrex(byte_27DF8);
    while ( __strex(1u, byte_27DF8) );
    if ( v1 )
    {
      do
      {
        oflag = sched_yield();
        __dmb(0xFu);
        if ( dword_27DF4 )
          break;
        oflag = sched_yield();
        __dmb(0xFu);
      }
      while ( !dword_27DF4 );
    }
    else
    {
      if ( !oflag )
      {
        v2 = open("/dev/urandom", 0);
        v3 = v2;
        if ( v2 == -1 || (v4 = read(v2, &v6, 4u), close(v3), v4 != 4) )
        {
          gettimeofday(&v6, 0);
          v5 = v6.tv_sec ^ v6.tv_usec;
          oflag = getpid() ^ v5;
        }
        else
        {
          oflag = HIBYTE(v6.tv_sec) | ((BYTE2(v6.tv_sec) | ((BYTE1(v6.tv_sec) | (LOBYTE(v6.tv_sec) << 8)) << 8)) << 8);
        }
        if ( !oflag )
          oflag = 1;
      }
      __dmb(0xFu);
      dword_27DF4 = oflag;
    }
  }
  return oflag;
}
