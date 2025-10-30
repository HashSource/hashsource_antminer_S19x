char *__fastcall sub_163618(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r12
  size_t v6; // r7
  int v7; // r1
  char *v8; // r5
  char *v9; // r1
  int v10; // r0
  int v11; // r2
  int v12; // r3

  v4 = strlen(s);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v4 + 1;
  v7 = *(_DWORD *)(a1 + 12);
  if ( v4 + 1 > v5 - v7 )
  {
    obstack_newchunk((struct obstack *)a1, v4 + 1);
    v7 = *(_DWORD *)(a1 + 12);
    v5 = *(_DWORD *)(a1 + 16);
  }
  v8 = *(char **)(a1 + 8);
  v9 = (char *)(v7 + v6);
  v10 = *(_DWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 12) = v9;
  if ( v9 == v8 )
    *(_BYTE *)(a1 + 40) |= 2u;
  v12 = (unsigned int)&v9[v10] & ~v10;
  *(_DWORD *)(a1 + 12) = v12;
  if ( v12 - v11 > (unsigned int)(v5 - v11) )
  {
    v12 = v5;
    *(_DWORD *)(a1 + 12) = v5;
  }
  *(_DWORD *)(a1 + 8) = v12;
  strcpy(v8, s);
  return v8;
}
