int __fastcall sub_110B00(int a1, int *a2)
{
  __int64 v4; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v10; // r5
  unsigned __int8 *v11; // r6
  char *v12; // r8
  unsigned int v13; // r10
  unsigned int v14; // r0
  int v15; // r10
  int v16; // r11
  size_t v17; // r8
  void *v18; // r0
  void *v19; // r3
  void **v20; // r8
  void *v21; // r10
  int v22; // r0
  unsigned int v23; // r10
  char *v24; // r8
  unsigned int v25; // r0
  void *v26; // r6
  int i; // r6
  int v28; // r8
  void (__fastcall **v29)(int, int, int, int); // r0
  int v30; // r6
  int v31; // r3
  int v32; // r0
  int *v33; // r12
  _DWORD *v34; // lr
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  _DWORD *v39; // r12
  _DWORD *v40; // lr
  int v41; // r1
  bool v42; // cc
  unsigned __int64 v43; // r6
  _DWORD *v44; // r12
  int v45; // lr
  int v46; // r9
  int v47; // r3
  int *v48; // r8
  int v49; // r2
  bool v50; // zf
  void **v51; // r5
  void **v52; // r5
  int v53; // r0
  int v54; // r3
  int v55; // r2
  int v56; // r0
  const char *v57; // r11
  const char *v58; // r0
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r3
  _DWORD *v63; // r8
  _DWORD *v64; // r11
  _DWORD *v65; // r11
  int v66; // r1
  void *v67; // r11
  int v68; // r6
  int v69; // r6
  int v70; // r7
  void **v71; // r3
  int v72; // r7
  int v73; // r10
  __int64 v74; // r2
  void **v75; // r2
  int v76; // r8
  int v77; // r8
  void *v78; // r9
  void *v79; // r9
  __int64 v80; // r0
  int v81; // r8
  int v82; // r6
  __int64 v83; // r0
  int *v84; // r0
  __int64 v85; // [sp+18h] [bp-9Ch]
  unsigned __int64 v86; // [sp+18h] [bp-9Ch]
  void **v87; // [sp+18h] [bp-9Ch]
  void **v88; // [sp+18h] [bp-9Ch]
  void **v89; // [sp+18h] [bp-9Ch]
  void *v90; // [sp+18h] [bp-9Ch]
  int v91; // [sp+20h] [bp-94h]
  void **v92; // [sp+20h] [bp-94h]
  void **v93; // [sp+20h] [bp-94h]
  int v94; // [sp+24h] [bp-90h]
  int v95; // [sp+28h] [bp-8Ch]
  void **v96; // [sp+28h] [bp-8Ch]
  void *v97; // [sp+2Ch] [bp-88h]
  unsigned int v98; // [sp+30h] [bp-84h] BYREF
  int v99; // [sp+34h] [bp-80h] BYREF
  void *src; // [sp+38h] [bp-7Ch] BYREF
  int v101; // [sp+3Ch] [bp-78h]
  __int64 v102; // [sp+40h] [bp-74h]
  int v103; // [sp+48h] [bp-6Ch]
  int v104; // [sp+4Ch] [bp-68h]
  int v105; // [sp+50h] [bp-64h]
  int v106; // [sp+54h] [bp-60h]
  void *v107; // [sp+58h] [bp-5Ch]
  int v108; // [sp+60h] [bp-54h]
  void *ptr; // [sp+68h] [bp-4Ch]
  int v110; // [sp+6Ch] [bp-48h]
  __int64 v111; // [sp+70h] [bp-44h]
  int v112; // [sp+78h] [bp-3Ch]
  int v113; // [sp+7Ch] [bp-38h]
  int v114; // [sp+80h] [bp-34h]
  int v115; // [sp+84h] [bp-30h]
  void *v116; // [sp+88h] [bp-2Ch]
  unsigned __int64 v117; // [sp+A0h] [bp-14h]
  unsigned __int8 v118; // [sp+A9h] [bp-Bh]

  v4 = sub_15ECB4(a1);
  v5 = v4;
  v6 = ((int (__fastcall *)(_DWORD, _DWORD))loc_166E9C)(v4, HIDWORD(v4));
  v7 = ((int (__fastcall *)(int))loc_166F48)(v5);
  v8 = *a2;
  if ( *a2 )
    return v8;
  v10 = v6 + v7;
  v8 = sub_15D27C(72);
  *(_DWORD *)(v8 + 12) = sub_15D27C(24 * v10);
  *a2 = v8;
  v99 = sub_15DE14(a1);
  v11 = (unsigned __int8 *)((int (__fastcall *)(int *, int))loc_110388)(&v99, v8 + 44);
  if ( !v11 )
  {
    v83 = sub_94700(
            (int)"dwarf2-frame.c",
            1001,
            "%s: Assertion `%s' failed.",
            "dwarf2_frame_cache* dwarf2_frame_cache(frame_info*, void**)",
            "fde != NULL");
    v82 = HIDWORD(v83);
    goto LABEL_113;
  }
  sub_10FC0C((int)&src, v99, *(_QWORD **)v11);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(*(_DWORD *)v11 + 56);
  sub_10EA4C((int)&src, (int)v11);
  v12 = *(char **)(*(_DWORD *)v11 + 40);
  v13 = *(_DWORD *)(*(_DWORD *)v11 + 44);
  v14 = sub_15DE14(a1);
  sub_10ED98(v11, v12, v13, v5, v14, &src);
  v15 = v101;
  v85 = v102;
  v16 = v105;
  v97 = v107;
  v91 = v103;
  v94 = v104;
  v17 = 24 * v101;
  v95 = v106;
  v18 = sub_93028(24 * v101);
  v19 = memcpy(v18, src, v17);
  v20 = (void **)v116;
  v111 = v85;
  v50 = v116 == 0;
  v110 = v15;
  v114 = v16;
  v112 = v91;
  v113 = v94;
  v21 = ptr;
  v115 = v95;
  v116 = v97;
  ptr = v19;
  if ( !v50 )
  {
    v67 = v20[8];
    if ( v67 )
    {
      v71 = (void **)*((_DWORD *)v67 + 8);
      if ( v71 )
      {
        v75 = (void **)v71[8];
        if ( v75 )
        {
          if ( v75[8] )
          {
            v96 = (void **)v71[8];
            v93 = (void **)*((_DWORD *)v67 + 8);
            v90 = v75[8];
            sub_1118BC(v90);
            sub_33AC04(v90);
            v75 = v96;
            v71 = v93;
          }
          if ( *v75 )
          {
            v92 = v75;
            v88 = v71;
            free(*v75);
            v75 = v92;
            v71 = v88;
          }
          v89 = v71;
          sub_33AC04(v75);
          v71 = v89;
        }
        if ( *v71 )
        {
          v87 = v71;
          free(*v71);
          v71 = v87;
        }
        sub_33AC04(v71);
      }
      if ( *(_DWORD *)v67 )
        free(*(void **)v67);
      sub_33AC04(v67);
    }
    if ( *v20 )
      free(*v20);
    sub_33AC04(v20);
  }
  if ( v21 )
    free(v21);
  v22 = sub_15DF58(a1, &v98);
  v23 = *((_DWORD *)v11 + 4);
  v24 = (char *)*((_DWORD *)v11 + 3);
  if ( v22 )
  {
    v24 = (char *)sub_10ED98(v11, v24, v23, v5, v98, &src);
    if ( v105 == 1 )
    {
      v73 = sub_115FB8(v5, v103);
      v50 = v73 == ((int (__fastcall *)(int))loc_1672F0)(v5);
      v23 = *((_DWORD *)v11 + 4);
      if ( v50 )
      {
        v74 = v102;
        *(_DWORD *)(v8 + 64) = 1;
        *(_QWORD *)(v8 + 56) = v74;
      }
    }
    else
    {
      v23 = *((_DWORD *)v11 + 4);
    }
  }
  v25 = sub_15DE14(a1);
  sub_10ED98(v11, v24, v23, v5, v25, &src);
  v26 = sub_92E28();
  if ( v105 != 1 )
  {
    if ( v105 == 2 )
    {
      *(_DWORD *)v8 = sub_10EC48(
                        v106,
                        *(_DWORD *)(v8 + 40),
                        v103,
                        v104,
                        *(_DWORD *)(v8 + 40),
                        *(_DWORD *)(v8 + 44),
                        a1,
                        0,
                        0);
      goto LABEL_12;
    }
    v80 = sub_94700((int)"dwarf2-frame.c", 1061, "Unknown CFA rule.");
    v81 = v80;
    LODWORD(v80) = v26;
    v82 = HIDWORD(v80);
    sub_92E40(v80);
    LODWORD(v83) = v81;
LABEL_113:
    if ( v82 != 1 )
    {
      sub_339E78(v83);
      sub_92E60();
    }
    v84 = (int *)sub_339E78(v83);
    if ( v84[1] != 9 )
      sub_92F1C(*v84, v84[1], v84[2]);
    *(_DWORD *)(v8 + 4) = 1;
    sub_339EF8(v84);
    goto LABEL_39;
  }
  v53 = sub_10DCB0(a1, v103);
  v54 = v118;
  v55 = v102;
  *(_DWORD *)v8 = v53;
  if ( v54 )
    v56 = v53 - v55;
  else
    v56 = v53 + v55;
  *(_DWORD *)v8 = v56;
LABEL_12:
  sub_92E40((int)v26);
  if ( v10 <= 0 )
  {
    if ( v101 <= 0 )
    {
      v43 = v117;
      v86 = v101;
      goto LABEL_36;
    }
    goto LABEL_16;
  }
  for ( i = 0; i != v10; ++i )
  {
    v28 = *(_DWORD *)(v8 + 12) + 24 * i;
    v29 = (void (__fastcall **)(int, int, int, int))((int (__fastcall *)(int, int))loc_16EC88)(v5, dword_4872C4);
    (*v29)(v5, i, v28, a1);
  }
  if ( v101 <= 0 )
  {
    v43 = v117;
    v86 = v101;
LABEL_26:
    v44 = *(_DWORD **)(v8 + 12);
    v45 = 0;
    v46 = 24 * v43;
    while ( 1 )
    {
      while ( 1 )
      {
        v47 = v44[4];
        if ( (unsigned int)(v47 - 9) <= 1 )
          break;
LABEL_27:
        ++v45;
        v44 += 6;
        if ( v10 <= v45 )
          goto LABEL_36;
      }
      if ( v86 > v43 )
      {
        v48 = (int *)((char *)src + v46);
        v49 = *(_DWORD *)((char *)src + v46 + 16);
        v50 = v49 == 5;
        if ( v49 != 5 )
          v50 = v49 == 0;
        if ( !v50 )
        {
          v50 = v47 == 9;
          v59 = *v48;
          v60 = v48[1];
          v61 = v48[2];
          v62 = v48[3];
          v63 = v48 + 4;
          if ( v50 )
            v64 = v44;
          else
            v64 = (_DWORD *)(v8 + 16);
          *v64 = v59;
          v64[1] = v60;
          v64[2] = v61;
          v64[3] = v62;
          v65 = v64 + 4;
          v66 = v63[1];
          *v65 = *v63;
          v65[1] = v66;
          goto LABEL_27;
        }
      }
      if ( v47 == 9 )
      {
        *(_QWORD *)v44 = v43;
        v44[4] = 3;
        goto LABEL_27;
      }
      ++v45;
      *(_QWORD *)(v8 + 16) = v43;
      *(_DWORD *)(v8 + 32) = 3;
      v44 += 6;
      if ( v10 <= v45 )
        goto LABEL_36;
    }
  }
LABEL_16:
  v30 = 0;
  do
  {
    while ( 1 )
    {
      v32 = sub_115FB8(v5, v30);
      if ( !((v10 <= v32) | ((unsigned int)v32 >> 31)) )
        break;
LABEL_20:
      v31 = v101;
      if ( v101 <= ++v30 )
        goto LABEL_25;
    }
    v33 = (int *)((char *)src + 24 * v30);
    v34 = (_DWORD *)(*(_DWORD *)(v8 + 12) + 24 * v32);
    if ( !v33[4] )
    {
      if ( !v34[4] && dword_47AC88 > 0 )
      {
        v57 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v5, v32);
        v58 = (const char *)sub_25AC8C(v5, v108);
        sub_F43B4(&off_46D334, "incomplete CFI data; unspecified registers (e.g., %s) at %s", v57, v58);
      }
      goto LABEL_20;
    }
    v35 = *v33;
    v36 = v33[1];
    v37 = v33[2];
    v38 = v33[3];
    v39 = v33 + 4;
    ++v30;
    *v34 = v35;
    v34[1] = v36;
    v34[2] = v37;
    v34[3] = v38;
    v40 = v34 + 4;
    v31 = v101;
    v41 = v39[1];
    v42 = v101 <= v30;
    *v40 = *v39;
    v40[1] = v41;
  }
  while ( !v42 );
