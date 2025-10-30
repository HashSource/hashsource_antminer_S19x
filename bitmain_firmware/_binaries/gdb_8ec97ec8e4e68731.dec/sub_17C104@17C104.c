int __fastcall sub_17C104(const char *a1)
{
  void *v1; // r4
  char *v2; // r7
  char *next_free; // r5
  unsigned int v4; // r6
  size_t v5; // r0
  size_t v6; // r8
  char *v7; // r0
  char *v8; // r7
  char *v9; // r5
  size_t v10; // r0
  size_t v11; // r6
  char *v12; // r0
  char *v13; // r7
  char *v14; // r5
  size_t v15; // r0
  size_t v16; // r6
  char *v17; // r0
  char v18; // r2
  char *object_base; // r0
  bool v20; // zf
  char *chunk_limit; // r3
  int v22; // r5
  char *v24; // r6
  unsigned int v25; // r5
  char *v26; // r0
  char *v27; // [sp+8h] [bp-40h] BYREF
  char *v28; // [sp+Ch] [bp-3Ch] BYREF
  char *s; // [sp+10h] [bp-38h] BYREF
  char *v30; // [sp+14h] [bp-34h] BYREF
  int v31; // [sp+18h] [bp-30h] BYREF
  struct obstack obstack; // [sp+1Ch] [bp-2Ch] BYREF

  if ( !a1 )
    return 0;
  v1 = (void *)sub_17BD90(a1, (int *)&v27, &v28, &s, &v30, &v31);
  if ( !v1 )
    return 0;
  obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, sub_17B9F4);
  v2 = s;
  if ( s )
  {
    next_free = obstack.next_free;
    v4 = obstack.chunk_limit - obstack.next_free;
    if ( v31 )
    {
      if ( v4 <= 1 )
      {
        obstack_newchunk(&obstack, 2);
        next_free = obstack.next_free;
      }
      *(_WORD *)next_free = *(_WORD *)"(*";
      v2 = s;
      next_free = obstack.next_free + 2;
      v4 = obstack.chunk_limit - (obstack.next_free + 2);
      obstack.next_free += 2;
    }
    v5 = strlen(v2);
    v6 = v5;
    if ( v5 > v4 )
    {
      obstack_newchunk(&obstack, v5);
      next_free = obstack.next_free;
      v2 = s;
    }
    memcpy(next_free, v2, v6);
    v7 = &obstack.next_free[v6];
    v20 = obstack.chunk_limit == &obstack.next_free[v6];
    obstack.next_free += v6;
    if ( v20 )
    {
      obstack_newchunk(&obstack, 1);
      v7 = obstack.next_free;
    }
    *v7 = 46;
    v8 = v30;
    v9 = ++obstack.next_free;
    v10 = strlen(v30);
    v11 = v10;
    if ( v10 > obstack.chunk_limit - obstack.next_free )
    {
      obstack_newchunk(&obstack, v10);
      v9 = obstack.next_free;
      v8 = v30;
    }
    memcpy(v9, v8, v11);
    v12 = &obstack.next_free[v11];
    obstack.next_free += v11;
    if ( v31 )
    {
      if ( obstack.chunk_limit == v12 )
      {
        obstack_newchunk(&obstack, 1);
        v12 = obstack.next_free;
      }
      *v12 = 41;
      v12 = ++obstack.next_free;
    }
    if ( obstack.chunk_limit != v12 )
      goto LABEL_19;
  }
  else
  {
    v24 = v27;
    v25 = strlen(v27);
    v26 = obstack.next_free;
    if ( v25 > obstack.chunk_limit - obstack.next_free )
    {
      obstack_newchunk(&obstack, v25);
      v26 = obstack.next_free;
      v24 = v27;
    }
    memcpy(v26, v24, v25);
    v12 = &obstack.next_free[v25];
    v20 = obstack.chunk_limit == &obstack.next_free[v25];
    obstack.next_free += v25;
    if ( !v20 )
      goto LABEL_19;
  }
  obstack_newchunk(&obstack, 1);
  v12 = obstack.next_free;
LABEL_19:
  *v12 = 46;
  v13 = v28;
  v14 = ++obstack.next_free;
  v15 = strlen(v28);
  v16 = v15;
  if ( v15 > obstack.chunk_limit - obstack.next_free )
  {
    obstack_newchunk(&obstack, v15);
    v14 = obstack.next_free;
    v13 = v28;
  }
  memcpy(v14, v13, v16);
  v17 = &obstack.next_free[v16];
  v20 = obstack.chunk_limit == &obstack.next_free[v16];
  obstack.next_free += v16;
  if ( v20 )
  {
    obstack_newchunk(&obstack, 1);
    v17 = obstack.next_free;
  }
  v18 = (_BYTE)v17 + 1;
  obstack.next_free = v17 + 1;
  *v17 = 0;
  object_base = obstack.object_base;
  v20 = obstack.next_free == obstack.object_base;
  if ( obstack.next_free == obstack.object_base )
    v18 = *((_BYTE *)&obstack + 40);
  chunk_limit = (char *)((int)&obstack.next_free[obstack.alignment_mask] & ~obstack.alignment_mask);
  obstack.next_free = chunk_limit;
  if ( v20 )
    *((_BYTE *)&obstack + 40) = v18 | 2;
  if ( (char *)(chunk_limit - (char *)obstack.chunk) > (char *)(obstack.chunk_limit - (char *)obstack.chunk) )
  {
    chunk_limit = obstack.chunk_limit;
    obstack.next_free = obstack.chunk_limit;
  }
  obstack.object_base = chunk_limit;
  v22 = sub_327254(object_base);
  obstack_free(&obstack, 0);
  free(v1);
  return v22;
}
