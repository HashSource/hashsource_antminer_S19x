int __fastcall sub_36284(char *a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r6
  _DWORD *v11; // r5
  bool v12; // zf
  int v13; // r8
  int v14; // r8
  void *v15; // r0
  int v16; // r0
  char **v17; // r4
  int v18; // r0
  const char *v19; // r3
  int v20; // r9
  const char *v21; // t1
  __int64 v22; // r0
  int v23; // r6
  int v25; // r0
  int v26; // r4
  char *next_free; // r3
  unsigned int v28; // r6
  char *v29; // r0
  size_t v30; // r6
  char *object_base; // r1
  char *v32; // r0
  size_t v33; // r4
  int v34; // r0
  const char *v35; // r0
  char *v36; // r0
  char **p_object_base; // r5
  int v38; // r2
  char *v39; // r3
  size_t v40; // r2
  int *v41; // r0
  char *v42; // r1
  char *v43; // r2
  int *v44; // r12
  char *v45; // r3
  int *v46; // lr
  bool v47; // zf
  _BYTE *chunk_size; // r3
  char *v49; // r2
  unsigned __int8 *v50; // r0
  int v51; // r3
  int v52; // t1
  const char *v53; // r0
  char *v54; // r0
  const char *v55; // r0
  int v56; // r4
  char *v57; // r0
  bool v58; // r1
  int v59; // r4
  void *v60; // r0
  int v61; // r0
  int v62; // r3
  const char *v63; // r0
  int v64; // r0
  int v65; // r3
  const char *v66; // r0
  int v67; // [sp+8h] [bp-1A4h]
  __int64 v70; // [sp+20h] [bp-18Ch]
  int v72; // [sp+30h] [bp-17Ch]
  __int64 v73; // [sp+38h] [bp-174h]
  _BYTE c[5]; // [sp+47h] [bp-165h] BYREF
  int v75; // [sp+4Ch] [bp-160h] BYREF
  int v76; // [sp+50h] [bp-15Ch] BYREF
  void *ptr; // [sp+54h] [bp-158h] BYREF
  void *src[2]; // [sp+58h] [bp-154h] BYREF
  char *v79; // [sp+60h] [bp-14Ch] BYREF
  struct _obstack_chunk *chunk; // [sp+64h] [bp-148h]
  _DWORD v81[4]; // [sp+68h] [bp-144h] BYREF
  __int64 v82; // [sp+78h] [bp-134h] BYREF
  _DWORD v83[5]; // [sp+80h] [bp-12Ch] BYREF
  struct obstack v84; // [sp+94h] [bp-118h] BYREF
  struct obstack obstack; // [sp+C0h] [bp-ECh] BYREF
  _DWORD s[33]; // [sp+124h] [bp-88h] BYREF

  if ( !((int (*)(void))loc_16B170)() )
    return 0;
  strcpy((char *)src, "RSDTZW");
  v3 = ps_getpid_0(&dword_4878EC);
  sub_93170(&obstack, 100, "/proc/%d/cmdline", v3);
  v4 = sub_23183C(&ptr, 0, &obstack);
  if ( !ptr )
  {
    v5 = 0;
    goto LABEL_6;
  }
  v5 = *(unsigned __int8 *)ptr;
  if ( !*(_BYTE *)ptr )
  {
    free(ptr);
    goto LABEL_6;
  }
  memset(s, 0, sizeof(s));
  s[4] = v3;
  v35 = (const char *)sub_3245A4(ptr);
  v36 = strncpy((char *)&s[8], v35, 0x11u);
  LOBYTE(s[12]) = 0;
  p_object_base = (char **)sub_17FF1C(v36);
  v79 = (char *)v81;
  if ( ptr )
    v38 = (int)ptr + strlen((const char *)ptr);
  else
    v38 = -1;
  sub_3578C(&v79, ptr, v38);
  v39 = v79;
  if ( p_object_base )
  {
    LODWORD(v82) = v83;
    sub_3578C(&v82, v79, (int)chunk + (_DWORD)v79);
    if ( HIDWORD(v82) == 0x7FFFFFFF )
      sub_33D184("basic_string::append");
    sub_33C320(&v82, &word_3E1F84, 1);
    v40 = strlen((const char *)p_object_base);
    if ( 0x7FFFFFFF - HIDWORD(v82) < v40 )
      sub_33D184("basic_string::append");
    v41 = (int *)sub_33C320(&v82, p_object_base, v40);
    v84.chunk_size = (int)&v84.object_base;
    v44 = v41;
    v46 = v41 + 2;
    v45 = (char *)*v41;
    v47 = *v41 == (_DWORD)(v41 + 2);
    if ( (int *)*v41 == v41 + 2 )
    {
      p_object_base = &v84.object_base;
      v43 = (char *)v41[4];
      v45 = (char *)v41[5];
      v41 = (int *)*v46;
      v42 = (char *)v46[1];
    }
    else
    {
      v84.chunk_size = *v41;
    }
    if ( v47 )
    {
      *p_object_base = (char *)v41;
      p_object_base[1] = v42;
      p_object_base[2] = v43;
      p_object_base[3] = v45;
    }
    else
    {
      v45 = (char *)v44[2];
    }
    if ( !v47 )
      v84.object_base = v45;
    v84.chunk = (struct _obstack_chunk *)v44[1];
    *v44 = (int)v46;
    v44[1] = 0;
    *((_BYTE *)v44 + 8) = 0;
    chunk_size = v79;
    if ( (char **)v84.chunk_size == &v84.object_base )
    {
      sub_33B48C(&v79, &v84);
      chunk_size = (_BYTE *)v84.chunk_size;
      goto LABEL_66;
    }
    if ( v79 == (char *)v81 )
    {
      v79 = (char *)v84.chunk_size;
      chunk = v84.chunk;
      v81[0] = v84.object_base;
    }
    else
    {
      v79 = (char *)v84.chunk_size;
      chunk = v84.chunk;
      v49 = (char *)v81[0];
      v81[0] = v84.object_base;
      if ( chunk_size )
      {
        v84.chunk_size = (int)chunk_size;
        v84.object_base = v49;
LABEL_66:
        v84.chunk = 0;
        *chunk_size = 0;
        if ( (char **)v84.chunk_size != &v84.object_base )
          sub_339E64((void *)v84.chunk_size);
        if ( (_DWORD *)v82 != v83 )
          sub_339E64((void *)v82);
        v39 = v79;
        goto LABEL_71;
      }
    }
    v84.chunk_size = (int)&v84.object_base;
    chunk_size = &v84.object_base;
    goto LABEL_66;
  }
LABEL_71:
  strncpy((char *)&s[12] + 1, v39, 0x51u);
  BYTE1(s[32]) = 0;
  sub_93170(&obstack, 100, "/proc/%d/stat", v3);
  sub_23183C(&v82, 0, &obstack);
  v50 = (unsigned __int8 *)v82;
  if ( (_DWORD)v82 )
  {
    v51 = *(unsigned __int8 *)v82;
    if ( !*(_BYTE *)v82 )
      goto LABEL_73;
    while ( (unsigned int)(v51 - 48) <= 9 )
    {
      v52 = *++v50;
      v51 = v52;
    }
    v53 = (const char *)sub_935D0(v50);
    v54 = strrchr(v53, 41);
    if ( v54 )
    {
      v55 = (const char *)sub_935D0(v54 + 1);
      if ( sscanf(v55, "%c%d%d%d%*d%*d%u%*s%*s%*s%*s%*s%*s%*s%*s%*s%ld", c, &s[5], &s[6], &s[7], &v75, &v76) == 6 )
      {
        v56 = c[0];
        v57 = strchr((const char *)src, c[0]);
        if ( v57 )
        {
          LOBYTE(s[0]) = (_BYTE)v57 - (unsigned __int8)src;
          if ( LOBYTE(s[0]) <= 5u )
          {
            v58 = v56 == 90;
          }
          else
          {
            v58 = 0;
            LOBYTE(v56) = 46;
          }
        }
        else
        {
          LOBYTE(s[0]) = 0;
          v58 = v56 == 90;
        }
        BYTE2(s[0]) = v58;
        HIBYTE(s[0]) = v76;
        BYTE1(s[0]) = v56;
        s[1] = v75;
        sub_93170(&obstack, 100, "/proc/%d/status", v3);
        sub_23183C(&v84, 0, &obstack);
        v59 = v84.chunk_size;
        v60 = (void *)v84.chunk_size;
        if ( v84.chunk_size )
        {
          if ( !*(_BYTE *)v84.chunk_size )
            goto LABEL_104;
          v61 = sub_338BD4(v84.chunk_size, "Uid:");
          if ( v61 )
          {
            v62 = *(unsigned __int8 *)(v61 + 5);
            v63 = (const char *)(v61 + 5);
            *(_DWORD *)&c[1] = v63;
            if ( v62 )
            {
              while ( (unsigned int)(v62 - 48) > 9 )
              {
                *(_DWORD *)&c[1] = ++v63;
                v62 = *(unsigned __int8 *)v63;
                if ( !*v63 )
                  goto LABEL_97;
              }
              s[2] = strtol(v63, (char **)&c[1], 10);
            }
          }
          else
          {
            *(_DWORD *)&c[1] = 0;
          }
LABEL_97:
          v64 = sub_338BD4(v59, "Gid:");
          if ( v64 )
          {
            v65 = *(unsigned __int8 *)(v64 + 5);
            v66 = (const char *)(v64 + 5);
            *(_DWORD *)&c[1] = v66;
            if ( v65 )
            {
              while ( (unsigned int)(v65 - 48) > 9 )
              {
                *(_DWORD *)&c[1] = ++v66;
                v65 = *(unsigned __int8 *)v66;
                if ( !*v66 )
                  goto LABEL_103;
              }
              s[3] = strtol(v66, (char **)&c[1], 10);
            }
          }
          else
          {
            *(_DWORD *)&c[1] = 0;
          }
LABEL_103:
          v60 = (void *)v84.chunk_size;
          if ( v84.chunk_size )
LABEL_104:
            free(v60);
        }
      }
    }
    v50 = (unsigned __int8 *)v82;
    if ( (_DWORD)v82 )
LABEL_73:
      free(v50);
  }
  if ( v79 != (char *)v81 )
    sub_339E64(v79);
  if ( ptr )
    free(ptr);
  if ( ((int (__fastcall *)(char *))loc_1665F4)(a1) == 64 )
    v4 = sub_2DA774(a2, 0, a3, s);
  else
    v4 = sub_2DA59C(a2, 0, a3, s);
  v5 = v4;
LABEL_6:
  v6 = sub_92E28(v4);
  sub_240794();
  v7 = sub_92E40(v6);
  v8 = ((int (__fastcall *)(int))loc_23DBE4)(v7);
  v9 = *(_DWORD *)(v8 + 144);
  v10 = (_DWORD *)v8;
  if ( !v9 )
  {
    v34 = sub_23E4A0(sub_348C0, 0);
    if ( v34 )
    {
      v10 = (_DWORD *)v34;
      v9 = *(_DWORD *)(v34 + 144);
    }
    else
    {
      v9 = v10[36];
    }
  }
  v81[0] = v5;
  v79 = a1;
  chunk = (struct _obstack_chunk *)a2;
  v81[1] = a3;
  v81[2] = v9;
  sub_35EF0(v10, &v79);
  v11 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v10 == v11;
        if ( v10 != v11 )
          v12 = v11[11] == 2;
        if ( !v12 )
        {
          v13 = ps_getpid_0(v11 + 2);
          if ( v13 == ps_getpid_0(&dword_4878EC) )
            break;
        }
        v11 = (_DWORD *)v11[1];
        if ( !v11 )
          goto LABEL_15;
      }
      sub_35EF0(v11, &v79);
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 );
  }
