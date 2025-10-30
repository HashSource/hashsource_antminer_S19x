int __fastcall sub_32B538(int result, int a2, int a3, int a4, int *a5)
{
  char *v5; // r10
  int v6; // r6
  int v7; // lr
  int v8; // r5
  int v9; // r7
  int *v10; // r4
  bool v11; // cc
  int v12; // r2
  int v13; // r4
  int v14; // r6
  int v15; // r11
  size_t v16; // r0
  unsigned int v17; // r9
  unsigned int v18; // r11
  int v19; // r9
  unsigned __int16 *v20; // r11
  unsigned __int16 *v21; // r0
  int v22; // r3
  char *v23; // r7
  int v24; // r2
  int v25; // lr
  int v26; // r12
  int v27; // t1
  _BOOL4 v28; // r1
  unsigned int v29; // r8
  int v30; // r6
  signed int v31; // r0
  int v32; // r4
  unsigned int v33; // r6
  int v34; // r1
  unsigned int v35; // r3
  int v36; // r6
  unsigned int v37; // r7
  int v38; // r3
  int v39; // t1
  int v40; // r2
  int v41; // r2
  unsigned int v42; // r12
  unsigned int v43; // r1
  unsigned int v44; // r6
  int v45; // r12
  int v46; // r1
  int v47; // r1
  int v48; // r8
  char *v49; // r7
  unsigned int v50; // r10
  unsigned __int16 *v51; // lr
  char *v52; // r5
  int v53; // r1
  unsigned __int16 *v54; // r2
  int v55; // r3
  int v56; // r12
  _BOOL4 v57; // lr
  int v58; // r0
  int v59; // t1
  bool v60; // zf
  unsigned __int16 *v61; // r3
  int v62; // lr
  char *v63; // r5
  unsigned int *v64; // r2
  unsigned int v65; // r12
  unsigned __int16 *v66; // r3
  unsigned int v67; // r4
  unsigned int v68; // t1
  __int64 v69; // t1
  bool v70; // cc
  unsigned __int64 *v71; // r4
  unsigned __int64 v72; // r6
  unsigned __int64 v73; // t1
  unsigned __int64 v74; // r0
  unsigned __int64 v75; // r0
  int v76; // r10
  unsigned int v77; // r12
  __int64 v78; // r0
  int v79; // r9
  unsigned __int64 v80; // r2
  unsigned __int16 *v81; // r12
  unsigned __int16 *v82; // r4
  unsigned int v83; // t1
  unsigned __int16 *v84; // r0
  unsigned __int16 *v85; // r0
  int v86; // r12
  char *v87; // r0
  char *v88; // [sp+14h] [bp-1A0h]
  char v89; // [sp+18h] [bp-19Ch]
  int *v90; // [sp+1Ch] [bp-198h]
  char *v91; // [sp+20h] [bp-194h]
  int v92; // [sp+24h] [bp-190h]
  int v93; // [sp+28h] [bp-18Ch]
  int v94; // [sp+2Ch] [bp-188h]
  unsigned __int16 *ptr; // [sp+30h] [bp-184h]
  char *v96; // [sp+34h] [bp-180h]
  char *v97; // [sp+38h] [bp-17Ch]
  char *v98; // [sp+3Ch] [bp-178h]
  unsigned int v99; // [sp+48h] [bp-16Ch]
  unsigned __int16 *v100; // [sp+4Ch] [bp-168h]
  int v101; // [sp+58h] [bp-15Ch] BYREF
  char v102; // [sp+5Ch] [bp-158h] BYREF
  char v103; // [sp+84h] [bp-130h] BYREF
  char v104; // [sp+ACh] [bp-108h] BYREF
  char v105; // [sp+110h] [bp-A4h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 8);
  v7 = a3;
  v8 = result;
  v9 = *(unsigned __int8 *)(a3 + 8);
  v101 = 0;
  v90 = (int *)a4;
  v89 = (v6 ^ v9) & 0x80;
  if ( ((v6 | v9) & 0x70) == 0 )
  {
    v10 = *(int **)a3;
    v11 = *(_DWORD *)a2 < *(_DWORD *)a3;
    if ( *(_DWORD *)a2 < *(_DWORD *)a3 )
      a4 = *(_DWORD *)a2;
    else
      a3 = a2;
    if ( v11 )
      v9 = (int)v10;
    else
      a4 = (int)v10;
    if ( !v11 )
      v9 = *(_DWORD *)a2;
    v93 = a3;
    if ( v11 )
      v12 = a2;
    else
      v12 = v7;
    v13 = a4;
    v92 = v12;
    v14 = v9;
    if ( a4 <= 6 )
    {
      if ( v9 <= 49 )
        v29 = *((unsigned __int8 *)&dword_438B18[5] + v9);
      else
        v29 = (v9 + 2) / 3u;
      v30 = *((unsigned __int8 *)&dword_438B18[5] + a4);
      v31 = 2 * (v30 + v29);
      if ( v31 > 98 )
      {
        v84 = (unsigned __int16 *)malloc(v31);
        v20 = v84;
        if ( !v84 )
        {
          v97 = 0;
          v96 = 0;
          *a5 |= 0x10u;
          free(0);
          goto LABEL_59;
        }
        ptr = v84;
      }
      else
      {
        v20 = (unsigned __int16 *)&v104;
        ptr = 0;
      }
      v32 = 0;
      *v20 = 0;
      v33 = v92 + 10 + 2 * v30;
      if ( v92 + 10 >= v33 )
      {
        v97 = 0;
        v34 = 1;
        v96 = 0;
      }
      else
      {
        v34 = 1;
        v35 = (v33 - v92 - 11) & 0xFFFFFFFE;
        v36 = v92 + 8;
        v37 = v92 + 10 + v35;
        do
        {
          while ( 1 )
          {
            v39 = *(unsigned __int16 *)(v36 + 2);
            v36 += 2;
            v38 = v39;
            v40 = v34;
            if ( !v39 )
              break;
            v34 = sub_3275B0(&v20[v32], v34 - v32, (unsigned __int16 *)(v93 + 10), v29, 0, (signed int)&v20[v32], v38)
                + v32;
            ++v32;
            if ( v37 == v36 )
              goto LABEL_51;
          }
          ++v34;
          v20[v40] = 0;
          ++v32;
        }
        while ( v37 != v36 );
LABEL_51:
        v97 = 0;
        v96 = 0;
      }
      goto LABEL_52;
    }
    v15 = (v9 + 8) / 9;
    v16 = 4 * v15;
    v17 = (a4 + 8) / 9u;
    v11 = 4 * v15 <= 40;
    v18 = v15 + v17;
    if ( v11 )
    {
      v48 = 0;
      v98 = &v102;
      v96 = 0;
    }
    else
    {
      v98 = (char *)malloc(v16);
      v96 = v98;
      v48 = v98 == 0;
    }
    if ( (int)(4 * v17) > 40 )
    {
      v87 = (char *)malloc(4 * v17);
      v88 = v87;
      if ( !v87 )
        v48 |= 1u;
      v97 = v87;
    }
    else
    {
      v97 = 0;
      v88 = &v103;
    }
    v19 = 4 * v18;
    if ( (int)(8 * v18) > 160 )
    {
      v85 = (unsigned __int16 *)malloc(8 * v18);
      if ( v85 )
        v86 = v48;
      else
        v86 = v48 | 1;
      ptr = v85;
      if ( !v86 )
      {
        v20 = v85;
LABEL_31:
        if ( v9 <= 0 )
          v5 = v98;
        v21 = (unsigned __int16 *)(v93 + 10);
        if ( v9 > 0 )
        {
          v22 = 0;
          v23 = v98;
          v24 = 0;
          *(_DWORD *)v98 = 0;
          while ( 1 )
          {
            do
            {
              v25 = dword_438D00[v22];
              v22 += 3;
              v27 = *v21++;
              v26 = v27;
              v14 -= 3;
              v28 = v22 <= 8;
              if ( v14 <= 0 )
                v28 = 0;
              v24 += v25 * v26;
              *(_DWORD *)v23 = v24;
            }
            while ( v28 );
            v24 = 0;
            v22 = 0;
            v5 = v23 + 4;
            if ( v14 <= 0 )
              break;
            *((_DWORD *)v23 + 1) = 0;
            v23 += 4;
          }
        }
        v49 = v88;
        v50 = (unsigned int)(v5 - 4);
        v51 = (unsigned __int16 *)(v92 + 10);
        v94 = v8;
        do
        {
          v52 = v49;
          *(_DWORD *)v49 = 0;
          v49 += 4;
          if ( v13 <= 0 )
            break;
          v53 = 0;
          v54 = v51;
          v55 = 0;
          do
          {
            v56 = dword_438D00[v55];
            v55 += 3;
            v13 -= 3;
            v57 = v55 <= 8;
            v59 = *v54++;
            v58 = v59;
            if ( v13 <= 0 )
              v57 = 0;
            v60 = !v57;
            v51 = v54;
            v53 += v56 * v58;
          }
          while ( !v60 );
          *((_DWORD *)v49 - 1) = v53;
        }
        while ( v13 > 0 );
        v91 = v52;
        v8 = v94;
        v100 = &v20[v19];
        if ( &v20[v19] <= v20 )
        {
          if ( v88 > v91 )
            goto LABEL_115;
        }
        else
        {
          v61 = v20;
          do
          {
            *(_QWORD *)v61 = 0;
            v61 += 4;
          }
          while ( &v20[v19] > v61 );
          if ( v88 > v91 )
          {
LABEL_93:
            v81 = v20 + 3;
            v82 = v20;
            while ( 1 )
            {
              v83 = *(_DWORD *)v82;
              v82 += 4;
              *(v81 - 1) = v83 / 0xF4240;
              *(v81 - 2) = v83 / 0x3E8 - 1000 * (v83 / 0xF4240);
              *(v81 - 3) = v83 % 0x3E8;
              if ( v100 <= v82 )
                break;
              v81 += 3;
            }
            v34 = v81 - v20;
LABEL_52:
            *(_BYTE *)(v8 + 8) = v89;
            v41 = sub_327CA8((int)v20, v34);
            v42 = *(_DWORD *)(v93 + 4);
            v43 = *(_DWORD *)(v92 + 4);
            *(_DWORD *)v8 = v41;
            v44 = v42 >> 31;
            v45 = v42 + v43;
            v46 = v44 & (v43 >> 31);
            if ( v45 > 0 )
              v47 = v46 & 1;
            else
              v47 = 0;
            if ( v47 )
              v45 = -1999999998;
            *(_DWORD *)(v8 + 4) = v45;
            sub_328A00(v8, v90, v20, v41, &v101, a5);
            sub_329598((_DWORD *)v8, v90, &v101, a5);
            goto LABEL_58;
          }
        }
        v62 = 18;
        v63 = v88;
        do
        {
          v64 = (unsigned int *)v98;
          if ( (unsigned int)v98 <= v50 )
          {
            v65 = *(_DWORD *)v63;
            v66 = &v20[4 * ((v63 - v88) >> 2) - 4];
            do
            {
              v68 = *v64++;
              v67 = v68;
              v69 = *((_QWORD *)v66 + 1);
              v66 += 4;
              *(_QWORD *)v66 = v65 * (unsigned __int64)v67 + v69;
            }
            while ( v50 >= (unsigned int)v64 );
          }
          --v62;
          v70 = (int)v63 <= (int)v91;
          if ( v63 != v91 )
            v70 = v62 <= 0;
          if ( v70 )
          {
            if ( v100 > v20 )
            {
              v71 = (unsigned __int64 *)v20;
              v99 = v50;
              do
              {
                v73 = *v71++;
                v72 = v73;
                v74 = v73;
                if ( v73 > 0x3B9AC9FF )
                {
                  v75 = sub_347F74(v74, HIDWORD(v74), 1000000000, 0);
                  v76 = v75;
                  v77 = v75;
                  if ( v75 > 0x3B9AC9FF )
                  {
                    v78 = sub_347F74(v72, HIDWORD(v72), -1486618624, 232830643);
                    v79 = v78;
                    v71[1] += v78;
                    sub_347F74(v72, HIDWORD(v72), -1486618624, 232830643);
                    v77 = v76 - 1000000000 * v79;
                    v72 = v80;
                    *(v71 - 1) = v80;
                  }
                  *v71 += v77;
                  *(v71 - 1) = v72 - 1000000000LL * v77;
                }
              }
              while ( v100 > (unsigned __int16 *)v71 );
              v50 = v99;
            }
            v62 = 18;
          }
          v63 += 4;
        }
        while ( v63 <= v91 );
        v8 = v94;
        if ( v100 > v20 )
          goto LABEL_93;
LABEL_115:
        v34 = 0;
        goto LABEL_52;
      }
    }
    else
    {
      if ( !v48 )
      {
        ptr = 0;
        v20 = (unsigned __int16 *)&v105;
        goto LABEL_31;
      }
      ptr = 0;
    }
    *a5 |= 0x10u;
LABEL_58:
    free(ptr);
LABEL_59:
    free(v97);
    free(v96);
    return v8;
  }
  if ( (((unsigned __int8)v6 | (unsigned __int8)v9) & 0x30) != 0 )
  {
    sub_32AC0C(result, a2, a3, (int *)a4, a5);
    return v8;
  }
  else if ( ((v6 & 0x40) != 0 || *(_WORD *)(a2 + 10) || *(_DWORD *)a2 != 1 || (v6 & 0x70) != 0)
         && ((v9 & 0x40) != 0 || *(_WORD *)(a3 + 10) || *(_DWORD *)a3 != 1 || (v9 & 0x70) != 0) )
  {
    *(_DWORD *)result = 1;
    *(_BYTE *)(result + 8) = v89 | 0x40;
    *(_DWORD *)(result + 4) = 0;
    *(_WORD *)(result + 10) = 0;
  }
  else
  {
    *a5 |= 0x80u;
  }
  return result;
}
