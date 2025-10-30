char *__fastcall sub_1B38F0(
        char **a1,
        const char *a2,
        char *s,
        const char *a4,
        char *s1,
        const void **a6,
        int a7,
        struct obstack *a8)
{
  char *v10; // r4
  struct obstack *v11; // r6
  unsigned int v12; // r7
  char *result; // r0
  char *v15; // r5
  const char *v16; // r1
  const char *v17; // r1
  const char *v18; // r1
  char *v19; // r6
  char *v20; // r11
  const char *v21; // t1
  const char *v22; // t1
  __int64 v23; // r2
  unsigned int v24; // r7
  char *object_base; // r4
  char *v26; // r7
  int alignment_mask; // r1
  bool v28; // zf
  int v29; // r7
  bool v30; // zf
  char *v31; // r2
  size_t v32; // r5
  char *next_free; // r0
  char *v34; // r2
  int v35; // r3
  char *v36; // r1
  char *v37; // r2
  char *chunk_limit; // r8
  char *v39; // r7
  size_t v40; // r0
  int v41; // r1
  size_t v42; // r5
  char *v43; // r2
  int v44; // r3
  char *v45; // r2
  char *v46; // r1
  char *v47; // r8
  char *v48; // r5
  size_t v49; // r0
  size_t v50; // r7
  char *v51; // r2
  char *v52; // r3
  char *v53; // r1
  char *v54; // r0
  bool v55; // zf
  int v56; // r3
  size_t v57; // r5
  char *v58; // r0
  char *v59; // r2
  char *v60; // r3
  char *v61; // r1
  char *v62; // r0
  bool v63; // zf
  int v64; // r3
  char *v65; // [sp+4h] [bp-10h]

