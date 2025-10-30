int __fastcall sub_1B6B44(int a1, char *s, int a3)
{
  int v4; // r4
  const char *v7; // r0
  int result; // r0
  size_t v9; // r7
  void *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r12
  bool v15; // zf
  int v16; // r3

  v4 = *(_DWORD *)(a1 + 40);
  v7 = *(const char **)(v4 + 72);
  if ( !v7 || (result = strcmp(v7, s)) != 0 )
  {
    v9 = strlen(s);
    v10 = *(void **)(v4 + 12);
    if ( v9 + 1 > *(_DWORD *)(v4 + 16) - (int)v10 )
    {
      obstack_newchunk((struct obstack *)v4, v9 + 1);
      v10 = *(void **)(v4 + 12);
    }
    memcpy(v10, s, v9);
    v11 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v11 + v9 + 1;
    *(_BYTE *)(v11 + v9) = 0;
    v12 = *(_DWORD *)(v4 + 12);
    v13 = *(_DWORD *)(v4 + 8);
    v14 = *(_DWORD *)(v4 + 24);
    result = *(_DWORD *)(v4 + 16);
    v15 = v12 == v13;
    *(_DWORD *)(v4 + 72) = v13;
    if ( v12 == v13 )
      LOBYTE(v11) = *(_BYTE *)(v4 + 40);
    v16 = (v12 + v14) & ~v14;
    *(_DWORD *)(v4 + 12) = v16;
    if ( v15 )
      *(_BYTE *)(v4 + 40) = v11 | 2;
    if ( v16 - *(_DWORD *)(v4 + 4) > (unsigned int)(result - *(_DWORD *)(v4 + 4)) )
    {
      v16 = result;
      *(_DWORD *)(v4 + 12) = result;
    }
    *(_DWORD *)(v4 + 8) = v16;
    v4 = *(_DWORD *)(a1 + 40);
  }
  *(_DWORD *)(v4 + 76) = a3;
  return result;
}
