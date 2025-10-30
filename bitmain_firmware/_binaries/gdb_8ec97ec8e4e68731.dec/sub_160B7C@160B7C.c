char *__fastcall sub_160B7C(struct obstack *a1)
{
  char *chunk_limit; // r1
  char *next_free; // r3
  char v4; // r2
  char *object_base; // r5
  char *v6; // r3
  int alignment_mask; // r0
  bool v8; // zf
  char *v9; // r3
  char *v10; // r0
  char *v11; // r3
  char *v12; // r2
  char *v13; // r3
  int v14; // r12
  bool v15; // zf
  char *v16; // r3
  char *v17; // r12
  char *v18; // r3
  char *v19; // r1
  char *v20; // r3
  int v21; // lr
  bool v22; // zf
  char *v23; // r3
  char *v25; // r3
  _DWORD *v26; // r3

  chunk_limit = a1->chunk_limit;
  next_free = a1->next_free;
  v4 = (_BYTE)chunk_limit - (_BYTE)next_free;
  if ( (unsigned int)(chunk_limit - next_free) <= 7 )
  {
    obstack_newchunk(a1, 8);
    next_free = a1->next_free;
    chunk_limit = a1->chunk_limit;
  }
  object_base = a1->object_base;
  v6 = next_free + 8;
  alignment_mask = a1->alignment_mask;
  a1->next_free = v6;
  v8 = v6 == object_base;
  if ( v6 == object_base )
    v4 = *((_BYTE *)a1 + 40);
  v9 = (char *)((unsigned int)&v6[alignment_mask] & ~alignment_mask);
  a1->next_free = v9;
  if ( v8 )
    *((_BYTE *)a1 + 40) = v4 | 2;
  if ( (char *)(v9 - (char *)a1->chunk) > (char *)(chunk_limit - (char *)a1->chunk) )
  {
    v9 = chunk_limit;
    a1->next_free = chunk_limit;
  }
  a1->object_base = v9;
  *(_DWORD *)object_base = 0;
  *((_DWORD *)object_base + 1) = 0;
  v10 = a1->chunk_limit;
  v11 = a1->next_free;
  if ( (unsigned int)(v10 - v11) <= 7 )
  {
    obstack_newchunk(a1, 8);
    v11 = a1->next_free;
    v10 = a1->chunk_limit;
  }
  v12 = a1->object_base;
  v13 = v11 + 8;
  v14 = a1->alignment_mask;
  a1->next_free = v13;
  v15 = v13 == v12;
  if ( v13 == v12 )
    LOBYTE(chunk_limit) = *((_BYTE *)a1 + 40);
  v16 = (char *)((unsigned int)&v13[v14] & ~v14);
  a1->next_free = v16;
  if ( v15 )
    *((_BYTE *)a1 + 40) = (unsigned __int8)chunk_limit | 2;
  if ( (char *)(v16 - (char *)a1->chunk) > (char *)(v10 - (char *)a1->chunk) )
  {
    v16 = v10;
    a1->next_free = v10;
  }
  a1->object_base = v16;
  *((_DWORD *)v12 + 1) = 0;
  v17 = a1->chunk_limit;
  v18 = a1->next_free;
  *(_DWORD *)object_base = v12;
  *(_DWORD *)v12 = &unk_39BF50;
  if ( (unsigned int)(v17 - v18) <= 7 )
  {
    obstack_newchunk(a1, 8);
    v18 = a1->next_free;
    v17 = a1->chunk_limit;
    v12 = *(char **)object_base;
  }
  v19 = a1->object_base;
  v20 = v18 + 8;
  v21 = a1->alignment_mask;
  a1->next_free = v20;
  v22 = v20 == v19;
  if ( v20 == v19 )
    LOBYTE(v10) = *((_BYTE *)a1 + 40);
  v23 = (char *)((unsigned int)&v20[v21] & ~v21);
  a1->next_free = v23;
  if ( v22 )
    *((_BYTE *)a1 + 40) = (unsigned __int8)v10 | 2;
  if ( (char *)(v23 - (char *)a1->chunk) > (char *)(v17 - (char *)a1->chunk) )
  {
    v23 = v17;
    a1->next_free = v17;
  }
  a1->object_base = v23;
  *(_DWORD *)v19 = 0;
  *((_DWORD *)v19 + 1) = 0;
  v25 = *(char **)object_base;
  *((_DWORD *)v12 + 1) = v19;
  v26 = (_DWORD *)*((_DWORD *)v25 + 1);
  *v26 = &unk_3C05F0;
  *((_DWORD *)object_base + 1) = v26 + 1;
  return object_base;
}
