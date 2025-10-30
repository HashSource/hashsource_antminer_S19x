int __fastcall sub_70984(int a1, int a2, const void *a3, size_t a4, char *a5, int a6)
{
  char *next_free; // r0
  char *v11; // r2
  char v12; // r3
  char *object_base; // r8
  bool v14; // zf
  char *v15; // r0
  char *chunk_limit; // r12
  int v17; // r0
  int result; // r0
  int v19; // r7
  char *v20; // r8
  char *v21; // r0
  int v22; // r10
  unsigned int v23; // r1
  char *v24; // r2
  char v25; // r3
  char *v26; // r8
  bool v27; // zf
  char *v28; // r0
  char *v29; // r12
  void *v30; // r1
  void *v31; // r3
  bool v32; // zf
  const char *v33; // r10
  int v34; // r8
  char *v35; // r0
  const char *v36; // r1
  size_t v37; // r2
  char *v38; // r10
  char *v39; // r2
  int v40; // r3
  int v41; // r1
  int v42; // r0
  int v43; // r10
  int v44; // r0
  int v45; // r1
  const char *v46; // r0
  int v47; // [sp+Ch] [bp-20h]
  void *src; // [sp+10h] [bp-1Ch]
  size_t n; // [sp+14h] [bp-18h]
  int v50; // [sp+18h] [bp-14h] BYREF
  int v51; // [sp+1Ch] [bp-10h]
  char *v52; // [sp+20h] [bp-Ch] BYREF
  void *v53; // [sp+24h] [bp-8h]

  v47 = a2;
  if ( !a6 )
    sub_946E0("Could not find renamed symbol");
  if ( !a2 )
    v47 = sub_20F388(0);
  next_free = stru_474918.next_free;
  if ( a4 + 1 > stru_474918.chunk_limit - stru_474918.next_free )
  {
    obstack_newchunk(&stru_474918, a4 + 1);
    next_free = stru_474918.next_free;
  }
  memcpy(next_free, a3, a4);
  v11 = stru_474918.next_free;
  v12 = LOBYTE(stru_474918.next_free) + a4 + 1;
  stru_474918.next_free += a4 + 1;
  v11[a4] = 0;
  object_base = stru_474918.object_base;
  v14 = stru_474918.next_free == stru_474918.object_base;
  v15 = stru_474918.object_base;
  if ( stru_474918.next_free == stru_474918.object_base )
    v12 = *((_BYTE *)&stru_474918 + 40);
  chunk_limit = (char *)((int)&stru_474918.next_free[stru_474918.alignment_mask] & ~stru_474918.alignment_mask);
  stru_474918.next_free = chunk_limit;
  if ( v14 )
    *((_BYTE *)&stru_474918 + 40) = v12 | 2;
  if ( (char *)(chunk_limit - (char *)stru_474918.chunk) > (char *)(stru_474918.chunk_limit - (char *)stru_474918.chunk) )
  {
    chunk_limit = stru_474918.chunk_limit;
    stru_474918.next_free = stru_474918.chunk_limit;
  }
  stru_474918.object_base = chunk_limit;
  sub_A5654(v15, v47, 1, &v50);
  if ( !v50 )
  {
    v46 = (const char *)sub_9EB80(object_base);
    sub_946E0("Could not find renamed variable: %s", v46);
  }
  if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v50 + 32) >> 3)) == 8 )
    v51 = v47;
  v17 = sub_9FE30();
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_55;
    result = sub_70984(a1, v51, src, n, v52, a6 - 1);
  }
  else
  {
    result = sub_70758(a1, v51, v50);
  }
