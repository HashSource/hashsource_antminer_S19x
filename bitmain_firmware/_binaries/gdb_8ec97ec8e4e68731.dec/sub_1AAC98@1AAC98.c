int __fastcall sub_1AAC98(int a1, int a2, unsigned int a3, int *a4, int a5, const char *a6)
{
  int v6; // r10
  int v9; // r4
  unsigned __int8 v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  bool v16; // zf
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r3
  char *v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r0
  unsigned __int8 i; // r2
  int v27; // r4
  int v28; // r4
  int v29; // r4
  int v30; // r4
  int v31; // r4
  int v33; // r0
  int v34; // r0
  int v35; // r0
  char *v36; // r8
  const char *v37; // r2
  int v38; // r3
  bool v39; // zf
  int v40; // r0
  int v41; // r3
  int v42; // r3
  int v43; // r3
  char v44; // r2
  int v45; // r10
  int v46; // r1
  int v47; // r3
  char v48; // r2
  void *v49; // r8
  void *v50; // r3
  int v51; // r0
  bool v52; // zf
  int v53; // r3
  int v54; // r0
  int v55; // r3
  int v56; // r0
  int v57; // r3
  int v58; // r0
  int v59; // r3
  int v60; // r0
  const char *v61; // r2
  const char *v62; // r0
  int v63; // r0
  size_t v64; // r0
  int v65; // r3
  unsigned int v66; // r12
  char *v67; // r2
  void *v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // lr
  int v72; // r0
  bool v73; // zf
  int v74; // r2
  const char *v75; // r0
  int v76; // r0
  int v77; // r11
  size_t v78; // r3
  void *v79; // r0
  char *v80; // r2
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r1
  int v85; // r0
  bool v86; // zf
  int v87; // r3
  int v88; // r0
  void *v89; // [sp+10h] [bp-24h]
  char *v90; // [sp+10h] [bp-24h]
  char *v91; // [sp+10h] [bp-24h]
  _BYTE *v92; // [sp+10h] [bp-24h]
  void *v93; // [sp+10h] [bp-24h]
  char *na; // [sp+14h] [bp-20h]
  size_t n; // [sp+14h] [bp-20h]
  char *srca; // [sp+18h] [bp-1Ch]
  _DWORD *src; // [sp+18h] [bp-1Ch]
  int v98; // [sp+1Ch] [bp-18h]
  unsigned __int8 v99; // [sp+24h] [bp-10h] BYREF
  unsigned __int8 v100; // [sp+25h] [bp-Fh]
  unsigned __int8 v101; // [sp+26h] [bp-Eh]
  unsigned __int8 v102; // [sp+27h] [bp-Dh]
  int v103; // [sp+28h] [bp-Ch] BYREF
  char *s2[2]; // [sp+2Ch] [bp-8h] BYREF

  v6 = 0;
  v103 = 0;
  if ( (_UNKNOWN *)a3 == (_UNKNOWN *)((char *)&loc_FFFFC + 3) )
    return sub_1A769C(6, dword_487ABC);
  if ( *(_DWORD *)(*(_DWORD *)(dword_487AA4 + 152) + 72 * a1 + 48) <= a3 )
  {
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "bad aux index at symbol %s", a6);
    return sub_1A769C(6, dword_487ABC);
  }
  v9 = a2 + 4 * a3;
  (*(void (__fastcall **)(int, int, unsigned __int8 *))(dword_487AA8 + 72))(a5, v9, &v99);
  v103 = sub_1A769C(v99 >> 2, dword_487ABC);
  v10 = v99;
  if ( !v103 )
  {
    switch ( v99 >> 2 )
    {
      case 0xC:
        v6 = 3;
        break;
      case 0xD:
        v6 = 4;
        break;
      case 0xE:
        v6 = 5;
        break;
      case 0xF:
      case 0x14:
        v6 = 14;
        break;
      case 0x10:
        v6 = 12;
        break;
      case 0x11:
        v6 = 11;
        break;
      default:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "cannot map ECOFF basic type 0x%x for %s", v99 >> 2, a6);
        return sub_1A769C(6, dword_487ABC);
    }
  }
  if ( (v99 & 1) == 0 )
  {
    v11 = v9 + 4;
    v12 = v99 & 0xFC;
    goto LABEL_7;
  }
  v33 = v9 + 4;
  if ( a5 )
    v34 = sub_2AB5EC(v33);
  else
    v34 = sub_2AB5F8(v33);
  v10 = v99;
  if ( a4 )
    *a4 = v34;
  v12 = v10 & 0xFC;
  if ( !a4 )
  {
    switch ( v12 )
    {
      case 16:
        if ( v34 == 8 )
        {
          v88 = sub_1A769C(2, dword_487ABC);
          v10 = v99;
          v103 = v88;
          v12 = v99 & 0xFC;
          goto LABEL_50;
        }
        break;
      case 20:
        if ( v34 == 8 )
        {
          v60 = sub_1A769C(3, dword_487ABC);
          v10 = v99;
          v103 = v60;
          v12 = v99 & 0xFC;
          goto LABEL_50;
        }
        break;
      case 56:
        v11 = v9 + 8;
        goto LABEL_21;
    }
    if ( dword_47AC88 > 0 )
    {
      sub_F43B4(&off_46D334, "can't handle TIR fBitfield for %s", a6);
      v10 = v99;
      v12 = v99 & 0xFC;
    }
  }
