int __fastcall sub_45DF8(int result)
{
  int v1; // r1
  unsigned __int8 v2; // r2
  int v3; // r3
  int v4; // r0
  int v5; // r5
  ssize_t v6; // r7
  int v7; // r5
  struct timeval v8; // [sp+0h] [bp-Ch] BYREF

  if ( !dword_73108 )
  {
    v1 = result;
    result = 1;
    do
      v2 = __ldrex(algn_7310C);
    while ( __strex(1u, algn_7310C) );
    if ( v2 )
    {
      do
      {
        result = sched_yield();
        v3 = dword_73108;
        __dmb(0xBu);
      }
      while ( !v3 );
    }
    else
    {
      if ( !v1 )
      {
        v4 = open64("/dev/urandom");
        v5 = v4;
        if ( v4 == -1 || (v6 = read(v4, &v8, 4u), close(v5), v6 != 4) )
        {
          gettimeofday(&v8, 0);
          v7 = v8.tv_usec ^ v8.tv_sec;
          result = getpid();
          v1 = result ^ v7;
        }
        else
        {
          result = LOBYTE(v8.tv_sec);
          v1 = HIBYTE(v8.tv_sec) | ((BYTE2(v8.tv_sec) | ((BYTE1(v8.tv_sec) | (LOBYTE(v8.tv_sec) << 8)) << 8)) << 8);
        }
        if ( !v1 )
          v1 = 1;
      }
      __dmb(0xBu);
      dword_73108 = v1;
    }
  }
  return result;
}
