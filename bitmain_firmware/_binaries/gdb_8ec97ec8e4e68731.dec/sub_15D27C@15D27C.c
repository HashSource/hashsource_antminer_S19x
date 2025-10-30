char *__fastcall sub_15D27C(char *a1)
{
  char *next_free; // r3
  char *chunk_limit; // r0
  char *object_base; // r5
  char *v5; // r3
  char *v6; // r3

  next_free = stru_487728.next_free;
  chunk_limit = stru_487728.chunk_limit;
  if ( (char *)(stru_487728.chunk_limit - stru_487728.next_free) < a1 )
  {
    obstack_newchunk(&stru_487728, (int)a1);
    next_free = stru_487728.next_free;
    chunk_limit = stru_487728.chunk_limit;
  }
  object_base = stru_487728.object_base;
  v5 = &a1[(_DWORD)next_free];
  if ( v5 == stru_487728.object_base )
    *((_BYTE *)&stru_487728 + 40) |= 2u;
  v6 = (char *)((unsigned int)&v5[stru_487728.alignment_mask] & ~stru_487728.alignment_mask);
  stru_487728.next_free = v6;
  if ( (char *)(v6 - (char *)stru_487728.chunk) > (char *)(chunk_limit - (char *)stru_487728.chunk) )
  {
    v6 = chunk_limit;
    stru_487728.next_free = chunk_limit;
  }
  stru_487728.object_base = v6;
  memset(object_base, 0, (size_t)a1);
  return object_base;
}
