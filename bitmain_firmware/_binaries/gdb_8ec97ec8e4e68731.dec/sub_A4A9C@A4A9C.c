int __fastcall sub_A4A9C(int a1, int a2, char *a3, char ***a4, int a5)
{
  char *object_base; // r6
  char *next_free; // r9
  size_t v11; // r7
  unsigned int v12; // r5
  char **v13; // r0
  char v14; // r3
  char **v15; // r4
  int v16; // r8
  char *chunk_limit; // r3
  __int64 v18; // r0
  int v19; // r5
  char *v20; // r6
  int v21; // r7
  const char *v22; // r9
  int v23; // r2
  int v24; // r10
  int v25; // r6
  char *v26; // r3
  char *v27; // lr
  char **v28; // r3
  char *v29; // t1
  char *v30; // r5
  char **v31; // r6
  char **v32; // r12
  char *v33; // r3
  int v34; // r9
  int v35; // r2
  char *v36; // r3
  int v37; // r7
  int v38; // r6
  int v39; // r3
  int v40; // r12
  _QWORD *v41; // r4
  __int64 *v42; // r5
  int v43; // lr
  int v44; // r10
  int v45; // r10
  int v46; // r11
  int v47; // r8
  char *v48; // r4
  const char *v49; // r5
  int v50; // r10
  int v51; // r5
  char *v52; // r3
  const char *v53; // r6
  size_t v54; // r7
  int v55; // r11
  char *v56; // r10
  const char **v57; // r3
  int v58; // r3
  char **v59; // r2
  bool v60; // zf
  int v62; // r10
  int v63; // r7
  char *v64; // r11
  char **v65; // r3
  const char **v66; // r0
  const char *v67; // r10
  int v68; // r5
  int *v69; // r6
  const char *v70; // r9
  const char *v71; // r0
  const char *v72; // r3
  const char *v73; // r9
  size_t v74; // r0
  int v75; // r9
  int v76; // r1
  int v77; // r3
  char *v78; // r0
  int v79; // r3
  int v80; // r3
  char *sa; // [sp+8h] [bp-64h]
  char *sb; // [sp+8h] [bp-64h]
  char **v84; // [sp+Ch] [bp-60h]
  size_t nb; // [sp+10h] [bp-5Ch]
  void *na; // [sp+10h] [bp-5Ch]
  int v88; // [sp+14h] [bp-58h]
  char **v91; // [sp+20h] [bp-4Ch]
  int v92; // [sp+20h] [bp-4Ch]
  _DWORD *v93; // [sp+28h] [bp-44h]
  int v94; // [sp+30h] [bp-3Ch] BYREF
  size_t v95; // [sp+34h] [bp-38h] BYREF
  size_t v96; // [sp+38h] [bp-34h] BYREF
  struct obstack obstack; // [sp+3Ch] [bp-30h] BYREF

  obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, sub_9AD58);
  sub_A48FC((int)&obstack, a2, a1, (int)a3, a5, &v94);
  object_base = obstack.object_base;
  next_free = obstack.next_free;
  v11 = obstack.next_free - obstack.object_base;
  v12 = (unsigned int)(obstack.next_free - obstack.object_base) >> 3;
  v13 = (char **)malloc(obstack.next_free - obstack.object_base);
  *a4 = v13;
  if ( object_base == next_free )
    v14 = *((_BYTE *)&obstack + 40);
  v15 = v13;
  v16 = v12;
  if ( object_base == next_free )
    *((_BYTE *)&obstack + 40) = v14 | 2;
  chunk_limit = (char *)((unsigned int)&next_free[obstack.alignment_mask] & ~obstack.alignment_mask);
  obstack.next_free = chunk_limit;
  if ( (char *)(chunk_limit - (char *)obstack.chunk) > (char *)(obstack.chunk_limit - (char *)obstack.chunk) )
  {
    chunk_limit = obstack.chunk_limit;
    obstack.next_free = obstack.chunk_limit;
  }
  obstack.object_base = chunk_limit;
  LODWORD(v18) = memcpy(v13, object_base, v11);
  v88 = a5 & 1;
  if ( v12 <= 1 )
  {
    v79 = a5 & 1;
    if ( v12 )
      v79 = 0;
    if ( v79 )
    {
      v16 = v94;
      if ( !v94 )
      {
        v15 = *a4;
LABEL_87:
        if ( !a2 )
          goto LABEL_67;
        v66 = (const char **)sub_C23B0(a2);
        if ( !v66 )
          goto LABEL_67;
        v67 = *v66;
        if ( !*v66 || !v16 )
          goto LABEL_67;
        v68 = 0;
        while ( 1 )
        {
          v69 = (int *)&v15[2 * v68];
          if ( sub_9FE30(*v69, 0, 0, 0) == 1
            && *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*v69 + 32) >> 3)) == 8 )
          {
            v70 = (const char *)sub_170CC4(*(_DWORD *)(*v69 + 24));
            v71 = (const char *)(sub_338BD4(v70, "___XR") - 3);
            if ( v70 < v71 )
            {
              v72 = v71;
              do
              {
                v71 = v72--;
                if ( *v71 == 95 && v72[2] == 95 )
                  break;
                v71 = v72;
              }
              while ( v70 != v72 );
            }
            nb = v71 - v70;
            sb = (char *)sub_93028(v71 - v70 + 1);
            strncpy(sb, v70, nb);
            sb[nb] = 0;
            na = sub_9253C((int)sub_9AD58, (int)sb);
            if ( sub_9D190(sb, 0, (char *)1)
              || sub_338BD4(sb, &dword_3C439C)
              || (v78 = sub_93140("_ada_%s", sb), sub_9D190(v78, 0, (char *)1)) )
            {
              if ( !strncmp(v67, "_ada_", 5u) )
                v73 = v67 + 5;
              else
                v73 = v67;
              v74 = strlen(sb);
              v75 = strncmp(v73, sb, v74);
              sub_92620(na);
              if ( v75 )
              {
                if ( v68 + 1 < v16 )
                {
                  do
                  {
                    v76 = v69[3];
                    v60 = v69 + 2 == (int *)&v15[2 * v16 - 2];
                    *v69 = v69[2];
                    v69[1] = v76;
                    v69 += 2;
                  }
                  while ( !v60 );
                }
                --v16;
              }
              else
              {
                ++v68;
              }
              goto LABEL_93;
            }
            sub_92620(na);
          }
          ++v68;
LABEL_93:
          if ( v16 <= v68 )
            goto LABEL_67;
        }
      }
      if ( !*(_BYTE *)(a1 + 60) )
      {
        sub_A3C94(a1 + 32, a1);
        *(_BYTE *)(a1 + 60) = 1;
      }
      LODWORD(v18) = sub_9AF2C(*(const char **)(a1 + 32), a3, 0, 0);
      v16 = 0;
