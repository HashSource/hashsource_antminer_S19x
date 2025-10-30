int __fastcall sub_7B69C(int a1, char *s)
{
  size_t v4; // r0
  _BYTE *v6; // r0
  _BYTE *v7; // r3
  DIR *v8; // r0
  int *v9; // r0

  if ( !a1 || *(_DWORD *)a1 != 1145655850 )
    sub_6FC54(
      (int)"./../lib/isc/unix/dir.c",
      65,
      0,
      "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic == ((('D') << 24 | ('I') << 16 | ('R') << 8 | ('*')))))");
  if ( !s )
    sub_6FC54((int)"./../lib/isc/unix/dir.c", 66, 0, "dirname != ((void *)0)");
  v4 = strlen(s);
  if ( v4 + 3 > 0x400 )
    return 19;
  sub_6E4B4((_BYTE *)(a1 + 4), (unsigned __int8 *)s, v4 + 1);
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
  return sub_7BCF8(*v9, "./../lib/isc/unix/dir.c", 93);
}
