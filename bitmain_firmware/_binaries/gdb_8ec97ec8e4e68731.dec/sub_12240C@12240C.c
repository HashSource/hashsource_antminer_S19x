char *__fastcall sub_12240C(struct obstack *a1, int a2, unsigned int a3, int a4, int a5, int a6, unsigned int *a7)
{
  char *next_free; // r3
  char *chunk_limit; // r2
  struct obstack *v11; // r6
  unsigned int v12; // r1
  char *object_base; // r8
  char *v14; // r3
  int alignment_mask; // r12
  bool v16; // zf
  int v17; // r3

  next_free = a1->next_free;
  chunk_limit = a1->chunk_limit;
  v11 = a1;
  v12 = a3;
  *a7 = a3;
  a7[1] = 0;
  if ( chunk_limit - next_free < a3 )
  {
    obstack_newchunk(a1, a3);
    v12 = *a7;
    next_free = v11->next_free;
    chunk_limit = v11->chunk_limit;
  }
  object_base = v11->object_base;
  v14 = &next_free[a3];
  alignment_mask = v11->alignment_mask;
  v11->next_free = v14;
  v16 = v14 == object_base;
  if ( v14 == object_base )
    LOBYTE(a1) = *((_BYTE *)v11 + 40);
  v17 = (unsigned int)&v14[alignment_mask] & ~alignment_mask;
  v11->next_free = (char *)v17;
  if ( v16 )
    *((_BYTE *)v11 + 40) = (unsigned __int8)a1 | 2;
  if ( v17 - (unsigned int)v11->chunk > chunk_limit - (char *)v11->chunk )
  {
    v17 = (int)chunk_limit;
    v11->next_free = chunk_limit;
  }
  v11->object_base = (char *)v17;
  sub_15C34C(object_base, v12, a2, v17, a5, a6);
  return object_base;
}
