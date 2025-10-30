unsigned int __fastcall sub_30A040(_DWORD *a1, int *a2)
{
  int *v2; // r2
  int v3; // r11
  int v4; // r3
  _DWORD *v5; // r5
  int v7; // r6
  int v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r10
  _DWORD *v12; // r0
  int v13; // r12
  bool v14; // zf
  int v15; // r0
  int v16; // r1
  int v17; // r2
  _WORD *v18; // r12
  int v19; // r2
  int v20; // r7
  int v21; // r3
  int v22; // r7
  _BYTE *v23; // r10
  int v24; // r9
  int v25; // r3
  int v26; // r2
  _WORD *v27; // r12
  int v28; // r1
  _DWORD *v29; // r3
  _WORD *v30; // r3
  unsigned int v31; // r0
  unsigned int v32; // r1
  char v33; // r2
  int v34; // r1
  int v35; // r8
  int *v36; // r0
  char *v37; // r3
  int v38; // r6
  int v39; // r9
  int v40; // r10
  int v41; // r0
  int v42; // r1
  int v43; // r11
  int v44; // r2
  int v45; // t1
  int v46; // r12
  int v47; // r7
  int v48; // r3
  bool v49; // cc
  int v50; // lr
  int v51; // r2
  int v52; // r7
  int v53; // r12
  int v54; // lr
  char *v55; // r7
  __int16 *v56; // r2
  _WORD *v57; // r7
  int v58; // r8
  __int16 *v59; // r11
  __int16 v60; // r3
  char *v61; // r12
  int i; // r1
  int v63; // t1
  int v64; // r2
  int v65; // lr
  char *v66; // r10
  int v67; // r12
  int v68; // t1
  int v69; // r1
  int v70; // t1
  int v71; // r3
  int v72; // r2
  char *v73; // r1
  char *v74; // r4
  unsigned int result; // r0
  int v76; // r3
  int v77; // t1
  _WORD *v78; // r3
  int v79; // r1
  int v80; // r12
  _BYTE *v81; // r2
  int v82; // r2
  int v83; // [sp+4h] [bp-40h]
  int v84; // [sp+4h] [bp-40h]
  int v85; // [sp+8h] [bp-3Ch]
  int v87; // [sp+10h] [bp-34h]
  int v88; // [sp+14h] [bp-30h]
  int v89; // [sp+14h] [bp-30h]
  int v90; // [sp+1Ch] [bp-28h]
  _BYTE v91[36]; // [sp+20h] [bp-24h] BYREF

  v2 = (int *)a2[2];
  v3 = *a2;
  v4 = 0;
  v5 = a1 + 1024;
  v7 = v2[3];
  v8 = *v2;
  a1[1301] = 573;
  a1[1300] = 0;
  if ( v7 <= 0 )
  {
    v85 = -1;
  }
  else
  {
    v9 = v3 + 2;
    v10 = 0;
    v11 = -1;
    do
    {
      v12 = (_DWORD *)*(unsigned __int16 *)(v9 - 2);
      v13 = v10 + 5208;
      v9 += 4;
      v14 = v12 == 0;
      if ( v12 )
      {
        ++v4;
        v11 = v10;
        v5[276] = v4;
        v12 = &a1[v4 + 726];
      }
      else
      {
        *(_WORD *)(v9 - 4) = 0;
      }
      if ( !v14 )
        v12[1] = v10;
      ++v10;
      if ( !v14 )
        *((_BYTE *)a1 + v13) = 0;
    }
    while ( v7 != v10 );
    v85 = v11;
  }
  v15 = (int)&a1[v4 + 727];
  while ( 1 )
  {
    v17 = 0;
    v16 = 0;
    v18 = (_WORD *)v3;
    if ( v4 > 1 )
      break;
    v5[276] = ++v4;
    if ( v85 <= 1 )
    {
      v16 = v85 + 1;
      v17 = 4 * (v85 + 1);
    }
    *(_DWORD *)(v15 + 4) = v16;
    v15 += 4;
    if ( v85 <= 1 )
    {
      v18 = (_WORD *)(v3 + v17);
      v85 = v16;
    }
    *v18 = 1;
    v19 = v8 + v17;
    *((_BYTE *)a1 + v16 + 5208) = 0;
    --v5[426];
    if ( v8 )
      v5[427] -= *(unsigned __int16 *)(v19 + 2);
  }
  v20 = v4 >> 1;
  a2[1] = v85;
  do
    sub_309F24((int)a1, v3, v20--);
  while ( v20 );
  v21 = v5[276];
  v22 = v3 + 4 * v7;
  v23 = (char *)a1 + v7 + 5208;
  do
  {
    v24 = a1[728];
    v5[276] = v21 - 1;
    v22 += 4;
    a1[728] = a1[v21 + 727];
    sub_309F24((int)a1, v3, 1);
    v25 = v5[277];
    v26 = a1[728];
    v27 = (_WORD *)(v3 + 4 * v24);
    v28 = v25 - 2;
    v29 = &a1[v25];
    v29[726] = v24;
    v5[277] = v28;
    v29[725] = v26;
    v30 = (_WORD *)(v3 + 4 * v26);
    *(_WORD *)(v22 - 4) = *v27 + *v30;
    v31 = *((unsigned __int8 *)a1 + v24 + 5208);
    v32 = *((unsigned __int8 *)a1 + v26 + 5208);
    v33 = v32 + 1;
    if ( v31 >= v32 )
      v33 = v31 + 1;
    *v23++ = v33;
    v30[1] = v7;
    v27[1] = v7;
    a1[728] = v7++;
    sub_309F24((int)a1, v3, 1);
    v21 = v5[276];
  }
  while ( v21 > 1 );
  v34 = v5[277];
  v35 = a1[728];
  v36 = (int *)a2[2];
  v37 = (char *)a1 + 2874;
  v38 = *a2;
  v39 = a2[1];
  v40 = *v36;
  v88 = v36[1];
  v83 = v36[2];
  v41 = v36[4];
  v5[277] = v34 - 1;
  a1[v34 + 726] = v35;
  do
  {
    *((_WORD *)v37 + 1) = 0;
    v37 += 2;
  }
  while ( (char *)a1 + 2906 != v37 );
  *(_WORD *)(v38 + 4 * v35 + 2) = 0;
  if ( v34 <= 572 )
  {
    v90 = v3;
    v42 = (int)&a1[v34 + 726];
    v43 = v83;
    v84 = 0;
    do
    {
      v45 = *(_DWORD *)(v42 + 4);
      v42 += 4;
      v44 = v45;
      v46 = 4 * v45;
      v47 = v38 + 4 * v45;
      v48 = *(unsigned __int16 *)(v38 + 4 * *(unsigned __int16 *)(v47 + 2) + 2) + 1;
      if ( v41 < v48 )
      {
        ++v84;
        v48 = v41;
      }
      *(_WORD *)(v47 + 2) = v48;
      if ( v39 >= v44 )
      {
        v49 = v43 <= v44;
        v87 = v44 - v43;
        v50 = 2876;
        v51 = 0;
        if ( v49 )
          v51 = v88;
        ++*((_WORD *)a1 + v48 + 1438);
        v52 = v40 + v46;
        if ( v49 )
          v50 = v87;
        v53 = *(unsigned __int16 *)(v38 + v46);
        if ( v49 )
        {
          v51 = *(_DWORD *)(v51 + 4 * v50);
          v48 += v51;
        }
        v5[426] += v53 * v48;
        if ( v40 )
          v5[427] += v53 * (*(unsigned __int16 *)(v52 + 2) + v51);
      }
    }
    while ( a1 + 1299 != (_DWORD *)v42 );
    v54 = v84;
    v3 = v90;
    if ( v84 )
    {
      v55 = (char *)a1 + 2 * v41;
      v89 = 2 * (v41 + 1436);
      v56 = (__int16 *)(v55 + 2874);
      v57 = v55 + 2876;
      v58 = v41 - 1;
      v59 = v56;
      do
      {
        v60 = *v59;
        if ( *v59 )
        {
          i = v41;
          v64 = v41 - 1;
        }
        else
        {
          v61 = (char *)a1 + v89 + 2;
          for ( i = v41 - 1; ; --i )
          {
            v63 = *((unsigned __int16 *)v61 - 1);
            v61 -= 2;
            v60 = v63;
            v64 = i - 1;
            if ( v63 )
              break;
          }
        }
        v54 -= 2;
        *((_WORD *)a1 + v64 + 1438) = v60 - 1;
        *((_WORD *)a1 + i + 1438) += 2;
        --*v57;
      }
      while ( v54 > 0 );
      v3 = v90;
      if ( v41 )
      {
        v65 = 573;
        v66 = (char *)a1 + v89 + 6;
        while ( 1 )
        {
          v68 = *((unsigned __int16 *)v66 - 1);
          v66 -= 2;
          v67 = v68;
          if ( v68 )
          {
            v69 = (int)&a1[v65 + 727];
            do
            {
              do
              {
                v70 = *(_DWORD *)(v69 - 4);
                v69 -= 4;
                --v65;
                v71 = 4 * v70;
              }
              while ( v39 < v70 );
              v72 = *(unsigned __int16 *)(v38 + v71 + 2);
              if ( v72 != v41 )
              {
                v5[426] += *(unsigned __int16 *)(v38 + v71) * (v41 - v72);
                *(_WORD *)(v38 + v71 + 2) = v41;
              }
              --v67;
            }
            while ( v67 );
          }
          v41 = v58;
          if ( !v58 )
            break;
          --v58;
        }
        v3 = v90;
      }
    }
  }
  v73 = (char *)a1 + 2874;
  v74 = (char *)(a1 + 726);
  result = (unsigned int)v91;
  v76 = 0;
  do
  {
    v77 = *((unsigned __int16 *)v73 + 1);
    v73 += 2;
    v76 = 2 * (v77 + v76);
    *(_WORD *)(result + 2) = v76;
    result += 2;
  }
  while ( v74 != v73 );
  if ( v85 != -1 )
  {
    v78 = (_WORD *)v3;
    do
    {
      v79 = (unsigned __int16)v78[1];
      if ( v78[1] )
      {
        v80 = 0;
        v81 = &v91[2 * v79 + 32];
        result = *((unsigned __int16 *)v81 - 16);
        *((_WORD *)v81 - 16) = result + 1;
        do
        {
          --v79;
          v82 = result & 1 | v80;
          result >>= 1;
          v80 = 2 * v82;
        }
        while ( v79 );
        *v78 = v82;
      }
      v78 += 2;
    }
    while ( (_WORD *)(v3 + 4 + 4 * v85) != v78 );
  }
  return result;
}
