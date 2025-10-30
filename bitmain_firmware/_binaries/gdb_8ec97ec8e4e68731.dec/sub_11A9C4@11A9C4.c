int *__fastcall sub_11A9C4(int a1, int a2, signed int a3)
{
  signed int v3; // r6
  int *v4; // r11
  __int64 v6; // r0
  int v7; // r0
  _DWORD *v8; // r2
  char *v9; // r3
  int *v10; // r9
  int v11; // r7
  int v12; // r5
  int v13; // r6
  _DWORD **v14; // r8
  _DWORD **v15; // r11
  _DWORD **v16; // r4
  int v17; // r10
  _DWORD *v18; // r11
  _DWORD *v19; // r5
  __int64 v20; // r0
  __int64 v22; // r0
  _DWORD *v23; // r3
  int v24; // lr
  _DWORD *v25; // r0
  int v26; // r2
  _DWORD *v27; // r12
  int v28; // r3
  int v29; // r6
  int v30; // t1
  int v31; // r1
  int v32; // t1
  __int64 v33; // r0
  int v34; // lr
  unsigned int v35; // r2
  int v36; // r3
  char *v37; // r12
  int *v38; // r3
  int v39; // r6
  int v40; // t1
  int v41; // t1
  int v42; // r2
  _DWORD *v43; // r0
  int v44; // r0
  _DWORD *v45; // r5
  int v46; // r4
  int *v47; // t1
  _DWORD *v48; // r0
  int v49; // r0
  int v50; // r2
  int i; // r4
  _DWORD *v52; // r0
  _DWORD *v53; // r0
  int v54; // r0
  _DWORD **v55; // r3
  unsigned int v56; // r6
  unsigned int v57; // r1
  unsigned int v58; // r2
  _DWORD *v59; // r0
  int *v60; // r0
  char *v61; // r1
  char *v62; // r3
  const char **v63; // r5
  const char **v64; // r4
  const char *v65; // r5
  int v66; // r4
  int v67; // r1
  int v68; // r5
  int *v69; // r0
  int *v70; // r4
  _DWORD *v71; // r0
  const char *v72; // r0
  _DWORD *v73; // r0
  int v74; // r0
  _DWORD *v75; // r6
  signed int v76; // r5
  int *v77; // t1
  _DWORD *v78; // r0
  const char *v79; // r6
  const char *v80; // r4
  const char *v81; // r0
  int *v82; // [sp+Ch] [bp-58h]
  int *ptr; // [sp+10h] [bp-54h]
  int **v84; // [sp+14h] [bp-50h]
  int v86; // [sp+1Ch] [bp-48h]
  void *v88; // [sp+24h] [bp-40h]
  _DWORD *v89; // [sp+28h] [bp-3Ch] BYREF
  const char **v90; // [sp+30h] [bp-34h] BYREF
  char v91; // [sp+34h] [bp-30h]
  void *src; // [sp+38h] [bp-2Ch] BYREF
  char *v93; // [sp+3Ch] [bp-28h]
  char *v94; // [sp+40h] [bp-24h]
  int *v95; // [sp+44h] [bp-20h] BYREF
  int v96; // [sp+48h] [bp-1Ch]
  _DWORD *v97; // [sp+4Ch] [bp-18h] BYREF
  int v98; // [sp+50h] [bp-14h]
  int v99; // [sp+54h] [bp-10h]
  int v100; // [sp+58h] [bp-Ch]
  int v101; // [sp+5Ch] [bp-8h] BYREF

  v88 = sub_92E28();
  src = 0;
  v93 = 0;
  v94 = 0;
  v86 = sub_C3368(a3);
  if ( !v86 )
  {
    v72 = (const char *)sub_25AC8C(a1, a3);
    v60 = (int *)sub_92F64(11, "Unable to find function for PC %s", v72);
    goto LABEL_105;
  }
  v95 = &v101;
  v99 = 1065353216;
  v96 = 1;
  v97 = 0;
  v98 = 0;
  v100 = 0;
  v101 = 0;
  HIDWORD(v6) = sub_C2474(a1, a2);
  if ( !HIDWORD(v6) )
  {
    v84 = &v95;
    goto LABEL_89;
  }
  ptr = 0;
  v84 = &v95;
  while ( 1 )
  {
    LODWORD(v6) = a1;
    v7 = sub_117F3C(v6, 0);
    if ( v86 == v7 )
      break;
    v8 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_1156B4)(a1, v7) + 24) + 24)
                                + 28)
                    + 4);
    v89 = v8;
