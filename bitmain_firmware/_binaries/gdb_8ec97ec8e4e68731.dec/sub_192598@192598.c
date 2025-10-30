void __fastcall sub_192598(int a1, int *a2)
{
  int v4; // r5
  int v5; // r2
  int v6; // r5
  int v7; // r5
  int v8; // r6
  const char *v9; // r0
  int v10; // r3
  int v11; // r8
  int v12; // r6
  int v13; // r3
  _DWORD *v14; // r0
  __int64 v15; // r0
  _DWORD **v16; // r5
  char *v17; // r11
  int v18; // r0
  int v19; // r4
  int v20; // r7
  int v21; // r6
  int v22; // r5
  int v23; // r0
  char v24; // r2
  _DWORD *v25; // r1
  int v26; // lr
  int v27; // r3
  int v28; // r9
  size_t v29; // r4
  int v30; // r0
  int v31; // r12
  size_t v32; // r3
  int v33; // r6
  bool v34; // zf
  int v35; // r3
  int v36; // r1
  int v37; // r3
  unsigned int v38; // r4
  _DWORD *v39; // r2
  _DWORD *v40; // r3
  int v41; // r0
  int v42; // r7
  bool v43; // zf
  int v44; // r3
  _DWORD *v45; // r6
  unsigned int v46; // r10
  unsigned int v47; // r9
  int v48; // r1
  char v49; // r2
  int v50; // r3
  int v51; // r0
  bool v52; // zf
  int v53; // r3
  unsigned int v54; // r2
  unsigned int v55; // r0
  unsigned int *v56; // r4
  int v57; // r5
  int v58; // r0
  _DWORD *v59; // r0
  unsigned int v60; // r1
  int v61; // r1
  int v62; // r0
  const char *v63; // r1
  size_t v64; // r3
  void *v65; // r0
  const char *v66; // r1
  _DWORD *v67; // r4
  _DWORD *v68; // r0
  char v69; // r1
  _DWORD *v70; // r5
  _DWORD *v71; // r0
  _DWORD *v72; // r3
  _DWORD *v73; // r6
  int v74; // r2
  int v75; // r1
  bool v76; // zf
  _DWORD *v77; // r4
  void *v78; // r0
  void *v79; // r0
  void *v80; // r0
  void *v81; // r0
  int v82; // r4
  _DWORD *v83; // [sp+0h] [bp-60h]
  _BYTE *src; // [sp+4h] [bp-5Ch]
  void *srca; // [sp+4h] [bp-5Ch]
  const char *srcb; // [sp+4h] [bp-5Ch]
  void *srcc; // [sp+4h] [bp-5Ch]
  int v88; // [sp+8h] [bp-58h]
  _DWORD *ptr; // [sp+Ch] [bp-54h]
  int v90; // [sp+10h] [bp-50h]
  _DWORD *v91; // [sp+18h] [bp-48h]
  _DWORD *v92; // [sp+1Ch] [bp-44h]
  int *v93; // [sp+20h] [bp-40h]
  void *v94; // [sp+24h] [bp-3Ch]
  int v95; // [sp+50h] [bp-10h] BYREF
  int v96; // [sp+54h] [bp-Ch]
  _DWORD v97[2]; // [sp+58h] [bp-8h] BYREF

  if ( *a2 )
  {
    v4 = *(_DWORD *)sub_192548(*a2);
LABEL_3:
    v5 = *(__int16 *)(v4 + 22);
    v6 = *(_DWORD *)(v4 + 8);
    if ( v5 != -1 )
    {
      v7 = v6 + *(_DWORD *)(*(_DWORD *)(*a2 + 144) + 4 * v5);
      if ( dword_4879D8 )
      {
        v8 = *(_DWORD *)sub_242FC8(*a2);
        v9 = (const char *)sub_25AC8C(a1, v7);
        sub_2594B0(v8, "jit_breakpoint_re_set_internal, breakpoint_addr = %s\n", v9);
      }
      if ( a2[1] != v7 )
      {
        if ( a2[2] )
          ((void (*)(void))loc_DB0B0)();
        a2[1] = v7;
        a2[2] = sub_D0440(a1, v7);
      }
      return;
    }
    sub_94700((int)"jit.c", 1071, "Section index is uninitialized");
    goto LABEL_20;
  }
  sub_1B2488((int)&v95, "__jit_debug_register_code");
  v4 = v95;
  if ( !v95 )
    return;
  v10 = *(__int16 *)(v95 + 22);
  if ( v10 != -1 )
  {
    v11 = v96;
    if ( !(*(_DWORD *)(v95 + 8) + *(_DWORD *)(*(_DWORD *)(v96 + 144) + 4 * v10)) )
      return;
    sub_1B141C((int)v97, "__jit_debug_descriptor");
    v12 = v97[0];
    if ( !v97[0] )
      return;
    v13 = *(__int16 *)(v97[0] + 22);
    if ( v13 == -1 )
      goto LABEL_21;
    if ( !(*(_DWORD *)(v97[0] + 8) + *(_DWORD *)(*(_DWORD *)(v97[1] + 144) + 4 * v13)) )
      return;
    v14 = (_DWORD *)sub_192548(v11);
    *v14 = v4;
    v14[1] = v12;
    *a2 = v11;
    goto LABEL_3;
  }
LABEL_20:
  sub_94700((int)"jit.c", 1053, "Section index is uninitialized");
LABEL_21:
  v15 = sub_94700((int)"jit.c", 1059, "Section index is uninitialized");
  v16 = (_DWORD **)HIDWORD(v15);
  v94 = (void *)HIDWORD(v15);
  v93 = *(int **)(v15 + 28);
  v17 = (char *)sub_9836C(0xD8u);
  v18 = ((int (__fastcall *)(char *, _DWORD, const char *, int))loc_1B6EDC)(v17, 0, "<< JIT compiled code >>", 64);
  v19 = *((_DWORD *)v17 + 10);
  *(_DWORD *)(v19 + 52) = sub_16F654(v18);
  sub_1B28A0(v17);
  ptr = *v16;
  if ( *v16 )
  {
    do
    {
      v20 = ptr[1];
      v92 = (_DWORD *)ptr[4];
      v21 = sub_212FE0(v17, ptr[3]);
      v88 = v21;
      v22 = v20 + 2;
      sub_212E50(v21, ptr[3]);
      sub_213174(v21);
      v23 = sub_21A6D8(v21);
      v25 = (_DWORD *)ptr[2];
      v90 = v23;
      *(_DWORD *)(v21 + 28) = 0;
      if ( v25 )
      {
        v26 = *((_DWORD *)v17 + 16);
        v27 = *((_DWORD *)v17 + 15);
        v28 = *(_DWORD *)(v21 + 12);
        v29 = 8 * *v25 + 4;
        if ( v29 > v26 - v27 )
        {
          obstack_newchunk((struct obstack *)(v17 + 48), 8 * *v25 + 4);
          v27 = *((_DWORD *)v17 + 15);
          v26 = *((_DWORD *)v17 + 16);
          v30 = *(_DWORD *)(v21 + 12);
          v24 = (char)ptr;
          v25 = (_DWORD *)ptr[2];
        }
        else
        {
          v30 = *(_DWORD *)(v21 + 12);
        }
        v31 = *((_DWORD *)v17 + 14);
        v32 = v27 + v29;
        v33 = *((_DWORD *)v17 + 18);
        *((_DWORD *)v17 + 15) = v32;
        v34 = v32 == v31;
        if ( v32 == v31 )
          v24 = v17[88];
        v35 = (v32 + v33) & ~v33;
        *((_DWORD *)v17 + 15) = v35;
        if ( v34 )
          v17[88] = v24 | 2;
        if ( v35 - *((_DWORD *)v17 + 13) > (unsigned int)(v26 - *((_DWORD *)v17 + 13)) )
        {
          v35 = v26;
          *((_DWORD *)v17 + 15) = v26;
        }
        *((_DWORD *)v17 + 14) = v35;
        *(_DWORD *)(v28 + 8) = v31;
        memcpy(*(void **)(v30 + 8), v25, v29);
      }
      v36 = *((_DWORD *)v17 + 16);
      v37 = *((_DWORD *)v17 + 15);
      v38 = 4 * (v20 + 4);
      if ( v38 > v36 - v37 )
      {
        obstack_newchunk((struct obstack *)(v17 + 48), 4 * (v20 + 4));
        v37 = *((_DWORD *)v17 + 15);
        v36 = *((_DWORD *)v17 + 16);
      }
      v39 = (_DWORD *)*((_DWORD *)v17 + 14);
      v40 = (_DWORD *)(v37 + v38);
      v41 = *((_DWORD *)v17 + 18);
      v42 = v20 + 1;
      *((_DWORD *)v17 + 15) = v40;
      v43 = v40 == v39;
      v91 = v39;
      if ( v40 == v39 )
        LOBYTE(v39) = v17[88];
      v44 = ((unsigned int)v40 + v41) & ~v41;
      *((_DWORD *)v17 + 15) = v44;
      if ( v43 )
        v17[88] = (unsigned __int8)v39 | 2;
      if ( v44 - *((_DWORD *)v17 + 13) > (unsigned int)(v36 - *((_DWORD *)v17 + 13)) )
      {
        v44 = v36;
        *((_DWORD *)v17 + 15) = v36;
      }
      v45 = (_DWORD *)*ptr;
      *((_DWORD *)v17 + 14) = v44;
      v46 = v45[3];
      v47 = v45[4];
      *(_DWORD *)(v88 + 32) = v91;
      v91[1] = 0;
      *v91 = v22;
      if ( v42 > 1 )
      {
        v83 = &v91[v38 / 4];
        do
        {
          v56 = sub_C26B8((int)(v17 + 48), v36);
          v57 = sub_220854(v17);
          v58 = sub_1B7250(v17);
          srca = (void *)((int (__fastcall *)(int, int, int, char *))loc_177328)(v58, 10, 8, "void");
          v59 = sub_10B2B0((int)(v17 + 48), v90, 0);
          v60 = v45[4];
          *v56 = v45[3];
          v56[4] = (unsigned int)v59;
          v56[1] = v60;
          v61 = *(_DWORD *)(v88 + 12);
          *(_BYTE *)(v57 + 32) = 81;
          ((void (__fastcall *)(int, int))loc_2209F8)(v57, v61);
          v62 = sub_170358((int)srca);
          v63 = (const char *)v45[5];
          *(_DWORD *)(v57 + 24) = v62;
          *(_DWORD *)(v57 + 8) = v56;
          srcb = v63;
          v64 = strlen(v63);
          v65 = (void *)*((_DWORD *)v17 + 15);
          v66 = srcb;
          if ( *((_DWORD *)v17 + 16) - (int)v65 < v64 + 1 )
          {
            srcc = (void *)v64;
            obstack_newchunk((struct obstack *)(v17 + 48), v64 + 1);
            v65 = (void *)*((_DWORD *)v17 + 15);
            v66 = (const char *)v45[5];
            v64 = (size_t)srcc;
          }
          src = (_BYTE *)v64;
          memcpy(v65, v66, v64);
          v48 = *((_DWORD *)v17 + 15);
          --v42;
          *((_DWORD *)v17 + 15) = &src[v48 + 1];
          v49 = 0;
          src[v48] = 0;
          v50 = *((_DWORD *)v17 + 15);
          v36 = *((_DWORD *)v17 + 14);
          v51 = *((_DWORD *)v17 + 16);
          v52 = v36 == v50;
          if ( v36 == v50 )
            v49 = v17[88];
          v53 = (v50 + *((_DWORD *)v17 + 18)) & ~*((_DWORD *)v17 + 18);
          *((_DWORD *)v17 + 15) = v53;
          if ( v52 )
            v17[88] = v49 | 2;
          v54 = v56[1];
          if ( v53 - *((_DWORD *)v17 + 13) > (unsigned int)(v51 - *((_DWORD *)v17 + 13)) )
          {
            *((_DWORD *)v17 + 15) = v51;
            v53 = v51;
          }
          v55 = *v56;
          *((_DWORD *)v17 + 14) = v53;
          *(_DWORD *)v57 = v36;
          if ( v46 >= v55 )
            v46 = v55;
          if ( v47 < v54 )
            v47 = v54;
          v56[2] = v57;
          *(v83 - 1) = v56;
          v45[2] = v56;
          --v83;
          v45 = (_DWORD *)*v45;
        }
        while ( v42 != 1 );
      }
      v67 = sub_C2754((int)(v17 + 48), v36);
      v68 = sub_10B2B0((int)(v17 + 48), v90, 0);
      v67[3] = 0;
      v67[4] = v68;
      *v67 = v46;
      v67[1] = v47;
      v91[2] = v67;
      ((void (__fastcall *)(_DWORD *, int))loc_C27F4)(v67, v88);
      v70 = sub_C26B8((int)(v17 + 48), v69);
      v71 = sub_10B2B0((int)(v17 + 48), v90, 0);
      v72 = ptr;
      v73 = (_DWORD *)*ptr;
      v70[3] = v67;
      v70[4] = v71;
      *v70 = v46;
      v70[1] = v47;
      if ( v73 )
        v72 = v73;
      v91[3] = v70;
      if ( v73 )
      {
        do
        {
          v74 = v72[1];
          v75 = v72[2];
          v72 = (_DWORD *)*v72;
          v76 = v74 == 0;
          if ( v74 )
            v74 = *(_DWORD *)(v74 + 8);
          else
            *(_DWORD *)(v75 + 12) = v70;
          if ( !v76 )
            *(_DWORD *)(v75 + 12) = v74;
        }
        while ( v72 );
      }
      v77 = (_DWORD *)*v73;
      do
      {
        v78 = (void *)v73[5];
        if ( v78 )
          free(v78);
        v79 = v73;
        v73 = v77;
        free(v79);
      }
      while ( v77 );
      v80 = (void *)ptr[2];
      if ( v80 )
        free(v80);
      v81 = (void *)ptr[3];
      if ( v81 )
        free(v81);
      free(ptr);
      ptr = v92;
    }
    while ( v92 );
  }
  v82 = *v93;
  *(_DWORD *)(sub_192548((int)v17) + 8) = v82;
  free(v94);
}
