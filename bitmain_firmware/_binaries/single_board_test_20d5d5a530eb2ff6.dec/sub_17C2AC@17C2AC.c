size_t __fastcall sub_17C2AC(int a1, char *a2, int a3)
{
  int v4; // r11
  int v5; // r0
  bool v6; // zf
  signed int v8; // r2
  signed int v9; // r3
  signed int v10; // r2
  signed int v11; // r2
  size_t v12; // r3
  int v13; // r9
  int v14; // r4
  int v15; // r7
  int v16; // r3
  int v17; // r7
  unsigned __int8 *v18; // r6
  unsigned int v19; // r8
  const void *v20; // r5
  int v21; // r0
  int v22; // r4
  size_t v23; // r7
  signed int v24; // r3
  signed int v25; // r4
  signed int v26; // r3
  size_t v27; // r3
  int v28; // r5
  unsigned __int8 *v29; // r6
  unsigned __int8 *v30; // r4
  unsigned __int8 *v31; // r10
  int v32; // t1
  int v33; // r6
  _QWORD *v34; // lr
  bool v35; // cf
  char v36; // r3
  int v37; // r3
  unsigned int v38; // r3
  unsigned int v39; // r4
  unsigned int v40; // r3
  int v41; // r5
  int v42; // r7
  unsigned int v43; // r3
  unsigned __int8 *v44; // r2
  _QWORD *v45; // r1
  int v46; // r12
  __int64 v47; // r8
  unsigned __int8 *v48; // r0
  unsigned __int8 *v49; // r2
  unsigned __int8 *v50; // r2
  __int64 v51; // t1
  int v52; // r3
  unsigned __int8 v53; // r1
  int v54; // r2
  int v55; // r3
  unsigned __int8 v56; // r1
  int v57; // r2
  int v58; // r3
  unsigned __int8 v59; // r1
  int v60; // r2
  int v61; // r3
  unsigned __int8 v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r5
  bool v66; // cf
  char v67; // r3
  int v68; // r3
  _QWORD *v69; // r12
  unsigned int v70; // r3
  unsigned int v71; // r6
  unsigned int v72; // r3
  int v73; // lr
  unsigned __int8 *v74; // r2
  unsigned int v75; // r3
  _QWORD *v76; // r1
  int v77; // r8
  __int64 v78; // r4
  unsigned __int8 *v79; // r0
  unsigned __int8 *v80; // r2
  __int64 v81; // t1
  int v82; // r3
  unsigned __int8 v83; // r1
  int v84; // r2
  int v85; // r3
  unsigned __int8 v86; // r1
  int v87; // r2
  int v88; // r3
  unsigned __int8 v89; // r1
  int v90; // r2
  int v91; // r3
  unsigned __int8 v92; // r1
  int v93; // r2
  int v94; // r3
  int v95; // lr
  char *v96; // r1
  char *v97; // r2
  char v98; // r4
  unsigned __int8 *v99; // r1
  int v100; // r2
  char v101; // t1
  char *v102; // r1
  char *v103; // r2
  char v104; // r6
  unsigned __int8 *v105; // r1
  int v106; // r2
  char v107; // t1
  char *dest; // [sp+8h] [bp-2Ch]
  size_t n; // [sp+Ch] [bp-28h]
  unsigned __int8 *v110; // [sp+10h] [bp-24h]
  int v111; // [sp+14h] [bp-20h]
  unsigned int v113; // [sp+1Ch] [bp-18h]
  int v114; // [sp+20h] [bp-14h]
  int v115; // [sp+24h] [bp-10h]
  unsigned int v116; // [sp+2Ch] [bp-8h] BYREF

  dest = a2;
  if ( !a2 )
    return 0;
  v4 = sub_B66C8(a1);
  v5 = sub_B7170(a1);
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  v114 = v5;
  if ( v6 )
    return 0;
  sub_B66FC(a1, 15);
  if ( *(_DWORD *)(v4 + 16) != 2 )
  {
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 16) = 2;
    sub_15DC1C(*(_DWORD **)(v4 + 28));
  }
  v8 = *(_DWORD *)v4;
  if ( *(int *)v4 > 0 )
  {
    v9 = *(_DWORD *)(v4 + 4);
    if ( v8 < v9 )
      sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 137);
    v10 = v8 - v9;
    if ( v10 >= a3 )
      v10 = a3;
    n = v10;
    if ( v9 + v10 > 1501 )
      sub_BC328("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 141);
    a3 -= v10;
    memcpy(dest, (const void *)(v9 + 32 + v4), v10);
    v11 = *(_DWORD *)v4;
    dest += n;
    v12 = *(_DWORD *)(v4 + 4) + n;
    *(_DWORD *)(v4 + 4) = v12;
    if ( v12 == v11 )
    {
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
    }
    if ( a3 <= 0 || *(int *)(v4 + 24) <= 0 )
    {
      v115 = 0;
      goto LABEL_39;
    }
    goto LABEL_18;
  }
  if ( a3 <= 0 || *(int *)(v4 + 24) <= 0 )
  {
    sub_B724C(a1);
    return 0;
  }
  n = 0;
