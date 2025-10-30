_DWORD *__fastcall sub_1056A4(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5, size_t a6, void *a7, int a8, int a9)
{
  size_t v12; // r10
  __int64 v13; // r0
  int v14; // r8
  char *v15; // r0
  bool v16; // zf
  char *v17; // r1
  char *v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r3
  _DWORD *i; // r3
  int v23; // r2
  bool v24; // zf
  int v25; // r2
  int v26; // r3
  int v27; // r6
  char v28; // r1
  void *v29; // r0
  void *v30; // r3
  int v31; // r12
  bool v32; // zf
  int v33; // r3
  int v34; // r6
  int v35; // r12
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r9
  _DWORD *v40; // r0
  unsigned int v41; // lr
  _DWORD *v42; // r3
  bool v43; // zf
  char v44; // r10
  int v45; // r3
  unsigned int v46; // r1
  _DWORD *v47; // r3
  int v48; // r2
  int v49; // r0
  int v50; // r0
  int v51; // r7
  int v52; // r3
  char v53; // r1
  _DWORD *v54; // r0
  _DWORD *v55; // r3
  bool v56; // zf
  int v57; // r3
  _DWORD *v58; // r1
  char *v60; // r1
  __int64 v61; // r0
  char *v62; // [sp+0h] [bp-3Ch] BYREF
  struct obstack *v63; // [sp+4h] [bp-38h]
  _DWORD *v64; // [sp+8h] [bp-34h]
  char *src; // [sp+Ch] [bp-30h]
  _DWORD v66[3]; // [sp+10h] [bp-2Ch] BYREF

  v12 = a6;
  v64 = a4;
  v13 = sub_1B7250(a1);
  v14 = v13;
  if ( a5 != -1 )
    *(_DWORD *)(a2[16] + 4) = a5 - *(_DWORD *)a2[16];
  a2[5] = a6;
  if ( !a6 && dword_47B270 && ((int (__fastcall *)(_DWORD, _DWORD))loc_16C5C4)(v13, HIDWORD(v13)) )
  {
    src = (char *)dword_47B270;
    v15 = strchr((const char *)dword_47B270, 58);
    v16 = v15 == 0;
    if ( v15 )
      v15 -= (int)src;
    v17 = src;
    if ( !v16 )
      v12 = (size_t)v15;
    src = (char *)((unsigned int)&v62 >> 3);
    v63 = (struct obstack *)&v62;
    v62 = (char *)&v62 + v12;
    strncpy((char *)&v62, v17, v12);
    v18 = (char *)v63;
    *(_BYTE *)(v12 + 8 * (_DWORD)src) = 0;
    sub_1B141C((int)v66, v18);
    v19 = v66[0];
    if ( v66[0]
      || (v60 = (char *)v63,
          *(_BYTE *)(v12 + 8 * (_DWORD)src) = 95,
          v62[1] = 0,
          sub_1B141C((int)v66, v60),
          (v19 = v66[0]) != 0) )
    {
      v20 = *(__int16 *)(v19 + 22);
      v21 = *(_DWORD *)(v19 + 8);
      if ( v20 == -1 )
      {
        v61 = sub_94700((int)"dbxread.c", 2084, "Section index is uninitialized", v21);
        return (_DWORD *)sub_105B24(v61, HIDWORD(v61));
      }
      a2[5] = *(_DWORD *)(*(_DWORD *)(v66[1] + 144) + 4 * v20) + v21 + *(_DWORD *)(v19 + 24);
    }
    dword_47B270 = 0;
  }
  if ( ((int (__fastcall *)(int))loc_16C5C4)(v14) )
  {
    if ( a9 )
    {
      a2[4] = a2[5];
    }
    else
    {
      for ( i = *(_DWORD **)(a1 + 24); i; i = (_DWORD *)*i )
      {
        if ( !i[5] )
        {
          v23 = i[4];
          v24 = v23 == 0;
          if ( v23 )
            v24 = a2 == i;
          if ( !v24 )
            i[5] = a2[4];
        }
      }
    }
  }
  sub_1D047C(a1, a2);
  a2[8] = a8;
  if ( a8 )
  {
    v25 = *(_DWORD *)(a1 + 64);
    v26 = *(_DWORD *)(a1 + 60);
    v27 = 4 * a8;
    v63 = (struct obstack *)(a1 + 48);
    v28 = v25 - v26;
    if ( 4 * a8 > (unsigned int)(v25 - v26) )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), v27);
      v26 = *(_DWORD *)(a1 + 60);
      v25 = *(_DWORD *)(a1 + 64);
    }
    v29 = *(void **)(a1 + 56);
    v30 = (void *)(v26 + v27);
    v31 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 60) = v30;
    v32 = v30 == v29;
    if ( v30 == v29 )
      v28 = *(_BYTE *)(a1 + 88);
    v33 = ((unsigned int)v30 + v31) & ~v31;
    *(_DWORD *)(a1 + 60) = v33;
    if ( v32 )
      *(_BYTE *)(a1 + 88) = v28 | 2;
    if ( v33 - *(_DWORD *)(a1 + 52) > (unsigned int)(v25 - *(_DWORD *)(a1 + 52)) )
    {
      v33 = v25;
      *(_DWORD *)(a1 + 60) = v25;
    }
    *(_DWORD *)(a1 + 56) = v33;
    a2[7] = v29;
    memcpy(v29, a7, v27);
    if ( (int)v64 > 0 )
      goto LABEL_33;
  }
  else
  {
    v57 = (int)v64;
    a2[7] = 0;
    if ( v57 > 0 )
    {
      v63 = (struct obstack *)(a1 + 48);
LABEL_33:
      v34 = 0;
      src = (char *)(a3 - 4);
      while ( 1 )
      {
        v49 = *((_DWORD *)src + 1);
        src += 4;
        v50 = sub_1D0584(v49, a1);
        v37 = *(_DWORD *)(a1 + 64);
        v51 = v50;
        v52 = *(_DWORD *)(a1 + 60);
        v53 = v37 - v52;
        if ( (unsigned int)(v37 - v52) <= 0x1B )
        {
          obstack_newchunk(v63, 28);
          v52 = *(_DWORD *)(a1 + 60);
          v37 = *(_DWORD *)(a1 + 64);
        }
        v54 = *(_DWORD **)(a1 + 56);
        v55 = (_DWORD *)(v52 + 28);
        v35 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 60) = v55;
        v56 = v55 == v54;
        if ( v55 == v54 )
          v53 = *(_BYTE *)(a1 + 88);
        v39 = ~v35;
        v38 = ((unsigned int)v55 + v35) & ~v35;
        if ( v56 )
          v53 |= 2u;
        *(_DWORD *)(a1 + 60) = v38;
        if ( v56 )
          *(_BYTE *)(a1 + 88) = v53;
        v36 = *(_DWORD *)(a1 + 52);
        v41 = v37 - v36;
        v44 = v38 - v36;
        if ( v38 - v36 > (unsigned int)(v37 - v36) )
        {
          *(_DWORD *)(a1 + 60) = v37;
          *(_DWORD *)(a1 + 56) = v37;
          *(_DWORD *)(v51 + 64) = v54;
          *(_DWORD *)(v51 + 20) = 0;
          *(_DWORD *)(v51 + 16) = 0;
          v54[1] = 0;
          *v54 = 0;
        }
        else
        {
          v44 = v37 - v38;
          *(_DWORD *)(a1 + 56) = v38;
          *(_DWORD *)(v51 + 64) = v54;
          *(_DWORD *)(v51 + 20) = 0;
          *(_DWORD *)(v51 + 16) = 0;
          v54[1] = 0;
          *v54 = 0;
          if ( (unsigned int)(v37 - v38) > 3 )
          {
            v40 = (_DWORD *)v38;
            goto LABEL_36;
          }
        }
        obstack_newchunk(v63, 4);
        v35 = *(_DWORD *)(a1 + 72);
        v36 = *(_DWORD *)(a1 + 52);
        v37 = *(_DWORD *)(a1 + 64);
        v38 = *(_DWORD *)(a1 + 60);
        v39 = ~v35;
        v40 = *(_DWORD **)(a1 + 56);
        v41 = v37 - v36;
LABEL_36:
        v42 = (_DWORD *)(v38 + 4);
        ++v34;
        v43 = v42 == v40;
        *(_DWORD *)(a1 + 60) = v42;
        if ( v42 == v40 )
          v44 = *(_BYTE *)(a1 + 88);
        v45 = ((unsigned int)v42 + v35) & v39;
        v46 = v45 - v36;
        if ( v43 )
          *(_BYTE *)(a1 + 88) = v44 | 2;
        if ( v46 <= v41 )
          v37 = v45;
        v47 = v64;
        *(_DWORD *)(a1 + 60) = v37;
        *(_DWORD *)(a1 + 56) = v37;
        *(_DWORD *)(v51 + 28) = v40;
        *v40 = a2;
        *(_BYTE *)(v51 + 52) = 0;
        v48 = a2[15];
        *(_DWORD *)(v51 + 48) = 0;
        *(_DWORD *)(v51 + 44) = 0;
        *(_DWORD *)(v51 + 40) = 0;
        *(_DWORD *)(v51 + 36) = 0;
        *(_DWORD *)(v51 + 56) = 0;
        *(_DWORD *)(v51 + 60) = v48;
        *(_DWORD *)(v51 + 32) = 1;
        if ( (int)v47 <= v34 )
          return a2;
      }
    }
    if ( !v57 && !a2[10] && !a2[12] && !dword_47B274 )
    {
      v58 = a2;
      a2 = v64;
      sub_1D075C(a1, v58);
    }
  }
  return a2;
}
