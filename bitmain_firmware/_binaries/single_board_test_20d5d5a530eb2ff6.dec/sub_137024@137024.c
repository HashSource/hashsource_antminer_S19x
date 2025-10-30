int __fastcall sub_137024(int result, int *a2, unsigned int a3, int *a4, int *a5)
{
  unsigned int v5; // r3
  bool v6; // cc
  int v7; // r9
  int v8; // r10
  int v9; // r11
  int v10; // lr
  int v11; // r5
  int v12; // r3
  int v13; // r7
  int v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r4
  int v18; // r10
  int v19; // r8
  int v20; // r11
  int v21; // r6
  int v22; // r12
  int v23; // r5
  int v24; // r1
  int v25; // r9
  int v26; // r4
  int v27; // r0
  int v28; // r4
  int v29; // r7
  int v30; // r10
  int v31; // r11
  int v32; // lr
  int v33; // r5
  int v34; // r6
  int v35; // r2
  int v36; // lr
  int v37; // r1
  int v38; // r9
  int v39; // r7
  int v40; // r12
  int v41; // r10
  int v42; // r4
  int v43; // r6
  int v44; // r5
  int v45; // lr
  int v46; // r11
  int v47; // r1
  int v48; // r0
  int v49; // r8
  int v50; // r3
  int v51; // r12
  int v52; // r8
  int v53; // r2
  int v54; // r7
  int v55; // r6
  bool v56; // zf
  int v57; // r12
  bool v58; // cf
  char v59; // r2
  int v60; // r11
  char v61; // r2
  int v62; // r2
  int v63; // r9
  int v64; // r12
  unsigned int v65; // r1
  int v66; // r4
  int v67; // r3
  unsigned int v68; // r4
  char *v69; // r4
  _DWORD *v70; // r1
  char v71; // r3
  char v72; // t1
  char v73; // t1
  int v74; // [sp+0h] [bp-BCh]
  int v75; // [sp+0h] [bp-BCh]
  int v76; // [sp+0h] [bp-BCh]
  int v77; // [sp+0h] [bp-BCh]
  int v78; // [sp+4h] [bp-B8h]
  int v79; // [sp+4h] [bp-B8h]
  int v80; // [sp+4h] [bp-B8h]
  int v81; // [sp+8h] [bp-B4h]
  int v82; // [sp+8h] [bp-B4h]
  int v83; // [sp+8h] [bp-B4h]
  int v84; // [sp+Ch] [bp-B0h]
  int v85; // [sp+Ch] [bp-B0h]
  int v86; // [sp+10h] [bp-ACh]
  int v87; // [sp+10h] [bp-ACh]
  int v88; // [sp+10h] [bp-ACh]
  int v89; // [sp+14h] [bp-A8h]
  int v90; // [sp+14h] [bp-A8h]
  int v91; // [sp+18h] [bp-A4h]
  int v92; // [sp+18h] [bp-A4h]
  int v93; // [sp+1Ch] [bp-A0h]
  int v94; // [sp+20h] [bp-9Ch]
  int *v96; // [sp+28h] [bp-94h]
  int v97; // [sp+2Ch] [bp-90h]
  int v98; // [sp+30h] [bp-8Ch]
  unsigned int v99; // [sp+34h] [bp-88h]
  unsigned int v100; // [sp+38h] [bp-84h]
  int v101; // [sp+3Ch] [bp-80h]
  int v102; // [sp+40h] [bp-7Ch]
  int v103; // [sp+44h] [bp-78h]
  int v104; // [sp+48h] [bp-74h]
  int v105; // [sp+4Ch] [bp-70h]
  int v106; // [sp+50h] [bp-6Ch]
  int v107; // [sp+54h] [bp-68h]
  int v108; // [sp+58h] [bp-64h]
  int v109; // [sp+5Ch] [bp-60h]
  int v110; // [sp+60h] [bp-5Ch]
  int v111; // [sp+64h] [bp-58h]
  _DWORD v112[4]; // [sp+68h] [bp-54h] BYREF
  _DWORD v113[8]; // [sp+78h] [bp-44h]
  int v114; // [sp+98h] [bp-24h]
  int v115; // [sp+9Ch] [bp-20h]
  int v116; // [sp+A0h] [bp-1Ch]
  int v117; // [sp+A4h] [bp-18h]
  int v118; // [sp+A8h] [bp-14h]
  int v119; // [sp+ACh] [bp-10h]
  int v120; // [sp+B0h] [bp-Ch]
  int v121; // [sp+B4h] [bp-8h]

  v96 = (int *)result;
  v101 = *a4;
  v100 = a3;
  v102 = a4[1];
  v103 = a4[2];
  v104 = a4[3];
  v105 = a4[4];
  v106 = a4[5];
  v107 = a4[6];
  v108 = a4[7];
  v109 = a5[1];
  v110 = a5[2];
  v111 = a5[3];
  if ( a3 )
  {
    v97 = *a5;
    v5 = a3;
    qmemcpy(v112, "te k2-bynd 3expa", sizeof(v112));
    do
    {
      v6 = v5 > 0x3F;
      if ( v5 <= 0x3F )
        v99 = v5;
      else
        v5 -= 64;
      if ( v6 )
        v100 = v5;
      else
        v5 = 0;
      if ( v6 )
        v5 = 64;
      else
        v100 = v5;
      if ( v6 )
        v99 = v5;
      v7 = v112[1];
      v8 = v112[2];
      v9 = v112[3];
      v94 = 10;
      v74 = v107;
      v78 = v109;
      v81 = v104;
      v93 = v106;
      v10 = v105;
      v11 = v97;
      v12 = v102;
      v13 = v103;
      v14 = v111;
      v89 = v108;
      v91 = v112[0];
      v15 = v110;
      v16 = v101;
      v17 = v104;
      do
      {
        v18 = v8 + v12;
        v19 = v13 + v7;
        v20 = v9 + v16;
        v21 = v91 + v17;
        v22 = __ROR4__((v13 + v7) ^ v15, 16);
        v23 = __ROR4__(v20 ^ v11, 16);
        v24 = __ROR4__(v14 ^ (v91 + v17), 16);
        v25 = __ROR4__(v18 ^ v78, 16);
        v26 = v74;
        v75 = v23 + v10;
        v84 = v26 + v22;
        v86 = v89 + v24;
        v27 = __ROR4__((v93 + v25) ^ v12, 20);
        v28 = __ROR4__((v23 + v10) ^ v16, 20);
        v29 = __ROR4__(v13 ^ v84, 20);
        v30 = v18 + v27;
        v31 = v20 + v28;
        v32 = v21;
        v33 = __ROR4__(v23 ^ v31, 24);
        v92 = v19 + v29;
        v34 = __ROR4__(v81 ^ (v89 + v24), 20);
        v79 = __ROR4__(v25 ^ v30, 24);
        v35 = __ROR4__(v22 ^ (v19 + v29), 24);
        v36 = v32 + v34;
        v37 = __ROR4__(v24 ^ v36, 24);
        v76 = v75 + v33;
        v38 = v93 + v25 + v79;
        v39 = __ROR4__(v29 ^ (v84 + v35), 25);
        v40 = v86 + v37;
        v41 = v30 + v39;
        v42 = __ROR4__(v28 ^ v76, 25);
        v43 = __ROR4__(v34 ^ (v86 + v37), 25);
        v82 = __ROR4__(v27 ^ v38, 25);
        v44 = __ROR4__(v33 ^ v41, 16);
        v45 = v36 + v42;
        v46 = v31 + v82;
        v47 = __ROR4__(v37 ^ v46, 16);
        v48 = v79 ^ (v92 + v43);
        v80 = __ROR4__(v35 ^ v45, 16);
        v49 = v84 + v35 + v47;
        v50 = __ROR4__(v48, 16);
        v90 = v38 + v80;
        v85 = v40 + v44;
        v87 = v76 + v50;
        v77 = v49;
        v51 = __ROR4__(v39 ^ (v40 + v44), 20);
        v52 = __ROR4__(v82 ^ v49, 20);
        v53 = v92 + v43;
        v54 = __ROR4__(v43 ^ v87, 20);
        v55 = __ROR4__(v42 ^ (v38 + v80), 20);
        v7 = v53 + v54;
        v91 = v45 + v55;
        v15 = __ROR4__(v80 ^ (v45 + v55), 24);
        v9 = v46 + v52;
        v78 = __ROR4__(v50 ^ (v53 + v54), 24);
        v8 = v41 + v51;
        v14 = __ROR4__(v47 ^ v9, 24);
        v11 = __ROR4__(v44 ^ v8, 24);
        v93 = v90 + v15;
        v74 = v77 + v14;
        v89 = v85 + v11;
        v10 = v87 + v78;
        v17 = __ROR4__(v54 ^ (v87 + v78), 25);
        v16 = __ROR4__(v55 ^ v93, 25);
        v13 = __ROR4__(v51 ^ (v85 + v11), 25);
        v81 = v17;
        v56 = v94 == 1;
        v12 = __ROR4__(v52 ^ v74, 25);
        --v94;
      }
      while ( !v56 );
      v57 = v87 + v78;
      v88 = v15;
      v98 = v16;
      v58 = a2 >= v96 + 1;
      if ( a2 < v96 + 1 )
        v58 = v96 >= a2 + 1;
      v59 = v58;
      v60 = v9 + v112[3];
      v61 = v59 & 1;
      if ( (((unsigned __int8)v96 | (unsigned __int8)a2) & 3) != 0 )
        v61 = 0;
      if ( v99 > 5 )
        v62 = v61 & 1;
      else
        v62 = 0;
      v63 = v7 + v112[1];
      v83 = v17 + v104;
      v114 = v57 + v105;
      v115 = v93 + v106;
      v113[0] = v60;
      v113[2] = v63;
      v113[3] = v91 + v112[0];
      v113[4] = v101 + v98;
      v113[6] = v13 + v103;
      v119 = v78 + v109;
      v116 = v74 + v107;
      v113[1] = v8 + v112[2];
      v117 = v85 + v11 + v108;
      v64 = v111 + v14;
      v118 = v11 + v97;
      v120 = v110 + v15;
      v113[5] = v102 + v12;
      v121 = v111 + v14;
      v113[7] = v17 + v104;
      if ( v62 )
      {
        v65 = ((v99 - 4) >> 2) + 1;
        v66 = 4 * v65;
        result = (int)v96;
        *v96 = *a2 ^ v60;
        if ( (v99 - 4) >> 2 )
        {
          v96[1] = a2[1] ^ (v8 + v112[2]);
          if ( (v99 - 4) >> 2 != 1 )
          {
            v96[2] = a2[2] ^ v63;
            if ( (v99 - 4) >> 2 != 2 )
            {
              v96[3] = a2[3] ^ (v91 + v112[0]);
              if ( (v99 - 4) >> 2 != 3 )
              {
                v96[4] = a2[4] ^ (v101 + v98);
                if ( (v99 - 4) >> 2 != 4 )
                {
                  v96[5] = a2[5] ^ (v102 + v12);
                  if ( (v99 - 4) >> 2 != 5 )
                  {
                    result = (v13 + v103) ^ a2[6];
                    v96[6] = result;
                    if ( (v99 - 4) >> 2 != 6 )
                    {
                      result = (int)v96;
                      v96[7] = a2[7] ^ v83;
                      if ( (v99 - 4) >> 2 != 7 )
                      {
                        v96[8] = a2[8] ^ v114;
                        if ( (v99 - 4) >> 2 != 8 )
                        {
                          v96[9] = a2[9] ^ v115;
                          if ( (v99 - 4) >> 2 != 9 )
                          {
                            v96[10] = a2[10] ^ v116;
                            if ( (v99 - 4) >> 2 != 10 )
                            {
                              v96[11] = a2[11] ^ v117;
                              if ( (v99 - 4) >> 2 != 11 )
                              {
                                v96[12] = a2[12] ^ v118;
                                if ( (v99 - 4) >> 2 != 12 )
                                {
                                  v96[13] = a2[13] ^ v119;
                                  if ( (v99 - 4) >> 2 != 13 )
                                  {
                                    v96[14] = a2[14] ^ (v110 + v88);
                                    if ( (v99 - 4) >> 2 == 15 )
                                      v96[15] = a2[15] ^ v64;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v99 != v66 )
        {
          v67 = v66 + 1;
          result = LOBYTE(a2[v65]);
          LOBYTE(v96[v65]) = LOBYTE(v113[v65]) ^ result;
          if ( v99 > v66 + 1 )
          {
            v68 = v66 + 2;
            *((_BYTE *)v96 + v67) = *((_BYTE *)v113 + v67) ^ *((_BYTE *)a2 + v67);
            if ( v99 > v68 )
              *((_BYTE *)v96 + v68) = *((_BYTE *)v113 + v68) ^ *((_BYTE *)a2 + v68);
          }
        }
      }
      else
      {
        v69 = (char *)&v112[3] + 3;
        v70 = (int *)((char *)a2 - 1);
        result = (int)v96 - 1;
        do
        {
          v72 = *((_BYTE *)v70 + 1);
          v70 = (_DWORD *)((char *)v70 + 1);
          v71 = v72;
          v73 = *++v69;
          *(_BYTE *)++result = v71 ^ v73;
        }
        while ( (int *)((char *)a2 + v99 - 1) != v70 );
      }
      v96 = (int *)((char *)v96 + v99);
      a2 = (int *)((char *)a2 + v99);
      ++v97;
      v5 = v100;
    }
    while ( v100 );
  }
  return result;
}
