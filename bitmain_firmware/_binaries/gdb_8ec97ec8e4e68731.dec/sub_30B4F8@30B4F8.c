void *__fastcall sub_30B4F8(int a1, const void *a2, size_t a3, int a4)
{
  int v5; // r0
  char v6; // r9
  unsigned int v10; // r10
  _WORD *v11; // r4
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // r3
  char *i; // r1
  int v17; // t1
  int v18; // r0
  int v19; // r6
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r1
  int v24; // r9
  unsigned int v25; // lr
  int v26; // r1
  bool v27; // cf
  int v28; // r2
  unsigned __int16 v29; // r0
  int v30; // r8
  __int16 v31; // r2
  int v32; // r1
  int v33; // r9
  int v34; // r12
  int v35; // r1
  int v36; // lr
  int v37; // r2
  int v38; // r12
  int v39; // r8
  int v40; // r12
  int v41; // r12
  int v42; // r2
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r8
  int v47; // r1
  int v48; // r8
  int v49; // r1
  int v50; // r1
  int v51; // r0
  int v52; // lr
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r1
  int v57; // r0
  int v58; // r3
  int v59; // r3
  __int16 v60; // lr
  __int16 *v61; // r1
  int v62; // r2
  int v63; // r0
  char *j; // r12
  int v65; // t1
  bool v66; // cc
  int v67; // r8
  int v68; // r2
  __int16 v69; // r3
  int v70; // r8
  int v71; // r11
  int v72; // lr
  int v73; // r8
  char v74; // r3
  int v75; // r3
  int v76; // r0
  int v77; // r0
  void *result; // r0
  unsigned int v79; // r2
  int v80; // r3
  bool v81; // zf
  int v82; // r3
  int v83; // r9
  unsigned __int16 v84; // r3
  int v85; // r12
  int v86; // lr
  int v87; // r2
  int v88; // r1
  int v89; // r12
  int v90; // r2
  int v91; // r3
  _WORD *v92; // r3
  int v93; // lr
  int v94; // r8
  int v95; // r2
  int v96; // r1
  int v97; // lr
  int v98; // r2
  __int16 v99; // r2
  unsigned __int16 *v100; // r2
  int v101; // [sp+4h] [bp-10h]
  int v102; // [sp+8h] [bp-Ch]
  int v103; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 132);
  v6 = (char)a2;
  if ( a2 )
    v6 = 1;
  v10 = a3 + 4;
  if ( v5 <= 0 )
  {
    if ( a3 + 5 >= v10 )
      v83 = v6 & 1;
    else
      v83 = 0;
    if ( !v83 )
    {
      v19 = a1 + 4096;
      v28 = *(_DWORD *)(a1 + 5820);
      v26 = *(__int16 *)(a1 + 5816);
      v11 = (_WORD *)(a1 + 2440);
LABEL_45:
      v84 = a4 + 2;
      if ( v28 <= 13 )
      {
        *(_DWORD *)(v19 + 1724) = v28 + 3;
        *(_WORD *)(v19 + 1720) = v26 | (v84 << v28);
      }
      else
      {
        v85 = *(_DWORD *)(a1 + 20);
        v86 = *(_DWORD *)(a1 + 8);
        v87 = v26 | (v84 << v28);
        *(_WORD *)(v19 + 1720) = v87;
        *(_DWORD *)(a1 + 20) = v85 + 1;
        *(_BYTE *)(v86 + v85) = v87;
        v88 = *(_DWORD *)(a1 + 20);
        v89 = *(_DWORD *)(a1 + 8);
        LOBYTE(v87) = HIBYTE(*(_WORD *)(v19 + 1720));
        *(_DWORD *)(a1 + 20) = v88 + 1;
        *(_BYTE *)(v89 + v88) = v87;
        v90 = *(_DWORD *)(v19 + 1724);
        *(_DWORD *)(v19 + 1724) = v90 - 13;
        *(_WORD *)(v19 + 1720) = (int)v84 >> (16 - v90);
      }
      result = (void *)sub_30AC8C(a1, (int)&off_430104, (int)&unk_43008C);
      goto LABEL_48;
    }
    v19 = a1 + 4096;
    v11 = (_WORD *)(a1 + 2440);
LABEL_56:
    result = sub_30B2DC(a1, a2, a3, a4);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(*(_DWORD *)a1 + 44) == 2 )
  {
    v79 = -201342849;
    v80 = a1;
    do
    {
      v81 = (v79 & 1) == 0;
      v79 >>= 1;
      if ( !v81 && *(_WORD *)(v80 + 148) )
      {
        v82 = 0;
        goto LABEL_38;
      }
      v80 += 4;
    }
    while ( a1 + 128 != v80 );
    if ( !*(_WORD *)(a1 + 184) && !*(_WORD *)(a1 + 188) && !*(_WORD *)(a1 + 200) )
    {
      v100 = (unsigned __int16 *)(a1 + 276);
      while ( 1 )
      {
        v82 = *v100;
        v100 += 2;
        if ( v82 )
          break;
        if ( (unsigned __int16 *)(a1 + 1172) == v100 )
          goto LABEL_38;
      }
    }
    v82 = 1;
LABEL_38:
    *(_DWORD *)(*(_DWORD *)a1 + 44) = v82;
  }
  v101 = a1 + 148;
  sub_30A040((_DWORD *)a1, (int *)(a1 + 2840));
  sub_30A040((_DWORD *)a1, (int *)(a1 + 2852));
  v11 = (_WORD *)(a1 + 2440);
  v12 = sub_30A5B4(a1, a1 + 148, *(_DWORD *)(a1 + 2844));
  v13 = (_DWORD *)sub_30A5B4(v12, a1 + 2440, *(_DWORD *)(a1 + 2856));
  sub_30A040(v13, (int *)(a1 + 2864));
  v14 = 15;
  v15 = 18;
  for ( i = (char *)&unk_43008A; ; --i )
  {
    if ( *(_WORD *)(a1 + 4 * (v14 + 670) + 6) )
    {
      v18 = 3 * (v15 + 1);
      goto LABEL_10;
    }
    if ( --v15 == 2 )
      break;
    v17 = (unsigned __int8)*(i - 1);
    v14 = v17;
  }
  v18 = 9;
