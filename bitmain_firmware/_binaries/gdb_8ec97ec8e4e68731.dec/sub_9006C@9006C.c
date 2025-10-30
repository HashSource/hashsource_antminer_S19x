int __fastcall sub_9006C(int a1, _DWORD *a2)
{
  int **v2; // r2
  const char *v4; // r7
  int v5; // r5
  unsigned int v6; // r6
  void *v7; // r0
  struct obstack *v8; // r4
  char *chunk_limit; // r2
  char *next_free; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r7
  struct obstack *v13; // r4
  char *v14; // r6
  char *v15; // r5
  int v16; // r3
  char *v17; // r11
  size_t v18; // r0
  size_t v19; // r8
  char *v20; // r0
  int v21; // r4
  _BYTE *v22; // r1
  int v23; // r2
  int v24; // r3
  char v25; // r1
  int v26; // r3
  int v27; // r4
  int v28; // r0
  bool v29; // zf
  int v30; // r3
  void *v31; // r0
  void *v33; // r0
  void *ptr; // [sp+Ch] [bp-28h] BYREF
  _BYTE *v35; // [sp+10h] [bp-24h]
  char *s; // [sp+18h] [bp-1Ch] BYREF
  char v37; // [sp+20h] [bp-14h] BYREF

  if ( *a2 != 40 )
  {
    sub_94700(
      "rust-exp.y",
      2110,
      "%s: Assertion `%s' failed.",
      "const char* convert_name(parser_state*, const rust_op*)",
      "operation->opcode == OP_VAR_VALUE");
    v33 = ptr;
    if ( ptr )
      sub_339E64(ptr);
    sub_338FFC(v33);
  }
  v2 = (int **)a2[10];
  if ( !v2 )
    return a2[4];
  sub_8FFD0(&ptr, a1, v2);
  v4 = (const char *)a2[4];
  v5 = dword_4751A4;
  v6 = strlen(v4);
  v7 = *(void **)(dword_4751A4 + 12);
  if ( v6 > *(_DWORD *)(dword_4751A4 + 16) - (int)v7 )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, v6);
    v4 = (const char *)a2[4];
    v7 = *(void **)(v5 + 12);
  }
  v8 = (struct obstack *)dword_4751A4;
  memcpy(v7, v4, v6);
  chunk_limit = v8->chunk_limit;
  *(_DWORD *)(v5 + 12) += v6;
  next_free = v8->next_free;
  if ( chunk_limit == next_free )
  {
    obstack_newchunk(v8, 1);
    next_free = v8->next_free;
  }
  v8->next_free = next_free + 1;
  *next_free = 60;
  v11 = ptr;
  if ( ptr != v35 )
  {
    v12 = 0;
    do
    {
      sub_255DE4(&s, v11[v12]);
      v13 = (struct obstack *)dword_4751A4;
      v14 = *(char **)(dword_4751A4 + 16);
      v15 = *(char **)(dword_4751A4 + 12);
      if ( v12 )
      {
        if ( v14 == v15 )
        {
          obstack_newchunk((struct obstack *)dword_4751A4, 1);
          v15 = v13->next_free;
        }
        v16 = dword_4751A4;
        v13->next_free = v15 + 1;
        *v15 = 44;
        v13 = (struct obstack *)v16;
        v15 = *(char **)(v16 + 12);
        v14 = *(char **)(v16 + 16);
      }
      v17 = s;
      v18 = strlen(s);
      v19 = v18;
      if ( v18 > v14 - v15 )
      {
        obstack_newchunk(v13, v18);
        v15 = v13->next_free;
        v17 = s;
      }
      memcpy(v15, v17, v19);
      v20 = s;
      v29 = s == &v37;
      v13->next_free += v19;
      if ( !v29 )
        sub_339E64(v20);
      v11 = ptr;
      ++v12;
    }
    while ( v12 < (v35 - (_BYTE *)ptr) >> 2 );
  }
  v21 = dword_4751A4;
  v22 = *(_BYTE **)(dword_4751A4 + 12);
  if ( (unsigned int)(*(_DWORD *)(dword_4751A4 + 16) - (_DWORD)v22) <= 1 )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 2);
    v23 = dword_4751A4;
    v22 = *(_BYTE **)(v21 + 12);
  }
  else
  {
    v23 = dword_4751A4;
  }
  *v22 = 62;
  v24 = *(_DWORD *)(v21 + 12);
  v25 = v24 + 2;
  *(_DWORD *)(v21 + 12) = v24 + 2;
  *(_BYTE *)(v24 + 1) = 0;
  v26 = *(_DWORD *)(v23 + 12);
  v27 = *(_DWORD *)(v23 + 8);
  v28 = *(_DWORD *)(v23 + 16);
  v29 = v26 == v27;
  if ( v26 == v27 )
    v25 = *(_BYTE *)(v23 + 40);
  v30 = (v26 + *(_DWORD *)(v23 + 24)) & ~*(_DWORD *)(v23 + 24);
  *(_DWORD *)(v23 + 12) = v30;
  if ( v29 )
    *(_BYTE *)(v23 + 40) = v25 | 2;
  if ( v30 - *(_DWORD *)(v23 + 4) > (unsigned int)(v28 - *(_DWORD *)(v23 + 4)) )
  {
    v30 = v28;
    *(_DWORD *)(v23 + 12) = v28;
  }
  v31 = ptr;
  *(_DWORD *)(v23 + 8) = v30;
  if ( v31 )
    sub_339E64(v31);
  return v27;
}
