void __fastcall sub_2691D8(int a1, int a2, int a3, int a4, const char *a5, int a6, int c, int a8, int a9)
{
  int v9; // r11
  int v10; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r9
  struct obstack *v16; // r6
  __int64 v17; // r0
  unsigned int v18; // r10
  unsigned int *v19; // r5
  unsigned int *v20; // r7
  unsigned int v21; // r0
  unsigned int v22; // r3
  unsigned int v23; // r8
  int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r3
  unsigned int v27; // r8
  unsigned int *v28; // r4
  unsigned int v29; // r3
  int v30; // r0
  size_t v31; // r2
  unsigned int v32; // r3
  unsigned int *v33; // r5
  unsigned int v34; // r0
  wint_t v35; // r0
  int v36; // r3
  unsigned int v37; // r10
  unsigned int v38; // r1
  char *v39; // r7
  unsigned int v40; // r8
  size_t v41; // r0
  size_t v42; // r5
  int v43; // r2
  int v44; // r1
  size_t v45; // r0
  char *v46; // r2
  size_t v47; // r4
  bool v48; // zf
  size_t v49; // r0
  char *v50; // r2
  size_t v51; // r4
  const char *v52; // r5
  char *v53; // r0
  char *v54; // r3
  unsigned int v55; // r8
  unsigned __int8 *v56; // r0
  size_t v57; // r0
  size_t v58; // r5
  unsigned int v59; // r2
  char *v60; // r8
  unsigned int v61; // r2
  size_t v62; // r0
  size_t v63; // r5
  int v64; // r1
  int v65; // r2
  size_t v66; // r0
  char *v67; // r2
  size_t v68; // r5
  int v69; // r1
  char *v70; // r8
  int v71; // r0
  char *v72; // r4
  int v73; // t1
  wint_t v74; // r0
  char *v75; // r2
  wint_t v76; // r5
  __int64 v77; // r0
  char *next_free; // r8
  unsigned int v79; // r3
  size_t v80; // r0
  size_t v81; // r5
  int v82; // r5
  int v83; // r1
  int v84; // r2
  size_t v85; // r0
  size_t v86; // r5
  char *v87; // r2
  int v88; // r0
  __int64 v89; // r0
  unsigned int v90; // [sp+14h] [bp-158h]
  wint_t v92; // [sp+1Ch] [bp-150h]
  wchar_t *s; // [sp+20h] [bp-14Ch]
  unsigned int v94; // [sp+24h] [bp-148h]
  void *v95; // [sp+28h] [bp-144h]
  void (*v96)(void *); // [sp+2Ch] [bp-140h]
  char *v97; // [sp+30h] [bp-13Ch]
  unsigned int v98; // [sp+34h] [bp-138h]
  unsigned int v99; // [sp+34h] [bp-138h]
  unsigned int *v100; // [sp+3Ch] [bp-130h] BYREF
  void *v101; // [sp+40h] [bp-12Ch] BYREF
  void *v102; // [sp+44h] [bp-128h] BYREF
  int v103; // [sp+48h] [bp-124h] BYREF
  _DWORD v104[7]; // [sp+4Ch] [bp-120h] BYREF
  struct obstack v105; // [sp+68h] [bp-104h] BYREF
  struct obstack v106; // [sp+94h] [bp-D8h] BYREF
  _DWORD v107[21]; // [sp+C0h] [bp-ACh] BYREF
  _DWORD src[21]; // [sp+114h] [bp-58h] BYREF

  v10 = a2;
  v13 = sub_170040(a2);
  v14 = ((int (__fastcall *)(int))loc_165BB8)(v13);
  v90 = v14;
  v15 = *(_DWORD *)(v10 + 20);
  if ( a4 == -1 )
  {
    v10 = a3;
    a4 = 0;
    v55 = v14;
    do
    {
      sub_258BD4();
      v56 = (unsigned __int8 *)v10;
      v10 += v15;
      ++a4;
    }
    while ( sub_15C250(v56, v15, v55) );
  }
  if ( a8 )
    v16 = (struct obstack *)(a6 == 0);
  else
    v16 = 0;
  if ( !v16 )
    goto LABEL_10;
  if ( a4 )
  {
    v10 = a4 - 1;
    LODWORD(v17) = sub_15C250((unsigned __int8 *)(a3 + (a4 - 1) * v15), v15, v90);
    if ( v17 )
      goto LABEL_11;
    --a4;
LABEL_10:
    if ( !a4 )
      goto LABEL_7;
LABEL_11:
    sub_EF550(v104, a3, a4 * v15, a5, v15);
    v100 = 0;
    v95 = sub_9253C((int)sub_266328, (int)&v100);
    if ( !*(_DWORD *)(a9 + 28) )
    {
      v19 = v100;
      if ( v100 )
        goto LABEL_44;
      goto LABEL_125;
    }
    v18 = 0;
    while ( 1 )
    {
      sub_258BD4();
      v20 = v100;
      if ( !v100 || (v23 = *v100) == 0 )
      {
        v24 = sub_EF190((int)v104, &v107[1], &v101, (char **)&v107[18], &v107[19]);
        v107[0] = v24;
        if ( v24 > 0 )
        {
          if ( v24 > 3 )
            goto LABEL_130;
          memcpy(&v107[2], v101, 4 * v24);
        }
        v20 = v100;
        if ( !v100 || (v25 = *v100, v26 = v100[1], v26 == *v100) )
        {
          v20 = sub_99EB8(v100, 1, 8, 84);
          v25 = *v20;
          v32 = v20[1];
          v100 = v20;
          if ( v25 >= v32 )
          {
LABEL_42:
            sub_94700(
              (int)"valprint.c",
              2457,
              "%s: Assertion `%s' failed.",
              "converted_character_d* VEC_converted_character_d_quick_push(VEC_converted_character_d*, const converted_ch"
              "aracter_d*, const char*, unsigned int)",
              "quick_push");
LABEL_43:
            v19 = v100;
LABEL_44:
            if ( *v19 )
            {
              v33 = &v19[21 * *v19 - 21];
              v34 = v33[3];
              v16 = &v105;
              v33[3] = 3;
              v94 = v34;
              v96 = sub_26631C;
              obstack_begin(&v105, 0, 0, (void *(*)(int))sub_93028, sub_26631C);
              v20 = v100;
              v35 = btowc(c);
              v36 = 0;
              v92 = v35;
              v37 = 0;
              v9 = (int)"'";
              v103 = 0;
              s = (wchar_t *)",";
              v97 = " <repeats %u times>";
              while ( 1 )
              {
                v38 = v37 + 1;
                if ( !v20 || *v20 <= v37 )
                  goto LABEL_134;
                v10 = (int)&v20[21 * v37 + 2];
                switch ( v20[21 * v37 + 3] )
                {
                  case 0u:
                  case 1u:
                    while ( 2 )
                    {
                      v59 = v37;
                      v37 = v38;
LABEL_77:
                      if ( v20[21 * v59 + 22] > *(_DWORD *)(a9 + 32) )
                        goto LABEL_78;
                      if ( v36 != 1 )
                      {
                        next_free = v105.next_free;
                        v48 = v36 == 0;
                        v79 = v105.chunk_limit - v105.next_free;
                        if ( !v48 )
                        {
                          v80 = wcslen(s);
                          v81 = 4 * v80;
                          if ( 4 * v80 > v105.chunk_limit - v105.next_free )
                          {
                            obstack_newchunk(v16, 4 * v80);
                            next_free = v105.next_free;
                          }
                          memcpy(next_free, s, v81);
                          next_free = &v105.next_free[v81];
                          v79 = v105.chunk_limit - &v105.next_free[v81];
                          v105.next_free += v81;
                        }
                        if ( v79 <= 3 )
                        {
                          obstack_newchunk(v16, 4);
                          next_free = v105.next_free;
                        }
                        *(_DWORD *)next_free = v92;
                        v105.next_free += 4;
                      }
LABEL_103:
                      if ( *(int *)(v10 + 80) <= 0 )
                      {
                        v38 = v37 + 1;
                        if ( *v20 > v37 )
                        {
                          v10 = (int)&v20[21 * v37 + 2];
                          switch ( v20[21 * v37 + 3] )
                          {
                            case 0u:
                            case 1u:
                              v36 = 1;
                              continue;
                            case 2u:
                              v36 = 1;
                              goto LABEL_50;
                            case 3u:
                              goto LABEL_120;
                            default:
                              ++v37;
                              goto LABEL_103;
                          }
                        }
LABEL_134:
                        v89 = sub_94700(
                                (int)"valprint.c",
                                2649,
                                "%s: Assertion `%s' failed.",
                                "converted_character_d* VEC_converted_character_d_index(VEC_converted_character_d*, unsig"
                                "ned int, const char*, unsigned int)",
                                "index");
                        if ( HIDWORD(v89) == -1 )
                          _cxa_call_unexpected((void *)v89);
                        obstack_free(v16, 0);
LABEL_127:
                        v88 = sub_EF160((int)v104);
                        sub_338FFC(v88);
                      }
                      break;
                    }
                    v82 = 0;
                    do
                    {
                      while ( 1 )
                      {
                        v83 = *(_DWORD *)(v10 + 72);
                        v84 = *(_DWORD *)(v10 + 76);
                        if ( *(_DWORD *)(v10 + 4) )
                          break;
                        sub_265EFC(*(_DWORD *)(v10 + 8), v83, v84, v15, v90, v16, c, &v103);
                        if ( *(_DWORD *)(v10 + 80) <= ++v82 )
                          goto LABEL_108;
                      }
                      sub_265EFC(0xFFFFFFFF, v83, v84, v15, v90, v16, c, &v103);
                      ++v82;
                    }
                    while ( *(_DWORD *)(v10 + 80) > v82 );
LABEL_108:
                    v36 = 1;
                    break;
                  case 2u:
LABEL_50:
                    v39 = v105.next_free;
                    v40 = v105.chunk_limit - v105.next_free;
                    if ( v36 == 1 )
                    {
                      if ( v40 <= 3 )
                      {
                        obstack_newchunk(v16, 4);
                        v39 = v105.next_free;
                      }
                      *(_DWORD *)v39 = v92;
                      v39 = v105.next_free + 4;
                      v40 = v105.chunk_limit - (v105.next_free + 4);
                      v105.next_free += 4;
                    }
                    else if ( !v36 )
                    {
                      goto LABEL_52;
                    }
                    v57 = wcslen((const wchar_t *)",");
                    v58 = 4 * v57;
                    if ( 4 * v57 > v40 )
                    {
                      obstack_newchunk(v16, 4 * v57);
                      v39 = v105.next_free;
                    }
                    memcpy(v39, ",", v58);
                    v39 = &v105.next_free[v58];
                    v40 = v105.chunk_limit - &v105.next_free[v58];
                    v105.next_free += v58;
LABEL_52:
                    v41 = wcslen((const wchar_t *)"<");
                    v42 = 4 * v41;
                    if ( 4 * v41 > v40 )
                    {
                      obstack_newchunk(v16, 4 * v41);
                      v39 = v105.next_free;
                    }
                    memcpy(v39, "<", v42);
                    v43 = *(_DWORD *)(v10 + 76);
                    v44 = *(_DWORD *)(v10 + 72);
                    v105.next_free += v42;
                    sub_265EFC(0xFFFFFFFF, v44, v43, v15, v90, v16, 0, &v103);
                    v45 = wcslen((const wchar_t *)">");
                    v46 = v105.next_free;
                    v47 = 4 * v45;
                    if ( 4 * v45 > v105.chunk_limit - v105.next_free )
                    {
                      obstack_newchunk(v16, 4 * v45);
                      v46 = v105.next_free;
                    }
                    memcpy(v46, ">", v47);
                    v105.next_free += v47;
LABEL_57:
                    v48 = v94 == 3;
                    if ( v94 == 3 )
                      v48 = a6 == 0;
                    if ( !v48 )
                    {
                      v49 = wcslen((const wchar_t *)".");
                      v50 = v105.next_free;
                      v51 = 4 * v49;
                      if ( 4 * v49 > v105.chunk_limit - v105.next_free )
                      {
                        obstack_newchunk(v16, 4 * v49);
                        v50 = v105.next_free;
                      }
                      memcpy(v50, ".", v51);
                      v105.next_free += v51;
                    }
                    obstack_begin(&v106, 0, 0, (void *(*)(int))sub_93028, v96);
                    v52 = (const char *)sub_EF454();
                    v53 = sub_EEBB8();
                    sub_EEF04(v52, v53, v105.object_base, v105.next_free - v105.object_base, 4, &v106, 1);
                    v54 = v106.next_free;
                    if ( v106.chunk_limit == v106.next_free )
                    {
                      obstack_newchunk(&v106, 1);
                      v54 = v106.next_free;
                    }
                    v106.next_free = v54 + 1;
                    *v54 = 0;
                    sub_25A6BC(v106.object_base, a1);
                    sub_92620(v95);
                    obstack_free(&v106, 0);
                    obstack_free(v16, 0);
                    sub_EF160((int)v104);
                    return;
                  case 3u:
                    if ( v36 == 1 )
                    {
LABEL_120:
                      v87 = v105.next_free;
                      if ( (unsigned int)(v105.chunk_limit - v105.next_free) <= 3 )
                      {
                        obstack_newchunk(v16, 4);
                        v87 = v105.next_free;
                      }
                      *(_DWORD *)v87 = v92;
                      v105.next_free += 4;
                    }
                    goto LABEL_57;
                  default:
                    ++v37;
                    if ( v36 == 1 )
                      goto LABEL_103;
                    v36 = 0;
                    continue;
                }
              }
            }
LABEL_125:
            sub_94700(
              (int)"valprint.c",
              2755,
              "%s: Assertion `%s' failed.",
              "converted_character_d* VEC_converted_character_d_last(VEC_converted_character_d*, const char*, unsigned int)",
              "last");
LABEL_126:
            sub_94700(
              (int)"valprint.c",
              2486,
              "%s: Assertion `%s' failed.",
              "int count_next_character(wchar_iterator*, VEC_converted_character_d**)",
              "d.num_chars < MAX_WCHARS");
            goto LABEL_127;
          }
        }
        else if ( v26 <= *v100 )
        {
          goto LABEL_42;
        }
        v23 = v25 + 1;
        *v20 = v25 + 1;
        memcpy(&v20[21 * v25 + 2], v107, 0x54u);
        if ( !v23 )
          break;
      }
      v27 = v23 - 1;
      v28 = &v20[21 * v27];
      v29 = v28[2];
      v28[22] = 1;
      if ( v29 == -1 )
        goto LABEL_43;
      v16 = (struct obstack *)&src[19];
      src[20] = 0;
      while ( 1 )
      {
        v30 = sub_EF190((int)v104, &src[1], &v102, (char **)&src[18], &src[19]);
        v9 = v30;
        src[0] = v30;
        if ( v30 > 0 )
        {
          if ( v30 > 3 )
            goto LABEL_126;
          memcpy(&src[2], v102, 4 * v30);
        }
        if ( v9 != v28[2] || src[1] != v28[3] )
          break;
        if ( v9 > 0 )
        {
          if ( memcmp(&v20[21 * v27 + 4], &src[2], 4 * v9) )
            break;
        }
        else
        {
          if ( v9 )
            break;
          v31 = v28[21];
          if ( v31 != src[19] || memcmp((const void *)v28[20], (const void *)src[18], v31) )
            break;
        }
        ++v28[22];
      }
      v19 = v100;
      v20 += 21 * v27;
      v10 = v20[22];
      if ( !v100 || (v21 = *v100, v22 = v100[1], v22 == *v100) )
      {
        v19 = sub_99EB8(v100, 1, 8, 84);
        v21 = *v19;
        v22 = v19[1];
        v100 = v19;
      }
      if ( v21 >= v22 )
        goto LABEL_129;
      *v19 = v21 + 1;
      memcpy(&v19[21 * v21 + 2], src, 0x54u);
      if ( v10 >= 0 )
      {
        v18 += v10;
        if ( *(_DWORD *)(a9 + 28) > v18 )
          continue;
      }
      goto LABEL_44;
    }
    sub_94700(
      (int)"valprint.c",
      2460,
      "%s: Assertion `%s' failed.",
      "converted_character_d* VEC_converted_character_d_last(VEC_converted_character_d*, const char*, unsigned int)",
      "last");
LABEL_129:
    sub_94700(
      (int)"valprint.c",
      2514,
      "%s: Assertion `%s' failed.",
      "converted_character_d* VEC_converted_character_d_quick_push(VEC_converted_character_d*, const converted_character_"
      "d*, const char*, unsigned int)",
      "quick_push");
LABEL_130:
    v77 = sub_94700(
            (int)"valprint.c",
            2454,
            "%s: Assertion `%s' failed.",
            "int count_next_character(wchar_iterator*, VEC_converted_character_d**)",
            "tmp.num_chars < MAX_WCHARS");
    while ( 2 )
    {
      v37 = HIDWORD(v77);
LABEL_78:
      v60 = v105.next_free;
      v61 = v105.chunk_limit - v105.next_free;
      if ( v36 == 1 )
      {
        if ( v61 <= 3 )
        {
          obstack_newchunk(v16, 4);
          v60 = v105.next_free;
        }
        *(_DWORD *)v60 = v92;
        v60 = v105.next_free + 4;
        v61 = v105.chunk_limit - (v105.next_free + 4);
        v105.next_free += 4;
      }
      else if ( !v36 )
      {
LABEL_80:
        v98 = v61;
        v62 = wcslen((const wchar_t *)v9);
        v63 = 4 * v62;
        if ( 4 * v62 > v98 )
        {
          obstack_newchunk(v16, 4 * v62);
          v60 = v105.next_free;
        }
        memcpy(v60, (const void *)v9, v63);
        v64 = *(_DWORD *)(v10 + 72);
        v48 = *(_DWORD *)(v10 + 4) == 0;
        v65 = *(_DWORD *)(v10 + 76);
        v105.next_free += v63;
        if ( v48 )
          sub_265EFC(*(_DWORD *)(v10 + 8), v64, v65, v15, v90, v16, c, &v103);
        else
          sub_265EFC(0xFFFFFFFF, v64, v65, v15, v90, v16, c, &v103);
        v66 = wcslen((const wchar_t *)v9);
        v67 = v105.next_free;
        v68 = 4 * v66;
        if ( 4 * v66 > v105.chunk_limit - v105.next_free )
        {
          obstack_newchunk(v16, 4 * v66);
          v67 = v105.next_free;
        }
        memcpy(v67, (const void *)v9, v68);
        v69 = *(_DWORD *)(v10 + 80);
        v105.next_free += v68;
        v70 = sub_93140(v97, v69);
        v71 = (unsigned __int8)*v70;
        if ( *v70 )
        {
          v72 = v70;
          do
          {
            v74 = btowc(v71);
            v75 = v105.next_free;
            v76 = v74;
            if ( (unsigned int)(v105.chunk_limit - v105.next_free) <= 3 )
            {
              obstack_newchunk(v16, 4);
              v75 = v105.next_free;
            }
            *(_DWORD *)v75 = v76;
            v105.next_free += 4;
            v73 = (unsigned __int8)*++v72;
            v71 = v73;
          }
          while ( v73 );
        }
        free(v70);
        HIDWORD(v77) = v37 + 1;
        if ( *v20 > v37 )
        {
          v36 = 2;
          v10 = (int)&v20[21 * v37 + 2];
          switch ( v20[21 * v37 + 3] )
          {
            case 0u:
            case 1u:
              v59 = v37;
              v36 = 2;
              ++v37;
              goto LABEL_77;
            case 2u:
              v36 = 2;
              goto LABEL_50;
            case 3u:
              goto LABEL_57;
            default:
              continue;
          }
        }
        goto LABEL_134;
      }
      break;
    }
    v99 = v61;
    v85 = wcslen(s);
    v86 = 4 * v85;
    if ( 4 * v85 > v99 )
    {
      obstack_newchunk(v16, 4 * v85);
      v60 = v105.next_free;
    }
    memcpy(v60, s, v86);
    v60 = &v105.next_free[v86];
    v61 = v105.chunk_limit - &v105.next_free[v86];
    v105.next_free += v86;
    goto LABEL_80;
  }
LABEL_7:
  sub_25A6BC("\"\"", a1);
}
