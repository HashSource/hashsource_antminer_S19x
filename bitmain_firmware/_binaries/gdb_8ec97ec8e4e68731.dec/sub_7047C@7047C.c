char **__fastcall sub_7047C(char **a1, char *src, signed int n)
{
  unsigned int v3; // r9
  signed int v4; // r4
  char *chunk_limit; // r12
  char *next_free; // r3
  char v9; // r2
  char *object_base; // r6
  char *v11; // r3
  int alignment_mask; // r1
  bool v13; // zf
  char *v14; // r3
  char *v15; // r5
  int v16; // t1
  int v17; // r5
  int v18; // r9
  signed int i; // r11
  signed int v21; // r10
  int v22; // r0
  signed int v23; // r2
  char *v24; // r0
  int v25; // t1
  char *v26; // r3

  v3 = n + 11;
  v4 = n;
  chunk_limit = stru_474918.chunk_limit;
  next_free = stru_474918.next_free;
  v9 = LOBYTE(stru_474918.chunk_limit) - LOBYTE(stru_474918.next_free);
  if ( v3 > stru_474918.chunk_limit - stru_474918.next_free )
  {
    obstack_newchunk(&stru_474918, v3);
    next_free = stru_474918.next_free;
    chunk_limit = stru_474918.chunk_limit;
  }
  object_base = stru_474918.object_base;
  v11 = &next_free[v3];
  alignment_mask = stru_474918.alignment_mask;
  v13 = v11 == stru_474918.object_base;
  *a1 = stru_474918.object_base;
  if ( v11 == object_base )
    v9 = *((_BYTE *)&stru_474918 + 40);
  v14 = (char *)((unsigned int)&v11[alignment_mask] & ~alignment_mask);
  stru_474918.next_free = v14;
  if ( v13 )
    *((_BYTE *)&stru_474918 + 40) = v9 | 2;
  if ( (char *)(v14 - (char *)stru_474918.chunk) > (char *)(chunk_limit - (char *)stru_474918.chunk) )
  {
    v14 = chunk_limit;
    stru_474918.next_free = chunk_limit;
  }
  stru_474918.object_base = v14;
  if ( v4 > 0 )
  {
    v15 = &src[v4];
    do
    {
      v16 = (unsigned __int8)*--v15;
      if ( !isspace(v16) )
        break;
      --v4;
    }
    while ( v4 );
  }
  v17 = (unsigned __int8)*src;
  if ( v17 == 60 || (v18 = sub_338BD4(src, "___")) != 0 )
  {
    strncpy(object_base, src, v4);
    a1[1] = (char *)v4;
    object_base[v4] = 0;
    return a1;
  }
  if ( v4 > 0 )
  {
    for ( i = 0; ; i = v21 )
    {
      v21 = i + 1;
      v22 = isalnum(v17);
      v23 = i + 1;
      v26 = &object_base[v18];
      if ( v22 )
        break;
      switch ( v17 )
      {
        case 32:
          goto LABEL_20;
        case 39:
          v24 = &src[i];
          while ( 1 )
          {
            *v26 = v17;
            v18 = ++v26 - object_base;
            if ( v23 >= v4 )
              break;
            v25 = (unsigned __int8)*++v24;
            LOBYTE(v17) = v25;
            if ( v25 == 39 )
              break;
            i = v23++;
          }
          v21 = i + 2;
LABEL_20:
          if ( v21 >= v4 )
            goto LABEL_27;
          goto LABEL_21;
        case 9:
          goto LABEL_20;
      }
      ++v18;
      *v26 = v17;
      v26 = &object_base[v18];
      if ( v21 >= v4 )
        goto LABEL_27;
LABEL_21:
      v17 = (unsigned __int8)src[v21];
    }
    object_base[v18++] = tolower(v17);
    v26 = &object_base[v18];
    goto LABEL_20;
  }
  v26 = object_base;
LABEL_27:
  a1[1] = (char *)v18;
  *v26 = 0;
  return a1;
}
