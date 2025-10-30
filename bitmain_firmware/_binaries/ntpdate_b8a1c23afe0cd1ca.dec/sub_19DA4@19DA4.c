int __fastcall sub_19DA4(int a1, char *s)
{
  size_t v4; // r0
  unsigned int v5; // r5
  size_t v6; // r0
  _BYTE *v7; // r3
  DIR *v8; // r0
  int *v10; // r0

  if ( !a1 || *(_DWORD *)a1 != 1145655850 )
    sub_1073C();
  if ( !s )
    sub_1073C();
  v4 = strlen(s);
  if ( v4 + 3 > 0x400 )
    return 19;
  v5 = a1 + 4;
  sub_103C4((_BYTE *)(a1 + 4), (unsigned __int8 *)s, v4 + 1);
  v6 = strlen((const char *)(a1 + 4));
  v7 = (_BYTE *)(a1 + 4 + v6);
  if ( v5 < v5 + v6 && *(v7 - 1) != 47 )
  {
    ++v7;
    *(_BYTE *)(v5 + v6) = 47;
  }
  *v7 = 42;
  v7[1] = 0;
  v8 = opendir(s);
  *(_DWORD *)(a1 + 1288) = v8;
  if ( v8 )
    return 0;
  v10 = _errno_location();
  return sub_1A3F8(*v10, "./../lib/isc/unix/dir.c", 93);
}
