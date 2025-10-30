int __fastcall sub_760B4(int a1, _DWORD *a2)
{
  int v2; // r2
  char *object_base; // r4
  int v4; // r9
  int v5; // r10
  int v6; // r9
  int v7; // r10
  unsigned int v8; // r1
  unsigned int v9; // r6
  const char *v10; // r0
  char *v11; // r6
  size_t v12; // r4
  char *next_free; // r0
  char *v14; // r2
  bool v15; // zf
  char *chunk_limit; // r3
  int v17; // r3
  int v18; // r2
  int v19; // r10
  char *v20; // r3
  int v21; // r8
  _BOOL4 v22; // r2
  char v23; // r3
  int v24; // r5
  char *v25; // r4
  const char *v26; // r5
  _BOOL4 v27; // r4
  int v28; // r6
  int v29; // r0
  int v30; // r3
  bool v31; // zf
  int v33; // r3
  bool v34; // zf
  bool v35; // zf
  char *v36; // r3
  unsigned int v37; // t1
  bool v38; // zf
  size_t v39; // r9
  signed int v40; // r8
  bool v41; // cc
  int v42; // r0
  int v43; // r9
  const char *v44; // r8
  int v45; // r6
  int v46; // r3
  _BYTE *v47; // r1
  int v48; // r3
  int v49; // lr
  int v50; // r12
  unsigned int v51; // t1
  int v52; // r3
  bool v53; // zf
  int v54; // r3
  char *v55; // r2
  bool v56; // zf
  int v57; // t1
  bool v58; // zf
  int v59; // r9
  int v60; // r8
  char *v61; // r2
  int v62; // r0
  __int64 v63; // r0
  int v64; // r3
  int v65; // r2
  int *v66; // r6
  int v67; // r3
  int *v68; // r10
  int v69; // r2
  int *v70; // r10
  int v71; // r3
  const char *v72; // r0
  _BYTE v73[4]; // [sp+8h] [bp-54h] BYREF
  int v74; // [sp+Ch] [bp-50h]
  _DWORD *v75; // [sp+10h] [bp-4Ch]
  int v76; // [sp+14h] [bp-48h]
  struct obstack *v77; // [sp+18h] [bp-44h]
  int v78; // [sp+1Ch] [bp-40h]
  char *v79; // [sp+20h] [bp-3Ch] BYREF
  int v80; // [sp+24h] [bp-38h] BYREF
  _BYTE v81[12]; // [sp+2Ch] [bp-30h] BYREF

  v2 = dword_474A80[0];
  v78 = a1;
  v77 = &stru_474A84;
  v75 = a2;
  v76 = dword_474ACC;
  *a2 = 0;
  dword_474ACC = 0;
LABEL_2:
  if ( !v2 )
    goto LABEL_15;
  while ( 2 )
  {
    object_base = (char *)dword_487CC0;
LABEL_4:
    v4 = 0;
    dword_487CC4 = (int)object_base;
    while ( 1 )
    {
      v5 = 4 * v4;
      if ( !strncmp(object_base, (const char *)dword_474AD4[4 * v4], 3u) )
        break;
      if ( ++v4 == 4 )
      {
        v6 = 0;
        goto LABEL_9;
      }
    }
    if ( (dword_474A80[v5 + 24] & 1) == 0 || *(_DWORD *)(**(_DWORD **)(v78 + 4) + 8) == 4 )
    {
      v70 = &dword_474A80[v5];
      v71 = v70[23];
      dword_487CC0 = (int)(object_base + 3);
      v9 = v70[22];
      dword_474AB0 = v71;
      return v9;
    }
    v6 = 0;
LABEL_9:
    while ( 1 )
    {
      v7 = 4 * v6;
      if ( !strncmp(object_base, (const char *)dword_474B14[4 * v6], 2u) )
        break;
      if ( ++v6 == 21 )
        goto LABEL_12;
    }
    if ( (dword_474A80[v7 + 40] & 1) == 0 || *(_DWORD *)(**(_DWORD **)(v78 + 4) + 8) == 4 )
    {
      v68 = &dword_474A80[v7];
      v69 = v68[39];
      dword_487CC0 = (int)(object_base + 2);
      dword_474AB0 = v69;
      v9 = v68[38];
      if ( dword_487CAC && v9 == 314 )
        dword_474ACC = 1;
      return v9;
    }
LABEL_12:
    v8 = (unsigned __int8)*object_base;
    v9 = v8;
    switch ( *object_base )
    {
      case 0:
        if ( !dword_474A80[0] )
        {
          if ( dword_474C64 )
          {
            dword_474C64 = dword_474A80[0];
            return 266;
          }
          if ( v76 )
            return 266;
          return 0;
        }
        dword_487CC0 = dword_474A80[0];
        dword_474A80[0] = 0;
LABEL_15:
        v10 = (const char *)sub_1A29E4(&dword_487CC0, sub_1A2C54, dword_474AD0);
        v11 = (char *)v10;
        if ( !v10 )
          continue;
        if ( dword_474A80[0] )
        {
          v63 = sub_94700(
                  "c-exp.y",
                  2402,
                  "%s: Assertion `%s' failed.",
                  "void scan_macro_expansion(char*)",
                  "! macro_original_text");
          goto LABEL_204;
        }
        v12 = strlen(v10);
        next_free = stru_474A84.next_free;
        if ( stru_474A84.chunk_limit - stru_474A84.next_free < v12 + 1 )
        {
          obstack_newchunk(v77, v12 + 1);
          next_free = stru_474A84.next_free;
        }
        memcpy(next_free, v11, v12);
        v14 = stru_474A84.next_free;
        stru_474A84.next_free += v12 + 1;
        v14[v12] = 0;
        object_base = stru_474A84.object_base;
        v15 = stru_474A84.object_base == stru_474A84.next_free;
        if ( stru_474A84.object_base == stru_474A84.next_free )
          LOBYTE(v14) = *((_BYTE *)&stru_474A84 + 40);
        chunk_limit = (char *)((int)&stru_474A84.next_free[stru_474A84.alignment_mask] & ~stru_474A84.alignment_mask);
        stru_474A84.next_free = chunk_limit;
        if ( v15 )
          *((_BYTE *)&stru_474A84 + 40) = (unsigned __int8)v14 | 2;
        if ( (char *)(chunk_limit - (char *)stru_474A84.chunk) > (char *)(stru_474A84.chunk_limit
                                                                        - (char *)stru_474A84.chunk) )
        {
          chunk_limit = stru_474A84.chunk_limit;
          stru_474A84.next_free = stru_474A84.chunk_limit;
        }
        stru_474A84.object_base = chunk_limit;
        free(v11);
        v17 = dword_487CC0;
        dword_487CC0 = (int)object_base;
        dword_474A80[0] = v17;
        goto LABEL_4;
      case 9:
      case 10:
      case 32:
        v2 = dword_474A80[0];
        dword_487CC0 = (int)(object_base + 1);
        goto LABEL_2;
      case 33:
      case 37:
      case 38:
      case 42:
      case 43:
      case 45:
      case 47:
      case 58:
      case 60:
      case 61:
      case 62:
      case 63:
      case 94:
      case 123:
      case 124:
      case 125:
      case 126:
        v21 = (int)(object_base + 1);
        goto LABEL_108;
      case 34:
      case 39:
        goto LABEL_34;
      case 40:
      case 91:
        dword_487CC0 = (int)(object_base + 1);
        v9 = 269;
        v29 = *(_DWORD *)(v78 + 4);
        ++dword_487CC8;
        v30 = *(_DWORD *)(*(_DWORD *)v29 + 8);
        v31 = v30 == 3;
        if ( v30 == 3 )
          v31 = v8 == 91;
        if ( !v31 )
          return v8;
        return v9;
      case 41:
      case 93:
        if ( !dword_487CC8 )
          return 0;
        --dword_487CC8;
        dword_487CC0 = (int)(object_base + 1);
        return v9;
      case 44:
        if ( dword_487CCC && !dword_487CC8 && !dword_474A80[0] )
          return 0;
        v9 = 44;
        dword_487CC0 = (int)(object_base + 1);
        return v9;
      case 46:
        if ( (unsigned int)(unsigned __int8)object_base[1] - 48 > 9 )
        {
          v21 = (int)(object_base + 1);
          v9 = 46;
          if ( dword_487CAC )
            dword_474ACC = 1;
          goto LABEL_108;
        }
        v24 = (int)object_base;
        v22 = (unsigned int)dword_46DE54 > 0xA;
LABEL_112:
        v48 = 0;
        v49 = v22 | 1;
        v50 = 0;
        while ( 2 )
        {
          if ( !v22 && (v8 & 0xDF) == 0x45 )
          {
            v48 = 1;
            v22 = v49;
            v50 = 1;
LABEL_115:
            v51 = *(unsigned __int8 *)++v24;
            v8 = v51;
            continue;
          }
          break;
        }
        if ( !v50 && v8 == 46 )
        {
          v50 = 1;
          goto LABEL_115;
        }
        if ( v48 && (*(_BYTE *)(v24 - 1) & 0xDF) == 0x45 && ((v8 - 43) & 0xFD) == 0
          || v8 - 48 <= 9
          || (v8 & 0xFFFFFFDF) - 65 <= 0x19 )
        {
          goto LABEL_115;
        }
        v28 = sub_74B78(v78, object_base, v24 - (_DWORD)object_base, v50 | v48, (int)&dword_474AB0);
        if ( v28 == 280 )
        {
          v72 = (const char *)memcpy(v73, object_base, v24 - (_DWORD)object_base);
          v73[v24 - (_DWORD)object_base] = 0;
          sub_946E0("Invalid number \"%s\".", v72);
        }
        goto LABEL_125;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        v22 = (unsigned int)dword_46DE54 > 0xA;
        if ( v8 != 48 )
          goto LABEL_111;
        v23 = object_base[1];
        if ( (v23 & 0xDF) == 0x58 )
        {
          v24 = (int)(object_base + 2);
          v8 = (unsigned __int8)object_base[2];
          v22 = 1;
        }
        else if ( (v23 & 0xCF) == 0x44 )
        {
          v24 = (int)(object_base + 2);
          v8 = (unsigned __int8)object_base[2];
          v22 = 0;
        }
        else
        {
LABEL_111:
          v24 = (int)object_base;
        }
        goto LABEL_112;
      case 64:
        v21 = (int)(object_base + 1);
        if ( *(_DWORD *)(**(_DWORD **)(v78 + 4) + 8) != 3 )
          goto LABEL_57;
        if ( !strncmp(object_base + 1, "selector", 8u) && (!object_base[9] || isspace((unsigned __int8)object_base[9])) )
        {
          v9 = 262;
          dword_487CC0 = (int)(object_base + 9);
          return v9;
        }
        if ( object_base[1] != 34 )
        {
LABEL_57:
          v25 = object_base + 1;
          do
            v26 = v25++;
          while ( isspace(*(unsigned __int8 *)v26) );
          if ( strncmp(v26, "entry", 5u) )
            goto LABEL_126;
          v27 = *((unsigned __int8 *)v26 + 5) != 95;
          if ( isalnum(*((unsigned __int8 *)v26 + 5)) )
            v27 = 0;
          if ( !v27 )
          {
LABEL_126:
            v9 = 64;
LABEL_108:
            dword_487CC0 = v21;
            return v9;
          }
          v24 = (int)(v26 + 5);
          v28 = 287;
LABEL_125:
          dword_487CC0 = v24;
          return v28;
        }
        v9 = 64;
LABEL_34:
        v79 = object_base;
        if ( dword_474C68 )
          obstack_free(&obstack, 0);
        else
          dword_474C68 = 1;
        obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93028, sub_74B6C);
        v18 = (int)v79;
        v19 = (unsigned __int8)*v79;
        if ( v19 == 76 )
        {
          v20 = v79 + 2;
          ++v79;
          v19 = *(unsigned __int8 *)(v18 + 1);
          v76 = 1;
          v74 = 0;
        }
        else
        {
          v20 = v79 + 1;
          if ( v19 == 117 )
          {
            ++v79;
            v76 = 2;
            v20 = (char *)(v18 + 2);
            v19 = *(unsigned __int8 *)(v18 + 1);
            v74 = 0;
          }
          else if ( v19 == 85 )
          {
            ++v79;
            v76 = 3;
            v20 = (char *)(v18 + 2);
            v19 = *(unsigned __int8 *)(v18 + 1);
            v74 = 0;
          }
          else
          {
            if ( v19 == 64 )
            {
              ++v79;
              v20 = 0;
            }
            else
            {
              v18 = 0;
            }
            if ( v19 == 64 )
            {
              v76 = (int)v20;
              v19 = *(unsigned __int8 *)(v18 + 1);
              v20 = (char *)(v18 + 2);
              v18 = 1;
            }
            else
            {
              v76 = v18;
            }
            v74 = v18;
          }
        }
        v59 = 0;
        if ( v19 == 39 )
          v76 |= 4u;
        v79 = v20;
        v77 = (struct obstack *)&v79;
LABEL_150:
        v60 = (unsigned __int8)*v20;
        if ( !*v20 )
        {
LABEL_156:
          if ( v19 )
          {
            if ( v19 != 34 )
              sub_946E0("Unmatched single quote.");
            sub_946E0("Unterminated string in expression.");
          }
          HIDWORD(v63) = obstack.object_base;
          v64 = (int)(v20 + 1);
          dword_487CC0 = v64;
          dword_474AB4 = (int)obstack.object_base;
          dword_474AB0 = v76;
          dword_474AB8 = obstack.next_free - obstack.object_base;
LABEL_161:
          if ( !v59 )
LABEL_204:
            sub_946E0("Empty character constant.", HIDWORD(v63));
          if ( v59 <= 2 )
          {
            if ( v59 != 2 )
              return 263;
LABEL_164:
            sub_946E0("Invalid character constant.");
          }
          if ( v9 != 39 )
            goto LABEL_164;
          v40 = v64 - (_DWORD)++object_base - 1;
          *v75 = 1;
LABEL_95:
          v43 = 0;
          dword_474AB4 = v40;
          dword_474AB0 = (int)object_base;
          v44 = (const char *)sub_1C3E58(object_base, v40);
          while ( 1 )
          {
            v45 = 4 * v43;
            if ( !strcmp(v44, (const char *)dword_474C98[4 * v43]) )
              break;
            if ( ++v43 == 40 )
              goto LABEL_100;
          }
          v46 = dword_474A80[v45 + 137];
          v47 = (_BYTE *)(v46 & 1);
          if ( (v46 & 1) != 0 )
          {
            if ( *(_DWORD *)(**(_DWORD **)(v78 + 4) + 8) != 4 )
              goto LABEL_100;
            if ( (v46 & 2) == 0 )
            {
LABEL_170:
              v66 = &dword_474A80[v45];
              v67 = v66[136];
              v9 = v66[135];
              dword_474AB0 = v67;
              return v9;
            }
            v47 = v81;
            v65 = dword_487CD0;
          }
          else
          {
            if ( (v46 & 2) == 0 )
              goto LABEL_170;
            v65 = dword_487CD0;
            if ( *(_DWORD *)(**(_DWORD **)(v78 + 4) + 8) == 4 )
              v47 = v81;
          }
          sub_21D6B0(&v80, v44, v65, 1, v47);
          if ( v80 )
          {
LABEL_100:
            if ( *object_base == 36 )
              return 298;
            if ( dword_487CAC && !*(_BYTE *)dword_487CC0 )
              dword_474C64 = 1;
            v9 = 264;
            dword_474AB8 = 0;
            dword_474ABC = 0;
            dword_474AC0 = 0;
            return v9;
          }
          goto LABEL_170;
        }
        while ( 1 )
        {
          if ( v60 == 92 )
          {
            v79 = v20 + 1;
            v62 = sub_759A8((char **)v77, &obstack);
            v20 = v79;
            v59 += v62;
            goto LABEL_150;
          }
          v61 = obstack.next_free;
          if ( v60 == v19 )
            break;
          if ( obstack.chunk_limit == obstack.next_free )
          {
            obstack_newchunk(&obstack, 1);
            v61 = obstack.next_free;
          }
          ++v59;
          obstack.next_free = v61 + 1;
          *v61 = v60;
          v20 = v79 + 1;
          v79 = v20;
          v60 = (unsigned __int8)*v20;
          if ( !*v20 )
            goto LABEL_156;
        }
        HIDWORD(v63) = obstack.object_base;
        v64 = (int)(v20 + 1);
        dword_487CC0 = v64;
        dword_474AB4 = (int)obstack.object_base;
        dword_474AB0 = v76;
        dword_474AB8 = obstack.next_free - obstack.object_base;
        if ( v19 != 34 )
          goto LABEL_161;
        v9 = 261;
        if ( !v74 )
          return 260;
        return v9;
      case 76:
      case 85:
      case 117:
        v33 = (unsigned __int8)object_base[1];
        v34 = v33 == 34;
        if ( v33 != 34 )
          v34 = v33 == 39;
        if ( !v34 )
          goto LABEL_72;
        goto LABEL_34;
      default:
LABEL_72:
        v35 = v8 == 95;
        if ( v8 != 95 )
          v35 = v8 == 36;
        if ( !v35 && (v8 & 0xFFFFFFDF) - 65 > 0x19 )
          sub_946E0("Invalid character '%c' in expression.", v8);
        v36 = object_base;
        while ( 2 )
        {
          v38 = v9 == 95;
          if ( v9 != 95 )
            v38 = v9 == 36;
          v39 = v36 - object_base;
          v40 = v36 - object_base;
          if ( v38 || v9 - 48 <= 9 )
            goto LABEL_85;
          v41 = v9 > 0x3C;
          if ( v9 != 60 )
            v41 = (v9 & 0xFFFFFFDF) - 65 > 0x19;
          if ( !v41 )
          {
LABEL_85:
            if ( v9 != 60 )
            {
              v37 = (unsigned __int8)*++v36;
              v9 = v37;
              continue;
            }
            if ( strncmp(object_base, "dynamic_cast", v36 - object_base) )
            {
              if ( strncmp(object_base, "static_cast", v39) )
              {
                if ( strncmp(object_base, "reinterpret_cast", v39) )
                {
                  if ( strncmp(object_base, "const_cast", v39) )
                  {
                    v42 = sub_1C3D00(&object_base[v39]);
                    if ( v42 )
                      v40 = v42 - (_DWORD)object_base;
                  }
                }
              }
            }
          }
          break;
        }
        if ( v40 == 2 )
        {
          if ( *object_base == 105 && object_base[1] == 102 && !dword_474A80[0] )
            return 0;
        }
        else if ( v40 <= 0 )
        {
          goto LABEL_94;
        }
        if ( !strncmp(object_base, "thread", v40) || !strncmp(object_base, "task", v40) )
        {
          v52 = (unsigned __int8)object_base[v40];
          v53 = v52 == 32;
          if ( v52 != 32 )
            v53 = v52 == 9;
          if ( v53 && !dword_474A80[0] )
          {
            v54 = (unsigned __int8)object_base[v40 + 1];
            v55 = &object_base[v40 + 1];
            v56 = v54 == 32;
            if ( v54 != 32 )
              v56 = v54 == 9;
            if ( v56 )
            {
              do
              {
                v57 = (unsigned __int8)*++v55;
                v54 = v57;
                v58 = v57 == 9;
                if ( v57 != 9 )
                  v58 = v54 == 32;
              }
              while ( v58 );
            }
            if ( (unsigned int)(v54 - 48) <= 9 )
              return 0;
          }
        }
LABEL_94:
        dword_487CC0 += v40;
        goto LABEL_95;
    }
  }
}
