int __fastcall sub_1A3B4(int a1, char *s)
{
  size_t v4; // r0
  _BYTE *v6; // r0
  _BYTE *v7; // r3
  DIR *v8; // r0
  int *v9; // r0

  if ( !a1 || *(_DWORD *)a1 != 1145655850 )
    sub_10C38();
  if ( !s )
    sub_10C38();
  v4 = strlen(s);
  if ( v4 + 3 > 0x400 )
    return 19;
  sub_108C4((_BYTE *)(a1 + 4), (unsigned __int8 *)s, v4 + 1);
  v6 = (_BYTE *)(a1 + strlen((const char *)(a1 + 4)));
  v7 = v6 + 4;
  if ( a1 + 4 < (unsigned int)(v6 + 4) && v6[3] != 47 )
  {
    v7 = v6 + 5;
    v6[4] = 47;
  }
  *v7 = 42;
  v7[1] = 0;
  v8 = opendir(s);
  *(_DWORD *)(a1 + 1288) = v8;
  if ( v8 )
    return 0;
  v9 = _errno_location();
  return sub_1AA10(*v9, "./../lib/isc/unix/dir.c", 93);
}
