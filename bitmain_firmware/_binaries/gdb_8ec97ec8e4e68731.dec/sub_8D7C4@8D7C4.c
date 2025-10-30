_DWORD *__fastcall sub_8D7C4(int a1, unsigned int a2)
{
  const char *v2; // r5
  const char *v5; // r0
  unsigned int v6; // r10
  int v7; // r7
  __int64 v8; // r2
  struct obstack *v9; // r4
  char *chunk_limit; // r3
  char *next_free; // r0
  struct obstack *v12; // r7
  char *v13; // r3
  char *v14; // r2
  struct obstack *v15; // r5
  char *v16; // r3
  size_t v17; // r7
  char *v18; // r0
  int v19; // r4
  char *v20; // r2
  void *v21; // r1
  void *v22; // r3
  int v23; // r0
  bool v24; // zf
  int v25; // r3
  int v27; // r4
  const char *i; // r7
  int *v29; // r1
  unsigned int v30; // r3
  void *v31; // r0
  void *ptr; // [sp+Ch] [bp-Ch] BYREF
  int *v33; // [sp+10h] [bp-8h]
  int *v34; // [sp+14h] [bp-4h]

  v5 = (const char *)sub_C25A8(dword_487CD0);
  if ( *(_DWORD *)a1 != 40 )
  {
    sub_94700(
      "rust-exp.y",
      1007,
      "%s: Assertion `%s' failed.",
      "const rust_op* super_name(const rust_op*, unsigned int)",
      "ident->opcode == OP_VAR_VALUE");
    goto LABEL_40;
  }
  v2 = v5;
  if ( !*v5 )
    sub_946E0("Couldn't find namespace scope for self::");
  if ( !a2 )
  {
    v6 = strlen(v5);
    goto LABEL_5;
  }
  ptr = 0;
  v33 = 0;
  v34 = 0;
  v27 = ((int (*)(void))sub_100308)();
  for ( i = &v2[v27]; v2[v27]; i = &v2[v27] )
  {
    if ( v33 == v34 )
    {
      sub_91A64(&ptr);
    }
    else
    {
      v29 = v33 + 1;
      if ( v33 )
        *v33 = v27;
      v33 = v29;
    }
    if ( *i != 58 )
    {
      sub_94700(
        "rust-exp.y",
        1022,
        "%s: Assertion `%s' failed.",
        "const rust_op* super_name(const rust_op*, unsigned int)",
        "scope[current_len] == ':'");
      v31 = ptr;
      if ( ptr )
        sub_339E64(ptr);
      sub_338FFC(v31);
    }
    v27 += 2 + sub_100308(&v2[v27 + 2]);
  }
  v30 = ((char *)v33 - (_BYTE *)ptr) >> 2;
  if ( a2 >= v30 )
LABEL_40:
    sub_946E0("Too many super:: uses from '%s'", v2);
  v6 = *((_DWORD *)ptr + v30 - a2);
  if ( ptr )
    sub_339E64(ptr);
LABEL_5:
  v7 = dword_4751A4;
  v8 = *(_QWORD *)(dword_4751A4 + 12);
  if ( (unsigned int)(HIDWORD(v8) - v8) <= 1 )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 2);
    LODWORD(v8) = *(_DWORD *)(v7 + 12);
  }
  v9 = (struct obstack *)dword_4751A4;
  *(_WORD *)v8 = *(_WORD *)"::";
  chunk_limit = v9->chunk_limit;
  *(_DWORD *)(v7 + 12) += 2;
  next_free = v9->next_free;
  if ( v6 > chunk_limit - next_free )
  {
    obstack_newchunk(v9, v6);
    next_free = v9->next_free;
    v12 = (struct obstack *)dword_4751A4;
  }
  else
  {
    v12 = v9;
  }
  memcpy(next_free, v2, v6);
  v13 = v12->chunk_limit;
  v9->next_free += v6;
  v14 = v12->next_free;
  if ( (unsigned int)(v13 - v14) <= 1 )
  {
    obstack_newchunk(v12, 2);
    v14 = v12->next_free;
    v15 = (struct obstack *)dword_4751A4;
  }
  else
  {
    v15 = v12;
  }
  *(_WORD *)v14 = *(_WORD *)"::";
  v16 = v15->chunk_limit;
  v12->next_free += 2;
  v17 = *(_DWORD *)(a1 + 20);
  v18 = v15->next_free;
  if ( v17 + 1 > v16 - v18 )
  {
    obstack_newchunk(v15, v17 + 1);
    v19 = dword_4751A4;
    v18 = v15->next_free;
  }
  else
  {
    v19 = (int)v15;
  }
  memcpy(v18, *(const void **)(a1 + 16), v17);
  v20 = v15->next_free;
  v15->next_free = &v20[v17 + 1];
  v20[v17] = 0;
  v21 = *(void **)(v19 + 8);
  v22 = *(void **)(v19 + 12);
  v23 = *(_DWORD *)(v19 + 16);
  v24 = v22 == v21;
  if ( v22 == v21 )
    LOBYTE(v20) = *(_BYTE *)(v19 + 40);
  v25 = ((unsigned int)v22 + *(_DWORD *)(v19 + 24)) & ~*(_DWORD *)(v19 + 24);
  *(_DWORD *)(v19 + 12) = v25;
  if ( v24 )
    *(_BYTE *)(v19 + 40) = (unsigned __int8)v20 | 2;
  if ( v25 - *(_DWORD *)(v19 + 4) > (unsigned int)(v23 - *(_DWORD *)(v19 + 4)) )
  {
    v25 = v23;
    *(_DWORD *)(v19 + 12) = v23;
  }
  *(_DWORD *)(v19 + 8) = v25;
  ptr = v21;
  v33 = (int *)strlen((const char *)v21);
  return sub_8CD8C((int)ptr, (int)v33, *(_DWORD *)(a1 + 40));
}