LABEL_50:
  v11 = v9 + 8;
LABEL_7:
  if ( v12 != 80 )
    goto LABEL_12;
  (*(void (__fastcall **)(int, int, char **))(dword_487AA8 + 76))(a5, v11, s2);
  if ( ((int)s2[0] & 0xFFF) == 0xFFF )
  {
    v35 = v11 + 4;
    if ( a5 )
      v13 = sub_2AB5EC(v35);
    else
      v13 = sub_2AB5F8(v35);
    if ( v13 != -1 )
    {
      v11 += 8;
      goto LABEL_11;
    }
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "unable to cross ref btIndirect for %s", a6);
    return sub_1A769C(6, dword_487ABC);
  }
  v11 += 4;
  v13 = (int)s2[0] & 0xFFF;
LABEL_11:
  v14 = sub_1A721C(a1, v13);
  v15 = sub_1AAC98(
          954437177 * ((v14 - *(_DWORD *)(dword_487AA4 + 152)) >> 3),
          *(_DWORD *)(dword_487AA4 + 116) + 4 * *(_DWORD *)(v14 + 44));
  v10 = v99;
  v103 = v15;
  v12 = v99 & 0xFC;
LABEL_12:
  v16 = v12 == 56;
  if ( v12 != 56 )
    v16 = v12 == 68;
  v17 = v10 & 0xF8;
  v18 = v16;
  if ( v17 == 48 )
    v19 = v18 | 1;
  else
    v19 = v18;
  if ( v19 )
  {
LABEL_21:
    v20 = sub_1AB9FC(a1, v11, &v103, v6, s2, a5, a6);
    v21 = v103;
    v11 += 4 * v20;
    if ( !v103 )
    {
      v21 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, v6, 0);
      v103 = v21;
    }
    v22 = *(char **)(v21 + 24);
    v23 = *v22;
    v24 = (unsigned __int8)v23;
    if ( (unsigned int)(unsigned __int8)v23 - 1 <= 1 )
    {
      do
      {
        v25 = *((_DWORD *)v22 + 5);
        v22 = *(char **)(v25 + 24);
        v23 = *v22;
        v24 = (unsigned __int8)v23;
      }
      while ( (unsigned int)(unsigned __int8)v23 - 1 <= 1 );
      v103 = v25;
    }
    if ( (unsigned int)(v24 - 3) > 2 )
    {
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "unexpected type code for %s", a6);
LABEL_29:
      v12 = v99 & 0xFC;
      goto LABEL_30;
    }
    if ( v23 == 5 )
    {
      if ( v6 == 5 )
        goto LABEL_61;
    }
    else if ( v6 != 5 )
    {
LABEL_61:
      v36 = *(char **)(v103 + 24);
      if ( *v36 != v6 )
        *v36 = v6;
      v37 = s2[0];
      v38 = (unsigned __int8)*s2[0];
      v39 = v38 == 46;
      if ( v38 != 46 )
        v39 = v38 == 0;
      if ( v39 )
      {
        *((_DWORD *)v36 + 3) = 0;
      }
      else
      {
        v75 = (const char *)*((_DWORD *)v36 + 3);
        if ( !v75 || (v90 = s2[0], v76 = strcmp(v75, s2[0]), v37 = v90, v76) )
        {
          v77 = dword_487ABC;
          v91 = (char *)v37;
          v78 = strlen(v37);
          v79 = *(void **)(dword_487ABC + 60);
          v80 = v91;
          if ( v78 + 1 > *(_DWORD *)(dword_487ABC + 64) - (int)v79 )
          {
            v93 = (void *)v78;
            obstack_newchunk((struct obstack *)(dword_487ABC + 48), v78 + 1);
            v79 = *(void **)(v77 + 60);
            v80 = s2[0];
            v78 = (size_t)v93;
          }
          v92 = (_BYTE *)v78;
          memcpy(v79, v80, v78);
          v81 = *(_DWORD *)(v77 + 60);
          v82 = (int)&v92[v81 + 1];
          *(_DWORD *)(v77 + 60) = v82;
          v92[v81] = 0;
          v83 = *(_DWORD *)(v77 + 60);
          v84 = *(_DWORD *)(v77 + 56);
          v85 = *(_DWORD *)(v77 + 64);
          v86 = v83 == v84;
          if ( v83 == v84 )
            LOBYTE(v82) = *(_BYTE *)(v77 + 88);
          v87 = (v83 + *(_DWORD *)(v77 + 72)) & ~*(_DWORD *)(v77 + 72);
          *(_DWORD *)(v77 + 60) = v87;
          if ( v86 )
            *(_BYTE *)(v77 + 88) = v82 | 2;
          if ( v87 - *(_DWORD *)(v77 + 52) > (unsigned int)(v85 - *(_DWORD *)(v77 + 52)) )
          {
            v87 = v85;
            *(_DWORD *)(v77 + 60) = v85;
          }
          *(_DWORD *)(v77 + 56) = v87;
          *((_DWORD *)v36 + 3) = v84;
        }
      }
      goto LABEL_29;
    }
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "guessed tag type of %s incorrectly", a6);
    goto LABEL_61;
  }