LABEL_7:
    if ( !v8 || (sub_11A8D8((int)&v90, v84, v8), !v91) )
    {
      v89 = 0;
      v9 = v93;
      if ( src == v93 )
      {
LABEL_21:
        if ( !ptr )
          goto LABEL_89;
        sub_11BE1C(v84);
        if ( src )
          sub_339E64(src);
        sub_92E40((int)v88);
        return ptr;
      }
      while ( 1 )
      {
        v10 = (int *)*((_DWORD *)v9 - 1);
        v11 = v96;
        v12 = *v10;
        v93 = v9 - 4;
        v13 = (unsigned __int64)sub_347674(v12, v96) >> 32;
        v14 = (_DWORD **)v95[v13];
        v82 = v95;
        if ( !v14 )
        {
LABEL_87:
          sub_94700(
            (int)"dwarf2loc.c",
            1113,
            "%s: Assertion `%s' failed.",
            "call_site_chain* call_site_find_chain_1(gdbarch*, CORE_ADDR, CORE_ADDR)",
            "removed == 1");
          goto LABEL_88;
        }
        v15 = (_DWORD **)*v14;
        v16 = (_DWORD **)v95[v13];
        v17 = (*v14)[1];
        while ( v12 != v17 )
        {
          if ( *v15 )
          {
            v17 = (*v15)[1];
            v16 = v15;
            v15 = (_DWORD **)*v15;
            if ( v13 == (unsigned __int64)sub_347674(v17, v11) >> 32 )
              continue;
          }
          goto LABEL_87;
        }
        v18 = *v16;
        v19 = (_DWORD *)**v16;
        if ( v14 == v16 )
        {
          if ( !v19 )
          {
            v23 = v16;
            goto LABEL_29;
          }
          v22 = sub_347674(v19[1], v11);
          if ( v13 != HIDWORD(v22) )
          {
            v82[HIDWORD(v22)] = (int)v16;
            v23 = (_DWORD *)v82[v13];
LABEL_29:
            if ( v23 == &v97 )
              v97 = v19;
            v82[v13] = 0;
          }
        }
        else if ( v19 )
        {
          v20 = sub_347674(v19[1], v11);
          if ( v13 != HIDWORD(v20) )
            v82[HIDWORD(v20)] = (int)v16;
        }
        *v16 = v19;
        sub_339E64(v18);
        v89 = (_DWORD *)v10[1];
        v8 = v89;
        --v98;
        if ( v89 )
          goto LABEL_7;
        v9 = v93;
        if ( src == v93 )
          goto LABEL_21;
      }
    }
    if ( v93 == v94 )
    {
      sub_11BE7C(&src);
      HIDWORD(v6) = v93;
    }
    else
    {
      HIDWORD(v6) = v93 + 4;
      if ( v93 )
        *(_DWORD *)v93 = v89;
      v93 = (char *)HIDWORD(v6);
    }
    if ( src != (void *)HIDWORD(v6) )
    {
      HIDWORD(v6) = *(_DWORD *)(HIDWORD(v6) - 4);
      if ( HIDWORD(v6) )
        continue;
    }
    goto LABEL_21;
  }
  v3 = v93 - (_BYTE *)src;
  a3 = (v93 - (_BYTE *)src) >> 2;
  if ( !ptr )
  {
    v60 = (int *)sub_93028(4 * (a3 + 3));
    v61 = (char *)src;
    v4 = v60;
    v62 = v93;
    v60[2] = a3;
    v60[1] = a3;
    *v60 = a3;
    if ( v61 != v62 )
      v60 = (int *)memcpy(v60 + 3, v61, v3);
    if ( dword_4872D4 )
    {
LABEL_105:
      v73 = (_DWORD *)sub_242FC8(v60);
      v74 = sub_2594B0(*v73, "tailcall: initial:");
      if ( v3 > 0 )
      {
        v75 = v4 + 2;
        v76 = 0;
        do
        {
          v77 = (int *)v75[1];
          ++v75;
          v74 = sub_115624(a1, *v77);
          ++v76;
        }
        while ( a3 > v76 );
      }
      v78 = (_DWORD *)sub_242FC8(v74);
      sub_259314(10, *v78);
    }
    ptr = v4;
LABEL_57:
    v8 = 0;
    v89 = 0;
    goto LABEL_7;
  }
  if ( dword_4872D4 )
  {
    v53 = (_DWORD *)sub_242FC8(v7);
    v54 = sub_2594B0(*v53, "tailcall: compare:");
    if ( v3 > 0 )
    {
      v55 = (_DWORD **)src;
      if ( v93 == src )
      {
        v58 = 0;
        v57 = 0;
LABEL_110:
        sub_33D20C("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v57, v58);
      }
      v56 = 0;
      while ( 1 )
      {
        v54 = sub_115624(a1, *v55[v56++]);
        if ( a3 <= (int)v56 )
          break;
        v55 = (_DWORD **)src;
        v57 = v56;
        v58 = (v93 - (_BYTE *)src) >> 2;
        if ( v56 >= v58 )
          goto LABEL_110;
      }
    }
    v59 = (_DWORD *)sub_242FC8(v54);
    sub_259314(10, *v59);
  }
  v24 = *ptr;
  if ( a3 < *ptr )
    v24 = a3;
  if ( v24 > 0 )
  {
    v25 = src;
    v26 = (v93 - (_BYTE *)src) >> 2;
    if ( !v26 )
    {
      v31 = 0;
LABEL_103:
      sub_33D20C("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v31, v26);
    }
    if ( ptr[3] == *(_DWORD *)src )
    {
      v27 = ptr + 3;
      v28 = 0;
      while ( ++v28 != v24 )
      {
        v30 = v27[1];
        ++v27;
        v29 = v30;
        v31 = v28;
        if ( v28 == v26 )
          goto LABEL_103;
        v32 = v25[1];
        ++v25;
        if ( v29 != v32 )
          goto LABEL_66;
      }
    }
    else
    {
      v28 = 0;
LABEL_66:
      *ptr = v28;
    }
  }
  LODWORD(v33) = ptr;
  v34 = ptr[1];
  if ( a3 < v34 )
    v34 = a3;
  if ( v34 > 0 )
  {
    HIDWORD(v33) = a3 - 1;
    v35 = (v93 - (_BYTE *)src) >> 2;
    v36 = ptr[2] + 1;
    if ( v35 <= a3 - 1 )
      goto LABEL_112;
    if ( ptr[v36 + 1] == *((_DWORD *)src + HIDWORD(v33)) )
    {
      v37 = (char *)src + 4 * a3 + -4;
      LODWORD(v33) = 0;
      v38 = &ptr[v36 + 1];
      HIDWORD(v33) = a3 - 2;
      while ( 1 )
      {
        LODWORD(v33) = v33 + 1;
        if ( (_DWORD)v33 == v34 )
          break;
        v40 = *--v38;
        v39 = v40;
        if ( v35 <= HIDWORD(v33) )
          goto LABEL_112;
        v41 = *((_DWORD *)v37 - 1);
        v37 -= 4;
        --HIDWORD(v33);
        if ( v39 != v41 )
          goto LABEL_81;
      }
    }
    else
    {
      LODWORD(v33) = 0;
LABEL_81:
      ptr[1] = v33;
    }
  }
  if ( dword_4872D4 )
  {
    v43 = (_DWORD *)sub_242FC8(v33);
    v44 = sub_2594B0(*v43, "tailcall: reduced:");
    if ( *ptr > 0 )
    {
      v45 = ptr + 2;
      v46 = 0;
      do
      {
        v47 = (int *)v45[1];
        ++v45;
        v44 = sub_115624(a1, *v47);
        ++v46;
      }
      while ( *ptr > v46 );
    }
    v48 = (_DWORD *)sub_242FC8(v44);
    v49 = sub_256850(" |", *v48);
    v50 = ptr[1];
    if ( v50 > 0 )
    {
      for ( i = 0; i < v50; ++i )
      {
        v49 = sub_115624(a1, *(_DWORD *)ptr[i + 3 + ptr[2] - v50]);
        v50 = ptr[1];
      }
    }
    v52 = (_DWORD *)sub_242FC8(v49);
    sub_259314(10, *v52);
  }
  v42 = ptr[1];
  if ( *ptr || v42 )
  {
    if ( *ptr + v42 > ptr[2] )
    {
      v33 = sub_94700(
              (int)"dwarf2loc.c",
              1021,
              "%s: Assertion `%s' failed.",
              "void chain_candidate(gdbarch*, gdb::unique_xmalloc_ptr<call_site_chain>*, std::vector<call_site*>*)",
              "(*resultp)->callers + (*resultp)->callees <= (*resultp)->length");
LABEL_112:
      sub_33D20C("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", HIDWORD(v33), v35);
    }
    goto LABEL_57;
  }
LABEL_88:
  free(ptr);
LABEL_89:
  sub_1B240C(&v89, a2);
  v63 = (const char **)v89;
  sub_1B240C(&v90, v86);
  v64 = v90;
  if ( v63 )
  {
    if ( dword_46D448 )
      v65 = (const char *)sub_21B3C4(v63);
    else
      v65 = *v63;
  }
  else
  {
    v65 = "???";
  }
  v79 = (const char *)sub_25AC8C(a1, a2);
  if ( v64 )
  {
    if ( dword_46D448 )
      v80 = (const char *)sub_21B3C4(v64);
    else
      v80 = *v64;
  }
  else
  {
    v80 = "???";
  }
  v81 = (const char *)sub_25AC8C(a1, v86);
  v66 = sub_92F64(
          11,
          "There are no unambiguously determinable intermediate callers or callees between caller function \"%s\" at %s a"
          "nd callee function \"%s\" at %s",
          v65,
          v79,
          v80,
          v81);
  v68 = v67;
  sub_11BE1C(v84);
  if ( src )
    sub_339E64(src);
  sub_92E40((int)v88);
  if ( v68 != 1 )
  {
    sub_339E78(v66);
    sub_92E60();
  }
  v69 = (int *)sub_339E78(v66);
  v70 = v69;
  if ( v69[1] != 11 )
    sub_92F1C(*v69, v69[1], v69[2]);
  if ( dword_4872D4 )
  {
    v71 = (_DWORD *)sub_242F8C(v69);
    v69 = (int *)sub_154B38(*v71, *v70, v70[1], v70[2]);
  }
  sub_339EF8(v69);
  return 0;
}