LABEL_120:
      v15 = *a4;
      if ( v16 )
        goto LABEL_47;
      goto LABEL_87;
    }
    if ( v12 == 1 )
      v80 = a5 & 1;
    else
      v80 = 0;
    if ( !v80 )
      goto LABEL_120;
    goto LABEL_116;
  }
  v19 = 0;
  v91 = v15 - 2;
  do
  {
    v20 = v15[2 * v19];
    v21 = v19 + 1;
    v22 = *(const char **)v20;
    v23 = *(_DWORD *)(*((_DWORD *)v20 + 6) + 24);
    if ( (*(_BYTE *)(v23 + 1) & 4) != 0 )
    {
      if ( v22 )
      {
        v24 = 0;
        v25 = 0;
        do
        {
          if ( v19 != v25 )
          {
            v26 = v15[2 * v25];
            if ( (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)v26 + 6) + 24) + 1) & 4) == 0 )
            {
              HIDWORD(v18) = *(_DWORD *)v26;
              if ( *(_DWORD *)v26 )
              {
                LODWORD(v18) = strcmp(v22, (const char *)HIDWORD(v18));
                if ( !(_DWORD)v18 )
                  v24 = 1;
              }
            }
          }
          ++v25;
        }
        while ( v25 < v16 );
        if ( v24 )
          goto LABEL_81;
      }
    }
    else if ( v22 )
    {
      HIDWORD(v18) = *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v20[32] >> 3));
      if ( HIDWORD(v18) == 2 )
      {
        LODWORD(v18) = *(_DWORD *)(v23 + 8);
        if ( (_DWORD)v18 || (LODWORD(v18) = *(_DWORD *)(v23 + 12), (_DWORD)v18) )
        {
          v93 = off_46DBB8;
          LODWORD(v18) = strcmp((const char *)v18, "<variable, no debug info>");
          v62 = v18;
          if ( !(_DWORD)v18 )
          {
            v63 = 0;
            do
            {
              if ( v19 != v63 )
              {
                v64 = v15[2 * v63];
                HIDWORD(v18) = *(_DWORD *)v64;
                if ( *(_DWORD *)v64 )
                {
                  LODWORD(v18) = strcmp(v22, (const char *)HIDWORD(v18));
                  if ( !(_DWORD)v18 )
                  {
                    HIDWORD(v18) = v93[4 * ((unsigned __int8)v64[32] >> 3)];
                    if ( HIDWORD(v18) == 2 )
                    {
                      HIDWORD(v18) = *((_DWORD *)v20 + 2);
                      if ( HIDWORD(v18) == *((_DWORD *)v64 + 2) )
                        v62 = 1;
                    }
                  }
                }
              }
              ++v63;
            }
            while ( v63 < v16 );
            v21 = v19 + 1;
            if ( v62 )
            {
LABEL_81:
              if ( v16 > v21 )
              {
                v65 = &v91[2 * v21];
                do
                {
                  v18 = *((_QWORD *)v65 + 1);
                  v60 = &v91[2 * v16] == v65 + 2;
                  *(_QWORD *)v65 = v18;
                  v65 += 2;
                }
                while ( !v60 );
              }
              --v16;
            }
          }
        }
      }
    }
    v19 = v21;
  }
  while ( v16 > v21 );
  if ( !v16 )
  {
LABEL_127:
    if ( !a5 )
    {
      v16 = 1;
      goto LABEL_47;
    }
    if ( !v94 )
    {
      v16 = a5;
      v15 = *a4;
      goto LABEL_47;
    }
    v16 = a5;
LABEL_117:
    if ( !*(_BYTE *)(a1 + 60) )
    {
      sub_A3C94(a1 + 32, a1);
      *(_BYTE *)(a1 + 60) = 1;
    }
    LODWORD(v18) = sub_9AF2C(*(const char **)(a1 + 32), a3, **a4, (*a4)[1]);
    goto LABEL_120;
  }
  v27 = *v15;
  if ( **(_BYTE **)(*((_DWORD *)*v15 + 6) + 24) != 5 )
  {
LABEL_111:
    if ( v16 == 1 )
      v77 = a5 & 1;
    else
      v77 = 0;
    v88 = v77;
LABEL_115:
    if ( !v88 )
      goto LABEL_46;
LABEL_116:
    if ( !v94 )
      goto LABEL_120;
    goto LABEL_117;
  }
  v28 = v15;
  HIDWORD(v18) = &v15[2 * v16 - 2];
  while ( (char **)HIDWORD(v18) != v28 )
  {
    v29 = v28[2];
    v28 += 2;
    if ( **(_BYTE **)(*((_DWORD *)v29 + 6) + 24) != 5 )
      goto LABEL_111;
  }
  if ( v16 <= 1 )
    goto LABEL_127;
  v30 = v15[2];
  v18 = *((_QWORD *)v27 + 1);
  if ( v18 == *((_QWORD *)v30 + 1) )
  {
    v31 = v15;
    v32 = v15;
    while ( &v15[2 * v16 - 4] != v32 )
    {
      v33 = v32[4];
      v32 += 2;
      if ( *((_QWORD *)v33 + 1) != v18 )
        goto LABEL_46;
    }
    v34 = *((_DWORD *)v27 + 6);
    v35 = *(__int16 *)(*(_DWORD *)(*((_DWORD *)v30 + 6) + 24) + 4);
    if ( *(__int16 *)(*(_DWORD *)(v34 + 24) + 4) == v35 )
    {
      while ( v32 != v31 )
      {
        v36 = v31[4];
        v31 += 2;
        if ( *(__int16 *)(*(_DWORD *)(*((_DWORD *)v36 + 6) + 24) + 4) != v35 )
          goto LABEL_46;
      }
      v37 = 1;
      v84 = v15;
      v92 = v16;
      while ( 1 )
      {
        v38 = *((_DWORD *)v84[2 * v37] + 6);
        v39 = *(_DWORD *)(v38 + 24);
        v40 = *(__int16 *)(v39 + 4);
        if ( v40 > 0 )
          break;
LABEL_122:
        if ( v92 == ++v37 )
        {
          v16 = 1;
          goto LABEL_115;
        }
        v34 = *((_DWORD *)*v84 + 6);
      }
      v41 = *(_QWORD **)(v39 + 24);
      v42 = *(__int64 **)(*(_DWORD *)(v34 + 24) + 24);
      v18 = *v42;
      if ( *v42 == *v41 )
      {
        v43 = 3;
        v44 = 0;
        while ( v40 != ++v44 )
        {
          v18 = v41[v43];
          v43 += 3;
          if ( v18 != v42[v43 - 3] )
            goto LABEL_45;
        }
        v45 = 0;
        v46 = 0;
        while ( 1 )
        {
          v48 = (char *)v41[v45 + 2];
          v49 = (const char *)v42[v45 + 2];
          v95 = strlen(v48);
          v96 = strlen(v49);
          sub_9DFAC((unsigned __int8 *)v48, (int *)&v95);
          LODWORD(v18) = sub_9DFAC(
                           *(unsigned __int8 **)(*(_DWORD *)(*(_DWORD *)(v34 + 24) + 24) + v45 * 8 + 16),
                           (int *)&v96);
          if ( v95 != v96 )
            break;
          v47 = *(_DWORD *)(v38 + 24);
          v42 = *(__int64 **)(*(_DWORD *)(v34 + 24) + 24);
          v41 = *(_QWORD **)(v47 + 24);
          LODWORD(v18) = strncmp((const char *)v41[v45 + 2], (const char *)v42[v45 + 2], v95);
          if ( (_DWORD)v18 )
            break;
          ++v46;
          v45 += 3;
          if ( *(__int16 *)(v47 + 4) <= v46 )
            goto LABEL_122;
        }
      }
LABEL_45:
      v16 = v92;
    }
  }
