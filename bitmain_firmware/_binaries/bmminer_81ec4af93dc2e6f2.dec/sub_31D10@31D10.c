int sub_31D10()
{
  unsigned int v0; // r7
  int v1; // r4
  int v2; // r8
  int v3; // r0
  int v4; // r2
  __int64 v5; // r2
  int v6; // r6
  int v7; // r7
  int v8; // r4

  v0 = dword_4B6CC8;
  v1 = 0;
  dword_4B6CAC = 10 * ((dword_AFBF8 * (dword_4B6CAC - dword_AFBE8) / 100 + dword_AFBE8) / 10);
  dword_4B6CC8 = 5 * ((dword_AFBEC + dword_AFBF8 * (dword_4B6CC8 - dword_AFBEC) / 0x64u) / 5);
  do
  {
    if ( sub_266F0(v1) )
      sub_238DC(v1, (unsigned __int8)byte_4B6CCC, v0, dword_4B6CC8, 0);
    ++v1;
  }
  while ( v1 != 4 );
  v2 = sub_22178();
  v3 = dword_4B6CAC;
  v4 = dword_4B6CAC - v2;
  if ( dword_4B6CAC - v2 < 0 )
    v4 = v2 - dword_4B6CAC;
  v5 = 3435973837LL * (unsigned int)v4;
  if ( HIDWORD(v5) >> 3 > 1 )
  {
    v7 = v2 + 10 * (HIDWORD(v5) >> 3);
    v8 = v2 + 10;
    do
    {
      v6 = 2 * v2 - v8;
      if ( v3 > v2 )
        v6 = v8;
      v8 += 10;
      sub_21E80(v6);
      usleep((__useconds_t)&loc_30D40);
      v3 = dword_4B6CAC;
    }
    while ( v8 != v7 );
  }
  else
  {
    v6 = 0;
  }
  if ( v3 != v6 )
    sub_21E80(v3);
  return sub_2772C(15);
}