  v10 = *a1;
  v65 = (char *)*a6;
  v11 = a8;
  v12 = ((_BYTE *)a6[1] - (_BYTE *)*a6) >> 2;
  if ( *a1 )
  {
    while ( 1 )
    {
      if ( strcmp(*(const char **)v10, s) )
        goto LABEL_19;
      result = (char *)strcmp(*((const char **)v10 + 1), a2);
      v15 = result;
      if ( result )
        goto LABEL_19;
      v16 = (const char *)*((_DWORD *)v10 + 2);
      if ( a4 )
      {
        if ( !v16 )
          goto LABEL_19;
        result = (char *)strcmp(a4, v16);
        if ( result )
          goto LABEL_19;
LABEL_7:
        v17 = (const char *)*((_DWORD *)v10 + 3);
        if ( s1 )
        {
          if ( !v17 )
            goto LABEL_19;
          result = (char *)strcmp(s1, v17);
          if ( result )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( v17 )
        {
          v10 = (char *)*((_DWORD *)v10 + 4);
          if ( !v10 )
          {
LABEL_20:
            v11 = a8;
            break;
          }
        }
        else
        {
LABEL_10:
          v18 = (const char *)*((_DWORD *)v10 + 6);
          if ( !v12 )
            goto LABEL_18;
          if ( v18 )
          {
            v19 = v10 + 24;
            v20 = v65 - 4;
            while ( 1 )
            {
              v22 = (const char *)*((_DWORD *)v20 + 1);
              v20 += 4;
              result = (char *)strcmp(v22, v18);
              if ( result )
                break;
              ++v15;
              v21 = (const char *)*((_DWORD *)v19 + 1);
              v19 += 4;
              v18 = v21;
              if ( v15 == (char *)v12 )
                goto LABEL_18;
              if ( !v18 )
                goto LABEL_19;
            }
            if ( (unsigned int)v15 >= v12 )
            {
              v18 = *(const char **)&v10[4 * (_DWORD)(v15 + 6)];
LABEL_18:
              if ( !v18 )
                return result;
            }
          }
LABEL_19:
          v10 = (char *)*((_DWORD *)v10 + 4);
          if ( !v10 )
            goto LABEL_20;
        }
      }
      else
      {
        if ( !v16 )
          goto LABEL_7;
        v10 = (char *)*((_DWORD *)v10 + 4);
        if ( !v10 )
          goto LABEL_20;
      }
    }
  }
  v23 = *(_QWORD *)&v11->next_free;
  v24 = 4 * (v12 + 7);
  if ( v24 > HIDWORD(v23) - (int)v23 )
  {
    obstack_newchunk(v11, v24);
    v23 = *(_QWORD *)&v11->next_free;
  }
  object_base = v11->object_base;
  v26 = (char *)(v23 + v24);
  alignment_mask = v11->alignment_mask;
  v11->next_free = v26;
  v28 = v26 == object_base;
  if ( v26 == object_base )
    LOBYTE(v23) = *((_BYTE *)v11 + 40);
  v29 = (unsigned int)&v26[alignment_mask] & ~alignment_mask;
  v11->next_free = (char *)v29;
  if ( v28 )
    *((_BYTE *)v11 + 40) = v23 | 2;
  if ( v29 - (unsigned int)v11->chunk > HIDWORD(v23) - (unsigned int)v11->chunk )
  {
    v11->next_free = (char *)HIDWORD(v23);
    v29 = HIDWORD(v23);
  }
  v11->object_base = (char *)v29;
  *(_DWORD *)object_base = 0;
  *((_DWORD *)object_base + 1) = 0;
  *((_DWORD *)object_base + 2) = 0;
  *((_DWORD *)object_base + 3) = 0;
  *((_DWORD *)object_base + 4) = 0;
  *((_DWORD *)object_base + 5) = 0;
  *((_DWORD *)object_base + 6) = 0;
  if ( !a7 )
  {
    *(_DWORD *)object_base = s;
    *((_DWORD *)object_base + 1) = a2;
    goto LABEL_31;
  }
  v32 = strlen(s);
  next_free = v11->next_free;
  if ( v32 + 1 > v11->chunk_limit - next_free )
  {
    obstack_newchunk(v11, v32 + 1);
    next_free = v11->next_free;
  }
  memcpy(next_free, s, v32);
  v34 = v11->next_free;
  v35 = (int)&v34[v32 + 1];
  v11->next_free = (char *)v35;
  v34[v32] = 0;
  v36 = v11->next_free;
  v37 = v11->object_base;
  chunk_limit = v11->chunk_limit;
  if ( v36 == v37 )
    LOBYTE(v35) = *((_BYTE *)v11 + 40);
  v39 = (char *)((unsigned int)&v36[v11->alignment_mask] & ~v11->alignment_mask);
  v11->next_free = v39;
  if ( v36 == v37 )
    *((_BYTE *)v11 + 40) = v35 | 2;
  if ( (char *)(v39 - (char *)v11->chunk) > (char *)(chunk_limit - (char *)v11->chunk) )
  {
    v11->next_free = chunk_limit;
    v11->object_base = chunk_limit;
    *(_DWORD *)object_base = v37;
    v42 = strlen(a2);
    v41 = v42 + 1;
  }
  else
  {
    v11->object_base = v39;
    *(_DWORD *)object_base = v37;
    v40 = strlen(a2);
    v41 = v40 + 1;
    v42 = v40;
    if ( v40 + 1 <= chunk_limit - v39 )
      goto LABEL_53;
  }
  obstack_newchunk(v11, v41);
  v39 = v11->next_free;
LABEL_53:
  memcpy(v39, a2, v42);
  v43 = v11->next_free;
  v44 = (int)&v43[v42 + 1];
  v11->next_free = (char *)v44;
  v43[v42] = 0;
  v45 = v11->next_free;
  v46 = v11->object_base;
  v47 = v11->chunk_limit;
  if ( v45 == v46 )
    LOBYTE(v44) = *((_BYTE *)v11 + 40);
  v48 = (char *)((unsigned int)&v45[v11->alignment_mask] & ~v11->alignment_mask);
  v11->next_free = v48;
  if ( v45 == v46 )
    *((_BYTE *)v11 + 40) = v44 | 2;
  if ( (char *)(v48 - (char *)v11->chunk) > (char *)(v47 - (char *)v11->chunk) )
  {
    v48 = v47;
    v11->next_free = v47;
  }
  v11->object_base = v48;
  *((_DWORD *)object_base + 1) = v46;
  if ( a4 )
  {
    v49 = strlen(a4);
    v50 = v49;
    if ( v49 + 1 > v47 - v48 )
    {
      obstack_newchunk(v11, v49 + 1);
      v48 = v11->next_free;
    }
    memcpy(v48, a4, v50);
    v51 = v11->next_free;
    v11->next_free = &v51[v50 + 1];
    v51[v50] = 0;
    v52 = v11->next_free;
    v53 = v11->object_base;
    v54 = v11->chunk_limit;
    v55 = v52 == v53;
    if ( v52 == v53 )
      LOBYTE(v51) = *((_BYTE *)v11 + 40);
    v56 = (unsigned int)&v52[v11->alignment_mask] & ~v11->alignment_mask;
    v11->next_free = (char *)v56;
    if ( v55 )
      *((_BYTE *)v11 + 40) = (unsigned __int8)v51 | 2;
    if ( v56 - (unsigned int)v11->chunk > v54 - (char *)v11->chunk )
    {
      v56 = (int)v54;
      v11->next_free = v54;
    }
    v11->object_base = (char *)v56;
    *((_DWORD *)object_base + 2) = v53;
    goto LABEL_32;
  }
LABEL_31:
  *((_DWORD *)object_base + 2) = a4;
LABEL_32:
  v30 = a7 == 0;
  if ( a7 )
    v30 = s1 == 0;
  if ( v30 )
  {
    *((_DWORD *)object_base + 3) = s1;
  }
  else
  {
    v57 = strlen(s1);
    v58 = v11->next_free;
    if ( v57 + 1 > v11->chunk_limit - v58 )
    {
      obstack_newchunk(v11, v57 + 1);
      v58 = v11->next_free;
    }
    memcpy(v58, s1, v57);
    v59 = v11->next_free;
    v11->next_free = &v59[v57 + 1];
    v59[v57] = 0;
    v60 = v11->next_free;
    v61 = v11->object_base;
    v62 = v11->chunk_limit;
    v63 = v60 == v61;
    if ( v60 == v61 )
      LOBYTE(v59) = *((_BYTE *)v11 + 40);
    v64 = (unsigned int)&v60[v11->alignment_mask] & ~v11->alignment_mask;
    v11->next_free = (char *)v64;
    if ( v63 )
      *((_BYTE *)v11 + 40) = (unsigned __int8)v59 | 2;
    if ( v64 - (unsigned int)v11->chunk > v62 - (char *)v11->chunk )
    {
      v64 = (int)v62;
      v11->next_free = v62;
    }
    v11->object_base = (char *)v64;
    *((_DWORD *)object_base + 3) = v61;
  }
  memcpy(object_base + 24, *a6, (_BYTE *)a6[1] - (_BYTE *)*a6);
  result = (char *)*a6;
  v31 = *a1;
  *(_DWORD *)&object_base[4 * (((_BYTE *)a6[1] - (_BYTE *)*a6) >> 2) + 24] = 0;
  *((_DWORD *)object_base + 4) = v31;
  *a1 = object_base;
  return result;
}
