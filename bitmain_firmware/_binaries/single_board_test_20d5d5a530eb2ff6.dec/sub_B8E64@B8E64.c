int __fastcall sub_B8E64(int *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r9
  int v5; // r8
  int v6; // r5
  _DWORD *v7; // r4
  int v8; // r12
  int v9; // r2
  int v10; // lr
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r6
  int v14; // r7
  int v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r6
  int v20; // r7
  int v21; // r1
  int v22; // r0
  int v23; // r6
  int v24; // r0
  int v25; // r1
  int v26; // r1
  int v27; // r6
  _DWORD *v28; // r1
  int v29; // r2
  int v30; // r8
  int v31; // r3
  int v32; // r10
  unsigned int *v33; // r7
  int v34; // r6
  char *v35; // r11
  int v36; // r3
  int v37; // r0
  unsigned int v38; // lr
  unsigned int v39; // r3
  int v40; // r6
  int v41; // r0
  unsigned int v42; // r3
  unsigned int v43; // r0
  int v44; // r6
  int v45; // r0
  unsigned int v46; // r3
  unsigned int v47; // r0
  int v48; // r6
  int v49; // r0
  unsigned int v50; // r3
  unsigned int v51; // r0
  int v52; // r6
  int v53; // r0
  unsigned int v54; // r3
  unsigned int v55; // r0
  int v56; // r6
  int v57; // r0
  unsigned int v58; // r3
  _DWORD *v59; // lr
  unsigned int v60; // r0
  bool v61; // cf
  bool v62; // zf
  int v63; // r3
  _DWORD *v64; // lr
  int v65; // t1
  int v66; // r6
  int v67; // r0
  unsigned int v68; // lr
  unsigned int v69; // r3
  char *v70; // r0
  unsigned int v71; // r3
  int v72; // r6
  unsigned int v73; // r0
  bool v74; // cf
  unsigned int *v75; // r7
  int v76; // r3
  _DWORD *v77; // r0
  unsigned int v78; // r0
  bool v79; // cf
  int v80; // r4
  int v81; // r1
  int v82; // r7
  int v83; // r0
  int v84; // r5
  _DWORD *v85; // r2
  _DWORD *v86; // r3
  int v87; // lr
  int v88; // r1
  _DWORD *v89; // r8
  _DWORD *v90; // r4
  _DWORD *v91; // r1
  int v92; // r4
  int v93; // r0

  v3 = a3[7];
  if ( !v3 )
  {
    a1[1] = 0;
    return 1;
  }
  v5 = 2 * v3;
  if ( sub_B89D8((int)a2, 2 * v3) )
  {
    v6 = a3[6];
    v7 = (_DWORD *)*a2;
    v8 = a2[1];
    a2[3] ^= a3[9];
    if ( v5 > 0 )
    {
      if ( v5 <= 8 )
      {
        v27 = 0;
      }
      else
      {
        v9 = -v8;
        v10 = 8;
        v11 = v7 + 20;
        do
        {
          v12 = *(v11 - 20);
          v13 = *(v11 - 19);
          __pld(v11);
          v11 += 8;
          v14 = v13 & ((v9 + 1) >> 31);
          v15 = *(v11 - 26);
          *(v11 - 28) = v12 & (v9 >> 31);
          v16 = *(v11 - 25);
          *(v11 - 27) = v14;
          v17 = v16 & ((v9 + 3) >> 31);
          v18 = *(v11 - 24);
          *(v11 - 26) = v15 & ((v9 + 2) >> 31);
          v19 = *(v11 - 23);
          *(v11 - 25) = v17;
          *(v11 - 24) = v18 & ((v9 + 4) >> 31);
          v20 = v19 & ((v9 + 5) >> 31);
          v21 = *(v11 - 22);
          v22 = v9 + 6;
          v23 = v9 + 7;
          v9 += 8;
          *(v11 - 23) = v20;
          v24 = v21 & (v22 >> 31);
          v25 = *(v11 - 21);
          *(v11 - 22) = v24;
          v26 = v25 & (v23 >> 31);
          v27 = v10;
          v10 += 8;
          *(v11 - 21) = v26;
        }
        while ( v9 != ((v5 - 9) & 0xFFFFFFF8) + 8 - v8 );
      }
      v28 = &v7[v27];
      do
      {
        v29 = v27 - v8;
        ++v27;
        *v28++ &= v29 >> 31;
      }
      while ( v5 > v27 );
    }
    a2[1] = v5;
    v30 = a3[16];
    if ( v3 <= 0 )
    {
      if ( sub_B89D8((int)a1, v3) )
      {
        v91 = (_DWORD *)*a2;
        v92 = a2[3];
        a1[1] = v3;
        v93 = *a1;
        a1[3] = v92;
        bn_sub_words(v93, &v91[v3], v6, v3);
        return 1;
      }
    }
    else
    {
      v31 = v3;
      if ( v3 <= 8 )
      {
        v32 = 0;
        v34 = 0;
      }
      else
      {
        v32 = 0;
        v33 = &v7[v3 + 7];
        v34 = 0;
        v35 = (char *)(v7 + 7);
        do
        {
          v36 = *v7;
          __pld(v35);
          v32 += 8;
          __pld(v33);
          v37 = sub_12F7C0(v7, v6, v3, v36 * v30);
          v38 = *(v33 - 7);
          v39 = v37 + v34 + v38;
          *(v33 - 7) = v39;
          if ( v38 != v39 )
            LOBYTE(v34) = v34 | 1;
          v40 = v34 & 1;
          if ( v38 < v39 )
            v40 = 0;
          v41 = sub_12F7C0(v7 + 1, v6, v3, v7[1] * v30);
          v42 = *(v33 - 6);
          v43 = v41 + v42 + v40;
          *(v33 - 6) = v43;
          if ( v42 != v43 )
            LOBYTE(v40) = v40 | 1;
          v44 = v40 & 1;
          if ( v42 < v43 )
            v44 = 0;
          v45 = sub_12F7C0(v7 + 2, v6, v3, v7[2] * v30);
          v46 = *(v33 - 5);
          v47 = v45 + v46 + v44;
          *(v33 - 5) = v47;
          if ( v46 != v47 )
            LOBYTE(v44) = v44 | 1;
          v48 = v44 & 1;
          if ( v46 < v47 )
            v48 = 0;
          v49 = sub_12F7C0(v7 + 3, v6, v3, v7[3] * v30);
          v50 = *(v33 - 4);
          v51 = v49 + v50 + v48;
          *(v33 - 4) = v51;
          if ( v50 != v51 )
            LOBYTE(v48) = v48 | 1;
          v52 = v48 & 1;
          if ( v50 < v51 )
            v52 = 0;
          v53 = sub_12F7C0(v7 + 4, v6, v3, v7[4] * v30);
          v54 = *(v33 - 3);
          v55 = v53 + v54 + v52;
          *(v33 - 3) = v55;
          if ( v54 != v55 )
            LOBYTE(v52) = v52 | 1;
          v56 = v52 & 1;
          if ( v54 < v55 )
            v56 = 0;
          v57 = sub_12F7C0(v7 + 5, v6, v3, v7[5] * v30);
          v58 = *(v33 - 2);
          v59 = v7;
          v7 += 8;
          v60 = v57 + v58 + v56;
          v61 = v58 >= v60;
          v62 = v58 == v60;
          *(v33 - 2) = v60;
          v65 = v59[6];
          v64 = v59 + 6;
          v63 = v65;
          if ( !v62 )
            LOBYTE(v56) = v56 | 1;
          v66 = v56 & 1;
          if ( !v61 )
            v66 = 0;
          v67 = sub_12F7C0(v64, v6, v3, v63 * v30);
          v68 = *(v33 - 1);
          v69 = v67 + v68;
          v70 = v35;
          v71 = v69 + v66;
          v35 += 32;
          *(v33 - 1) = v71;
          if ( v68 != v71 )
            LOBYTE(v66) = v66 | 1;
          v72 = v66 & 1;
          if ( v68 < v71 )
            v72 = 0;
          v73 = sub_12F7C0(v70, v6, v3, *(v7 - 1) * v30) + *v33 + v72;
          v74 = *v33 >= v73;
          if ( *v33 != v73 )
            LOBYTE(v72) = v72 | 1;
          *v33 = v73;
          v33 += 8;
          v34 = v72 & 1;
          if ( !v74 )
            v34 = 0;
        }
        while ( v32 != ((v3 - 9) & 0xFFFFFFF8) + 8 );
        v31 = v3;
      }
      v75 = &v7[v31];
      do
      {
        v76 = *v7;
        v77 = v7;
        ++v32;
        ++v7;
        v78 = sub_12F7C0(v77, v6, v3, v76 * v30) + v34 + *v75;
        v79 = *v75 >= v78;
        v62 = *v75 == v78;
        *v75++ = v78;
        if ( !v62 )
          LOBYTE(v34) = v34 | 1;
        v34 &= 1u;
        if ( !v79 )
          v34 = 0;
      }
      while ( v3 > v32 );
      if ( sub_B89D8((int)a1, v3) )
      {
        v80 = *a1;
        v81 = a2[3];
        v82 = 4 * v3 + *a2;
        a1[1] = v3;
        a1[3] = v81;
        v83 = v34 - bn_sub_words(v80, v82, v6, v3);
        if ( v3 > 8 )
        {
          v84 = 0;
          v85 = (_DWORD *)(v82 + 64);
          v86 = (_DWORD *)(v80 + 64);
          do
          {
            v87 = *(v86 - 16);
            v84 += 8;
            v88 = *(v85 - 16);
            __pld(v85);
            v85 += 8;
            __pld(v86);
            v86 += 8;
            *(v86 - 24) = (v87 ^ v88) & v83 ^ v87;
            *(v85 - 24) = 0;
            *(v86 - 23) ^= (*(v86 - 23) ^ *(v85 - 23)) & v83;
            *(v85 - 23) = 0;
            *(v86 - 22) ^= (*(v86 - 22) ^ *(v85 - 22)) & v83;
            *(v85 - 22) = 0;
            *(v86 - 21) ^= (*(v86 - 21) ^ *(v85 - 21)) & v83;
            *(v85 - 21) = 0;
            *(v86 - 20) ^= (*(v86 - 20) ^ *(v85 - 20)) & v83;
            *(v85 - 20) = 0;
            *(v86 - 19) ^= (*(v86 - 19) ^ *(v85 - 19)) & v83;
            *(v85 - 19) = 0;
            *(v86 - 18) ^= (*(v86 - 18) ^ *(v85 - 18)) & v83;
            *(v85 - 18) = 0;
            *(v86 - 17) ^= (*(v86 - 17) ^ *(v85 - 17)) & v83;
            *(v85 - 17) = 0;
          }
          while ( v84 != ((v3 - 9) & 0xFFFFFFF8) + 8 );
        }
        else
        {
          v84 = 0;
        }
        v89 = (_DWORD *)(v82 + 4 * v84);
        v90 = (_DWORD *)(v80 + 4 * v84);
        do
        {
          ++v84;
          *v90 ^= (*v89 ^ *v90) & v83;
          ++v90;
          *v89++ = 0;
        }
        while ( v3 > v84 );
        return 1;
      }
    }
  }
  return 0;
}