LABEL_10:
  v19 = a1 + 4096;
  v20 = *(_DWORD *)(a1 + 5800) + 14 + v18;
  v21 = (unsigned int)(*(_DWORD *)(a1 + 5804) + 10) >> 3;
  v22 = (unsigned int)(v20 + 10) >> 3;
  *(_DWORD *)(a1 + 5800) = v20;
  if ( v22 >= v21 )
    v23 = v21;
  else
    v23 = (unsigned int)(v20 + 10) >> 3;
  if ( v23 >= v10 )
    v24 = v6 & 1;
  else
    v24 = 0;
  if ( v24 )
    goto LABEL_56;
  v25 = *(_DWORD *)(a1 + 136);
  v26 = *(__int16 *)(a1 + 5816);
  v27 = v25 >= 4;
  if ( v25 != 4 )
    v27 = v22 >= v21;
  v28 = *(_DWORD *)(a1 + 5820);
  if ( v27 )
    goto LABEL_45;
  v29 = a4 + 4;
  if ( v28 > 13 )
  {
    v93 = *(_DWORD *)(a1 + 20);
    v94 = *(_DWORD *)(a1 + 8);
    v95 = v26 | (v29 << v28);
    *(_WORD *)(a1 + 5816) = v95;
    *(_DWORD *)(a1 + 20) = v93 + 1;
    *(_BYTE *)(v94 + v93) = v95;
    v96 = *(_DWORD *)(a1 + 20);
    v97 = *(_DWORD *)(a1 + 8);
    LOBYTE(v95) = HIBYTE(*(_WORD *)(a1 + 5816));
    *(_DWORD *)(a1 + 20) = v96 + 1;
    *(_BYTE *)(v97 + v96) = v95;
    v98 = *(_DWORD *)(a1 + 5820);
    v30 = v98 - 13;
    *(_DWORD *)(a1 + 5820) = v98 - 13;
    v31 = (int)v29 >> (16 - v98);
  }
  else
  {
    v30 = v28 + 3;
    *(_DWORD *)(a1 + 5820) = v28 + 3;
    v31 = v26 | (v29 << v28);
  }
  *(_WORD *)(a1 + 5816) = v31;
  v32 = *(_DWORD *)(a1 + 2844);
  v33 = v15 + 1;
  v103 = v32;
  v102 = *(_DWORD *)(a1 + 2856);
  if ( v30 > 11 )
  {
    v34 = *(_DWORD *)(a1 + 20);
    v35 = (unsigned __int16)(v32 - 256);
    v36 = *(_DWORD *)(a1 + 8);
    v37 = v31 | (v35 << v30);
    *(_WORD *)(a1 + 5816) = v37;
    *(_DWORD *)(a1 + 20) = v34 + 1;
    *(_BYTE *)(v36 + v34) = v37;
    v38 = *(_DWORD *)(a1 + 20);
    v39 = *(_DWORD *)(a1 + 8);
    LOBYTE(v37) = HIBYTE(*(_WORD *)(a1 + 5816));
    *(_DWORD *)(a1 + 20) = v38 + 1;
    *(_BYTE *)(v39 + v38) = v37;
    v40 = *(_DWORD *)(a1 + 5820);
    LOBYTE(v37) = 16 - v40;
    v41 = v40 - 11;
    v42 = v35 >> v37;
    *(_DWORD *)(a1 + 5820) = v41;
    *(_WORD *)(a1 + 5816) = v42;
    v42 = (__int16)v42;
    v43 = (unsigned __int16)v102;
    if ( v41 > 11 )
      goto LABEL_24;
LABEL_60:
    v50 = v41 + 5;
    *(_DWORD *)(a1 + 5820) = v41 + 5;
    v99 = v42 | ((_WORD)v43 << v41);
    *(_WORD *)(a1 + 5816) = v99;
    v51 = v99;
    if ( v41 + 5 > 12 )
      goto LABEL_25;
    goto LABEL_61;
  }
  v41 = v30 + 5;
  *(_DWORD *)(a1 + 5820) = v30 + 5;
  v43 = (unsigned __int16)v102;
  v42 = v31 | ((unsigned __int16)(v32 - 256) << v30);
  *(_WORD *)(a1 + 5816) = v42;
  v42 = (__int16)v42;
  if ( v30 + 5 <= 11 )
    goto LABEL_60;
