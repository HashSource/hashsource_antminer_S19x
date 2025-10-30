int __fastcall sub_33F68(double a1)
{
  int v1; // r4
  unsigned __int8 v2; // r12
  unsigned __int8 v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v8; // r7
  int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r12
  unsigned int v13; // r10
  int v14; // r0
  size_t n; // r7
  int v16; // r2
  int v17; // r2
  int v18; // r3
  unsigned int v19; // r1
  unsigned int *v20; // r2
  unsigned int v21; // lr
  unsigned int v22; // r12
  unsigned int v23; // r3
  unsigned int v24; // r5
  unsigned __int64 v25; // r0
  double v26; // r0
  double v27; // d0
  int v28; // r2
  unsigned int v29; // r6
  int v30; // r3
  int v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r3
  int v34; // r3
  int v35; // r1
  unsigned int *v36; // r10
  unsigned int *v37; // r0
  int v38; // r2
  unsigned int *v39; // r0
  int v40; // r1
  int v41; // r3
  int v42; // r3
  unsigned int v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r12
  int v46; // r2
  int v47; // r2
  int v48; // r3
  unsigned int v49; // r1
  unsigned int *v50; // r2
  unsigned int v51; // r1
  unsigned int v52; // r12
  unsigned int v53; // r3
  bool v54; // cc
  unsigned int v55; // r2
  unsigned int v56; // r3
  unsigned int v57; // r2
  unsigned int v58; // r3
  bool v59; // cc
  unsigned int v60; // r2
  unsigned int v61; // r3
  int v62; // r0
  unsigned int v64; // [sp+Ch] [bp-860h] BYREF
  unsigned int v65; // [sp+10h] [bp-85Ch]
  unsigned int v66; // [sp+14h] [bp-858h] BYREF
  unsigned int v67; // [sp+18h] [bp-854h]
  unsigned __int8 buf[4]; // [sp+1Ch] [bp-850h] BYREF
  unsigned int v69; // [sp+20h] [bp-84Ch]
  unsigned int v70; // [sp+24h] [bp-848h]
  int v71; // [sp+28h] [bp-844h]
  unsigned int v72; // [sp+2Ch] [bp-840h]
  unsigned int v73; // [sp+30h] [bp-83Ch]
  unsigned int v74; // [sp+34h] [bp-838h]
  unsigned int v75; // [sp+38h] [bp-834h]
  unsigned int v76; // [sp+3Ch] [bp-830h]
  unsigned int v77; // [sp+40h] [bp-82Ch]
  unsigned int v78; // [sp+44h] [bp-828h]
  unsigned int v79; // [sp+48h] [bp-824h]

  v1 = LODWORD(a1);
  if ( !*(_DWORD *)(LODWORD(a1) + 56) )
    return LODWORD(a1);
  v2 = *(_BYTE *)(LODWORD(a1) + 64);
  buf[0] = *(_BYTE *)(LODWORD(a1) + 63) & 7 | (sys_leap << 6) | (8 * (*(_BYTE *)(LODWORD(a1) + 62) & 7));
  buf[2] = v2;
  v3 = sys_stratum;
  if ( sys_stratum == 16 )
    v3 = 0;
  buf[1] = v3;
  v4 = bswap32(*(_DWORD *)(LODWORD(a1) + 560));
  buf[3] = sys_precision;
  v5 = bswap32(*(_DWORD *)(v1 + 564));
  v71 = sys_refid;
  v6 = bswap32(*(_DWORD *)(v1 + 576));
  v69 = bswap32((int)(sys_rootdelay * 65536.0));
  v70 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  v75 = v5;
  v74 = v4;
  v73 = bswap32(dword_109C2C);
  v72 = bswap32(sys_reftime);
  v76 = v6;
  v7 = *(_DWORD *)(v1 + 68);
  v77 = bswap32(*(_DWORD *)(v1 + 580));
  if ( (v7 & 0x800) != 0 )
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)(v1 + 244);
      if ( v30 )
      {
        v31 = v30 - 1;
        *(_DWORD *)(v1 + 244) = v31;
      }
      else
      {
        sub_2789C(v1, *(_DWORD *)(v1 + 56));
        v31 = *(_DWORD *)(v1 + 244);
      }
      v29 = *(_DWORD *)(*(_DWORD *)(v1 + 240) + 4 * v31);
      if ( sub_631E8(v29) )
        break;
      sub_33EBC((_DWORD *)v1);
    }
    v34 = *(unsigned __int8 *)(v1 + 63);
    *(_DWORD *)(v1 + 124) = v29;
    switch ( v34 )
    {
      case 1:
      case 2:
        v38 = *(_DWORD *)(v1 + 136);
        if ( !v38 )
          goto LABEL_101;
        if ( (v38 & 0x100) == 0 )
          goto LABEL_103;
        if ( (v38 & 0x200) == 0 )
          goto LABEL_112;
        if ( sys_leap != 3 && *(_BYTE *)(v1 + 91) != 3 && (v38 & 0x800) == 0 )
          goto LABEL_115;
        if ( (v38 & 0x1000) == 0 )
        {
          v36 = sub_27C90(v1, 33816576, *(unsigned __int16 *)(v1 + 60), 0);
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) == 0 )
        {
          if ( sys_leap != 3 )
            goto LABEL_55;
          goto LABEL_57;
        }
        if ( (v38 & 0x2000) != 0 )
        {
          v36 = sub_27C90(v1, -2113667072, *(unsigned __int16 *)(v1 + 132), 0);
          goto LABEL_42;
        }
        if ( sys_leap != 3 )
          goto LABEL_69;
        v39 = *(unsigned int **)(v1 + 232);
        if ( !v39 )
          goto LABEL_6;
        goto LABEL_58;
      case 3:
        v38 = *(_DWORD *)(v1 + 136);
        if ( v38 )
        {
          if ( (v38 & 0x100) == 0 )
          {
LABEL_103:
            v36 = sub_27C90(v1, 33685504, *(unsigned __int16 *)(v1 + 60), *(const char **)(v1 + 152));
            goto LABEL_42;
          }
          if ( (v38 & 0x200) == 0 )
          {
LABEL_112:
            v62 = sub_27B88(v1);
            v36 = sub_27C90(v1, v62, *(unsigned __int16 *)(v1 + 60), 0);
            goto LABEL_42;
          }
          if ( (v38 & 0x800) == 0 )
          {
LABEL_115:
            v36 = sub_27C90(v1, 33751040, *(unsigned __int16 *)(v1 + 60), 0);
            goto LABEL_42;
          }
          if ( (v38 & 0x1000) == 0 )
          {
            v36 = sub_27C90(v1, 33816576, *(unsigned __int16 *)(v1 + 132), 0);
            goto LABEL_42;
          }
          if ( sys_leap == 3 )
          {
LABEL_57:
            v39 = *(unsigned int **)(v1 + 232);
            if ( !v39 )
              goto LABEL_6;
LABEL_58:
            *v39 |= 0x80u;
            v8 = sub_29B24((_DWORD *)v1, (int)buf, 0, 48, v39, 0) + 48;
            free(*(void **)(v1 + 232));
            *(_DWORD *)(v1 + 232) = 0;
            goto LABEL_47;
          }
LABEL_55:
          if ( (v38 & 0x2000) != 0 )
          {
            if ( (v38 & 0x4000) != 0 )
              goto LABEL_57;
            v36 = sub_27C90(v1, 33882112, *(unsigned __int16 *)(v1 + 60), 0);
LABEL_42:
            v37 = *(unsigned int **)(v1 + 232);
            if ( v37 )
            {
              *v37 |= 0x80u;
              v8 = sub_29B24((_DWORD *)v1, (int)buf, 0, 48, v37, 0) + 48;
              free(*(void **)(v1 + 232));
              *(_DWORD *)(v1 + 232) = 0;
              if ( !v36 )
                goto LABEL_47;
            }
            else
            {
              if ( !v36 )
                goto LABEL_6;
              v8 = 48;
            }
            if ( *v36 )
              v8 += sub_29B24((_DWORD *)v1, (int)buf, 0, v8, v36, 0);
            free(v36);
LABEL_47:
            if ( v8 > 0x30 )
              sub_27700((_DWORD *)(*(_DWORD *)(v1 + 56) + 24), (_DWORD *)(v1 + 16), v29, 0, 2);
            goto LABEL_7;
          }
LABEL_69:
          v40 = 33947648;
        }
        else
        {
LABEL_101:
          v40 = 33619968;
        }
        v36 = sub_27C90(v1, v40, *(unsigned __int16 *)(v1 + 60), (const char *)dword_109294);
        goto LABEL_42;
      case 5:
        LOWORD(v35) = 0;
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) != 0 )
          HIWORD(v35) = -32252;
        else
          HIWORD(v35) = -32255;
        v36 = sub_27C90(v1, v35, *(unsigned __int16 *)(v1 + 60), 0);
        goto LABEL_42;
      default:
        v39 = *(unsigned int **)(v1 + 232);
        if ( !v39 )
          goto LABEL_6;
        goto LABEL_58;
    }
  }
  if ( *(_DWORD *)(v1 + 124) )
  {
LABEL_6:
    v8 = 48;
LABEL_7:
    sub_6055C(&v64);
    v9 = *(_DWORD *)(v1 + 316);
    if ( v9 )
    {
      if ( *(_BYTE *)(v1 + 63) == 5 )
      {
        v54 = v9 <= 0;
        v55 = bswap32(v64);
        v78 = v55;
        v56 = bswap32(v65);
        if ( !v54 )
          v55 = *(_DWORD *)(v1 + 592);
        v79 = v56;
        if ( v54 )
          v55 = *(_DWORD *)(v1 + 584);
        else
          v56 = *(_DWORD *)(v1 + 596);
        if ( v54 )
          v56 = *(_DWORD *)(v1 + 588);
        v74 = bswap32(v55);
        v75 = bswap32(v56);
      }
      else
      {
        if ( v9 <= 0 )
        {
          v32 = *(_DWORD *)(v1 + 584);
          v33 = *(_DWORD *)(v1 + 588);
        }
        else
        {
          v32 = *(_DWORD *)(v1 + 592);
          v33 = *(_DWORD *)(v1 + 596);
        }
        v78 = bswap32(v32);
        v79 = bswap32(v33);
      }
    }
    else
    {
      v10 = v65;
      v11 = v65;
      v12 = bswap32(v64);
      *(_DWORD *)(v1 + 584) = v64;
      *(_DWORD *)(v1 + 588) = v10;
      v78 = v12;
      v79 = bswap32(v11);
    }
    v13 = *(_DWORD *)(v1 + 124);
    v14 = sub_636A4(v13, buf, v8);
    if ( !v14 )
    {
      LODWORD(a1) = sub_26294(140, v1, "no key");
      v41 = *(_DWORD *)(v1 + 752);
      *(_DWORD *)(v1 + 300) |= 0x10u;
      *(_DWORD *)(v1 + 752) = v41 + 1;
      return LODWORD(a1);
    }
    n = v14 + v8;
    if ( v13 >= 0x10000 )
      sub_630C4(v13, 0);
    if ( n > 0x848 )
    {
      sub_65D40(3, "peer_xmit: buffer overflow %zu", n);
      exit(-1);
    }
    *(_DWORD *)(v1 + 664) = n;
    v16 = sys_ttlmax;
    if ( (unsigned int)sys_ttlmax >= *(_DWORD *)(v1 + 76) )
      v16 = *(_DWORD *)(v1 + 76);
    sub_16CC0((struct sockaddr *)(v1 + 16), *(_DWORD *)(v1 + 56), (unsigned __int8)sys_ttl[v16], buf, n);
    v17 = *(_DWORD *)(v1 + 740) + 1;
    *(_DWORD *)(v1 + 712) += (1 << *(_BYTE *)(v1 + 65)) - 2;
    *(_DWORD *)(v1 + 740) = v17;
    sub_6055C(&v66);
    v18 = *(_DWORD *)(v1 + 316);
    if ( v18 )
    {
      v19 = v67;
      if ( v18 <= 0 )
        v20 = (unsigned int *)(v1 + 592);
      else
        v20 = (unsigned int *)(v1 + 584);
      *v20 = v66;
      v20[1] = v19;
      *(_DWORD *)(v1 + 316) = -v18;
    }
    v21 = v67;
    v22 = v67 - v65;
    v67 = v22;
    v23 = v66 - v64;
    if ( v21 < v22 )
      --v23;
    v66 = v23;
    v24 = v23 >> 31;
    v25 = (-(__int64)v24 ^ (__PAIR64__(v23, 0) + v22)) + v24;
    goto LABEL_23;
  }
  sub_6055C(&v64);
  v42 = *(_DWORD *)(v1 + 316);
  if ( v42 )
  {
    if ( *(_BYTE *)(v1 + 63) == 5 )
    {
      v59 = v42 <= 0;
      v60 = bswap32(v64);
      v78 = v60;
      v61 = bswap32(v65);
      if ( !v59 )
        v60 = *(_DWORD *)(v1 + 592);
      v79 = v61;
      if ( v59 )
        v60 = *(_DWORD *)(v1 + 584);
      else
        v61 = *(_DWORD *)(v1 + 596);
      if ( v59 )
        v61 = *(_DWORD *)(v1 + 588);
      v74 = bswap32(v60);
      v75 = bswap32(v61);
    }
    else
    {
      if ( v42 <= 0 )
      {
        v57 = *(_DWORD *)(v1 + 584);
        v58 = *(_DWORD *)(v1 + 588);
      }
      else
      {
        v57 = *(_DWORD *)(v1 + 592);
        v58 = *(_DWORD *)(v1 + 596);
      }
      v78 = bswap32(v57);
      v79 = bswap32(v58);
    }
  }
  else
  {
    v43 = v65;
    v44 = v65;
    v45 = bswap32(v64);
    *(_DWORD *)(v1 + 584) = v64;
    *(_DWORD *)(v1 + 588) = v43;
    v78 = v45;
    v79 = bswap32(v44);
  }
  *(_DWORD *)(v1 + 664) = 48;
  v46 = sys_ttlmax;
  if ( (unsigned int)sys_ttlmax >= *(_DWORD *)(v1 + 76) )
    v46 = *(_DWORD *)(v1 + 76);
  sub_16CC0((struct sockaddr *)(v1 + 16), *(_DWORD *)(v1 + 56), (unsigned __int8)sys_ttl[v46], buf, 0x30u);
  v47 = *(_DWORD *)(v1 + 740) + 1;
  *(_DWORD *)(v1 + 712) += (1 << *(_BYTE *)(v1 + 65)) - 2;
  *(_DWORD *)(v1 + 740) = v47;
  sub_6055C(&v66);
  v48 = *(_DWORD *)(v1 + 316);
  if ( v48 )
  {
    v49 = v67;
    if ( v48 <= 0 )
      v50 = (unsigned int *)(v1 + 592);
    else
      v50 = (unsigned int *)(v1 + 584);
    *v50 = v66;
    v50[1] = v49;
    *(_DWORD *)(v1 + 316) = -v48;
  }
  v51 = v67;
  v52 = v67 - v65;
  v67 = v52;
  v53 = v66 - v64;
  if ( v51 < v52 )
    --v53;
  v24 = v53 >> 31;
  v66 = v53;
  v25 = (v53 >> 31) + (-(__int64)(v53 >> 31) ^ (__PAIR64__(v53, 0) + v52));
LABEL_23:
  v26 = COERCE_DOUBLE(sub_8D40C(v25, HIDWORD(v25)));
  v27 = v26;
  LODWORD(v26) = -32;
  a1 = ldexp(v26, v28);
  if ( v24 )
    v27 = -v27;
  *(double *)(v1 + 640) = v27;
  return LODWORD(a1);
}