LABEL_18:
  v13 = a3;
  v115 = 0;
  v113 = v4 + 1534;
  do
  {
    while ( 1 )
    {
      v14 = sub_B6740(v114, v4 + *(_DWORD *)(v4 + 8) + 1534, 1024 - *(_DWORD *)(v4 + 8));
      if ( v14 <= 0 )
      {
        if ( sub_B6708(v114, 8) )
        {
          v115 = v14;
          goto LABEL_39;
        }
        v15 = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 24) = v14;
        v115 = v14;
        if ( !v15 )
          goto LABEL_39;
        v14 = 0;
      }
      else
      {
        v15 = *(_DWORD *)(v4 + 8);
      }
      v16 = *(_DWORD *)(v4 + 20);
      v17 = v15 + v14;
      *(_DWORD *)(v4 + 8) = v17;
      if ( v16 )
      {
        if ( (sub_B6708(a1, -1) & 0x100) != 0 )
          goto LABEL_88;
        if ( *(_DWORD *)(v4 + 20) )
          break;
      }
      if ( v17 >= 1024 || *(int *)(v4 + 24) <= 0 )
      {
        v18 = (unsigned __int8 *)(v4 + 1534);
        goto LABEL_25;
      }
    }
    v116 = 0;
    if ( v17 <= 0 )
    {
      if ( !v17 )
        continue;
LABEL_88:
      v18 = (unsigned __int8 *)(v4 + 1534);
      *(_DWORD *)(v4 + 8) = 0;
LABEL_25:
      if ( (sub_B6708(a1, -1) & 0x100) != 0 )
      {
        v19 = v17 & 0xFFFFFFFC;
        v20 = (const void *)(v4 + 32);
        v21 = sub_15DD90(v4 + 32, v18, v17 & 0xFFFFFFFC);
        v22 = v21;
        if ( (int)(v17 & 0xFFFFFFFC) > 2 && *(_BYTE *)(v4 + v19 + 1533) == 61 )
        {
          if ( *(_BYTE *)(v4 + v19 + 1532) == 61 )
            v22 = v21 - 2;
          else
            v22 = v21 - 1;
        }
        if ( v17 != v19 )
        {
          v23 = v17 - v19;
          memmove(v18, (const void *)(v4 + v19 + 1534), v23);
          *(_DWORD *)(v4 + 8) = v23;
        }
        if ( v22 > 0 )
        {
          v24 = v22;
          *(_DWORD *)v4 = v22;
          *(_DWORD *)(v4 + 24) = v22;
LABEL_33:
          if ( v24 >= v13 )
            v24 = v13;
          v25 = v24;
          memcpy(dest, v20, v24);
          v26 = *(_DWORD *)v4;
          v13 -= v25;
          *(_DWORD *)(v4 + 4) = v25;
          if ( v26 == v25 )
          {
            *(_DWORD *)v4 = 0;
            *(_DWORD *)(v4 + 4) = 0;
          }
          n += v25;
          dest += v25;
          if ( v13 > 0 )
            continue;
          break;
        }
        *(_DWORD *)v4 = 0;
      }
      else
      {
        v20 = (const void *)(v4 + 32);
        v22 = sub_15DC28(*(int **)(v4 + 28), v4 + 32, (int *)v4, v18, v17);
        *(_DWORD *)(v4 + 8) = 0;
      }
      *(_DWORD *)(v4 + 24) = v22;
      *(_DWORD *)(v4 + 4) = 0;
      if ( v22 < 0 )
      {
        *(_DWORD *)v4 = 0;
        v115 = 0;
        break;
      }
      v24 = *(_DWORD *)v4;
      goto LABEL_33;
    }
    v28 = 0;
    v29 = (unsigned __int8 *)(v113 + v17);
    v30 = (unsigned __int8 *)(v4 + 1534);
    v31 = (unsigned __int8 *)(v4 + 1534);
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = *v30++;
        if ( v32 == 10 )
          break;
