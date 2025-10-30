int __fastcall sub_1F70D8(const char *a1)
{
  int v1; // r6
  int v2; // r7
  unsigned int tv_usec; // r4
  char *v4; // r0
  int v5; // r3
  __suseconds_t v6; // r5
  bool v7; // nf
  char v8; // r12
  int v9; // r2
  int *v10; // r4
  int v11; // r0
  const char *v13; // [sp+4h] [bp-28h] BYREF
  __int64 v14; // [sp+8h] [bp-24h] BYREF
  struct timeval tv; // [sp+14h] [bp-18h] BYREF
  _BYTE v16[4]; // [sp+1Ch] [bp-10h] BYREF
  char v17; // [sp+20h] [bp-Ch] BYREF

  v13 = a1;
  if ( sub_1F5F94(&v13, &v14) )
    return sub_1F61A4(-1, 5);
  v1 = v14;
  if ( sub_1F5F94(&v13, &v14) )
    return sub_1F61A4(-1, 5);
  if ( v14 )
    return sub_1F61A4(-1, 22);
  v2 = gettimeofday(&tv, 0);
  if ( v2 == -1 )
    return sub_1F6474();
  if ( !v1 )
    return sub_1F61A4(v2, 0);
  tv_usec = tv.tv_usec;
  v4 = &v17;
  v5 = 56;
  v6 = tv.tv_usec >> 31;
  v16[3] = tv.tv_sec;
  v16[0] = HIBYTE(tv.tv_sec);
  v16[1] = BYTE2(tv.tv_sec);
  v16[2] = BYTE1(tv.tv_sec);
  do
  {
    v8 = v5 - 32;
    v7 = v5 - 32 < 0;
    v9 = (tv_usec >> v5) | (v6 << (32 - v5));
    v5 -= 8;
    if ( !v7 )
      v9 |= v6 >> v8;
    *v4++ = v9;
  }
  while ( v5 != -8 );
  v10 = _errno_location();
  v11 = sub_230484(v1, v16, 12);
  *v10 = v11;
  if ( v11 )
    return sub_1F6474();
  else
    return sub_1F61A4(v2, 0);
}
