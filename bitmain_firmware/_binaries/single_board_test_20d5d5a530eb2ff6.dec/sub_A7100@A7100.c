int *__fastcall sub_A7100(int a1, int *a2)
{
  int v2; // r3
  int v5; // r3
  __time_t tv_sec; // r1
  __time_t v7; // r2
  __suseconds_t tv_usec; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r2
  struct timeval v14; // [sp+0h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 128);
  if ( !*(_DWORD *)(v2 + 388) && !*(_DWORD *)(v2 + 392) )
    return 0;
  gettimeofday(&v14, 0);
  v5 = *(_DWORD *)(a1 + 128);
  tv_sec = v14.tv_sec;
  v7 = *(_DWORD *)(v5 + 388);
  if ( v7 >= v14.tv_sec )
  {
    tv_usec = v14.tv_usec;
    if ( v7 != v14.tv_sec || *(_DWORD *)(v5 + 392) > v14.tv_usec )
    {
      v9 = *(_DWORD *)(v5 + 388);
      v10 = *(_DWORD *)(v5 + 392);
      *a2 = v9;
      a2[1] = v10;
      v11 = a2[1] - tv_usec;
      v12 = *a2 - tv_sec;
      *a2 = v12;
      a2[1] = v11;
      if ( v11 < 0 )
      {
        --v12;
        v11 += 1000000;
        *a2 = v12;
        a2[1] = v11;
      }
      if ( v12 || v11 > 14999 )
        return a2;
    }
  }
  *a2 = 0;
  a2[1] = 0;
  return a2;
}
