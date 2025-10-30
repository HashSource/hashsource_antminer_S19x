void *__fastcall sub_1A2CCC(unsigned int a1, int *a2)
{
  int v2; // r4
  int v3; // r12
  int v5; // r1
  void *result; // r0
  void *v7; // r1
  int v8; // lr
  int v9; // r2
  int v10; // r3

  v2 = *a2;
  if ( !*a2 )
    return sub_93028(a1);
  v3 = *(_DWORD *)(v2 + 16);
  v5 = *(_DWORD *)(v2 + 12);
  if ( v3 - v5 < a1 )
  {
    obstack_newchunk((struct obstack *)v2, a1);
    v5 = *(_DWORD *)(v2 + 12);
    v3 = *(_DWORD *)(v2 + 16);
  }
  result = *(void **)(v2 + 8);
  v7 = (void *)(v5 + a1);
  v8 = *(_DWORD *)(v2 + 24);
  v9 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 12) = v7;
  if ( v7 == result )
    *(_BYTE *)(v2 + 40) |= 2u;
  v10 = ((unsigned int)v7 + v8) & ~v8;
  *(_DWORD *)(v2 + 12) = v10;
  if ( v10 - v9 > (unsigned int)(v3 - v9) )
  {
    v10 = v3;
    *(_DWORD *)(v2 + 12) = v3;
  }
  *(_DWORD *)(v2 + 8) = v10;
  return result;
}
