struct obstack *__fastcall sub_16F74C(struct obstack *result, struct obstack *a2)
{
  int v2; // r4
  char *chunk_limit; // lr
  struct obstack **v4; // r5
  int *next_free; // r12
  struct obstack *v6; // r3
  struct _obstack_chunk *chunk; // r0
  char *object_base; // r1
  char *v9; // r2
  struct _obstack_chunk *(*chunkfun)(void *, int); // r2
  int tempint; // r0
  int alignment_mask; // r1
  _DWORD *v13; // r6
  int v14; // r2
  int v15; // r12
  bool v16; // zf
  struct obstack *v17; // r3
  char **p_object_base; // r3
  char *v19; // r0
  char *v20; // r1
  char *v21; // r2
  char *v22; // r3
  struct obstack *v23; // [sp+4h] [bp-8h] BYREF

  if ( !a2 )
    result = 0;
  v23 = a2;
  if ( a2 )
  {
    v2 = (int)result;
    chunk_limit = result->chunk_limit;
    v4 = &v23;
    next_free = (int *)result->next_free;
    do
    {
      if ( (unsigned int)(chunk_limit - (char *)next_free) <= 0x1F )
      {
        obstack_newchunk((struct obstack *)v2, 32);
        next_free = *(int **)(v2 + 12);
      }
      v6 = *v4;
      chunk = (*v4)->chunk;
      object_base = (*v4)->object_base;
      v9 = (*v4)->next_free;
      *next_free = (*v4)->chunk_size;
      next_free[1] = (int)chunk;
      next_free[2] = (int)object_base;
      next_free[3] = (int)v9;
      chunkfun = v6->chunkfun;
      tempint = v6->temp.tempint;
      alignment_mask = v6->alignment_mask;
      next_free[4] = (int)v6->chunk_limit;
      next_free[5] = tempint;
      next_free[6] = alignment_mask;
      next_free[7] = (int)chunkfun;
      v13 = *(_DWORD **)(v2 + 8);
      v14 = *(_DWORD *)(v2 + 24);
      v15 = *(_DWORD *)(v2 + 12) + 32;
      chunk_limit = *(char **)(v2 + 16);
      v16 = v15 == (_DWORD)v13;
      *(_DWORD *)(v2 + 12) = v15;
      if ( (_DWORD *)v15 == v13 )
        LOBYTE(v6) = *(_BYTE *)(v2 + 40);
      next_free = (int *)((v15 + v14) & ~v14);
      *(_DWORD *)(v2 + 12) = next_free;
      if ( v16 )
        *(_BYTE *)(v2 + 40) = (unsigned __int8)v6 | 2;
      v17 = *v4;
      if ( (char *)next_free - *(_DWORD *)(v2 + 4) > &chunk_limit[-*(_DWORD *)(v2 + 4)] )
      {
        next_free = (int *)chunk_limit;
        *(_DWORD *)(v2 + 12) = chunk_limit;
      }
      *(_DWORD *)(v2 + 8) = next_free;
      p_object_base = &v17->object_base;
      v19 = *p_object_base;
      v20 = p_object_base[1];
      v21 = p_object_base[2];
      v22 = p_object_base[3];
      v13[2] = v19;
      v13[3] = v20;
      v13[4] = v21;
      v13[5] = v22;
      *v4 = (struct obstack *)v13;
      v4 = (struct obstack **)(v13 + 6);
    }
    while ( v13[6] );
    return v23;
  }
  return result;
}
