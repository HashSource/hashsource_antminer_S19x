_DWORD *__fastcall sub_1D0584(const char *a1, int a2)
{
  _DWORD *v3; // r4
  size_t v5; // r0
  char *v6; // r0
  int v7; // r1
  int v8; // r3
  const char *v9; // r8
  const char *v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r5
  char *v15; // r0
  int v17; // r1
  int v18; // r3
  char v19; // r2
  _DWORD *v20; // r3
  int v21; // r0
  bool v22; // zf
  int v23; // r3

  v3 = *(_DWORD **)(a2 + 32);
  if ( v3 )
  {
    *(_DWORD *)(a2 + 32) = *v3;
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 64);
    v18 = *(_DWORD *)(a2 + 60);
    v19 = v17 - v18;
    if ( (unsigned int)(v17 - v18) <= 0x43 )
    {
      obstack_newchunk((struct obstack *)(a2 + 48), 68);
      v18 = *(_DWORD *)(a2 + 60);
      v17 = *(_DWORD *)(a2 + 64);
    }
    v3 = *(_DWORD **)(a2 + 56);
    v20 = (_DWORD *)(v18 + 68);
    v21 = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a2 + 60) = v20;
    v22 = v20 == v3;
    if ( v20 == v3 )
      v19 = *(_BYTE *)(a2 + 88);
    v23 = ((unsigned int)v20 + v21) & ~v21;
    *(_DWORD *)(a2 + 60) = v23;
    if ( v22 )
      *(_BYTE *)(a2 + 88) = v19 | 2;
    if ( v23 - *(_DWORD *)(a2 + 52) > (unsigned int)(v17 - *(_DWORD *)(a2 + 52)) )
    {
      v23 = v17;
      *(_DWORD *)(a2 + 60) = v17;
    }
    *(_DWORD *)(a2 + 56) = v23;
  }
  memset(v3, 0, 0x44u);
  v5 = strlen(a1);
  v6 = sub_C1930(a1, v5 + 1, *(struct obstack **)(*(_DWORD *)(a2 + 40) + 44));
  v7 = *(_DWORD *)(a2 + 24);
  v8 = dword_48999C;
  v3[1] = v6;
  *v3 = v7;
  v3[14] = 0;
  *(_DWORD *)(a2 + 24) = v3;
  if ( v8 )
  {
    v9 = (const char *)dword_487D40;
    if ( dword_487D40 )
    {
      v10 = (const char *)sub_1B87A8(a2);
      v11 = strcmp(v9, v10);
      if ( !v11 )
      {
LABEL_9:
        v14 = *(_DWORD *)sub_242FC8(v11);
        v15 = sub_98EEC((int)v3);
        sub_2594B0(v14, "Created psymtab %s for module %s.\n", v15, a1);
        return v3;
      }
      if ( dword_487D40 )
        free((void *)dword_487D40);
    }
    v12 = sub_1B87A8(a2);
    dword_487D40 = sub_327254(v12);
    v13 = (_DWORD *)sub_242FC8(dword_487D40);
    v11 = sub_2594B0(*v13, "Creating one or more psymtabs for objfile %s ...\n", (const char *)dword_487D40);
    goto LABEL_9;
  }
  return v3;
}
