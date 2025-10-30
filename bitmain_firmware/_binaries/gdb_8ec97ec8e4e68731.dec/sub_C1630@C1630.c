char *__fastcall sub_C1630(const void *a1, size_t a2, struct obstack *a3, struct obstack *a4)
{
  struct obstack *v4; // r12
  struct obstack *v5; // r5
  unsigned int chunk_size; // r2
  unsigned int object_base; // r0
  int (__fastcall *v10)(const void *, size_t); // r4
  int v11; // r3
  unsigned int v12; // r0
  unsigned int v13; // r7
  int v14; // r6
  int *v15; // r4
  char *v16; // r11
  char *chunk_limit; // r0
  size_t v18; // r3
  char *next_free; // r2
  char v20; // r1
  char *v21; // r4
  char *v22; // r2
  int alignment_mask; // r12
  bool v24; // zf
  int v25; // r2
  int v26; // r2
  int v27; // r3
  int v28; // r0
  char *v29; // r8
  _DWORD *v31; // r3
  unsigned int v32; // r7
  void (*v33)(void *, struct _obstack_chunk *); // r0
  unsigned int v34; // t1
  struct _obstack_chunk *v35; // r10
  unsigned int v36; // r2
  struct _obstack_chunk *chunk; // r0
  unsigned int i; // r11
  int **v39; // r4
  int *v40; // r6
  int v41; // r0
  __int64 v42; // r0
  size_t v44; // [sp+Ch] [bp-8h]

  if ( a4 )
    v4 = a4;
  v5 = a3;
  if ( a4 )
    a3 = v4;
  if ( a4 )
    a3->chunk_size = 0;
  if ( !v5[1].next_free )
    obstack_begin(v5, 0, 0, (void *(*)(int))sub_93028, sub_C15A8);
  chunk_size = v5[1].chunk_size;
  object_base = (unsigned int)v5[1].object_base;
  if ( object_base >= 5 * chunk_size )
  {
    v31 = &unk_37C698;
    v32 = 1021;
    v33 = (void (*)(void *, struct _obstack_chunk *))((char *)v5[1].freefun + object_base);
    ++v5[1].chunkfun;
    v5[1].freefun = v33;
    while ( chunk_size >= v32 )
    {
      if ( &unk_37C6EC == (_UNKNOWN *)v31 )
      {
        v32 = 2 * chunk_size;
        break;
      }
      v34 = v31[1];
      ++v31;
      v32 = v34;
    }
    v35 = (struct _obstack_chunk *)sub_93028(4 * v32);
    memset(v35, 0, 4 * v32);
    v36 = v5[1].chunk_size;
    chunk = v5[1].chunk;
    v5[1].alignment_mask = v5[1].alignment_mask - 4 * v36 + 4 * v32;
    if ( v36 )
    {
      for ( i = 0; i < v36; ++i )
      {
        v39 = (int **)*((_DWORD *)&chunk->limit + i);
        if ( v39 )
        {
          do
          {
            v40 = *v39;
            v41 = (*((int (__fastcall **)(int *, _DWORD))&v5[1] + 10))((int *)v39 + 2, *((unsigned __int16 *)v39 + 2));
            v42 = sub_347674(v41, v32);
            *v39 = (int *)*((_DWORD *)&v35->limit + HIDWORD(v42));
            *((_DWORD *)&v35->limit + HIDWORD(v42)) = v39;
            v39 = (int **)v40;
          }
          while ( v40 );
          chunk = v5[1].chunk;
          v36 = v5[1].chunk_size;
        }
      }
    }
    if ( chunk )
      free(chunk);
    v5[1].chunk = v35;
    v5[1].chunk_size = v32;
  }
  v10 = (int (__fastcall *)(const void *, size_t))*((_DWORD *)&v5[1] + 10);
  v11 = v5[1].temp.tempint + a2;
  ++v5[1].next_free;
  v5[1].temp.tempint = v11;
  v12 = v10(a1, a2);
  v13 = HIWORD(v12);
  v14 = (unsigned __int64)sub_347674(v12, v5[1].chunk_size) >> 32;
  v15 = (int *)*((_DWORD *)&v5[1].chunk->limit + v14);
  if ( v15 )
  {
    while ( 1 )
    {
      while ( *((unsigned __int16 *)v15 + 3) != v13 )
      {
        v15 = (int *)*v15;
        if ( !v15 )
          goto LABEL_17;
      }
      v16 = (char *)(v15 + 2);
      if ( *((unsigned __int16 *)v15 + 2) == a2 )
      {
        if ( ((int (__fastcall *)(int *, const void *, size_t))v5[2].chunk_size)(v15 + 2, a1, a2) )
          break;
      }
      ++v5[1].extra_arg;
      v15 = (int *)*v15;
      if ( !v15 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    chunk_limit = v5->chunk_limit;
    v18 = a2 + 8;
    next_free = v5->next_free;
    v20 = (_BYTE)chunk_limit - (_BYTE)next_free;
    if ( a2 + 8 > chunk_limit - next_free )
    {
      obstack_newchunk(v5, a2 + 8);
      next_free = v5->next_free;
      chunk_limit = v5->chunk_limit;
      v18 = a2 + 8;
    }
    v21 = v5->object_base;
    v22 = &next_free[v18];
    alignment_mask = v5->alignment_mask;
    v5->next_free = v22;
    v24 = v22 == v21;
    v16 = v21 + 8;
    if ( v22 == v21 )
      v20 = *((_BYTE *)v5 + 40);
    v25 = (unsigned int)&v22[alignment_mask] & ~alignment_mask;
    v44 = v18;
    v5->next_free = (char *)v25;
    if ( v24 )
      *((_BYTE *)v5 + 40) = v20 | 2;
    if ( v25 - (unsigned int)v5->chunk > chunk_limit - (char *)v5->chunk )
    {
      v25 = (int)chunk_limit;
      v5->next_free = chunk_limit;
    }
    v5->object_base = (char *)v25;
    memcpy(v21 + 8, a1, a2);
    *((_WORD *)v21 + 2) = a2;
    v26 = *((_DWORD *)&v5[1].chunk->limit + v14);
    *((_WORD *)v21 + 3) = v13;
    *(_DWORD *)v21 = v26;
    v27 = v5[1].alignment_mask + v44;
    v28 = (int)(v5[1].object_base + 1);
    v29 = &v5[1].chunk_limit[a2];
    *((_DWORD *)&v5[1].chunk->limit + v14) = v21;
    v5[1].alignment_mask = v27;
    if ( a4 )
      v27 = 1;
    v5[1].object_base = (char *)v28;
    v5[1].chunk_limit = v29;
    if ( a4 )
      a4->chunk_size = v27;
  }
  return v16;
}