LABEL_18:
  v19 = 0;
  while ( *a5 == 88 )
  {
LABEL_20:
    switch ( a5[1] )
    {
      case 'A':
        a5 += 2;
        result = sub_1C37BC(a1, 61);
        continue;
      case 'L':
        v19 = 1;
        goto LABEL_22;
      case 'R':
        v33 = a5 + 2;
        if ( v19 )
          goto LABEL_55;
        a5 = strchr(a5 + 2, 88);
        if ( !a5 )
          a5 = (char *)&v33[strlen(v33)];
        v34 = a5 - v33;
        v53 = (void *)(a5 - v33);
        v35 = (char *)sub_93028(a5 - v33 + 1);
        v36 = v33;
        v37 = a5 - v33;
        v38 = v35;
        v52 = v35;
        strncpy(v35, v36, v37);
        v39 = v52;
        v40 = (int)v53;
        v38[v34] = 0;
        result = sub_70948(a1, 81, (int)v39, v40);
        if ( *a5 != 88 )
          goto LABEL_47;
        goto LABEL_20;
      case 'S':
LABEL_22:
        v20 = a5 + 2;
        if ( (unsigned int)(unsigned __int8)a5[2] - 48 <= 9 )
        {
          v42 = strtol(a5 + 2, &v52, 10);
          a5 = v52;
          v43 = v42;
          if ( v20 == v52 )
            goto LABEL_55;
          sub_1C37BC(a1, 38);
          v44 = sub_1780B4(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
          sub_1C38F4(a1, *(_DWORD *)(v44 + 12));
          sub_1C3898(a1, v45, v43, v43 >> 31);
          result = sub_1C37BC(a1, 38);
        }
        else
        {
          a5 = strchr(a5 + 2, 88);
          if ( !a5 )
            a5 = &v20[strlen(v20)];
          v21 = stru_474918.next_free;
          v22 = a5 - v20;
          v23 = a5 - v20 + 1;
          if ( v23 > stru_474918.chunk_limit - stru_474918.next_free )
          {
            obstack_newchunk(&stru_474918, v23);
            v21 = stru_474918.next_free;
          }
          memcpy(v21, v20, a5 - v20);
          v24 = stru_474918.next_free;
          stru_474918.next_free += v22 + 1;
          v25 = 0;
          v24[v22] = 0;
          v26 = stru_474918.object_base;
          v27 = stru_474918.next_free == stru_474918.object_base;
          v28 = stru_474918.object_base;
          if ( stru_474918.next_free == stru_474918.object_base )
            v25 = *((_BYTE *)&stru_474918 + 40);
          v29 = (char *)((int)&stru_474918.next_free[stru_474918.alignment_mask] & ~stru_474918.alignment_mask);
          stru_474918.next_free = v29;
          if ( v27 )
            *((_BYTE *)&stru_474918 + 40) = v25 | 2;
          if ( (char *)(v29 - (char *)stru_474918.chunk) > (char *)(stru_474918.chunk_limit - (char *)stru_474918.chunk) )
          {
            v29 = stru_474918.chunk_limit;
            stru_474918.next_free = stru_474918.chunk_limit;
          }
          stru_474918.object_base = v29;
          sub_A5654(v28, 0, 1, &v52);
          if ( !v52 )
            sub_946E0("Could not find %s", v26);
          v30 = off_46DBB8;
          v31 = (void *)*((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v52[32] >> 3));
          v32 = v31 == (void *)8;
          if ( v31 == (void *)8 )
            v31 = (void *)v47;
          else
            v30 = v53;
          if ( v32 )
          {
            v30 = v31;
            v53 = v31;
          }
          result = sub_70758(a1, (int)v30, (int)v52);
        }
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            result = sub_1C37BC(a1, 36);
            goto LABEL_18;
          }
          v19 = 2;
        }
        else
        {
          sub_1C37BC(a1, 46);
          sub_1C3898(a1, v41, 1, 0);
          result = sub_1C37BC(a1, 46);
        }
        break;
      default:
        goto LABEL_55;
    }
  }
LABEL_47:
  if ( v19 )
LABEL_55:
    sub_946E0("Internal error in encoding of renaming declaration");
  return result;
}
