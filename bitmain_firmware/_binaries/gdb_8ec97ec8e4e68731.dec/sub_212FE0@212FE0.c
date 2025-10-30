_DWORD *__fastcall sub_212FE0(int a1, int a2)
{
  int v3; // r3
  struct obstack *v5; // r7
  int v6; // r1
  char v7; // r2
  _DWORD *v8; // r5
  _DWORD *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  const char *v13; // r8
  size_t v14; // r6
  void *v15; // r0
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r0
  bool v20; // zf
  int v21; // r3
  int v22; // r2
  unsigned int v23; // r12
  unsigned int v24; // r2
  bool v25; // cc
  int v26; // r2
  int v27; // r4
  char *v28; // r0

  v3 = *(_DWORD *)(a1 + 60);
  v5 = (struct obstack *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 64);
  v7 = v6 - v3;
  if ( (unsigned int)(v6 - v3) <= 0x3B )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 60);
    v3 = *(_DWORD *)(a1 + 60);
    v6 = *(_DWORD *)(a1 + 64);
  }
  v8 = *(_DWORD **)(a1 + 56);
  v9 = (_DWORD *)(v3 + 60);
  v10 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v9;
  v11 = v9 == v8;
  if ( v9 == v8 )
    v7 = *(_BYTE *)(a1 + 88);
  v12 = ((unsigned int)v9 + v10) & ~v10;
  *(_DWORD *)(a1 + 60) = v12;
  if ( v11 )
    *(_BYTE *)(a1 + 88) = v7 | 2;
  if ( v12 - *(_DWORD *)(a1 + 52) > (unsigned int)(v6 - *(_DWORD *)(a1 + 52)) )
  {
    v12 = v6;
    *(_DWORD *)(a1 + 60) = v6;
  }
  *(_DWORD *)(a1 + 56) = v12;
  memset(v8, 0, 0x3Cu);
  v8[1] = a1;
  v13 = (const char *)sub_3245A4(a2);
  v14 = strlen(v13);
  v15 = *(void **)(a1 + 60);
  if ( v14 + 1 > *(_DWORD *)(a1 + 64) - (int)v15 )
  {
    obstack_newchunk(v5, v14 + 1);
    v15 = *(void **)(a1 + 60);
  }
  memcpy(v15, v13, v14);
  v16 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 60) = v16 + v14 + 1;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *(_DWORD *)(a1 + 60);
  v18 = *(_DWORD *)(a1 + 56);
  v19 = *(_DWORD *)(a1 + 64);
  v20 = v17 == v18;
  if ( v17 == v18 )
    LOBYTE(v16) = *(_BYTE *)(a1 + 88);
  v21 = (v17 + *(_DWORD *)(a1 + 72)) & ~*(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v21;
  if ( v20 )
    *(_BYTE *)(a1 + 88) = v16 | 2;
  v22 = *(_DWORD *)(a1 + 52);
  v23 = v21 - v22;
  v24 = v19 - v22;
  v25 = v23 > v24;
  if ( v23 > v24 )
    v21 = v19;
  v26 = dword_48999C;
  if ( v25 )
    *(_DWORD *)(a1 + 60) = v19;
  *(_DWORD *)(a1 + 56) = v21;
  v8[2] = v18;
  v8[5] = "unknown";
  if ( v26 )
  {
    v27 = *(_DWORD *)sub_242FC8(v19);
    v28 = sub_98EEC((int)v8);
    sub_2594B0(v27, "Created compunit symtab %s for %s.\n", v28, (const char *)v8[2]);
  }
  return v8;
}
