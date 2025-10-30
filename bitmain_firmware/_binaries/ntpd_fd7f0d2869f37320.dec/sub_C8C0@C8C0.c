char *sub_C8C0()
{
  int v0; // s0
  int v1; // s1
  char *v2; // r4
  int v3; // r5
  int v4; // r3
  char *v5; // r0
  int v6; // r3
  char *v7; // r0
  char *v8; // r1
  int v9; // t1

  v2 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  lib_nextbuf = v3;
  sub_6D00C(v2, 128, &off_8D724, v4, v0, v1);
  v5 = strchr(v2, 101);
  if ( !v5 )
  {
    v5 = strchr(v2, 69);
    if ( !v5 )
      return v2;
    *v5 = 101;
  }
  v6 = (unsigned __int8)v5[1];
  if ( v6 == 45 )
  {
    v6 = (unsigned __int8)v5[2];
    v7 = v5 + 2;
  }
  else
  {
    v7 = v5 + 1;
  }
  if ( v6 == 48 )
  {
    v8 = v7;
    do
      v9 = (unsigned __int8)*++v8;
    while ( v9 == 48 );
    if ( v7 != v8 )
      sub_6E4B4(v7);
  }
  return v2;
}
