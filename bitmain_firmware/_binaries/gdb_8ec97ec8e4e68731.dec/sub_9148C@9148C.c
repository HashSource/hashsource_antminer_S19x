struct obstack *__fastcall sub_9148C(struct obstack *obstack)
{
  char *chunk_limit; // r4
  char *tempint; // r6
  void **v4; // r5
  void **v5; // t1
  struct _obstack_chunk *chunk; // r4
  struct _obstack_chunk *object_base; // r6
  void **v8; // r5
  char *limit; // t1

  chunk_limit = obstack[1].chunk_limit;
  tempint = (char *)obstack[1].temp.tempint;
  dword_4751A0 = 0;
  dword_4751A4 = 0;
  if ( chunk_limit != tempint )
  {
    do
    {
      v5 = *(void ***)chunk_limit;
      chunk_limit += 4;
      v4 = v5;
      if ( v5 )
      {
        if ( *v4 )
          sub_339E64(*v4);
        sub_33AC04(v4);
      }
    }
    while ( tempint != chunk_limit );
    tempint = obstack[1].chunk_limit;
  }
  if ( tempint )
    sub_339E64(tempint);
  chunk = obstack[1].chunk;
  object_base = (struct _obstack_chunk *)obstack[1].object_base;
  if ( chunk != object_base )
  {
    do
    {
      limit = chunk->limit;
      chunk = (struct _obstack_chunk *)((char *)chunk + 4);
      v8 = (void **)limit;
      if ( limit )
      {
        if ( *v8 )
          sub_339E64(*v8);
        sub_33AC04(v8);
      }
    }
    while ( object_base != chunk );
    object_base = obstack[1].chunk;
  }
  if ( object_base )
    sub_339E64(object_base);
  obstack_free(obstack, 0);
  return obstack;
}
