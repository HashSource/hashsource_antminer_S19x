int __fastcall sub_135FD8(char *a1, int a2, int *a3)
{
  int v6; // r10
  const char *v7; // r0
  int v8; // r3
  char *v9; // r7
  int v10; // r3
  const char *v11; // r6
  char *v12; // r9
  const char *v13; // r8
  int v14; // r11
  const char *v16; // r0
  int v17; // r0
  int v18; // r4
  size_t v19; // r5
  void *v20; // r0
  int v21; // r2
  const char *v22; // r3
  int v23; // r1
  bool v24; // zf
  int v25; // r3
  int v26; // r4
  const char *v27; // r0

  v6 = *a3;
  if ( !sub_1309F8(a2, (int)a3) )
    return sub_1359DC(a1, a2, a3, 1);
  v7 = (const char *)sub_12EA34(a2, a3);
  v8 = a3[16];
  v9 = (char *)v7;
  if ( v8 != 12 )
  {
    if ( v7 )
    {
      if ( v8 == 6 )
      {
        v10 = dword_487318;
        goto LABEL_6;
      }
      goto LABEL_22;
    }
LABEL_33:
    v13 = v7;
    v12 = (char *)v7;
    v14 = 1;
    goto LABEL_13;
  }
  if ( !v7 )
    goto LABEL_33;
  if ( strchr(v7, 123) )
  {
    v12 = 0;
    v14 = 1;
    v13 = 0;
    v9 = 0;
    goto LABEL_13;
  }
LABEL_22:
  v17 = sub_1008BC(v9);
  v13 = (const char *)v17;
  v10 = dword_487318;
  if ( v17 )
  {
    v12 = (char *)v17;
    if ( !dword_487318 )
      goto LABEL_24;
    v14 = 1;
LABEL_13:
    v16 = (const char *)sub_1359DC(a1, a2, a3, 1);
    v11 = v16;
    if ( !v13 || !strcmp(v16, v13) )
      goto LABEL_19;
    if ( dword_47AC88 > 0 )
    {
      v26 = *(_DWORD *)(a2 + 8);
      v27 = (const char *)sub_1B87A8(v6);
      sub_F43B4(
        &off_46D334,
        "Computed physname <%s> does not match demangled <%s> (from linkage <%s>) - DIE at 0x%x [in module %s]",
        v11,
        v13,
        v9,
        v26,
        v27);
    }
    if ( !v14 )
    {
      v11 = v13;
LABEL_19:
      if ( v12 )
        free(v12);
      return (int)v11;
    }
LABEL_24:
    v18 = *(_DWORD *)(v6 + 40);
    v19 = strlen(v13);
    v20 = *(void **)(v18 + 12);
    if ( v19 + 1 > *(_DWORD *)(v18 + 16) - (int)v20 )
    {
      obstack_newchunk((struct obstack *)v18, v19 + 1);
      v20 = *(void **)(v18 + 12);
    }
    memcpy(v20, v13, v19);
    v21 = *(_DWORD *)(v18 + 12);
    *(_DWORD *)(v18 + 12) = v21 + v19 + 1;
    *(_BYTE *)(v21 + v19) = 0;
    v22 = *(const char **)(v18 + 12);
    v11 = *(const char **)(v18 + 8);
    v23 = *(_DWORD *)(v18 + 16);
    v24 = v22 == v11;
    if ( v22 == v11 )
      LOBYTE(v21) = *(_BYTE *)(v18 + 40);
    v25 = (unsigned int)&v22[*(_DWORD *)(v18 + 24)] & ~*(_DWORD *)(v18 + 24);
    *(_DWORD *)(v18 + 12) = v25;
    if ( v24 )
      *(_BYTE *)(v18 + 40) = v21 | 2;
    if ( v25 - *(_DWORD *)(v18 + 4) > (unsigned int)(v23 - *(_DWORD *)(v18 + 4)) )
    {
      v25 = v23;
      *(_DWORD *)(v18 + 12) = v23;
    }
    *(_DWORD *)(v18 + 8) = v25;
    goto LABEL_19;
  }
LABEL_6:
  if ( v10 )
  {
    v12 = 0;
    v13 = v9;
    v14 = 0;
    goto LABEL_13;
  }
  return (int)v9;
}