LABEL_49:
        ++v28;
        if ( v30 == v29 )
          goto LABEL_53;
      }
      if ( !*(_DWORD *)(v4 + 12) )
        break;
      *(_DWORD *)(v4 + 12) = 0;
      v31 = v30;
      ++v28;
      if ( v30 == v29 )
        goto LABEL_53;
    }
    if ( sub_15DC28(*(int **)(v4 + 28), v4 + 32, (int *)&v116, v31, v30 - v31) <= 0 && !v116 && *(_DWORD *)(v4 + 20) )
    {
      v31 = v30;
      sub_15DC1C(*(_DWORD **)(v4 + 28));
      goto LABEL_49;
    }
    if ( (unsigned __int8 *)v113 != v31 )
    {
      v17 -= (int)&v31[-v113];
      if ( v17 > 0 )
      {
        v66 = v113 >= (unsigned int)(v31 + 8);
        if ( v113 < (unsigned int)(v31 + 8) )
          v66 = (unsigned int)v31 >= v4 + 1542;
        v67 = v66;
        if ( (unsigned int)v17 <= 0xA )
          v67 = 0;
        v68 = v67 & 1;
        if ( (((unsigned __int8)(v4 - 2) | (unsigned __int8)v31) & 7) != 0 )
          v68 = 0;
        v69 = (_QWORD *)(v4 + 1534);
        if ( v68 )
        {
          v70 = (unsigned int)(v17 - 8) >> 3;
          v71 = v70 + 1;
          v72 = v70 - 4;
          v73 = 8 * v71;
          if ( v72 > 0xFFFFFFFA )
          {
            v79 = v31;
            v75 = 0;
          }
          else
          {
            v74 = v31 + 32;
            v75 = (v72 & 0xFFFFFFFC) + 4;
            v76 = (_QWORD *)(v4 + 1566);
            v77 = 0;
            v110 = v30;
            v111 = v28;
            do
            {
              v78 = *((_QWORD *)v74 - 4);
              v77 += 4;
              __pld(v74 + 152);
              v79 = v74;
              v69 = v76;
              *(v76 - 4) = v78;
              v74 += 32;
              v76 += 4;
              *(v76 - 7) = *((_QWORD *)v74 - 7);
              *(v76 - 6) = *((_QWORD *)v74 - 6);
              *(v76 - 5) = *((_QWORD *)v74 - 5);
            }
            while ( v75 != v77 );
            v30 = v110;
            v28 = v111;
          }
          v80 = v79 - 8;
          do
          {
            v81 = *((_QWORD *)v80 + 1);
            v80 += 8;
            ++v75;
            *v69++ = v81;
          }
          while ( v71 > v75 );
          if ( v17 != v73 )
          {
            v82 = v73 + 1;
            *(_BYTE *)(v4 + 8 * v71 + 1534) = v31[8 * v71];
            if ( v17 > v73 + 1 )
            {
              v83 = v31[v82];
              v84 = v4 + v82;
              v85 = v73 + 2;
              *(_BYTE *)(v84 + 1534) = v83;
              if ( v17 > v73 + 2 )
              {
                v86 = v31[v85];
                v87 = v4 + v85;
                v88 = v73 + 3;
                *(_BYTE *)(v87 + 1534) = v86;
                if ( v17 > v73 + 3 )
                {
                  v89 = v31[v88];
                  v90 = v4 + v88;
                  v91 = v73 + 4;
                  *(_BYTE *)(v90 + 1534) = v89;
                  if ( v17 > v73 + 4 )
                  {
                    v92 = v31[v91];
                    v93 = v4 + v91;
                    v94 = v73 + 5;
                    *(_BYTE *)(v93 + 1534) = v92;
                    if ( v17 > v73 + 5 )
                    {
                      v95 = v73 + 6;
                      *(_BYTE *)(v94 + v4 + 1534) = v31[v94];
                      if ( v17 > v95 )
                        *(_BYTE *)(v95 + v4 + 1534) = v31[v95];
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( v17 > 32 )
          {
            v102 = (char *)(v31 + 34);
            v103 = (char *)(v4 + 1568);
            do
            {
              v104 = *(v102 - 34);
              v68 += 32;
              __pld(v102);
              __pld(v103);
              v102 += 32;
              *(v103 - 34) = v104;
              v103 += 32;
              *(v103 - 65) = *(v102 - 65);
              *(v103 - 64) = *(v102 - 64);
              *(v103 - 63) = *(v102 - 63);
              *(v103 - 62) = *(v102 - 62);
              *(v103 - 61) = *(v102 - 61);
              *(v103 - 60) = *(v102 - 60);
              *(v103 - 59) = *(v102 - 59);
              *(v103 - 58) = *(v102 - 58);
              *(v103 - 57) = *(v102 - 57);
              *(v103 - 56) = *(v102 - 56);
              *(v103 - 55) = *(v102 - 55);
              *(v103 - 54) = *(v102 - 54);
              *(v103 - 53) = *(v102 - 53);
              *(v103 - 52) = *(v102 - 52);
              *(v103 - 51) = *(v102 - 51);
              *(v103 - 50) = *(v102 - 50);
              *(v103 - 49) = *(v102 - 49);
              *(v103 - 48) = *(v102 - 48);
              *(v103 - 47) = *(v102 - 47);
              *(v103 - 46) = *(v102 - 46);
              *(v103 - 45) = *(v102 - 45);
              *(v103 - 44) = *(v102 - 44);
              *(v103 - 43) = *(v102 - 43);
              *(v103 - 42) = *(v102 - 42);
              *(v103 - 41) = *(v102 - 41);
              *(v103 - 40) = *(v102 - 40);
              *(v103 - 39) = *(v102 - 39);
              *(v103 - 38) = *(v102 - 38);
              *(v103 - 37) = *(v102 - 37);
              *(v103 - 36) = *(v102 - 36);
              *(v103 - 35) = *(v102 - 35);
            }
            while ( v68 != ((v17 - 33) & 0xFFFFFFE0) + 32 );
          }
          v105 = &v31[v68 - 1];
          v106 = v68 + 1533 + v4;
          do
          {
            v107 = *++v105;
            ++v68;
            *(_BYTE *)++v106 = v107;
          }
          while ( v17 > v68 );
        }
      }
    }
    v29 = v30;
    sub_15DC1C(*(_DWORD **)(v4 + 28));
    *(_DWORD *)(v4 + 20) = 0;
LABEL_53:
    if ( v17 != v28 || v116 )
      goto LABEL_88;
    if ( (unsigned __int8 *)v113 == v31 )
    {
      if ( v17 == 1024 )
      {
        *(_DWORD *)(v4 + 8) = v116;
        *(_DWORD *)(v4 + 12) = 1;
      }
    }
    else if ( v29 != v31 )
    {
      v33 = v29 - v31;
      if ( v33 > 0 )
      {
        v34 = (_QWORD *)(v4 + 1534);
        v35 = v113 >= (unsigned int)(v31 + 8);
        if ( v113 < (unsigned int)(v31 + 8) )
          v35 = (unsigned int)v31 >= v4 + 1542;
        v36 = v35;
        if ( (unsigned int)v33 <= 0xA )
          v36 = 0;
        v37 = v36 & 1;
        if ( (((unsigned __int8)(v4 - 2) | (unsigned __int8)v31) & 7) != 0 )
          v37 = 0;
        if ( v37 )
        {
          v38 = (unsigned int)(v33 - 8) >> 3;
          v39 = v38 + 1;
          v40 = v38 - 4;
          v41 = 8 * v39;
          if ( v40 > 0xFFFFFFFA )
          {
            v43 = v116;
            v49 = v31;
          }
          else
          {
            v42 = v116;
            v43 = (v40 & 0xFFFFFFFC) + 4;
            v44 = v31 + 32;
            v45 = (_QWORD *)(v4 + 1566);
            v46 = v13;
            do
            {
              v47 = *((_QWORD *)v44 - 4);
              v42 += 4;
              __pld(v44 + 152);
              v48 = v44;
              v34 = v45;
              *(v45 - 4) = v47;
              v44 += 32;
              v45 += 4;
              *(v45 - 7) = *((_QWORD *)v44 - 7);
              *(v45 - 6) = *((_QWORD *)v44 - 6);
              *(v45 - 5) = *((_QWORD *)v44 - 5);
            }
            while ( v43 != v42 );
            v13 = v46;
            v49 = v48;
          }
          v50 = v49 - 8;
          do
          {
            v51 = *((_QWORD *)v50 + 1);
            v50 += 8;
            ++v43;
            *v34++ = v51;
          }
          while ( v39 > v43 );
          if ( v33 != v41 )
          {
            v52 = v41 + 1;
            *(_BYTE *)(v4 + 8 * v39 + 1534) = v31[8 * v39];
            if ( v33 > v41 + 1 )
            {
              v53 = v31[v52];
              v54 = v4 + v52;
              v55 = v41 + 2;
              *(_BYTE *)(v54 + 1534) = v53;
              if ( v33 > v41 + 2 )
              {
                v56 = v31[v55];
                v57 = v4 + v55;
                v58 = v41 + 3;
                *(_BYTE *)(v57 + 1534) = v56;
                if ( v33 > v41 + 3 )
                {
                  v59 = v31[v58];
                  v60 = v4 + v58;
                  v61 = v41 + 4;
                  *(_BYTE *)(v60 + 1534) = v59;
                  if ( v33 > v41 + 4 )
                  {
                    v62 = v31[v61];
                    v63 = v4 + v61;
                    v64 = v41 + 5;
                    *(_BYTE *)(v63 + 1534) = v62;
                    if ( v33 > v41 + 5 )
                    {
                      v65 = v41 + 6;
                      *(_BYTE *)(v64 + v4 + 1534) = v31[v64];
                      if ( v33 > v65 )
                        *(_BYTE *)(v65 + v4 + 1534) = v31[v65];
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( v33 > 32 )
          {
            v96 = (char *)(v31 + 34);
            v97 = (char *)(v4 + 1568);
            do
            {
              v98 = *(v96 - 34);
              v37 += 32;
              __pld(v96);
              __pld(v97);
              v96 += 32;
              *(v97 - 34) = v98;
              v97 += 32;
              *(v97 - 65) = *(v96 - 65);
              *(v97 - 64) = *(v96 - 64);
              *(v97 - 63) = *(v96 - 63);
              *(v97 - 62) = *(v96 - 62);
              *(v97 - 61) = *(v96 - 61);
              *(v97 - 60) = *(v96 - 60);
              *(v97 - 59) = *(v96 - 59);
              *(v97 - 58) = *(v96 - 58);
              *(v97 - 57) = *(v96 - 57);
              *(v97 - 56) = *(v96 - 56);
              *(v97 - 55) = *(v96 - 55);
              *(v97 - 54) = *(v96 - 54);
              *(v97 - 53) = *(v96 - 53);
              *(v97 - 52) = *(v96 - 52);
              *(v97 - 51) = *(v96 - 51);
              *(v97 - 50) = *(v96 - 50);
              *(v97 - 49) = *(v96 - 49);
              *(v97 - 48) = *(v96 - 48);
              *(v97 - 47) = *(v96 - 47);
              *(v97 - 46) = *(v96 - 46);
              *(v97 - 45) = *(v96 - 45);
              *(v97 - 44) = *(v96 - 44);
              *(v97 - 43) = *(v96 - 43);
              *(v97 - 42) = *(v96 - 42);
              *(v97 - 41) = *(v96 - 41);
              *(v97 - 40) = *(v96 - 40);
              *(v97 - 39) = *(v96 - 39);
              *(v97 - 38) = *(v96 - 38);
              *(v97 - 37) = *(v96 - 37);
              *(v97 - 36) = *(v96 - 36);
              *(v97 - 35) = *(v96 - 35);
            }
            while ( v37 != ((v33 - 33) & 0xFFFFFFE0) + 32 );
          }
          v99 = &v31[v37 - 1];
          v100 = v37 + 1533 + v4;
          do
          {
            v101 = *++v99;
            ++v37;
            *(_BYTE *)++v100 = v101;
          }
          while ( v33 > v37 );
        }
      }
      *(_DWORD *)(v4 + 8) = v33;
    }
  }
  while ( *(int *)(v4 + 24) > 0 );
LABEL_39:
  sub_B724C(a1);
  v27 = n;
  if ( !n )
    return v115;
  return v27;
}