LABEL_24:
  v44 = *(_DWORD *)(a1 + 20);
  v45 = v42 | (v43 << v41);
  v46 = *(_DWORD *)(a1 + 8);
  *(_WORD *)(a1 + 5816) = v45;
  *(_DWORD *)(a1 + 20) = v44 + 1;
  *(_BYTE *)(v46 + v44) = v45;
  v47 = *(_DWORD *)(a1 + 20);
  v48 = *(_DWORD *)(a1 + 8);
  LOBYTE(v45) = HIBYTE(*(_WORD *)(a1 + 5816));
  *(_DWORD *)(a1 + 20) = v47 + 1;
  *(_BYTE *)(v48 + v47) = v45;
  v49 = *(_DWORD *)(a1 + 5820);
  LOBYTE(v45) = 16 - v49;
  v50 = v49 - 11;
  *(_DWORD *)(a1 + 5820) = v50;
  LOWORD(v45) = v43 >> v45;
  *(_WORD *)(a1 + 5816) = v45;
  v51 = (__int16)v45;
  if ( v50 > 12 )
  {
LABEL_25:
    v52 = *(_DWORD *)(a1 + 20);
    v53 = (unsigned __int16)(v15 - 3);
    v54 = *(_DWORD *)(a1 + 8);
    v55 = v51 | (v53 << v50);
    *(_WORD *)(a1 + 5816) = v55;
    *(_DWORD *)(a1 + 20) = v52 + 1;
    *(_BYTE *)(v54 + v52) = v55;
    v56 = *(_DWORD *)(a1 + 20);
    v57 = *(_DWORD *)(a1 + 8);
    LOBYTE(v54) = HIBYTE(*(_WORD *)(a1 + 5816));
    *(_DWORD *)(a1 + 20) = v56 + 1;
    *(_BYTE *)(v57 + v56) = v54;
    v58 = *(_DWORD *)(a1 + 5820);
    LOBYTE(v52) = 16 - v58;
    v59 = v58 - 12;
    *(_DWORD *)(a1 + 5820) = v59;
    v60 = v53 >> v52;
    *(_WORD *)(a1 + 5816) = v60;
    goto LABEL_26;
  }
