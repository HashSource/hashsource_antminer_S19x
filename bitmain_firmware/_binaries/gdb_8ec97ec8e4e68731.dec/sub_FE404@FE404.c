int __fastcall sub_FE404(int a1, char *s, unsigned int *a3)
{
  size_t v6; // r0
  int v7; // r3
  unsigned int v8; // r5
  void *v9; // r0
  char v10; // r3
  int result; // r0
  int v12; // lr
  unsigned int v13; // r2
  int v14; // r12
  int v15; // r1
  int v16; // r3

  v6 = strlen(s);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v6;
  v9 = *(void **)(a1 + 12);
  *a3 = v8;
  if ( v8 > v7 - (int)v9 )
  {
    obstack_newchunk((struct obstack *)a1, v8);
    v9 = *(void **)(a1 + 12);
  }
  memcpy(v9, s, v8);
  result = *(_DWORD *)(a1 + 8);
  v12 = *(_DWORD *)(a1 + 24);
  v13 = *(_DWORD *)(a1 + 12) + v8;
  v14 = *(_DWORD *)(a1 + 16);
  v15 = *(_DWORD *)(a1 + 4);
  if ( v13 == result )
    v10 = *(_BYTE *)(a1 + 40);
  *(_DWORD *)(a1 + 12) = v13;
  if ( v13 == result )
    *(_BYTE *)(a1 + 40) = v10 | 2;
  v16 = (v13 + v12) & ~v12;
  *(_DWORD *)(a1 + 12) = v16;
  if ( v16 - v15 > (unsigned int)(v14 - v15) )
  {
    v16 = v14;
    *(_DWORD *)(a1 + 12) = v14;
  }
  *(_DWORD *)(a1 + 8) = v16;
  return result;
}