LABEL_30:
  if ( v12 == 64 )
  {
    v40 = sub_1AB9FC(a1, v11, &v103, v6, s2, a5, a6);
    v41 = v103;
    v11 += 4 * v40;
    if ( !v103 )
    {
      v41 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, v6, 0);
      v103 = v41;
    }
    v89 = *(void **)(v41 + 24);
    if ( *(_BYTE *)v89 == 12 )
    {
      if ( v6 != 12 )
      {
        if ( dword_47AC88 > 0 )
        {
          sub_F43B4(&off_46D334, "guessed tag type of %s incorrectly", a6);
          v89 = *(void **)(v103 + 24);
        }
        *(_BYTE *)v89 = v6;
      }
      v61 = s2[0];
      v62 = (const char *)*((_DWORD *)v89 + 2);
      if ( !v62 || (na = s2[0], v63 = strcmp(v62, s2[0]), v61 = na, v63) )
      {
        srca = (char *)v61;
        v98 = dword_487ABC;
        v64 = strlen(v61);
        v65 = dword_487ABC;
        n = v64;
        v66 = v64 + 1;
        v67 = srca;
        v68 = *(void **)(dword_487ABC + 60);
        if ( v66 > *(_DWORD *)(dword_487ABC + 64) - (int)v68 )
        {
          obstack_newchunk((struct obstack *)(dword_487ABC + 48), v66);
          v65 = v98;
          v67 = s2[0];
          v68 = *(void **)(v98 + 60);
        }
        src = (_DWORD *)v65;
        memcpy(v68, v67, n);
        v69 = src[15];
        src[15] = v69 + n + 1;
        *(_BYTE *)(v69 + n) = 0;
        v70 = src[15];
        v71 = src[14];
        v72 = src[16];
        v73 = v70 == v71;
        if ( v70 == v71 )
          LOBYTE(v69) = *((_BYTE *)src + 88);
        v74 = (v70 + src[18]) & ~src[18];
        src[15] = v74;
        if ( v73 )
          *((_BYTE *)src + 88) = v69 | 2;
        if ( v74 - src[13] > (unsigned int)(v72 - src[13]) )
        {
          v74 = v72;
          src[15] = v72;
        }
        src[14] = v74;
        *((_DWORD *)v89 + 2) = v71;
      }
    }
    else if ( dword_47AC88 > 0 )
    {
      sub_F43B4(&off_46D334, "unexpected type code for %s", a6);
    }
    v42 = v99 & 0xFC;
    if ( v42 != 60 )
      goto LABEL_77;
    goto LABEL_75;
  }
  if ( v12 == 60 )
  {
LABEL_75:
    v11 += 4 * sub_1AB9FC(a1, v11, &v103, v6, s2, a5, a6);
    if ( !v103 )
    {
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "unable to cross ref btTypedef for %s", a6);
      v103 = sub_1A769C(6, dword_487ABC);
    }
    v42 = v99 & 0xFC;
