void __fastcall sub_122BC4(_DWORD *a1, _DWORD *a2)
{
  int v4; // r4
  const char *v5; // r0
  char *v6; // r6
  size_t v7; // r5
  void *v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r0
  int v12; // r1
  int v13; // r2

  v4 = *(_DWORD *)(dword_4872D8 + 344);
  v5 = (const char *)sub_1B87A8(v4);
  v6 = sub_93140("<unknown type in %s, CU 0x%x, DIE 0x%x>", v5, *a1, *a2);
  v7 = strlen(v6);
  v8 = *(void **)(v4 + 60);
  if ( *(_DWORD *)(v4 + 64) - (int)v8 < v7 + 1 )
  {
    obstack_newchunk((struct obstack *)(v4 + 48), v7 + 1);
    v8 = *(void **)(v4 + 60);
  }
  memcpy(v8, v6, v7);
  v9 = *(_DWORD *)(v4 + 60);
  *(_DWORD *)(v4 + 60) = v9 + v7 + 1;
  *(_BYTE *)(v9 + v7) = 0;
  v10 = *(_DWORD *)(v4 + 60);
  v11 = *(_DWORD *)(v4 + 64);
  v12 = *(_DWORD *)(v4 + 52);
  if ( *(_DWORD *)(v4 + 56) == v10 )
    *(_BYTE *)(v4 + 88) |= 2u;
  v13 = (v10 + *(_DWORD *)(v4 + 72)) & ~*(_DWORD *)(v4 + 72);
  *(_DWORD *)(v4 + 60) = v13;
  if ( v13 - v12 > (unsigned int)(v11 - v12) )
  {
    v13 = v11;
    *(_DWORD *)(v4 + 60) = v11;
  }
  *(_DWORD *)(v4 + 56) = v13;
  free(v6);
  JUMPOUT(0x1734E0);
}