LABEL_46:
  v15 = *a4;
LABEL_47:
  v50 = 0;
  v51 = 0;
  sa = (char *)off_46DBB8;
  do
  {
    v52 = v15[2 * v51];
    if ( v52 )
    {
      HIDWORD(v18) = sa;
      if ( *(_DWORD *)&sa[16 * ((unsigned __int8)v52[32] >> 3)] != 8 )
      {
        v53 = *(const char **)v52;
        LODWORD(v18) = sub_338BD4(*(_DWORD *)v52, "___XR");
        if ( (_DWORD)v18 )
        {
          v54 = v18 - (_DWORD)v53;
          v55 = 0;
          v56 = v15[2 * v51 + 1];
          do
          {
            if ( v51 != v55 )
            {
              v57 = (const char **)v15[2 * v55];
              if ( v57 )
              {
                LODWORD(v18) = strncmp(v53, *v57, v54);
                if ( !(_DWORD)v18 && v56 == v15[2 * v55 + 1] )
                  v15[2 * v55] = 0;
              }
            }
            ++v55;
          }
          while ( v16 != v55 );
          v50 = 1;
        }
      }
    }
    ++v51;
  }
  while ( v16 != v51 );
  if ( !v50 )
    goto LABEL_87;
  v16 = 0;
  v58 = 0;
  do
  {
    v59 = (char **)v15[2 * v58];
    v60 = v59 == 0;
    if ( v59 )
    {
      v59 = &v15[2 * v16];
      v18 = *(_QWORD *)&v15[2 * v58];
    }
    ++v58;
    if ( !v60 )
    {
      ++v16;
      *(_QWORD *)v59 = v18;
    }
  }
  while ( v51 != v58 );
LABEL_67:
  obstack_free(&obstack, 0);
  return v16;
}