LABEL_77:
    if ( v42 == 64 )
    {
      v43 = *(_DWORD *)(v103 + 24);
      v44 = *(_BYTE *)(v43 + 2);
      *(_WORD *)(v43 + 4) = 0;
      if ( (v44 & 0x10) != 0 )
      {
        v45 = *(_DWORD *)(v43 + 16);
        v46 = *(_DWORD *)(v45 + 64);
        v47 = *(_DWORD *)(v45 + 60);
        v48 = v46 - v47;
        if ( (unsigned int)(v46 - v47) <= 0x27 )
        {
          obstack_newchunk((struct obstack *)(v45 + 48), 40);
          v47 = *(_DWORD *)(v45 + 60);
          v46 = *(_DWORD *)(v45 + 64);
        }
        v49 = *(void **)(v45 + 56);
        v50 = (void *)(v47 + 40);
        v51 = *(_DWORD *)(v45 + 72);
        *(_DWORD *)(v45 + 60) = v50;
        v52 = v50 == v49;
        if ( v50 == v49 )
          v48 = *(_BYTE *)(v45 + 88);
        v53 = ((unsigned int)v50 + v51) & ~v51;
        *(_DWORD *)(v45 + 60) = v53;
        if ( v52 )
          *(_BYTE *)(v45 + 88) = v48 | 2;
        if ( v53 - *(_DWORD *)(v45 + 52) > (unsigned int)(v46 - *(_DWORD *)(v45 + 52)) )
        {
          v53 = v46;
          *(_DWORD *)(v45 + 60) = v46;
        }
        *(_DWORD *)(v45 + 56) = v53;
        memset(v49, 0, 0x28u);
      }
      else
      {
        v49 = sub_930CC(0x28u);
      }
      *(_DWORD *)(*(_DWORD *)(v103 + 24) + 24) = v49;
      if ( a5 )
      {
        v58 = sub_2AB5EC(v11);
        v59 = *(_DWORD *)(*(_DWORD *)(v103 + 24) + 24);
        *(_DWORD *)(v59 + 8) = v58;
        *(_DWORD *)(v59 + 12) = 0;
        v56 = sub_2AB5EC(v11 + 4);
      }
      else
      {
        v54 = sub_2AB5F8(v11);
        v55 = *(_DWORD *)(*(_DWORD *)(v103 + 24) + 24);
        *(_DWORD *)(v55 + 8) = v54;
        *(_DWORD *)(v55 + 12) = 0;
        v56 = sub_2AB5F8(v11 + 4);
      }
      v11 += 8;
      v57 = *(_DWORD *)(*(_DWORD *)(v103 + 24) + 24);
      *(_DWORD *)(v57 + 24) = v56;
      *(_DWORD *)(v57 + 28) = 0;
    }
  }
  for ( i = v101; (v101 & 0xF) != 0; i = v101 )
  {
    v31 = v11 + 4 * sub_1AB774(a1, &v103, i & 0xF, v11, a5, a6);
    if ( (v101 & 0xF0) == 0 )
      break;
    v27 = v31 + 4 * sub_1AB774(a1, &v103, v101 >> 4, v31, a5, a6);
    if ( (v102 & 0xF) == 0 )
      break;
    v28 = v27 + 4 * sub_1AB774(a1, &v103, v102 & 0xF, v27, a5, a6);
    if ( (v102 & 0xF0) == 0 )
      break;
    v29 = v28 + 4 * sub_1AB774(a1, &v103, v102 >> 4, v28, a5, a6);
    if ( (v100 & 0xF) == 0 )
      break;
    v30 = v29 + 4 * sub_1AB774(a1, &v103, v100 & 0xF, v29, a5, a6);
    if ( (v100 & 0xF0) == 0 )
      break;
    v11 = v30 + 4 * sub_1AB774(a1, &v103, v100 >> 4, v30, a5, a6) + 4;
    if ( (v99 & 2) == 0 )
      return v103;
    (*(void (__fastcall **)(int))(dword_487AA8 + 72))(a5);
  }
  if ( (v99 & 2) != 0 && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "illegal TIR continued for %s", a6);
  return v103;
}
