int __fastcall sub_32C3B0(int a1, int a2, signed __int64 a3, unsigned __int8 a4, int *a5)
{
  int v5; // r9
  int v7; // lr
  unsigned __int64 v8; // r6
  int v9; // r12
  char v10; // r8
  int v11; // r5
  char v12; // r12
  int v13; // r6
  unsigned __int64 v14; // r10
  int v15; // r1
  int v17; // r5
  int v18; // r3
  int v19; // r0
  int *v20; // r0
  int v21; // r6
  unsigned __int16 *v22; // r8
  unsigned __int16 *v23; // r7
  unsigned __int16 *v24; // r0
  unsigned __int64 v25; // r2
  int v26; // r12
  unsigned __int16 *v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // r0
  int v31; // r1
  unsigned __int64 v32; // r2
  bool v33; // cc
  unsigned __int64 v34; // r0
  int v36; // r2
  int v37; // r9
  char v38; // r7
  int v39; // r9
  int v40; // r1
  int v41; // r3
  bool v42; // zf
  int v43; // r3
  int v44; // r3
  bool v45; // cc
  int v46; // r5
  int v47; // r8
  int v48; // r12
  int v49; // r3
  int v50; // r0
  int v51; // r3
  int v52; // r0
  int v53; // r3
  bool v54; // cc
  int v55; // r6
  bool v56; // cc
  size_t v57; // r0
  unsigned __int16 *v58; // r0
  int v59; // r3
  _BOOL4 v60; // r2
  int v61; // r2
  unsigned int v62; // r3
  int v63; // r5
  int v64; // r1
  int v65; // r3
  int v66; // r3
  char v67; // r3
  int v68; // r6
  unsigned __int64 v69; // r2
  bool v70; // cc
  int *v71; // [sp+10h] [bp-64h]
  int v72; // [sp+14h] [bp-60h]
  int v73; // [sp+18h] [bp-5Ch]
  int v74; // [sp+1Ch] [bp-58h]
  int v75; // [sp+1Ch] [bp-58h]
  int v76; // [sp+20h] [bp-54h]
  int v77; // [sp+24h] [bp-50h]
  int v78; // [sp+2Ch] [bp-48h] BYREF
  char v79; // [sp+30h] [bp-44h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 8);
  v7 = *(unsigned __int8 *)(a3 + 8);
  HIDWORD(v8) = a4;
  v71 = (int *)HIDWORD(a3);
  v9 = v7 ^ a4;
  v10 = v5 ^ v9;
  if ( ((v5 | v7) & 0x70) != 0 )
  {
    v11 = ((unsigned __int8)v5 | (unsigned __int8)v7) & 0x30;
    if ( (((unsigned __int8)v5 | (unsigned __int8)v7) & 0x30) != 0 )
    {
      v11 = 0;
      sub_32AC0C(a1, a2, a3, (int *)HIDWORD(a3), a5);
    }
    else
    {
      if ( (v5 & 0x40) != 0 )
      {
        if ( (v7 & 0x40) != 0 && (((unsigned __int8)v5 ^ (unsigned __int8)v9) & 0x80) != 0 )
        {
          *a5 |= 0x80u;
          goto LABEL_71;
        }
        v12 = v5 & 0x80;
      }
      else
      {
        v12 = v9 & 0x80;
      }
      *(_BYTE *)(a1 + 8) = v12 | 0x40;
      *(_DWORD *)(a1 + 4) = 0;
      v11 = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
    }
    goto LABEL_71;
  }
  v13 = *(unsigned __int16 *)(a2 + 10);
  v14 = __PAIR64__(a3, a2);
  v15 = *(_DWORD *)a2;
  v74 = *(_DWORD *)(a2 + 4);
  v17 = *(_DWORD *)(a3 + 4);
  v72 = *(_DWORD *)a3;
  if ( !v13 && v15 == 1 && (v5 & 0x70) == 0 )
  {
    *(_BYTE *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 4) = v17;
    v78 = 0;
    sub_328A00(a1, (int *)HIDWORD(a3), (unsigned __int16 *)(a3 + 10), v72, &v78, a5);
    v36 = *(unsigned __int16 *)(a1 + 10);
    v37 = *(_DWORD *)(a1 + 4);
    v38 = a4 ^ *(_BYTE *)(a1 + 8);
    *(_BYTE *)(a1 + 8) = v38;
    v39 = v74 - v37;
    if ( v36 || *(_DWORD *)a1 != 1 || (v38 & 0x70) != 0 )
    {
      if ( v39 < 0 )
      {
        v40 = *(_DWORD *)a1;
        v41 = *v71;
        if ( *(_DWORD *)a1 - v39 <= *v71
          || (v39 = v40 - v41, v42 = v40 == v41, *a5 |= 0x800u, v40 = *(_DWORD *)a1, !v42) )
        {
          v40 = sub_32845C((char *)(a1 + 10), v40, -v39);
        }
        v43 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v40;
        *(_DWORD *)(a1 + 4) = v43 + v39;
      }
    }
    else
    {
      if ( v39 < 0 )
        *(_DWORD *)(a1 + 4) = v74;
      if ( v10 < 0 )
      {
        if ( v71[3] == 6 )
          v67 = 0x80;
        else
          v67 = 0;
        *(_BYTE *)(a1 + 8) = v67;
      }
    }
LABEL_98:
    sub_329598((_DWORD *)a1, v71, &v78, a5);
    v11 = 0;
    goto LABEL_71;
  }
  LODWORD(a3) = *(unsigned __int16 *)(a3 + 10);
  v73 = *(_DWORD *)HIDWORD(a3);
  if ( !(_DWORD)a3 && v72 == 1 )
  {
    if ( (v7 & 0x70) == 0 )
    {
      *(_BYTE *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 4) = v74;
      v78 = 0;
      sub_328A00(a1, (int *)HIDWORD(a3), (unsigned __int16 *)(v14 + 10), v15, &v78, a5);
      v63 = v17 - *(_DWORD *)(a1 + 4);
      if ( v63 < 0 )
      {
        v64 = *(_DWORD *)a1;
        v65 = *v71;
        if ( *(_DWORD *)a1 - v63 <= *v71
          || (v63 = v64 - v65, v42 = v64 == v65, *a5 |= 0x800u, v64 = *(_DWORD *)a1, !v42) )
        {
          v64 = sub_32845C((char *)(a1 + 10), v64, -v63);
        }
        v66 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v64;
        *(_DWORD *)(a1 + 4) = v66 + v63;
      }
      goto LABEL_98;
    }
    v44 = v74;
    v19 = v10;
    v75 = v10;
    HIDWORD(a3) = v17 - v44;
    if ( !HIDWORD(a3) )
      goto LABEL_112;
  }
  else
  {
    v18 = v74;
    v19 = v10;
    v75 = v10;
    HIDWORD(a3) = v17 - v18;
    if ( !HIDWORD(a3) )
    {
      v20 = (int *)v72;
      if ( v72 > 3 )
      {
LABEL_12:
        LODWORD(a3) = v72;
        v21 = 0;
        v76 = 1;
        goto LABEL_13;
      }
LABEL_112:
      v20 = v71;
      if ( v71[2] <= v17 )
      {
        v20 = (int *)v73;
        v9 = v72;
        v53 = v71[1] - v73 + 1;
        v54 = v53 < v17;
        if ( v53 >= v17 )
          v54 = v73 < v72;
        if ( v54 )
          goto LABEL_12;
        if ( v73 >= v15 )
        {
          if ( v75 >= 0 )
          {
            v55 = v13 + a3;
            if ( v55 < 1000 && (v15 > 2 || dword_438D00[v15] > v55) )
            {
              if ( (_DWORD)v14 != a1 )
                sub_32AB6C(a1, v14);
              *(_WORD *)(a1 + 10) = v55;
              v11 = 0;
              goto LABEL_71;
            }
            LODWORD(a3) = v72;
            v21 = 0;
            v76 = 1;
            goto LABEL_14;
          }
          v68 = v13 - a3;
          if ( v68 > 0 )
          {
            if ( (_DWORD)v14 != a1 )
              sub_32AB6C(a1, v14);
            HIDWORD(v69) = *(_DWORD *)a1;
            *(_WORD *)(a1 + 10) = v68;
            v11 = 0;
            v70 = SHIDWORD(v69) <= 49;
            if ( SHIDWORD(v69) <= 49 )
            {
              LODWORD(v69) = 35608;
            }
            else
            {
              LODWORD(v69) = -1431655765;
              HIDWORD(v69) += 2;
            }
            if ( v70 )
            {
              WORD1(v69) = 67;
              HIDWORD(v69) += v69;
              v15 = *(unsigned __int8 *)(HIDWORD(v69) + 20);
            }
            else
            {
              v69 = HIDWORD(v69) * (unsigned __int64)(unsigned int)v69;
            }
            if ( !v70 )
              v15 = HIDWORD(v69) >> 1;
            *(_DWORD *)a1 = sub_327CA8(a1 + 10, v15);
            goto LABEL_71;
          }
          LODWORD(a3) = v72;
          v76 = 1;
          v21 = 0;
          goto LABEL_111;
        }
      }
      LODWORD(a3) = v72;
      v76 = 1;
      v21 = 0;
LABEL_13:
      if ( v75 >= 0 )
        goto LABEL_14;
LABEL_111:
      v76 = -v76;
      goto LABEL_14;
    }
  }
  v45 = a3 < 0;
  if ( a3 < 0 )
  {
    v19 = v72;
    LOBYTE(v5) = v7 ^ a4;
    LODWORD(a3) = v14;
    v72 = v15;
    HIDWORD(a3) = -HIDWORD(a3);
  }
  if ( v45 )
  {
    v15 = v19;
    v14 = __PAIR64__(a3, HIDWORD(v14));
  }
  LODWORD(a3) = HIDWORD(a3) + v72;
  v46 = v45;
  if ( (int)a3 > v73 + v15 + 1 )
  {
    v47 = v73 - v72;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(HIDWORD(v14) + 8);
    v48 = *(_DWORD *)(HIDWORD(v14) + 4);
    if ( v75 < 0 )
      v49 = -1;
    else
      v49 = 1;
    v78 = v49;
    *(_DWORD *)(a1 + 4) = v48;
    sub_328A00(a1, v71, (unsigned __int16 *)(HIDWORD(v14) + 10), v72, &v78, a5);
    if ( v47 > 0 )
    {
      v50 = sub_32845C((char *)(a1 + 10), *(_DWORD *)a1, v47);
      v51 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v50;
      *(_DWORD *)(a1 + 4) = v51 - v47;
    }
    if ( !v46 )
      *(_BYTE *)(a1 + 8) ^= a4;
    goto LABEL_98;
  }
  if ( SHIDWORD(a3) <= 48 )
  {
    v52 = 35608;
  }
  else
  {
    v52 = -1431655765;
    v13 = HIDWORD(a3) + 3;
  }
  if ( SHIDWORD(a3) <= 48 )
  {
    HIWORD(v52) = 67;
    LODWORD(v8) = *(unsigned __int8 *)(v52 + HIDWORD(a3) + 21);
  }
  else
  {
    v8 = (unsigned int)v13 * (unsigned __int64)(unsigned int)v52;
  }
  v20 = dword_438D00;
  if ( SHIDWORD(a3) > 48 )
    LODWORD(v8) = HIDWORD(v8) >> 1;
  v21 = v8 - 1;
  v9 = -3 * v21;
  v76 = dword_438D00[HIDWORD(a3) + -3 * v21];
  if ( v75 < 0 )
    goto LABEL_111;
LABEL_14:
  if ( (int)a3 < v15 )
    LODWORD(a3) = v15;
  v22 = (unsigned __int16 *)(a1 + 10);
  if ( (int)a3 >= v73 )
    goto LABEL_126;
  v11 = a1 == HIDWORD(v14);
  if ( v21 <= 0 )
    v11 = 0;
  if ( v11 )
  {
LABEL_126:
    v56 = (int)a3 <= 49;
    if ( (int)a3 <= 49 )
    {
      HIDWORD(a3) = 35608;
    }
    else
    {
      WORD2(a3) = -21845;
      LODWORD(a3) = a3 + 2;
      HIWORD(a3) = -21846;
    }
    if ( v56 )
    {
      HIWORD(a3) = 67;
      LODWORD(a3) = HIDWORD(a3) + a3;
      v20 = (int *)*(unsigned __int8 *)(a3 + 20);
    }
    else
    {
      a3 = (unsigned int)a3 * (unsigned __int64)HIDWORD(a3);
    }
    if ( !v56 )
      v20 = (int *)(HIDWORD(a3) >> 1);
    v57 = 2 * ((_DWORD)v20 + 1);
    if ( v57 > 0x3E )
    {
      v77 = v15;
      v58 = (unsigned __int16 *)malloc(v57);
      v23 = v58;
      v15 = v77;
      if ( !v58 )
      {
        v11 = 0;
        *a5 |= 0x10u;
        goto LABEL_71;
      }
      v11 = (int)v58;
    }
    else
    {
      v11 = 0;
      v23 = (unsigned __int16 *)&v79;
    }
  }
  else
  {
    v23 = (unsigned __int16 *)(a1 + 10);
  }
  *(_BYTE *)(a1 + 8) = v5 & 0x80;
  if ( v15 > 49 )
  {
    v9 = -1431655765;
    LODWORD(a3) = v15 + 2;
  }
  v24 = (unsigned __int16 *)(v14 + 10);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v14 + 4);
  if ( v15 <= 49 )
    HIDWORD(v25) = 35608;
  else
    v25 = (unsigned int)a3 * (unsigned __int64)(unsigned int)v9;
  v26 = v72;
  if ( v15 <= 49 )
    HIWORD(v25) = 67;
  v27 = (unsigned __int16 *)(HIDWORD(v14) + 10);
  if ( v15 > 49 )
    v28 = HIDWORD(v25) >> 1;
  else
    v28 = *(unsigned __int8 *)(HIDWORD(v25) + v15 + 20);
  if ( v72 <= 49 )
  {
    v29 = (int)dword_438B18;
  }
  else
  {
    v29 = v72;
    v26 = -1431655765;
  }
  if ( v72 <= 49 )
    v29 += v26;
  else
    LODWORD(v14) = v29 + 2;
  if ( v72 <= 49 )
    v29 = *(unsigned __int8 *)(v29 + 20);
  else
    v14 = (unsigned int)v14 * (unsigned __int64)(unsigned int)v26;
  if ( v72 > 49 )
    v29 = HIDWORD(v14) >> 1;
  v30 = sub_3275B0(v24, v28, v27, v29, v21, (signed int)v23, v76);
  HIDWORD(v32) = 3 * v30;
  if ( 3 * v30 >= 0 )
  {
    *(_DWORD *)a1 = HIDWORD(v32);
  }
  else
  {
    LOBYTE(v32) = *(_BYTE *)(a1 + 8);
    HIDWORD(v32) = -3 * v30;
  }
  if ( 3 * v30 < 0 )
  {
    *(_DWORD *)a1 = HIDWORD(v32);
    *(_BYTE *)(a1 + 8) = ~(v32 ^ 0x7F);
  }
  LODWORD(v32) = 0;
  if ( v23 == v22 )
    v21 = (int)&v78;
  v78 = 0;
  if ( v23 != v22 )
  {
    if ( v73 < SHIDWORD(v32) )
    {
      v33 = SHIDWORD(v32) <= 49;
      if ( SHIDWORD(v32) <= 49 )
      {
        LODWORD(v32) = 35608;
      }
      else
      {
        LODWORD(v32) = -1431655765;
        HIDWORD(v32) += 2;
      }
      if ( v33 )
      {
        WORD1(v32) = 67;
        HIDWORD(v32) += v32;
        v31 = *(unsigned __int8 *)(HIDWORD(v32) + 20);
      }
      else
      {
        v32 = HIDWORD(v32) * (unsigned __int64)(unsigned int)v32;
      }
      if ( !v33 )
        v31 = HIDWORD(v32) >> 1;
      HIDWORD(v32) = sub_327CA8((int)v23, v31);
      *(_DWORD *)a1 = HIDWORD(v32);
    }
    v21 = (int)&v78;
    sub_328A00(a1, v71, v23, SHIDWORD(v32), &v78, a5);
    HIDWORD(v32) = *(_DWORD *)a1;
  }
  if ( SHIDWORD(v32) <= 49 )
  {
    LODWORD(v34) = 35608;
  }
  else
  {
    LODWORD(v32) = -1431655765;
    LODWORD(v34) = HIDWORD(v32) + 2;
  }
  if ( SHIDWORD(v32) <= 49 )
  {
    WORD1(v34) = 67;
    HIDWORD(v34) = *(unsigned __int8 *)(v34 + HIDWORD(v32) + 20);
  }
  else
  {
    v34 = (unsigned int)v34 * (unsigned __int64)(unsigned int)v32;
  }
  if ( SHIDWORD(v32) > 49 )
    HIDWORD(v34) >>= 1;
  *(_DWORD *)a1 = sub_327CA8(a1 + 10, SHIDWORD(v34));
  sub_329598((_DWORD *)a1, v71, (int *)v21, a5);
  if ( !*(_WORD *)(a1 + 10) && *(_DWORD *)a1 == 1 )
  {
    v59 = *(unsigned __int8 *)(a1 + 8);
    v60 = (v59 & 0x70) == 0 && (unsigned int)v75 >> 31;
    if ( v60 && (*a5 & 0x20) == 0 )
    {
      v61 = v71[3];
      if ( v61 == 6 )
        v62 = ~(v59 << 25);
      else
        v62 = v59 & 0x7F;
      if ( v61 == 6 )
        v62 = ~(v62 >> 25);
      *(_BYTE *)(a1 + 8) = v62;
    }
  }
LABEL_71:
  free((void *)v11);
  return a1;
}
