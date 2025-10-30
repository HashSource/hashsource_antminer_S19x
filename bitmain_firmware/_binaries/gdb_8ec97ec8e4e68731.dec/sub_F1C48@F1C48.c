int __fastcall sub_F1C48(const char **a1, unsigned int a2, int a3, int a4)
{
  int v6; // r12
  int v9; // lr
  int v10; // r1
  int v11; // r4
  int v12; // r5
  _WORD *v13; // r3
  int v14; // r2
  int v15; // r0
  bool v16; // zf
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int v21; // r0
  const char *v22; // r2
  _BOOL4 v23; // r3
  int v24; // r4
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // r3
  __int64 v33; // r4
  int v34; // r0
  int v35; // r3
  int v36; // r0
  int v37; // r4
  int v38; // r4
  int v39; // r9
  int v40; // r0
  _DWORD **v41; // r3
  int v42; // r3
  _BYTE *v43; // r2
  _BYTE *v44; // r1
  const char *v45; // r4
  int v46; // r3
  int v47; // r2
  unsigned int v48; // r7
  char v49; // r3
  int v50; // r6
  int v51; // r1
  int v52; // r3
  char *v53; // r2
  char *v54; // r3
  int v55; // r0
  bool v56; // zf
  int v57; // r3
  _DWORD *v58; // r9
  bool v59; // zf
  int v60; // lr
  int v61; // r8
  int v62; // r10
  int v63; // r12
  char *v64; // r3
  int *v65; // t1
  int v66; // r7
  char v67; // r0
  __int64 v68; // r6
  int v69; // r10
  size_t v70; // r11
  void *v71; // r0
  int v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r0
  int v76; // r1
  bool v77; // zf
  int v78; // r3
  int v79; // r1
  _DWORD *v80; // [sp+Ch] [bp-70h]
  unsigned int v81; // [sp+10h] [bp-6Ch]
  char *v82; // [sp+10h] [bp-6Ch]
  int v83; // [sp+14h] [bp-68h]
  _DWORD **v84; // [sp+18h] [bp-64h]
  int v85; // [sp+18h] [bp-64h]
  int v86; // [sp+1Ch] [bp-60h]
  int v87; // [sp+20h] [bp-5Ch]
  int v88; // [sp+24h] [bp-58h]
  _BYTE v89[24]; // [sp+2Ch] [bp-50h] BYREF
  _BYTE v90[24]; // [sp+44h] [bp-38h] BYREF
  _DWORD v91[4]; // [sp+5Ch] [bp-20h] BYREF
  int v92; // [sp+6Ch] [bp-10h]

  v6 = dword_4789F4;
  if ( (a2 & ~dword_4789F4) != 0 )
  {
    v9 = dword_4789F8 & a2;
    v10 = (a2 >> dword_478A04) ^ dword_4789F4 & (a2 ^ (a2 >> dword_478A04));
    if ( (dword_4789F8 & a2) == 1 << dword_478A08 )
    {
      v26 = sub_F1C48(a1, v10, a3, a4);
      return sub_1700C0(v26);
    }
    else if ( v9 == 2 << dword_478A08 )
    {
      v36 = sub_F1C48(a1, v10, a3, a4);
      return sub_170358(v36);
    }
    else if ( v9 == 3 << dword_478A08 )
    {
      v12 = *(unsigned __int16 *)(a3 + 8);
      if ( !*(_DWORD *)a3 )
        a1[2] = 0;
      v13 = (_WORD *)(a3 + 8);
      if ( v12 )
      {
        v14 = 0;
        do
        {
          v15 = (unsigned __int16)v13[1];
          v16 = ++v14 == 3;
          if ( v14 != 3 )
            v16 = v15 == 0;
          *v13++ = v15;
        }
        while ( !v16 );
      }
      *v13 = 0;
      v17 = sub_F1C48(a1, v10, a3, a4);
      v18 = sub_1780C4(a4);
      v19 = sub_171928(0, *(_DWORD *)(v18 + 12), 0, 0, v12 - 1, (v12 - 1) >> 31);
      return sub_172124(0, v17, v19);
    }
    else
    {
      return 0;
    }
  }
  if ( (int)a1[2] > 0 )
  {
    v21 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
    {
      v22 = a1[4];
      v23 = v21 >= 0;
      if ( v22 == (const char *)15 )
        v23 = 0;
      if ( ((unsigned int)(v22 - 10) & 0xFFFFFFFD) == 0 )
        v23 = 0;
      if ( v23 )
        return sub_F1470(v21);
      if ( dword_47AC88 > 0 )
      {
        sub_F43B4(&off_46D334, "Symbol table entry for %s has bad tagndx value", *a1);
        v6 = dword_4789F4;
      }
    }
  }
  v24 = a2 & v6;
  v25 = sub_1B7250(a4);
  switch ( v24 )
  {
    case 0:
    case 1:
      return *(_DWORD *)sub_1780C4(a4);
    case 2:
      return *(_DWORD *)(sub_1780C4(a4) + 4);
    case 3:
      return *(_DWORD *)(sub_1780C4(a4) + 8);
    case 4:
      return *(_DWORD *)(sub_1780C4(a4) + 12);
    case 5:
      if ( a1[4] == (const char *)18
        && (v37 = *(unsigned __int16 *)(a3 + 6), v37 > ((int (__fastcall *)(int))loc_165EE0)(v25)) )
      {
        return *(_DWORD *)(sub_1780C4(a4) + 20);
      }
      else
      {
        return *(_DWORD *)(sub_1780C4(a4) + 16);
      }
    case 6:
      return *(_DWORD *)(sub_1780C4(a4) + 48);
    case 7:
      return *(_DWORD *)(sub_1780C4(a4) + 52);
    case 8:
      v27 = (int)a1[1];
      if ( a1[2] == (const char *)1 )
        return sub_F1884(v27, *(unsigned __int16 *)(a3 + 6), *(_DWORD *)(a3 + 12), a4);
      v28 = sub_F1470(v27);
      v29 = *(_DWORD *)(v28 + 24);
      v11 = v28;
      LOWORD(v28) = *(_WORD *)(v29 + 2);
      *(_BYTE *)v29 = 3;
      *(_DWORD *)(v29 + 28) = &word_3B4A2C;
      *(_DWORD *)(v29 + 8) = 0;
      *(_WORD *)(v29 + 2) = v28 & 0xFC7F | 0x80;
      *(_DWORD *)(v29 + 12) = 0;
      *(_DWORD *)(v11 + 20) = 0;
      *(_DWORD *)(v29 + 24) = 0;
      *(_WORD *)(v29 + 4) = 0;
      return v11;
    case 9:
      v30 = (int)a1[1];
      if ( a1[2] == (const char *)1 )
      {
        v11 = sub_F1884(v30, *(unsigned __int16 *)(a3 + 6), *(_DWORD *)(a3 + 12), a4);
        v32 = *(_DWORD *)(v11 + 24);
      }
      else
      {
        v31 = sub_F1470(v30);
        v32 = *(_DWORD *)(v31 + 24);
        v11 = v31;
        LOWORD(v31) = *(_WORD *)(v32 + 2);
        *(_DWORD *)(v32 + 28) = &word_3B4A2C;
        *(_DWORD *)(v32 + 8) = 0;
        *(_DWORD *)(v32 + 12) = 0;
        *(_WORD *)(v32 + 2) = v31 & 0xFC7F | 0x80;
        *(_DWORD *)(v11 + 20) = 0;
        *(_DWORD *)(v32 + 24) = 0;
        *(_WORD *)(v32 + 4) = 0;
      }
      *(_BYTE *)v32 = 4;
      return v11;
    case 10:
      v33 = *(_QWORD *)(a1 + 1);
      if ( HIDWORD(v33) != 1 )
      {
        v34 = sub_F1470(v33);
        v35 = *(_DWORD *)(v34 + 24);
        v11 = v34;
        *(_BYTE *)v35 = 5;
        *(_DWORD *)(v35 + 8) = 0;
        *(_DWORD *)(v35 + 12) = 0;
        *(_DWORD *)(v34 + 20) = 0;
        *(_DWORD *)(v35 + 24) = 0;
        *(_WORD *)(v35 + 4) = 0;
        return v11;
      }
      v39 = 0;
      v86 = *(unsigned __int16 *)(a3 + 6);
      v81 = *(_DWORD *)(a3 + 12);
      v88 = sub_1B7250(a4);
      v40 = sub_F1470(v33);
      if ( dword_478980 )
        LOWORD(v41) = -30488;
      else
        LOWORD(v41) = -30480;
      HIWORD(v41) = 71;
      v84 = v41;
      v87 = v40;
      v80 = *v41;
      if ( *v41 )
        v42 = (*v41)[1];
      else
        v42 = 0;
      v83 = v42;
      break;
    case 12:
      return *(_DWORD *)(sub_1780C4(a4) + 28);
    case 13:
      return *(_DWORD *)(sub_1780C4(a4) + 32);
    case 14:
      return *(_DWORD *)(sub_1780C4(a4) + 36);
    case 15:
      if ( a1[4] == (const char *)18
        && (v38 = *(unsigned __int16 *)(a3 + 6), v38 > ((int (__fastcall *)(int))loc_165EE0)(v25)) )
      {
        return *(_DWORD *)(sub_1780C4(a4) + 44);
      }
      else
      {
        return *(_DWORD *)(sub_1780C4(a4) + 40);
      }
    case 16:
      return *(_DWORD *)(sub_1780C4(a4) + 56);
    default:
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "Unexpected type for symbol %s", *a1);
      return *(_DWORD *)sub_1780C4(a4);
  }
  while ( 1 )
  {
    v43 = v90;
    v44 = v89;
    if ( dword_478988 >= v81 || dword_478988 >= (unsigned int)dword_478A00 )
      break;
    ((void (__fastcall *)(_DWORD *, _BYTE *, _BYTE *))loc_F1614)(v91, v89, v90);
    v45 = (const char *)v91[0];
    v43 = (_BYTE *)*(unsigned __int8 *)v91[0];
    if ( v43 == (_BYTE *)*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a4 + 36) + 4) + 24) )
      v45 = (const char *)(v91[0] + 1);
    if ( v92 == 16 )
    {
      v69 = sub_220854(a4);
      v70 = strlen(v45);
      v71 = *(void **)(a4 + 60);
      if ( *(_DWORD *)(a4 + 64) - (int)v71 < v70 + 1 )
      {
        obstack_newchunk((struct obstack *)(a4 + 48), v70 + 1);
        v71 = *(void **)(a4 + 60);
      }
      memcpy(v71, v45, v70);
      v72 = *(_DWORD *)(a4 + 60);
      ++v39;
      v73 = v72 + v70 + 1;
      *(_DWORD *)(a4 + 60) = v73;
      *(_BYTE *)(v72 + v70) = 0;
      v74 = *(_DWORD *)(a4 + 60);
      v75 = *(_DWORD *)(a4 + 56);
      v76 = *(_DWORD *)(a4 + 64);
      v77 = v75 == v74;
      if ( v75 == v74 )
        LOBYTE(v73) = *(_BYTE *)(a4 + 88);
      v78 = (v74 + *(_DWORD *)(a4 + 72)) & ~*(_DWORD *)(a4 + 72);
      *(_DWORD *)(a4 + 60) = v78;
      if ( v77 )
        *(_BYTE *)(a4 + 88) = v73 | 2;
      if ( v78 - *(_DWORD *)(a4 + 52) > (unsigned int)(v76 - *(_DWORD *)(a4 + 52)) )
      {
        *(_DWORD *)(a4 + 60) = v76;
        v78 = v76;
      }
      v79 = v91[3];
      *(_DWORD *)(a4 + 56) = v78;
      *(_DWORD *)v69 = v75;
      *(_DWORD *)(v69 + 8) = v79;
      *(_BYTE *)(v69 + 32) = 9;
      *(_DWORD *)(v69 + 12) = 0;
      sub_E5AA8((_DWORD *)v69, v84);
    }
    else if ( v92 == 102 )
    {
      break;
    }
  }
  v46 = v86;
  v11 = v87;
  if ( !v86 )
    v46 = ((int (__fastcall *)(int, _BYTE *, _BYTE *))loc_165E68)(v88, v44, v43) / 8;
  v47 = *(_DWORD *)(v87 + 24);
  *(_DWORD *)(v87 + 20) = v46;
  v48 = 24 * v39;
  v49 = *(_BYTE *)(v47 + 2);
  *(_WORD *)(v47 + 4) = v39;
  *(_BYTE *)v47 = 5;
  if ( (v49 & 0x10) != 0 )
  {
    v50 = *(_DWORD *)(v47 + 16);
    v51 = *(_DWORD *)(v50 + 64);
    v52 = *(_DWORD *)(v50 + 60);
    if ( v51 - v52 < v48 )
    {
      obstack_newchunk((struct obstack *)(v50 + 48), 24 * v39);
      v52 = *(_DWORD *)(v50 + 60);
      v51 = *(_DWORD *)(v50 + 64);
    }
    v53 = *(char **)(v50 + 56);
    v54 = (char *)(v52 + v48);
    v55 = *(_DWORD *)(v50 + 72);
    *(_DWORD *)(v50 + 60) = v54;
    v56 = v54 == v53;
    v82 = v53;
    if ( v54 == v53 )
      LOBYTE(v53) = *(_BYTE *)(v50 + 88);
    v57 = (unsigned int)&v54[v55] & ~v55;
    *(_DWORD *)(v50 + 60) = v57;
    if ( v56 )
      *(_BYTE *)(v50 + 88) = (unsigned __int8)v53 | 2;
    if ( v57 - *(_DWORD *)(v50 + 52) > (unsigned int)(v51 - *(_DWORD *)(v50 + 52)) )
    {
      v57 = v51;
      *(_DWORD *)(v50 + 60) = v51;
    }
    *(_DWORD *)(v50 + 56) = v57;
  }
  else
  {
    v82 = (char *)sub_93028(24 * v39);
  }
  v58 = *v84;
  v59 = *v84 == 0;
  v85 = *(_DWORD *)(v87 + 24);
  if ( !v59 )
    v51 = 0;
  *(_DWORD *)(*(_DWORD *)(v87 + 24) + 24) = v82;
  if ( v59 )
  {
LABEL_98:
    *(_BYTE *)(v85 + 1) |= 1u;
    return v11;
  }
  while ( 1 )
  {
    v60 = v58[1];
    if ( v80 == v58 )
      break;
    if ( v60 > 0 )
    {
      v61 = 0;
      goto LABEL_91;
    }
LABEL_96:
    v58 = (_DWORD *)*v58;
    if ( !v58 )
      goto LABEL_97;
  }
  if ( v83 >= v60 )
    goto LABEL_97;
  v61 = v83;
LABEL_91:
  v62 = v51;
  v63 = (int)&v58[v61 + 1];
  v64 = &v82[24 * v51];
  do
  {
    v65 = *(int **)(v63 + 4);
    v63 += 4;
    ++v51;
    v64 += 24;
    v66 = *v65;
    v65[6] = v87;
    v67 = *(v64 - 16);
    *((_DWORD *)v64 - 2) = v66;
    v68 = *((_QWORD *)v65 + 1);
    *(v64 - 16) = v67 & 0xF1 | 2;
    *((_QWORD *)v64 - 3) = v68;
    if ( v68 < 0 )
      HIDWORD(v33) = 0;
    *((_DWORD *)v64 - 4) &= 0xFu;
  }
  while ( v60 > v51 - v62 + v61 );
  if ( v80 != v58 )
    goto LABEL_96;
LABEL_97:
  if ( HIDWORD(v33) )
    goto LABEL_98;
  return v11;
}
