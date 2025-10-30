void *__fastcall sub_25AEEC(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r12
  int v6; // r3
  void *v7; // r5
  void *v8; // r3
  int v9; // r1
  int v10; // r3

  v3 = a3 * a2;
  v4 = *(_DWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 12);
  if ( a3 * a2 > (unsigned int)(v4 - v6) )
  {
    obstack_newchunk((struct obstack *)a1, v3);
    v6 = *(_DWORD *)(a1 + 12);
    v4 = *(_DWORD *)(a1 + 16);
  }
  v7 = *(void **)(a1 + 8);
  v8 = (void *)(v6 + v3);
  v9 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 12) = v8;
  if ( v8 == v7 )
    *(_BYTE *)(a1 + 40) |= 2u;
  v10 = ((unsigned int)v8 + *(_DWORD *)(a1 + 24)) & ~*(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v10;
  if ( v10 - v9 > (unsigned int)(v4 - v9) )
  {
    v10 = v4;
    *(_DWORD *)(a1 + 12) = v4;
  }
  *(_DWORD *)(a1 + 8) = v10;
  memset(v7, 0, v3);
  return v7;
}