LABEL_15:
  v14 = v81[0];
  if ( !v81[0] )
    return 0;
  v15 = (void *)sub_230574(&dword_4899A0, 7, 0, &ptr);
  if ( (int)v15 > 0 )
  {
    v14 = sub_2DA3B0(a2, v14, a3, (int)"CORE", 6, ptr, (int)v15);
    v15 = ptr;
    if ( ptr )
      free(ptr);
    if ( !v14 )
      return 0;
  }
  v16 = sub_16F654(v15);
  v72 = ((int (__fastcall *)(int))loc_165BB8)(v16);
  v73 = sub_230574(&dword_4899A0, 1, 0, src);
  if ( v73 >= 1 )
  {
    v70 = 0;
    while ( 2 )
    {
      v17 = off_34CE90;
      v18 = sub_15C250((char *)src[0] + v70, 4, v72);
      v19 = "object-id";
      v20 = v18;
      while ( 1 )
      {
        sub_93170(&v84, 32, "%d/%s", v20, v19);
        v22 = sub_230574(&dword_4899A0, 1, &v84, &v82);
        v23 = v22;
        if ( v22 >= 1 )
        {
          sub_93170(&obstack, 32, "SPU/%s", &v84);
          v14 = sub_2DA3B0(a2, v14, a3, (int)&obstack, 1, (void *)v82, v23);
          if ( (_DWORD)v82 )
            free((void *)v82);
          if ( !v14 )
          {
            if ( src[0] )
              free(src[0]);
            return 0;
          }
        }
        if ( &off_34CED4 == v17 )
          break;
        v21 = v17[1];
        ++v17;
        v19 = v21;
      }
      v70 += 4;
      if ( v70 < v73 )
        continue;
      break;
    }
    if ( src[0] )
      free(src[0]);
  }
  v25 = ((int (__fastcall *)(char *))loc_165EE0)(a1);
  v26 = sub_1773C4(a1, v25, 0, "long");
  obstack_begin(&v84, 0, 0, (void *(*)(int))sub_93028, sub_33B50);
  obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, sub_33B50);
  next_free = v84.next_free;
  v28 = *(_DWORD *)(v26 + 20);
  v83[0] = &v84;
  v83[1] = &obstack;
  v83[2] = v26;
  v82 = 0;
  if ( v28 > v84.chunk_limit - v84.next_free )
  {
    obstack_newchunk(&v84, v28);
    next_free = v84.next_free;
  }
  v84.next_free = &next_free[v28];
  sub_26D9E8(src, v26, 1, 0);
  v29 = v84.next_free;
  v30 = *(_DWORD *)(v26 + 20);
  if ( v30 > v84.chunk_limit - v84.next_free )
  {
    obstack_newchunk(&v84, *(_DWORD *)(v26 + 20));
    v29 = v84.next_free;
  }
  memcpy(v29, src, v30);
  v84.next_free += v30;
  sub_34E8C(
    (void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _BOOL4, _BOOL4, _BOOL4, int, char *, int))sub_34A18,
    (int)&v82);
  if ( v82 )
  {
    sub_26D9E8(v84.object_base, v26, v82, HIDWORD(v82));
    object_base = obstack.object_base;
    v32 = v84.next_free;
    v33 = obstack.next_free - obstack.object_base;
    if ( (char *)(obstack.next_free - obstack.object_base) > (char *)(v84.chunk_limit - v84.next_free) )
    {
      obstack_newchunk(&v84, obstack.next_free - obstack.object_base);
      v32 = v84.next_free;
      object_base = obstack.object_base;
    }
    memcpy(v32, object_base, v33);
    v67 = &v84.next_free[v33] - v84.object_base;
    v84.next_free += v33;
    v14 = sub_2DA3B0(a2, v14, a3, (int)"CORE", 1179208773, v84.object_base, v67);
  }
  obstack_free(&obstack, 0);
  obstack_free(&v84, 0);
  return v14;
}
