int __fastcall sub_3ECC0(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v3; // r12
  char v4; // r4
  char *v5; // r11
  int v6; // r12
  __int16 v7; // r2
  bool v8; // zf
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r6
  int v19; // r3
  int v20; // r2
  __int16 v21; // r2
  int v22; // r9
  char *v23; // r10
  char *v24; // r7
  int v25; // r3
  unsigned int v26; // r3
  int v27; // r3
  double v28; // d16
  unsigned int v29; // r2
  double v30; // d6
  __int64 v31; // r0
  double v32; // d7
  unsigned int v33; // r2
  unsigned int v34; // r3
  unsigned int v35; // r3
  unsigned int v36; // r3
  unsigned int v37; // r3
  int v38; // r8
  char *v39; // r11
  int v40; // r8
  __int64 v41; // r4
  int v42; // r2
  int v43; // r2
  double v44; // d0
  __int64 v45; // r4
  char v46; // t1
  char v47; // r3
  unsigned int v48; // r2
  double v49; // d0
  __int64 v50; // r4
  __int64 v51; // r4
  double v52; // d0
  double v53; // d16
  bool v54; // zf
  int v56; // r2
  int v57; // r1
  int *v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r3
  _DWORD *v63; // t0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // [sp+10h] [bp-64h]
  int *v68; // [sp+14h] [bp-60h]
  char *v69; // [sp+18h] [bp-5Ch]
  int v71; // [sp+30h] [bp-44h] BYREF
  int v72; // [sp+34h] [bp-40h]
  int v73; // [sp+38h] [bp-3Ch]
  int v74; // [sp+3Ch] [bp-38h]
  int v75; // [sp+40h] [bp-34h]
  int v76; // [sp+44h] [bp-30h]
  int v77; // [sp+48h] [bp-2Ch]
  int v78; // [sp+4Ch] [bp-28h]
  int v79; // [sp+50h] [bp-24h]
  int v80; // [sp+54h] [bp-20h]
  int v81; // [sp+58h] [bp-1Ch]
  int v82; // [sp+5Ch] [bp-18h]
  int v83; // [sp+60h] [bp-14h]
  int v84; // [sp+64h] [bp-10h]
  int v85; // [sp+68h] [bp-Ch]

  v3 = *(unsigned __int16 *)(a3 + 4);
  if ( ((HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF) != 0x20 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v4 = *(_BYTE *)(a3 + 2);
  v68 = (int *)(a3 + 8);
  byte_BD93B = *(_BYTE *)(a3 + 3);
  v5 = (char *)&dword_BD940;
  dword_BDB3C = (int)a1;
  v67 = ((unsigned __int16)(v3 >> 8) | (unsigned __int16)((_WORD)v3 << 8)) & 0xFFF;
  if ( dword_BDB40 )
  {
    v6 = 280;
    v7 = 6145;
  }
  else
  {
    v7 = -4096;
    v6 = 240;
  }
  dword_BDB38 = a2;
  byte_BD93A = v4;
  dword_BD92C = v6;
  word_BD93E = v7;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v8 = v67 == 0;
  if ( v67 )
    v8 = &dword_BD940 == 0;
  if ( !v8 )
  {
    do
    {
      v71 = 0;
      v9 = *v68;
      v10 = v68[1];
      v11 = v68[2];
      v12 = v68[3];
      v72 = 0;
      v78 = v9;
      v79 = v10;
      v80 = v11;
      v81 = v12;
      v13 = v68[7];
      v14 = v68[4];
      v15 = v68[5];
      v16 = v68[6];
      HIWORD(v71) = v79;
      v73 = 0;
      v82 = v14;
      v83 = v15;
      v84 = v16;
      v85 = v13;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      if ( dword_BDB40 && v80 )
      {
        LOWORD(v71) = 10;
        v73 = v82;
        v74 = v83;
        v75 = v84;
        v76 = v85;
      }
      else
      {
        LOWORD(v71) = 2;
        v72 = v78;
      }
      v68 += 8;
      v17 = sub_31F34((unsigned __int16 *)&v71, 0, 0, -1, 0, 0);
      v18 = v17;
      if ( v17 )
      {
        if ( a1->sa_family == 10 )
        {
          v57 = *(_DWORD *)(v17 + 56);
          if ( v57 )
          {
            if ( *(_BYTE *)(v17 + 72) == 4 )
              v58 = (int *)(v57 + 88);
            else
              v58 = (int *)(v57 + 32);
            v59 = *v58;
            v63 = v58 + 1;
            v60 = v58[1];
            v61 = *++v63;
            v62 = v63[1];
            *((_DWORD *)v5 + 62) = v59;
            *((_DWORD *)v5 + 63) = v60;
            *((_DWORD *)v5 + 64) = v61;
            *((_DWORD *)v5 + 65) = v62;
          }
          else
          {
            memset(v5 + 248, 0, 0x10u);
          }
          v64 = *(_DWORD *)(v18 + 28);
          v65 = *(_DWORD *)(v18 + 32);
          v66 = *(_DWORD *)(v18 + 36);
          *((_DWORD *)v5 + 66) = *(_DWORD *)(v18 + 24);
          *((_DWORD *)v5 + 67) = v64;
          *((_DWORD *)v5 + 68) = v65;
          *((_DWORD *)v5 + 69) = v66;
          *((_DWORD *)v5 + 60) = 1;
        }
        else
        {
          v19 = *(_DWORD *)(v17 + 56);
          if ( v19 )
          {
            if ( *(_DWORD *)(v17 + 748) )
            {
              if ( *(_BYTE *)(v17 + 72) == 4
                || *(_BYTE *)(v17 + 72) && (v56 = *(_DWORD *)(v19 + 28), (*(_DWORD *)v5 = v56) == 0) )
              {
                *(_DWORD *)v5 = *(_DWORD *)(v19 + 84);
              }
            }
            else
            {
              *(_DWORD *)v5 = *(_DWORD *)(v19 + 28);
            }
          }
          else
          {
            *(_DWORD *)v5 = 0;
          }
          v20 = dword_BDB40;
          *((_DWORD *)v5 + 1) = *(_DWORD *)(v17 + 20);
          if ( v20 )
            *((_DWORD *)v5 + 60) = 0;
        }
        v21 = *(_WORD *)(v18 + 18);
        v5[10] = 0;
        v22 = v18 + 551;
        *((_WORD *)v5 + 4) = v21;
        v23 = v5 + 180;
        v24 = v5;
        if ( v18 == sys_peer )
          v5[10] = 2;
        v25 = *(_DWORD *)(v18 + 68);
        if ( (v25 & 1) != 0 )
        {
          v5[10] |= 1u;
          v25 = *(_DWORD *)(v18 + 68);
        }
        if ( (v25 & 8) != 0 )
        {
          v5[10] |= 8u;
          v25 = *(_DWORD *)(v18 + 68);
        }
        if ( (v25 & 0x20) != 0 )
        {
          v5[10] |= 0x10u;
          v25 = *(_DWORD *)(v18 + 68);
        }
        if ( (v25 & 0x40) != 0 )
          v5[10] |= 4u;
        v26 = *(unsigned __int8 *)(v18 + 296);
        if ( v26 == 4 )
        {
          v5[10] |= 0x40u;
          v26 = *(unsigned __int8 *)(v18 + 296);
        }
        if ( v26 > 5 )
          v5[10] = ~((unsigned int)~((unsigned __int8)v5[10] << 25) >> 25);
        v5[11] = *(_BYTE *)(v18 + 91);
        v5[12] = *(_BYTE *)(v18 + 63);
        v5[13] = *(_BYTE *)(v18 + 92);
        *((_DWORD *)v5 + 7) = *(_DWORD *)(v18 + 124);
        v5[14] = *(_BYTE *)(v18 + 93);
        v5[15] = *(_BYTE *)(v18 + 94);
        v5[16] = *(_BYTE *)(v18 + 64);
        v5[17] = *(_BYTE *)(v18 + 95);
        v5[18] = *(_BYTE *)(v18 + 62);
        v5[20] = *(_BYTE *)(v18 + 298);
        v5[21] = *(_DWORD *)(v18 + 708);
        v5[22] = *(_DWORD *)(v18 + 300);
        v27 = *(_DWORD *)(v18 + 300);
        v28 = *(double *)(v18 + 616) * 65536.0;
        v5[23] = *(_DWORD *)(v18 + 76);
        v29 = *(unsigned __int16 *)(v18 + 60);
        *((_WORD *)v5 + 12) = v27;
        v30 = *(double *)(v18 + 96);
        LODWORD(v31) = *(_DWORD *)(v18 + 120);
        *((_WORD *)v5 + 13) = (v29 >> 8) | ((_WORD)v29 << 8);
        HIDWORD(v31) = bswap32(*(_DWORD *)(v18 + 588));
        v32 = *(double *)(v18 + 104);
        *((_DWORD *)v5 + 59) = bswap32((int)v28);
        *((_DWORD *)v5 + 9) = *(_DWORD *)(v18 + 112);
        *((_DWORD *)v5 + 11) = bswap32((unsigned int)(v30 * 65536.0));
        v69 = v5;
        v33 = bswap32(*(_DWORD *)(v18 + 564));
        *((_DWORD *)v5 + 12) = bswap32((unsigned int)(v32 * 65536.0));
        v34 = *(_DWORD *)(v18 + 116);
        *((_DWORD *)v5 + 14) = bswap32(v31);
        *((_DWORD *)v5 + 13) = bswap32(v34);
        v35 = *(_DWORD *)(v18 + 584);
        *((_DWORD *)v5 + 16) = HIDWORD(v31);
        *((_DWORD *)v5 + 15) = bswap32(v35);
        v36 = *(_DWORD *)(v18 + 560);
        *((_DWORD *)v5 + 18) = v33;
        *((_DWORD *)v5 + 17) = bswap32(v36);
        v37 = *(_DWORD *)(v18 + 572);
        *((_DWORD *)v5 + 19) = bswap32(*(_DWORD *)(v18 + 568));
        v38 = *(_DWORD *)(v18 + 320);
        *((_DWORD *)v5 + 20) = bswap32(v37);
        v39 = v5 + 80;
        v40 = v38 - 1;
        do
        {
          LODWORD(v31) = 32;
          HIDWORD(v41) = 0;
          ++v23;
          if ( v40 < 0 )
            v42 = 7;
          else
            v42 = v40;
          v43 = v18 + 8 * v42;
          if ( v40 < 0 )
            v40 = 6;
          else
            --v40;
          v24 += 8;
          *((_DWORD *)v39 + 1) = bswap32((int)(*(double *)(v43 + 328) * 65536.0));
          v39 += 4;
          v44 = *(double *)(v43 + 392);
          if ( v44 >= 0.0 )
          {
            LODWORD(v41) = 0;
          }
          else
          {
            v44 = -v44;
            LODWORD(v41) = 1;
          }
          ldexp(*(double *)&v31, v43);
          v31 = sub_8D558(LODWORD(v44), HIDWORD(v44)) ^ -v41;
          v45 = v41 + v31;
          *((_DWORD *)v24 + 28) = bswap32(v45);
          *((_DWORD *)v24 + 27) = bswap32(HIDWORD(v45));
          v46 = *(_BYTE *)++v22;
          v47 = *(_DWORD *)(v18 + 320) - v46;
          v48 = (unsigned __int8)(v47 + 7);
          if ( v48 > 7 )
            *(v23 - 1) = v47 - 1;
          else
            *(v23 - 1) = v48;
        }
        while ( v22 != v18 + 559 );
        v49 = *(double *)(v18 + 608);
        LODWORD(v31) = 32;
        HIDWORD(v50) = 0;
        if ( v49 >= 0.0 )
        {
          LODWORD(v50) = 0;
        }
        else
        {
          v49 = -v49;
          LODWORD(v50) = 1;
        }
        ldexp(*(double *)&v31, v48);
        v51 = v50 + (sub_8D558(LODWORD(v49), HIDWORD(v49)) ^ -v50);
        *((_DWORD *)v69 + 49) = bswap32(HIDWORD(v51));
        v52 = *(double *)(v18 + 632);
        *((_DWORD *)v69 + 50) = bswap32(v51);
        *((_DWORD *)v69 + 47) = bswap32((int)(*(double *)(v18 + 616) * 65536.0));
        v53 = sqrt(*(double *)(v18 + 624));
        *((_DWORD *)v69 + 48) = bswap32((unsigned int)(sqrt(v52) * 65536.0));
        *((_DWORD *)v69 + 51) = bswap32((unsigned int)(v53 * 65536.0));
        v5 = sub_3B168();
      }
      v67 = (unsigned __int16)(v67 - 1);
      v54 = v67 == 0;
      if ( v67 )
        v54 = v5 == 0;
    }
    while ( !v54 );
  }
  return sub_3B8C4();
}
