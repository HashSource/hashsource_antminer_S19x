unsigned int __fastcall sub_E4A90(
        unsigned int result,
        _BYTE *a2,
        unsigned int a3,
        int a4,
        int a5,
        char *a6,
        int *a7,
        void (__fastcall *a8)(char *, _BYTE *, unsigned int, int, int))
{
  char *v8; // r7
  unsigned int v10; // r6
  int v11; // r10
  bool v12; // zf
  char v13; // r3
  char v14; // r2
  char v15; // t1
  int v16; // r3
  unsigned int v17; // r9
  int v18; // r5
  int v19; // r0
  int v20; // r1
  unsigned int v21; // r12
  int v22; // r2
  unsigned int v23; // r0
  int v24; // r3
  int v25; // lr
  unsigned int v26; // r1
  int v27; // r12
  unsigned int v28; // r2
  int v29; // r0
  unsigned int v30; // r3
  int v31; // r1
  unsigned int v32; // lr
  int v33; // r2
  unsigned int v34; // r12
  int v35; // r3
  unsigned int v36; // r1
  unsigned int v37; // r2
  int v38; // r3
  int v39; // r5
  char *v40; // r3
  unsigned int v41; // r10
  int v42; // r1
  char *v43; // r5
  unsigned int *v44; // r4
  unsigned int v45; // r3
  char v46; // lr
  unsigned int v47; // r2
  char v48; // r3
  char v49; // r3
  char v50; // r3
  int v51; // r3
  unsigned int v52; // lr
  unsigned int v53; // r12
  int v54; // r3
  int v55; // r2
  int v56; // r3
  int v57; // r2
  int v58; // r3
  unsigned int v59; // r1
  int v60; // r0
  unsigned int v61; // r2
  int v62; // r1
  unsigned int v63; // r3
  int v64; // r2
  unsigned int v65; // r0
  int v66; // r3
  unsigned int v67; // r1
  int v68; // r0
  unsigned int v69; // r2
  int v70; // r1
  unsigned int v71; // r3
  int v72; // r2
  unsigned int v73; // r0
  int v74; // r3
  unsigned int v75; // r1
  unsigned int v76; // r2
  int v77; // r3
  int v78; // r3
  int v79; // r2
  int v80; // r3
  int v81; // r2
  int v82; // r3
  int v83; // r2
  int v84; // r3
  int v85; // r2
  int v86; // r3
  int v87; // r2
  int v88; // r3
  int v89; // r2
  int v90; // r3
  char *v91; // [sp+Ch] [bp-10h]
  int v93; // [sp+14h] [bp-8h]

  v8 = (char *)result;
  v10 = a3;
  v11 = *a7;
  v12 = *a7 == 0;
  if ( *a7 )
    v12 = a3 == 0;
  if ( !v12 )
  {
    do
    {
      result = (unsigned __int8)a6[v11];
      v13 = (v11 + 1) & 0xF;
      v15 = *v8++;
      v14 = v15;
      if ( ((v11 + 1) & 0xF) != 0 )
        v13 = 1;
      --v10;
      v16 = v13 & 1;
      if ( !v10 )
        v16 = 0;
      v11 = ((_BYTE)v11 + 1) & 0xF;
      *a2++ = v14 ^ result;
    }
    while ( v16 );
  }
  v17 = _byteswap_ulong(*(_DWORD *)(a5 + 12));
  if ( v10 > 0xF )
  {
    v93 = v11;
    v91 = v8;
    do
    {
      v18 = v10 >> 4;
      v41 = (v10 >> 4) + v17;
      if ( __CFADD__(v10 >> 4, v17) )
      {
        v18 = -v17;
        a8(v91, a2, -v17, a4, a5);
        v19 = *(unsigned __int8 *)(a5 + 10);
        v17 = 0;
        v20 = *(unsigned __int8 *)(a5 + 9);
        v21 = *(unsigned __int8 *)(a5 + 11) + 1;
        v22 = *(unsigned __int8 *)(a5 + 8);
        *(_BYTE *)(a5 + 12) = 0;
        v23 = v19 + (v21 >> 8);
        v24 = *(unsigned __int8 *)(a5 + 7);
        v25 = *(unsigned __int8 *)(a5 + 6);
        v26 = v20 + (v23 >> 8);
        *(_BYTE *)(a5 + 11) = v21;
        v27 = *(unsigned __int8 *)(a5 + 5);
        v28 = v22 + (v26 >> 8);
        *(_BYTE *)(a5 + 10) = v23;
        v29 = *(unsigned __int8 *)(a5 + 4);
        v30 = v24 + (v28 >> 8);
        *(_BYTE *)(a5 + 9) = v26;
        v31 = *(unsigned __int8 *)(a5 + 3);
        v32 = v25 + (v30 >> 8);
        *(_BYTE *)(a5 + 8) = v28;
        v33 = *(unsigned __int8 *)(a5 + 2);
        v34 = v27 + (v32 >> 8);
        *(_BYTE *)(a5 + 7) = v30;
        v35 = *(unsigned __int8 *)(a5 + 1);
        result = v29 + (v34 >> 8);
        *(_BYTE *)(a5 + 6) = v32;
        LOBYTE(v32) = *(_BYTE *)a5;
        v36 = v31 + (result >> 8);
        *(_BYTE *)(a5 + 13) = 0;
        *(_BYTE *)(a5 + 14) = 0;
        v37 = v33 + (v36 >> 8);
        *(_BYTE *)(a5 + 15) = 0;
        *(_BYTE *)(a5 + 5) = v34;
        v38 = v35 + (v37 >> 8);
        *(_BYTE *)(a5 + 4) = result;
        *(_BYTE *)(a5 + 3) = v36;
        *(_BYTE *)(a5 + 2) = v37;
        *(_BYTE *)(a5 + 1) = v38;
        *(_BYTE *)a5 = v32 + BYTE1(v38);
      }
      else
      {
        v17 += v10 >> 4;
        result = ((int (__fastcall *)(char *, _BYTE *, unsigned int, int, int))a8)(v91, a2, v10 >> 4, a4, a5);
        *(_BYTE *)(a5 + 15) = v41;
        *(_BYTE *)(a5 + 12) = HIBYTE(v41);
        *(_BYTE *)(a5 + 13) = BYTE2(v41);
        *(_BYTE *)(a5 + 14) = BYTE1(v41);
      }
      v39 = 16 * v18;
      v10 -= v39;
      a2 += v39;
      v40 = &v91[v39];
      v91 += v39;
    }
    while ( v10 > 0xF );
    v11 = v93;
    v8 = v40;
  }
  if ( v10 )
  {
    *(_DWORD *)a6 = 0;
    *((_DWORD *)a6 + 1) = 0;
    *((_DWORD *)a6 + 2) = 0;
    *((_DWORD *)a6 + 3) = 0;
    a8(a6, a6, 1u, a4, a5);
    *(_BYTE *)(a5 + 15) = v17 + 1;
    *(_BYTE *)(a5 + 12) = (v17 + 1) >> 24;
    *(_BYTE *)(a5 + 13) = (v17 + 1) >> 16;
    *(_BYTE *)(a5 + 14) = (unsigned __int16)(v17 + 1) >> 8;
    if ( v17 == -1 )
    {
      v57 = *(unsigned __int8 *)(a5 + 10);
      v58 = *(unsigned __int8 *)(a5 + 9);
      v59 = *(unsigned __int8 *)(a5 + 11) + 1;
      v60 = *(unsigned __int8 *)(a5 + 8);
      *(_BYTE *)(a5 + 11) = v59;
      v61 = v57 + (v59 >> 8);
      v62 = *(unsigned __int8 *)(a5 + 7);
      v63 = v58 + (v61 >> 8);
      *(_BYTE *)(a5 + 10) = v61;
      v64 = *(unsigned __int8 *)(a5 + 6);
      v65 = v60 + (v63 >> 8);
      *(_BYTE *)(a5 + 9) = v63;
      v66 = *(unsigned __int8 *)(a5 + 5);
      v67 = v62 + (v65 >> 8);
      *(_BYTE *)(a5 + 8) = v65;
      v68 = *(unsigned __int8 *)(a5 + 4);
      v69 = v64 + (v67 >> 8);
      *(_BYTE *)(a5 + 7) = v67;
      v70 = *(unsigned __int8 *)(a5 + 3);
      v71 = v66 + (v69 >> 8);
      *(_BYTE *)(a5 + 6) = v69;
      v72 = *(unsigned __int8 *)(a5 + 2);
      v73 = v68 + (v71 >> 8);
      *(_BYTE *)(a5 + 5) = v71;
      v74 = *(unsigned __int8 *)(a5 + 1);
      v75 = v70 + (v73 >> 8);
      *(_BYTE *)(a5 + 4) = v73;
      LOBYTE(v73) = *(_BYTE *)a5;
      v76 = v72 + (v75 >> 8);
      *(_BYTE *)(a5 + 3) = v75;
      v77 = v74 + (v76 >> 8);
      *(_BYTE *)(a5 + 2) = v76;
      *(_BYTE *)(a5 + 1) = v77;
      *(_BYTE *)a5 = v73 + BYTE1(v77);
    }
    v42 = v11 + 4;
    v43 = &v8[v11];
    v44 = (unsigned int *)&a6[v11];
    v45 = (unsigned int)&a2[v11 + 4];
    v46 = v45 <= (unsigned int)&a6[v11];
    v47 = (unsigned int)&a2[v11];
    v48 = v45 <= (unsigned int)&v8[v11];
    if ( &a2[v11] >= &v8[v11 + 4] )
      v48 |= 1u;
    if ( v47 >= (unsigned int)&a6[v11 + 4] )
      v46 |= 1u;
    v49 = v46 & v48;
    if ( v10 > 6 )
      v50 = v49 & 1;
    else
      v50 = 0;
    v51 = v50 & 1;
    if ( (((unsigned __int8)(v47 | (unsigned __int8)v43) | (unsigned __int8)v44) & 3) != 0 )
      v51 = 0;
    v52 = v10 - 1;
    if ( !v51 )
    {
      v78 = v11 + 1;
      result = (unsigned __int8)v8[v11];
      a2[v11] = a6[v11] ^ result;
      if ( v10 != 1 )
      {
        v79 = v11 + 2;
        result = (unsigned __int8)v8[v78] ^ (unsigned __int8)a6[v78];
        a2[v78] = result;
        if ( v10 != 2 )
        {
          v80 = v11 + 3;
          result = (unsigned __int8)a6[v79] ^ (unsigned __int8)v8[v79];
          a2[v79] = result;
          if ( v10 != 3 )
          {
            result = (unsigned __int8)v8[v80];
            a2[v80] = a6[v80] ^ result;
            if ( v10 != 4 )
            {
              result = (unsigned __int8)v8[v42];
              v81 = v11 + 5;
              a2[v42] = a6[v42] ^ result;
              if ( v10 != 5 )
              {
                result = (unsigned __int8)v8[v81];
                v82 = v11 + 6;
                a2[v81] = a6[v81] ^ result;
                if ( v10 != 6 )
                {
                  result = (unsigned __int8)v8[v82];
                  v83 = v11 + 7;
                  a2[v82] = a6[v82] ^ result;
                  if ( v10 != 7 )
                  {
                    result = (unsigned __int8)v8[v83];
                    v84 = v11 + 8;
                    a2[v83] = a6[v83] ^ result;
                    if ( v10 != 8 )
                    {
                      result = (unsigned __int8)v8[v84];
                      v85 = v11 + 9;
                      a2[v84] = a6[v84] ^ result;
                      if ( v10 != 9 )
                      {
                        result = (unsigned __int8)v8[v85];
                        v86 = v11 + 10;
                        a2[v85] = a6[v85] ^ result;
                        if ( v10 != 10 )
                        {
                          result = (unsigned __int8)v8[v86];
                          v87 = v11 + 11;
                          a2[v86] = a6[v86] ^ result;
                          if ( v10 != 11 )
                          {
                            result = (unsigned __int8)v8[v87];
                            v88 = v11 + 12;
                            a2[v87] = a6[v87] ^ result;
                            if ( v10 != 12 )
                            {
                              result = (unsigned __int8)v8[v88];
                              v89 = v11 + 13;
                              a2[v88] = a6[v88] ^ result;
                              if ( v10 != 13 )
                              {
                                result = (unsigned __int8)v8[v89];
                                v90 = v11 + 14;
                                a2[v89] = a6[v89] ^ result;
                                if ( v10 != 14 )
                                {
                                  v11 += v10;
                                  a2[v90] = a6[v90] ^ v8[v90];
                                  goto LABEL_17;
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
      goto LABEL_38;
    }
    v53 = 4 * (((v10 - 4) >> 2) + 1);
    if ( v52 <= 2 )
    {
      v54 = v11;
    }
    else
    {
      result = *v44;
      *(_DWORD *)v47 = *(_DWORD *)v43 ^ *v44;
      if ( (v10 - 4) >> 2 )
      {
        result = v44[1];
        *(_DWORD *)(v47 + 4) = *((_DWORD *)v43 + 1) ^ result;
        if ( (v10 - 4) >> 2 == 2 )
          *(_DWORD *)(v47 + 8) = *((_DWORD *)v43 + 2) ^ v44[2];
      }
      v52 -= v53;
      v54 = v53 + v11;
      if ( v10 == v53 )
        goto LABEL_38;
    }
    v55 = v54 + 1;
    result = (unsigned __int8)v8[v54];
    a2[v54] = a6[v54] ^ result;
    if ( v52 )
    {
      result = (unsigned __int8)v8[v55];
      v56 = v54 + 2;
      a2[v55] = a6[v55] ^ result;
      if ( v52 != 1 )
        a2[v56] = v8[v56] ^ a6[v56];
    }
LABEL_38:
    v11 += v10;
  }
LABEL_17:
  *a7 = v11;
  return result;
}