LABEL_25:
  v43 = v117;
  v86 = v31;
  if ( v10 > 0 )
    goto LABEL_26;
LABEL_36:
  if ( v86 > v43 && *((_DWORD *)src + 6 * v43 + 4) == 1 )
    *(_DWORD *)(v8 + 8) = 1;
LABEL_39:
  v51 = (void **)v116;
  if ( v116 )
  {
    v68 = *((_DWORD *)v116 + 8);
    if ( v68 )
    {
      v70 = *(_DWORD *)(v68 + 32);
      if ( v70 )
      {
        v76 = *(_DWORD *)(v70 + 32);
        if ( v76 )
        {
          v79 = *(void **)(v76 + 32);
          if ( v79 )
          {
            sub_1118BC(*(_DWORD *)(v76 + 32));
            sub_33AC04(v79);
          }
          if ( *(_DWORD *)v76 )
            free(*(void **)v76);
          sub_33AC04((void *)v76);
        }
        if ( *(_DWORD *)v70 )
          free(*(void **)v70);
        sub_33AC04((void *)v70);
      }
      if ( *(_DWORD *)v68 )
        free(*(void **)v68);
      sub_33AC04((void *)v68);
    }
    if ( *v51 )
      free(*v51);
    sub_33AC04(v51);
  }
  if ( ptr )
    free(ptr);
  v52 = (void **)v107;
  if ( v107 )
  {
    v69 = *((_DWORD *)v107 + 8);
    if ( v69 )
    {
      v72 = *(_DWORD *)(v69 + 32);
      if ( v72 )
      {
        v77 = *(_DWORD *)(v72 + 32);
        if ( v77 )
        {
          v78 = *(void **)(v77 + 32);
          if ( v78 )
          {
            sub_1118BC(*(_DWORD *)(v77 + 32));
            sub_33AC04(v78);
          }
          if ( *(_DWORD *)v77 )
            free(*(void **)v77);
          sub_33AC04((void *)v77);
        }
        if ( *(_DWORD *)v72 )
          free(*(void **)v72);
        sub_33AC04((void *)v72);
      }
      if ( *(_DWORD *)v69 )
        free(*(void **)v69);
      sub_33AC04((void *)v69);
    }
    if ( *v52 )
      free(*v52);
    sub_33AC04(v52);
  }
  if ( !src )
    return v8;
  free(src);
  return v8;
}
