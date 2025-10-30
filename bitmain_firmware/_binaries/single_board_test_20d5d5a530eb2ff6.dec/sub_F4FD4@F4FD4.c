int __fastcall sub_F4FD4(_DWORD *a1)
{
  unsigned __int64 v2; // r6
  int v4; // r0
  struct timeval v5; // [sp+0h] [bp-18h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-10h] BYREF
  unsigned __int64 v7; // [sp+10h] [bp-8h]

  v7 = 0;
  v6[0] = j_j_getpid();
  v6[1] = sub_10C5DC();
  v2 = (unsigned int)sub_BC364();
  if ( !(_DWORD)v2 )
  {
    v4 = clock_gettime(7, (struct timespec *)&v5);
    if ( v4 && (v4 = gettimeofday(&v5, 0)) != 0 )
      v2 = time(0);
    else
      v2 = __PAIR64__(v5.tv_sec, v4) + v5.tv_usec;
  }
  v7 = v2;
  return sub_F42B8(a1, (char *)v6, 0x10u, 0);
}
