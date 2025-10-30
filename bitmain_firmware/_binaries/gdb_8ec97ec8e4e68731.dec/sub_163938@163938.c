void *__fastcall sub_163938(int a1, size_t n)
{
  int v3; // r4
  int v4; // r0
  int v5; // r3
  void *v6; // r5
  void *v7; // r3
  int v8; // r1
  int v9; // r3

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 12);
  if ( n > v4 - v5 )
  {
    obstack_newchunk((struct obstack *)v3, n);
    v5 = *(_DWORD *)(v3 + 12);
    v4 = *(_DWORD *)(v3 + 16);
  }
  v6 = *(void **)(v3 + 8);
  v7 = (void *)(v5 + n);
  v8 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 == v6 )
    *(_BYTE *)(v3 + 40) |= 2u;
  v9 = ((unsigned int)v7 + *(_DWORD *)(v3 + 24)) & ~*(_DWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 12) = v9;
  if ( v9 - v8 > (unsigned int)(v4 - v8) )
  {
    v9 = v4;
    *(_DWORD *)(v3 + 12) = v4;
  }
  *(_DWORD *)(v3 + 8) = v9;
  memset(v6, 0, n);
  return v6;
}