LABEL_61:
  v59 = v50 + 4;
  *(_DWORD *)(a1 + 5820) = v50 + 4;
  v60 = v51 | (((_WORD)v33 - 4) << v50);
  *(_WORD *)(a1 + 5816) = v60;
LABEL_26:
  v61 = (__int16 *)(a1 + 5816);
  v62 = 16;
  v63 = 0;
  for ( j = (char *)&unk_430078; ; ++j )
  {
    v66 = v59 <= 13;
    v67 = v59 + 3;
    v68 = *(unsigned __int16 *)(a1 + 4 * (v62 + 670) + 6);
    v69 = v60 | ((_WORD)v68 << v59);
    if ( v66 )
    {
      *v61 = v69;
      *(_DWORD *)(a1 + 5820) = v67;
    }
    else
    {
      v70 = *(_DWORD *)(a1 + 20);
      v71 = *(_DWORD *)(a1 + 8);
      *v61 = v69;
      *(_DWORD *)(a1 + 20) = v70 + 1;
      *(_BYTE *)(v71 + v70) = v69;
      v72 = *(_DWORD *)(a1 + 20);
      v73 = *(_DWORD *)(a1 + 8);
      v74 = HIBYTE(*v61);
      *(_DWORD *)(a1 + 20) = v72 + 1;
      *(_BYTE *)(v73 + v72) = v74;
      v75 = *(_DWORD *)(a1 + 5820);
      *v61 = v68 >> (16 - v75);
      *(_DWORD *)(a1 + 5820) = v75 - 13;
    }
    if ( v33 <= ++v63 )
      break;
    v59 = *(_DWORD *)(a1 + 5820);
    v60 = *v61;
    v65 = (unsigned __int8)j[1];
    v62 = v65;
  }
  v76 = sub_30A6EC(a1, v101, v103);
  v77 = sub_30A6EC(v76, a1 + 2440, v102);
  result = (void *)sub_30AC8C(v77, v101, a1 + 2440);
LABEL_48:
  v91 = a1;
  do
  {
    *(_WORD *)(v91 + 148) = 0;
    v91 += 4;
  }
  while ( a1 + 1144 != v91 );
  do
  {
    *v11 = 0;
    v11 += 2;
  }
  while ( (_WORD *)(a1 + 2560) != v11 );
  v92 = (_WORD *)(a1 + 2684);
  do
  {
    *v92 = 0;
    v92 += 2;
  }
  while ( (_WORD *)(a1 + 2760) != v92 );
  *(_WORD *)(a1 + 1172) = 1;
  *(_DWORD *)(v19 + 1708) = 0;
  *(_DWORD *)(v19 + 1704) = 0;
  *(_DWORD *)(v19 + 1712) = 0;
  *(_DWORD *)(v19 + 1696) = 0;
  if ( a4 )
    return (void *)sub_30B0EC(a1);
  return result;
}
