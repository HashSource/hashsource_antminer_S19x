int __fastcall sub_3EA78(struct sockaddr *a1, int a2, int a3)
{
  char v3; // lr
  int *v4; // r11
  __int16 v5; // r0
  int *v6; // r5
  __int16 v7; // r2
  int v8; // r3
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r4
  int *v20; // r3
  int v21; // r2
  __int16 v22; // r2
  int v23; // r3
  unsigned int v24; // r3
  int *v25; // r9
  int *v26; // r6
  char *v27; // r8
  int v28; // r3
  int v29; // r2
  double v30; // d6
  double v31; // d7
  unsigned int v32; // r3
  double v33; // d7
  unsigned int v34; // lr
  int v35; // r7
  unsigned int v36; // r12
  unsigned int v37; // r0
  unsigned int v38; // r1
  unsigned int v39; // r2
  int v40; // r3
  unsigned int v41; // r0
  unsigned int v42; // r3
  int v43; // r2
  unsigned int v44; // r1
  unsigned int v45; // r3
  _DWORD *v46; // r5
  __int64 v47; // r0
  char v48; // t1
  char v49; // r3
  int v50; // r1
  double v51; // r0
  double v52; // d0
  double v53; // d0
  double v54; // r0
  double v55; // d7
  double v56; // d0
  double v57; // d9
  double v58; // d0
  unsigned int v59; // s15
  double v60; // d9
  bool v61; // zf
  int *v62; // r3
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r2
  int v72; // [sp+8h] [bp-64h]
  int *v73; // [sp+10h] [bp-5Ch]
  int v75; // [sp+28h] [bp-44h] BYREF
  int v76; // [sp+2Ch] [bp-40h]
  int v77; // [sp+30h] [bp-3Ch]
  int v78; // [sp+34h] [bp-38h]
  int v79; // [sp+38h] [bp-34h]
  int v80; // [sp+3Ch] [bp-30h]
  int v81; // [sp+40h] [bp-2Ch]
  int v82; // [sp+44h] [bp-28h]
  int v83; // [sp+48h] [bp-24h]
  int v84; // [sp+4Ch] [bp-20h]
  int v85; // [sp+50h] [bp-1Ch]
  int v86; // [sp+54h] [bp-18h]
  int v87; // [sp+58h] [bp-14h]
  int v88; // [sp+5Ch] [bp-10h]
  int v89; // [sp+60h] [bp-Ch]

  v3 = *(_BYTE *)(a3 + 2);
  if ( (__rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF) != 0x20 )
    return sub_3AD58(a1, a2, v3, *(_BYTE *)(a3 + 3), 3);
  v4 = (int *)(a3 + 8);
  v5 = __rev16(*(unsigned __int16 *)(a3 + 4));
  v6 = &dword_BC92C;
  byte_BC927 = *(_BYTE *)(a3 + 3);
  v72 = v5 & 0xFFF;
  if ( dword_BCB2C )
    v7 = 6145;
  else
    v7 = -4096;
  byte_BC926 = v3;
  dword_BCB28 = (int)a1;
  if ( dword_BCB2C )
    v8 = 280;
  else
    v8 = 240;
  dword_BCB24 = a2;
  dword_BC91C = v8;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  word_BC92A = v7;
  v9 = &dword_BC92C == 0;
  if ( &dword_BC92C )
    v9 = v72 == 0;
  if ( !v9 )
  {
    do
    {
      v10 = *v4;
      v11 = v4[1];
      v12 = v4[2];
      v13 = v4[3];
      v75 = 0;
      v82 = v10;
      v83 = v11;
      v84 = v12;
      v85 = v13;
      v14 = v4[4];
      v15 = v4[5];
      v16 = v4[6];
      v17 = v4[7];
      v76 = 0;
      v86 = v14;
      v87 = v15;
      v88 = v16;
      v89 = v17;
      HIWORD(v75) = v83;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      if ( dword_BCB2C && v84 )
      {
        LOWORD(v75) = 10;
        v77 = v86;
        v78 = v87;
        v79 = v88;
        v80 = v89;
      }
      else
      {
        LOWORD(v75) = 2;
        v76 = v82;
      }
      v4 += 8;
      v18 = sub_31A44((unsigned __int16 *)&v75, 0, 0, -1, 0, 0);
      v19 = v18;
      if ( v18 )
      {
        v20 = *(int **)(v18 + 56);
        if ( a1->sa_family == 10 )
        {
          if ( v20 )
          {
            if ( *(_BYTE *)(v18 + 72) == 4 )
              v62 = v20 + 22;
            else
              v62 = v20 + 8;
            v63 = *v62;
            v64 = v62[1];
            v65 = v62[2];
            v66 = v62[3];
            v6[62] = v63;
            v6[63] = v64;
            v6[64] = v65;
            v6[65] = v66;
          }
          else
          {
            v6[62] = 0;
            v6[63] = 0;
            v6[64] = 0;
            v6[65] = 0;
          }
          v67 = *(_DWORD *)(v19 + 28);
          v68 = *(_DWORD *)(v19 + 32);
          v69 = *(_DWORD *)(v19 + 36);
          v6[66] = *(_DWORD *)(v19 + 24);
          v6[67] = v67;
          v6[68] = v68;
          v6[69] = v69;
          v6[60] = 1;
        }
        else
        {
          if ( v20 )
          {
            if ( *(_DWORD *)(v18 + 748) )
            {
              if ( *(_BYTE *)(v18 + 72) == 4 || *(_BYTE *)(v18 + 72) && (v70 = v20[7], (*v6 = v70) == 0) )
                *v6 = v20[21];
            }
            else
            {
              *v6 = v20[7];
            }
          }
          else
          {
            *v6 = 0;
          }
          v21 = dword_BCB2C;
          v6[1] = *(_DWORD *)(v18 + 20);
          if ( v21 )
            v6[60] = 0;
        }
        v22 = *(_WORD *)(v19 + 18);
        *((_BYTE *)v6 + 10) = 0;
        *((_WORD *)v6 + 4) = v22;
        if ( sys_peer == v19 )
          *((_BYTE *)v6 + 10) = 2;
        v23 = *(_DWORD *)(v19 + 68);
        if ( (v23 & 1) != 0 )
          *((_BYTE *)v6 + 10) |= 1u;
        if ( (v23 & 8) != 0 )
          *((_BYTE *)v6 + 10) |= 8u;
        if ( (v23 & 0x20) != 0 )
          *((_BYTE *)v6 + 10) |= 0x10u;
        if ( (v23 & 0x40) != 0 )
          *((_BYTE *)v6 + 10) |= 4u;
        v24 = *(unsigned __int8 *)(v19 + 296);
        if ( v24 == 4 )
        {
          *((_BYTE *)v6 + 10) |= 0x40u;
        }
        else if ( v24 > 5 )
        {
          *((_BYTE *)v6 + 10) = ~((unsigned int)~(*((unsigned __int8 *)v6 + 10) << 25) >> 25);
        }
        v25 = v6 + 45;
        v26 = v6;
        *((_BYTE *)v6 + 11) = *(_BYTE *)(v19 + 91);
        v27 = (char *)(v19 + 552);
        *((_BYTE *)v6 + 12) = *(_BYTE *)(v19 + 63);
        *((_BYTE *)v6 + 13) = *(_BYTE *)(v19 + 92);
        v6[7] = *(_DWORD *)(v19 + 124);
        *((_BYTE *)v6 + 14) = *(_BYTE *)(v19 + 93);
        *((_BYTE *)v6 + 15) = *(_BYTE *)(v19 + 94);
        *((_BYTE *)v6 + 16) = *(_BYTE *)(v19 + 64);
        *((_BYTE *)v6 + 17) = *(_BYTE *)(v19 + 95);
        *((_BYTE *)v6 + 18) = *(_BYTE *)(v19 + 62);
        *((_BYTE *)v6 + 20) = *(_BYTE *)(v19 + 298);
        *((_BYTE *)v6 + 21) = *(_DWORD *)(v19 + 708);
        v28 = *(_DWORD *)(v19 + 300);
        *((_BYTE *)v6 + 22) = v28;
        v29 = *(_DWORD *)(v19 + 76);
        v30 = *(double *)(v19 + 616);
        *((_WORD *)v6 + 12) = v28;
        *((_BYTE *)v6 + 23) = v29;
        v31 = *(double *)(v19 + 96) * 65536.0;
        *((_WORD *)v6 + 13) = __rev16(*(unsigned __int16 *)(v19 + 60));
        v6[59] = bswap32((int)(v30 * 65536.0));
        v32 = (unsigned int)v31;
        v33 = *(double *)(v19 + 104);
        v6[11] = bswap32(v32);
        v34 = bswap32(*(_DWORD *)(v19 + 116));
        v35 = *(_DWORD *)(v19 + 320) - 1;
        v36 = bswap32(*(_DWORD *)(v19 + 120));
        v37 = bswap32(*(_DWORD *)(v19 + 584));
        v38 = bswap32(*(_DWORD *)(v19 + 588));
        v73 = v6;
        v39 = bswap32(*(_DWORD *)(v19 + 560));
        v6[12] = bswap32((unsigned int)(v33 * 65536.0));
        v40 = *(_DWORD *)(v19 + 112);
        v6[15] = v37;
        v41 = *(_DWORD *)(v19 + 568);
        v6[9] = v40;
        v42 = *(_DWORD *)(v19 + 564);
        v6[16] = v38;
        v6[17] = v39;
        v43 = bswap32(v41);
        v44 = bswap32(v42);
        v45 = *(_DWORD *)(v19 + 572);
        v6[13] = v34;
        v6[14] = v36;
        v6[18] = v44;
        v6[19] = v43;
        v6[20] = bswap32(v45);
        v46 = v6 + 21;
        do
        {
          if ( v35 < 0 )
            v50 = 7;
          else
            v50 = v35;
          HIDWORD(v51) = v19 + 8 * v50;
          if ( v35 < 0 )
            v35 = 6;
          else
            --v35;
          *v46++ = bswap32((int)(*(double *)(HIDWORD(v51) + 328) * 65536.0));
          v52 = *(double *)(HIDWORD(v51) + 392);
          LODWORD(v51) = 32;
          ldexp(v51, v43);
          if ( v52 >= 0.0 )
            v47 = sub_8C010(LODWORD(v52), HIDWORD(v52));
          else
            v47 = -sub_8C010(COERCE_UNSIGNED_INT64(-v52), HIDWORD(COERCE_UNSIGNED_INT64(-v52)));
          v26[29] = bswap32(HIDWORD(v47));
          v25 = (int *)((char *)v25 + 1);
          v26[30] = bswap32(v47);
          v26 += 2;
          v48 = *v27++;
          v49 = *(_DWORD *)(v19 + 320) - v48;
          HIDWORD(v47) = (unsigned __int8)(v49 + 7);
          if ( HIDWORD(v47) <= 7 )
            *((_BYTE *)v25 - 1) = BYTE4(v47);
          else
            --v49;
          if ( HIDWORD(v47) > 7 )
            *((_BYTE *)v25 - 1) = v49;
        }
        while ( (char *)(v19 + 560) != v27 );
        v53 = *(double *)(v19 + 608);
        LODWORD(v47) = 32;
        ldexp(*(double *)&v47, v43);
        if ( v53 < 0.0 )
          *(_QWORD *)&v54 = -sub_8C010(COERCE_UNSIGNED_INT64(-v53), HIDWORD(COERCE_UNSIGNED_INT64(-v53)));
        else
          v54 = COERCE_DOUBLE(sub_8C010(LODWORD(v53), HIDWORD(v53)));
        v55 = *(double *)(v19 + 616);
        v56 = *(double *)(v19 + 632);
        LODWORD(v54) = bswap32(LODWORD(v54));
        v73[49] = bswap32(HIDWORD(v54));
        v73[50] = LODWORD(v54);
        v57 = sqrt(v56);
        v73[47] = bswap32((int)(v55 * 65536.0));
        if ( v56 < 0.0 )
          v54 = sqrt(v54);
        v58 = *(double *)(v19 + 624);
        v59 = (unsigned int)(v57 * 65536.0);
        v60 = sqrt(v58);
        v73[48] = bswap32(v59);
        if ( v58 < 0.0 )
          sqrt(v54);
        v73[51] = bswap32((unsigned int)(v60 * 65536.0));
        v6 = (int *)sub_3A918();
      }
      v72 = (unsigned __int16)(v72 - 1);
      v61 = v6 == 0;
      if ( v6 )
        v61 = v72 == 0;
    }
    while ( !v61 );
  }
  return sub_3B02C();
}
