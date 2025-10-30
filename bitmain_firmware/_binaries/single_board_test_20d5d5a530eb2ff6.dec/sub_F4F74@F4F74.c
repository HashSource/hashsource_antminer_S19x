int __fastcall sub_F4F74(_DWORD *a1)
{
  int v2; // r0
  unsigned __int64 v3; // r4
  struct timeval v5; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-14h] BYREF
  unsigned __int64 v7; // [sp+10h] [bp-Ch]

  v7 = 0;
  v6[0] = getpid();
  v6[1] = sub_10C5DC();
  v2 = clock_gettime(0, (struct timespec *)&v5);
  if ( v2 && (v2 = gettimeofday(&v5, 0)) != 0 )
    v3 = time(0);
  else
    v3 = __PAIR64__(v5.tv_sec, v2) + v5.tv_usec;
  v7 = v3;
  return sub_F42B8(a1, (char *)v6, 0x10u, 0);
}
