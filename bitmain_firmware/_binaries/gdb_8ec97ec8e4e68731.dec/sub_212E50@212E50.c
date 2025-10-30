_DWORD *__fastcall sub_212E50(_DWORD *a1, const char *a2)
{
  int v3; // r4
  int v5; // r1
  int v6; // r3
  char v7; // r2
  _DWORD *v8; // r5
  _DWORD *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  size_t v13; // r0
  const char *v14; // r9
  const char *v15; // r0
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r4
  char *v20; // r0
  _DWORD *v21; // r3
  _DWORD *result; // r0
  bool v23; // zf

  v3 = a1[1];
  v5 = *(_DWORD *)(v3 + 64);
  v6 = *(_DWORD *)(v3 + 60);
  v7 = v5 - v6;
  if ( (unsigned int)(v5 - v6) <= 0x1F )
  {
    obstack_newchunk((struct obstack *)(v3 + 48), 32);
    v6 = *(_DWORD *)(v3 + 60);
    v5 = *(_DWORD *)(v3 + 64);
  }
  v8 = *(_DWORD **)(v3 + 56);
  v9 = (_DWORD *)(v6 + 32);
  v10 = *(_DWORD *)(v3 + 72);
  *(_DWORD *)(v3 + 60) = v9;
  v11 = v9 == v8;
  if ( v9 == v8 )
    v7 = *(_BYTE *)(v3 + 88);
  v12 = ((unsigned int)v9 + v10) & ~v10;
  *(_DWORD *)(v3 + 60) = v12;
  if ( v11 )
    *(_BYTE *)(v3 + 88) = v7 | 2;
  if ( v12 - *(_DWORD *)(v3 + 52) > (unsigned int)(v5 - *(_DWORD *)(v3 + 52)) )
  {
    v12 = v5;
    *(_DWORD *)(v3 + 60) = v5;
  }
  *(_DWORD *)(v3 + 56) = v12;
  memset(v8, 0, 0x20u);
  v13 = strlen(a2);
  v8[3] = sub_C1930(a2, v13 + 1, *(struct obstack **)(*(_DWORD *)(v3 + 40) + 44));
  v8[7] = 0;
  v8[6] = sub_212DE8(a2);
  if ( (unsigned int)dword_48999C > 1 )
  {
    v14 = (const char *)dword_4896C4;
    if ( dword_4896C4 )
    {
      v15 = (const char *)sub_1B87A8(v3);
      v16 = strcmp(v14, v15);
      if ( !v16 )
      {
LABEL_15:
        v19 = *(_DWORD *)sub_242FC8(v16);
        v20 = sub_98EEC((int)v8);
        sub_2594B0(v19, "Created symtab %s for module %s.\n", v20, a2);
        goto LABEL_16;
      }
      if ( dword_4896C4 )
        free((void *)dword_4896C4);
    }
    v17 = sub_1B87A8(v3);
    dword_4896C4 = sub_327254(v17);
    v18 = (_DWORD *)sub_242FC8(dword_4896C4);
    v16 = sub_2594B0(*v18, "Creating one or more symtabs for objfile %s ...\n", (const char *)dword_4896C4);
    goto LABEL_15;
  }
LABEL_16:
  v21 = (_DWORD *)a1[3];
  result = v8;
  v23 = v21 == 0;
  if ( v21 )
    v21 = (_DWORD *)a1[4];
  else
    a1[3] = v8;
  if ( !v23 )
    *v21 = v8;
  a1[4] = v8;
  v8[1] = a1;
  return result;
}
