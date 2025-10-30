_DWORD *__fastcall sub_E4918(int a1, _DWORD *a2, char *a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  int v12; // r8
  int v13; // r6
  char v14; // r1
  _DWORD *v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r10
  int v19; // r3
  int v20; // r3
  int *v21; // r3
  int v22; // r1
  int *v23; // r2
  unsigned int v24; // r1
  unsigned int v25; // r3
  const char *v26; // r2
  char **v27; // r4
  bool v28; // zf
  char *v29; // r3
  bool v30; // zf
  char *v31; // r3
  bool v32; // zf
  int v33; // r2
  char *chunk_limit; // r0
  char *next_free; // r3
  char v36; // r2
  char *object_base; // r1
  char *v38; // r3
  bool v39; // zf
  char *v40; // r3
  _DWORD *result; // r0
  unsigned int v42; // r1
  unsigned int v43; // r2
  int v44; // r0
  const char *v45; // r2
  bool v46; // cf
  unsigned int v47; // r1
  unsigned int v48; // r2
  const char *v49; // r0
  const char *v50; // r4
  const char *v51; // r0
  int v52; // r0
  int v53; // r4
  int v54; // r0
  int v55; // r2
  unsigned int v56; // r3
  char v57; // r1
  int v58; // r2
  __int64 v59; // r0
  void *v60; // r12
  void *v61; // r3
  int v62; // lr
  bool v63; // zf
  int v64; // r3
  int v65; // r0
  int v66; // r2
  int v67; // r8
  int v68; // r4
  int v69; // r12
  char v70; // lr
  bool v71; // zf
  int v72; // r12
  bool v73; // r1
  struct obstack *v74; // [sp+Ch] [bp-28h]
  int v75; // [sp+10h] [bp-24h]
  const char *v76; // [sp+14h] [bp-20h]
  _DWORD *v77; // [sp+14h] [bp-20h]
  int v78; // [sp+14h] [bp-20h]
  int v79; // [sp+14h] [bp-20h]
  const char *v80; // [sp+18h] [bp-1Ch]
  int v81; // [sp+18h] [bp-1Ch]
  _DWORD *v82; // [sp+18h] [bp-1Ch]
  const char *v83; // [sp+1Ch] [bp-18h]
  unsigned int v84; // [sp+1Ch] [bp-18h]
  _BYTE v85[16]; // [sp+24h] [bp-10h] BYREF

  v12 = *(_DWORD *)dword_4788DC;
  v13 = *(_DWORD *)dword_4788DC + 48;
  v74 = (struct obstack *)v13;
  v75 = sub_1B7250(*(_DWORD *)dword_4788DC);
  if ( !a7 )
  {
    v15 = sub_C26B8(v13, v14);
    v16 = *(_DWORD *)(dword_4788DC + 28);
    if ( a1 )
      goto LABEL_3;
LABEL_69:
    if ( a8 )
    {
      v15[4] = sub_10B25C(v16);
      sub_10B4B8();
    }
    else
    {
      v15[4] = sub_10B0A4(v74, v16, *a2);
    }
    *v15 = a5;
    *(_QWORD *)(v15 + 1) = a6;
    goto LABEL_4;
  }
  v15 = sub_C2754(v13, v14);
  v16 = *(_DWORD *)(dword_4788DC + 28);
  if ( !a1 )
    goto LABEL_69;
LABEL_3:
  v17 = sub_10B2B0(v74, v16, *a2);
  v18 = *(_DWORD *)(a1 + 24);
  v15[4] = v17;
  *v15 = a5;
  v19 = *(_DWORD *)(v18 + 24);
  v15[1] = a6;
  *(_DWORD *)(a1 + 8) = v15;
  v20 = *(__int16 *)(v19 + 4);
  v15[2] = a1;
  if ( v20 <= 0 )
  {
    v52 = sub_10B510(v17, v85);
    if ( v52 )
    {
      v77 = a2;
      v53 = 0;
      do
      {
        if ( (*(_BYTE *)(v52 + 33) & 2) != 0 )
          ++v53;
        v52 = sub_10B51C(v85);
      }
      while ( v52 );
      v81 = v53;
      v54 = v53;
      v28 = v53 == 0;
      a2 = v77;
      if ( !v28 )
      {
        v55 = *(_DWORD *)(v18 + 24);
        v56 = 24 * v54;
        v57 = *(_BYTE *)(v55 + 2);
        *(_WORD *)(v55 + 4) = v54;
        if ( (v57 & 0x10) != 0 )
        {
          v58 = *(_DWORD *)(v55 + 16);
          v59 = *(_QWORD *)(v58 + 60);
          if ( HIDWORD(v59) - (int)v59 < v56 )
          {
            v84 = v56;
            v79 = v58;
            obstack_newchunk((struct obstack *)(v58 + 48), v56);
            v58 = v79;
            v56 = v84;
            v59 = *(_QWORD *)(v79 + 60);
          }
          v60 = *(void **)(v58 + 56);
          v61 = (void *)(v59 + v56);
          v62 = *(_DWORD *)(v58 + 72);
          *(_DWORD *)(v58 + 60) = v61;
          v63 = v61 == v60;
          if ( v61 == v60 )
            LOBYTE(v59) = *(_BYTE *)(v58 + 88);
          v64 = ((unsigned int)v61 + v62) & ~v62;
          *(_DWORD *)(v58 + 60) = v64;
          if ( v63 )
            *(_BYTE *)(v58 + 88) = v59 | 2;
          if ( v64 - *(_DWORD *)(v58 + 52) > (unsigned int)(HIDWORD(v59) - *(_DWORD *)(v58 + 52)) )
          {
            v64 = HIDWORD(v59);
            *(_DWORD *)(v58 + 60) = HIDWORD(v59);
          }
          *(_DWORD *)(v58 + 56) = v64;
        }
        else
        {
          v60 = sub_93028(24 * v54);
        }
        v65 = v15[4];
        *(_DWORD *)(*(_DWORD *)(v18 + 24) + 24) = v60;
        v66 = sub_10B510(v65, v85);
        v78 = v12;
        v67 = v81;
        v82 = a2;
        v68 = 0;
        while ( 1 )
        {
          v71 = v66 == 0;
          if ( v66 )
            v71 = v67 == v68;
          v72 = 3 * v68;
          v73 = v71;
          if ( v71 )
            break;
          if ( (*(_BYTE *)(v66 + 33) & 2) != 0 )
          {
            ++v68;
            v69 = *(_DWORD *)(*(_DWORD *)(v18 + 24) + 24) + 8 * v72;
            v70 = *(_BYTE *)(v69 + 8);
            *(_DWORD *)(v69 + 12) = *(_DWORD *)(v66 + 24);
            *(_BYTE *)(v69 + 8) = v70 & 0xFE | v73;
          }
          v66 = sub_10B51C(v85);
        }
        v12 = v78;
        a2 = v82;
      }
    }
  }
LABEL_4:
  if ( a4 )
    ((void (__fastcall *)(int, _DWORD *, int))loc_1B6C20)(v12, v15, a4);
  v21 = (int *)*a2;
  if ( *a2 )
  {
    v22 = dword_478930;
    while ( 1 )
    {
      v23 = (int *)*v21;
      *v21 = v22;
      v22 = (int)v21;
      if ( !v23 )
        break;
      v21 = v23;
    }
    dword_478930 = (int)v21;
  }
  v24 = v15[1];
  v25 = *v15;
  *a2 = 0;
  if ( v24 < v25 )
  {
    if ( a1 )
    {
      if ( dword_47AC88 > 0 )
      {
        if ( dword_46D448 )
          v26 = (const char *)sub_21B3C4(a1);
        else
          v26 = *(const char **)a1;
        sub_F43B4(&off_46D334, "block end address less than block start address in %s (patched it)", v26);
        v25 = *v15;
      }
    }
    else if ( dword_47AC88 > 0 )
    {
      v50 = (const char *)sub_25AC8C(v75, v24);
      v51 = (const char *)sub_25AC8C(v75, *v15);
      sub_F43B4(&off_46D334, "block end address %s less than block start address %s (patched it)", v50, v51);
      v25 = *v15;
    }
    v15[1] = v25;
  }
  v27 = (char **)dword_478934;
  v28 = dword_478934 == 0;
  if ( dword_478934 )
    v28 = dword_478934 == (_DWORD)a3;
  if ( !v28 )
  {
    while ( 1 )
    {
      v31 = v27[1];
      if ( !*((_DWORD *)v31 + 3) )
        break;
      v29 = *v27;
      v30 = a3 == *v27;
      if ( a3 != *v27 )
        v30 = v29 == 0;
      if ( v30 )
        goto LABEL_34;
LABEL_27:
      v27 = (char **)v29;
    }
    if ( *((_DWORD *)v31 + 2) )
    {
LABEL_30:
      *((_DWORD *)v31 + 3) = v15;
      v29 = *v27;
      v32 = a3 == *v27;
      if ( a3 != *v27 )
        v32 = v29 == 0;
      if ( v32 )
        goto LABEL_34;
      goto LABEL_27;
    }
    v42 = *(_DWORD *)v31;
    v43 = *v15;
    if ( *(_DWORD *)v31 >= *v15 )
    {
      if ( *((_DWORD *)v31 + 1) <= v15[1] )
        goto LABEL_30;
      v44 = dword_47AC88;
      if ( a1 )
        goto LABEL_58;
    }
    else
    {
      v44 = dword_47AC88;
      if ( a1 )
      {
LABEL_58:
        if ( v44 > 0 )
        {
          if ( dword_46D448 )
            v45 = (const char *)sub_21B3C4(a1);
          else
            v45 = *(const char **)a1;
          sub_F43B4(&off_46D334, "inner block not inside outer block in %s", v45);
          v31 = v27[1];
          v43 = *v15;
          v42 = *(_DWORD *)v31;
        }
LABEL_63:
        v46 = v42 >= v43;
        v47 = *((_DWORD *)v31 + 1);
        if ( !v46 )
          *(_DWORD *)v31 = v43;
        v48 = v15[1];
        if ( v47 > v48 )
          *((_DWORD *)v31 + 1) = v48;
        goto LABEL_30;
      }
    }
    if ( v44 > 0 )
    {
      v83 = (const char *)sub_25AC8C(v75, v42);
      v80 = (const char *)sub_25AC8C(v75, *((_DWORD *)v27[1] + 1));
      v76 = (const char *)sub_25AC8C(v75, *v15);
      v49 = (const char *)sub_25AC8C(v75, v15[1]);
      sub_F43B4(&off_46D334, "inner block (%s-%s) not inside outer block (%s-%s)", v83, v80, v76, v49);
      v31 = v27[1];
      v43 = *v15;
      v42 = *(_DWORD *)v31;
    }
    goto LABEL_63;
  }
  v27 = 0;
LABEL_34:
  if ( a7 )
  {
    sub_C2630((int)v15, dword_4788F8, v74);
    v33 = dword_478934;
    dword_4788F8 = 0;
    if ( dword_478934 )
      goto LABEL_36;
  }
  else
  {
    sub_C2630((int)v15, dword_4788EC, v74);
    v33 = dword_478934;
    dword_4788EC = 0;
    if ( dword_478934 )
      goto LABEL_36;
  }
  obstack_begin(&stru_478938, v33, v33, (void *(*)(int))sub_93028, sub_E47BC);
LABEL_36:
  chunk_limit = stru_478938.chunk_limit;
  next_free = stru_478938.next_free;
  v36 = LOBYTE(stru_478938.chunk_limit) - LOBYTE(stru_478938.next_free);
  if ( (unsigned int)(stru_478938.chunk_limit - stru_478938.next_free) <= 7 )
  {
    obstack_newchunk(&stru_478938, 8);
    next_free = stru_478938.next_free;
    chunk_limit = stru_478938.chunk_limit;
  }
  object_base = stru_478938.object_base;
  v38 = next_free + 8;
  v39 = v38 == stru_478938.object_base;
  if ( v38 == stru_478938.object_base )
    v36 = *((_BYTE *)&stru_478938 + 40);
  v40 = (char *)((unsigned int)&v38[stru_478938.alignment_mask] & ~stru_478938.alignment_mask);
  stru_478938.next_free = v40;
  if ( v39 )
    *((_BYTE *)&stru_478938 + 40) = v36 | 2;
  if ( (char *)(v40 - (char *)stru_478938.chunk) > (char *)(chunk_limit - (char *)stru_478938.chunk) )
  {
    v40 = chunk_limit;
    stru_478938.next_free = chunk_limit;
  }
  stru_478938.object_base = v40;
  if ( v27 )
    v40 = *v27;
  result = v15;
  if ( !v27 )
    v40 = (char *)dword_478934;
  *((_DWORD *)object_base + 1) = v15;
  if ( v27 )
    *(_DWORD *)object_base = v40;
  else
    dword_478934 = (int)object_base;
  if ( v27 )
    *v27 = object_base;
  else
    *(_DWORD *)object_base = v40;
  return result;
}
