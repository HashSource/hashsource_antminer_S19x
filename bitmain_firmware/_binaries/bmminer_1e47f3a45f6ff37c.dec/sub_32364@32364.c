int sub_32364()
{
  unsigned int v0; // r6
  int v1; // r4
  int v2; // r8
  int v3; // r0
  int v4; // r9
  int v5; // r9
  int v6; // r4
  int v7; // r5
  int v8; // r9
  int v9; // r6

  v0 = dword_534B54;
  v1 = 0;
  dword_533B38 = 10 * ((dword_B3050 + dword_B3060 * (dword_533B38 - dword_B3050) / 100) / 10);
  dword_534B54 = 5 * ((dword_B3054 + dword_B3060 * (dword_534B54 - dword_B3054) / 0x64u) / 5);
  do
  {
    if ( sub_26C0C(v1) )
      sub_23DC4(v1, (unsigned __int8)byte_534B58, v0, dword_534B54, 0);
    ++v1;
  }
  while ( v1 != 4 );
  v2 = sub_226A8();
  v3 = dword_533B38;
  v4 = dword_533B38 - v2;
  if ( dword_533B38 - v2 < 0 )
    v4 = v2 - dword_533B38;
  v5 = v4 / 10;
  if ( v5 <= 1 )
  {
    v9 = 0;
  }
  else
  {
    v6 = v2 + 10;
    v7 = v2 - 10;
    v8 = 10 * v5 + v2;
    do
    {
      if ( v3 > v2 )
        v9 = v6;
      else
        v9 = v7;
      v6 += 10;
      sub_223A0(v9);
      v7 -= 10;
      usleep((__useconds_t)sub_30D40);
      v3 = dword_533B38;
    }
    while ( v6 != v8 );
  }
  if ( v3 != v9 )
    sub_223A0(v3);
  return sub_27C84(15);
}
