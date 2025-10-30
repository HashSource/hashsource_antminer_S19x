int __fastcall sub_339F8(double a1)
{
  unsigned int v1; // r4
  char v2; // r3
  char v3; // r2
  unsigned int v4; // r0
  unsigned __int8 v5; // r3
  unsigned __int8 v6; // r2
  unsigned int v7; // r0
  unsigned __int8 v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r2
  int v11; // r2
  unsigned int v12; // r7
  int v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r10
  int v16; // r0
  unsigned int v17; // r7
  struct sockaddr *v18; // r0
  unsigned int v19; // r2
  int v20; // r1
  int v21; // r2
  char v22; // r12
  int v23; // r2
  int v24; // r3
  unsigned int v25; // r1
  _DWORD *v26; // r2
  __int64 v27; // r2
  double v28; // r0
  double v29; // d0
  int v30; // r2
  unsigned int v31; // r8
  int v32; // r3
  int v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r3
  double v37; // r0
  double v38; // d0
  int v39; // r2
  int v40; // r1
  _DWORD *v41; // r10
  unsigned int *v42; // r12
  int v43; // r3
  int v44; // r2
  int v45; // r1
  unsigned int *v46; // r12
  int v47; // r3
  int v48; // r3
  unsigned int v49; // r1
  unsigned int v50; // r2
  unsigned int v51; // r2
  unsigned int v52; // r3
  unsigned int v53; // r2
  unsigned int v54; // r3
  unsigned int v55; // r2
  unsigned int v56; // r3
  int v57; // r0
  size_t n; // [sp+0h] [bp-86Ch]
  unsigned int v60; // [sp+Ch] [bp-860h] BYREF
  unsigned int v61; // [sp+10h] [bp-85Ch]
  int v62; // [sp+14h] [bp-858h] BYREF
  unsigned int v63; // [sp+18h] [bp-854h]
  unsigned __int8 v64[4]; // [sp+1Ch] [bp-850h] BYREF
  unsigned int v65; // [sp+20h] [bp-84Ch]
  unsigned int v66; // [sp+24h] [bp-848h]
  int v67; // [sp+28h] [bp-844h]
  unsigned int v68; // [sp+2Ch] [bp-840h]
  unsigned int v69; // [sp+30h] [bp-83Ch]
  unsigned int v70; // [sp+34h] [bp-838h]
  unsigned int v71; // [sp+38h] [bp-834h]
  unsigned int v72; // [sp+3Ch] [bp-830h]
  unsigned int v73; // [sp+40h] [bp-82Ch]
  unsigned int v74; // [sp+44h] [bp-828h]
  unsigned int v75; // [sp+48h] [bp-824h]

  if ( !*(_DWORD *)(LODWORD(a1) + 56) )
    return LODWORD(a1);
  v1 = LODWORD(a1);
  v2 = *(_BYTE *)(LODWORD(a1) + 63) & 7 | (sys_leap << 6);
  v3 = (8 * *(_BYTE *)(LODWORD(a1) + 62)) & 0x38;
  v4 = *(_DWORD *)(LODWORD(a1) + 560);
  v5 = v2 | v3;
  v6 = *(_BYTE *)(v1 + 64);
  v64[0] = v5;
  v7 = bswap32(v4);
  v64[2] = v6;
  v8 = sys_stratum;
  if ( sys_stratum == 16 )
    v8 = 0;
  v64[1] = v8;
  v64[3] = sys_precision;
  v9 = bswap32(*(_DWORD *)(v1 + 564));
  v67 = sys_refid;
  v10 = bswap32(*(_DWORD *)(v1 + 576));
  v65 = bswap32((int)(sys_rootdelay * 65536.0));
  v66 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  v70 = v7;
  v71 = v9;
  v72 = v10;
  v69 = bswap32(dword_108C0C);
  v68 = bswap32(sys_reftime);
  v11 = *(_DWORD *)(v1 + 68);
  v73 = bswap32(*(_DWORD *)(v1 + 580));
  if ( (v11 & 0x800) != 0 )
  {
    while ( 1 )
    {
      v32 = *(_DWORD *)(v1 + 244);
      if ( v32 )
      {
        v33 = v32 - 1;
        *(_DWORD *)(v1 + 244) = v33;
      }
      else
      {
        sub_27454(v1, *(_DWORD *)(v1 + 56));
        v33 = *(_DWORD *)(v1 + 244);
      }
      v31 = *(_DWORD *)(*(_DWORD *)(v1 + 240) + 4 * v33);
      if ( sub_622E0(v31) )
        break;
      sub_3394C((_DWORD *)v1);
    }
    v36 = *(unsigned __int8 *)(v1 + 63);
    *(_DWORD *)(v1 + 124) = v31;
    switch ( v36 )
    {
      case 1:
      case 2:
        v44 = *(_DWORD *)(v1 + 136);
        if ( !v44 )
          goto LABEL_93;
        if ( (v44 & 0x100) == 0 )
          goto LABEL_99;
        if ( (v44 & 0x200) == 0 )
          goto LABEL_100;
        if ( sys_leap != 3 && *(_BYTE *)(v1 + 91) != 3 && (v44 & 0x800) == 0 )
          goto LABEL_101;
        if ( (v44 & 0x1000) == 0 )
        {
          v41 = sub_2787C(v1, 33816576, *(unsigned __int16 *)(v1 + 60), 0);
          goto LABEL_43;
        }
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) == 0 )
        {
          if ( sys_leap != 3 )
            goto LABEL_56;
          goto LABEL_71;
        }
        if ( (v44 & 0x2000) != 0 )
        {
          v41 = sub_2787C(v1, -2113667072, *(unsigned __int16 *)(v1 + 132), 0);
          goto LABEL_43;
        }
        if ( sys_leap == 3 )
          goto LABEL_71;
        goto LABEL_69;
      case 3:
        v44 = *(_DWORD *)(v1 + 136);
        if ( v44 )
        {
          if ( (v44 & 0x100) != 0 )
          {
            if ( (v44 & 0x200) != 0 )
            {
              if ( (v44 & 0x800) != 0 )
              {
                if ( (v44 & 0x1000) != 0 )
                {
                  if ( sys_leap == 3 )
                    goto LABEL_71;
LABEL_56:
                  if ( (v44 & 0x2000) != 0 )
                  {
                    if ( (v44 & 0x4000) == 0 )
                    {
                      v41 = sub_2787C(v1, 33882112, *(unsigned __int16 *)(v1 + 60), 0);
                      goto LABEL_43;
                    }
LABEL_71:
                    v46 = *(unsigned int **)(v1 + 232);
                    if ( !v46 )
                      goto LABEL_6;
                    *v46 |= 0x80u;
                    v12 = sub_29774((_DWORD *)v1, (int)v64, 0, 48, v46, 0) + 48;
                    free(*(void **)(v1 + 232));
                    *(_DWORD *)(v1 + 232) = 0;
LABEL_48:
                    if ( v12 > 0x30 )
                      sub_272C8((_DWORD *)(*(_DWORD *)(v1 + 56) + 24), v1 + 16, v31, 0, 2);
                    goto LABEL_7;
                  }
LABEL_69:
                  v45 = 33947648;
                  goto LABEL_94;
                }
                v41 = sub_2787C(v1, 33816576, *(unsigned __int16 *)(v1 + 132), 0);
              }
              else
              {
LABEL_101:
                v41 = sub_2787C(v1, 33751040, *(unsigned __int16 *)(v1 + 60), 0);
              }
            }
            else
            {
LABEL_100:
              v57 = sub_27774(v1);
              v41 = sub_2787C(v1, v57, *(unsigned __int16 *)(v1 + 60), 0);
            }
          }
          else
          {
LABEL_99:
            v41 = sub_2787C(v1, 33685504, *(unsigned __int16 *)(v1 + 60), *(char **)(v1 + 152));
          }
LABEL_43:
          v42 = *(unsigned int **)(v1 + 232);
          if ( v42 )
          {
            *v42 |= 0x80u;
            v12 = sub_29774((_DWORD *)v1, (int)v64, 0, 48, v42, 0) + 48;
            free(*(void **)(v1 + 232));
            *(_DWORD *)(v1 + 232) = 0;
            if ( !v41 )
              goto LABEL_48;
            if ( !*v41 )
              goto LABEL_47;
            v43 = v12;
          }
          else
          {
            if ( !v41 )
              goto LABEL_6;
            if ( !*v41 )
            {
              v12 = 48;
              free(v41);
              goto LABEL_7;
            }
            v43 = 48;
            v12 = 48;
          }
          v12 += sub_29774((_DWORD *)v1, (int)v64, 0, v43, v41, 0);
LABEL_47:
          free(v41);
          goto LABEL_48;
        }
LABEL_93:
        v45 = 33619968;
LABEL_94:
        v41 = sub_2787C(v1, v45, *(unsigned __int16 *)(v1 + 60), (char *)dword_108274);
        goto LABEL_43;
      case 5:
        LOWORD(v40) = 0;
        if ( (*(_DWORD *)(v1 + 68) & 0x8000) != 0 )
          HIWORD(v40) = -32252;
        else
          HIWORD(v40) = -32255;
        v41 = sub_2787C(v1, v40, *(unsigned __int16 *)(v1 + 60), 0);
        goto LABEL_43;
      default:
        goto LABEL_71;
    }
  }
  if ( *(_DWORD *)(v1 + 124) )
  {
LABEL_6:
    v12 = 48;
LABEL_7:
    sub_5F724(&v60);
    v13 = *(_DWORD *)(v1 + 316);
    if ( v13 )
    {
      if ( *(_BYTE *)(v1 + 63) == 5 )
      {
        v74 = bswap32(v60);
        v75 = bswap32(v61);
        if ( v13 <= 0 )
        {
          v51 = *(_DWORD *)(v1 + 584);
          v52 = *(_DWORD *)(v1 + 588);
        }
        else
        {
          v51 = *(_DWORD *)(v1 + 592);
          v52 = *(_DWORD *)(v1 + 596);
        }
        v70 = bswap32(v51);
        v71 = bswap32(v52);
      }
      else
      {
        if ( v13 <= 0 )
        {
          v34 = *(_DWORD *)(v1 + 584);
          v35 = *(_DWORD *)(v1 + 588);
        }
        else
        {
          v34 = *(_DWORD *)(v1 + 592);
          v35 = *(_DWORD *)(v1 + 596);
        }
        v74 = bswap32(v34);
        v75 = bswap32(v35);
      }
    }
    else
    {
      v14 = v61;
      v74 = bswap32(v60);
      v75 = bswap32(v61);
      *(_DWORD *)(v1 + 584) = v60;
      *(_DWORD *)(v1 + 588) = v14;
    }
    v15 = *(_DWORD *)(v1 + 124);
    v16 = sub_6278C(v15, v64, v12);
    if ( !v16 )
    {
      LODWORD(a1) = sub_25EE0((__int16 *)&dword_8C, v1, "no key");
      v47 = *(_DWORD *)(v1 + 752) + 1;
      *(_DWORD *)(v1 + 300) |= 0x10u;
      *(_DWORD *)(v1 + 752) = v47;
      return LODWORD(a1);
    }
    v17 = v12 + v16;
    if ( v15 >= 0x10000 )
      sub_621BC(v15, 0);
    if ( v17 > 0x848 )
    {
      sub_64E00(3, "peer_xmit: buffer overflow %zu", v17);
      exit(-1);
    }
    *(_DWORD *)(v1 + 664) = v17;
    v18 = (struct sockaddr *)(v1 + 16);
    v19 = *(_DWORD *)(v1 + 76);
    n = v17;
    v20 = *(_DWORD *)(v1 + 56);
    if ( v19 >= sys_ttlmax )
      v19 = sys_ttlmax;
    v21 = (unsigned __int8)sys_ttl[v19];
    goto LABEL_16;
  }
  sub_5F724(&v60);
  v48 = *(_DWORD *)(v1 + 316);
  if ( v48 )
  {
    if ( *(_BYTE *)(v1 + 63) == 5 )
    {
      v74 = bswap32(v60);
      v75 = bswap32(v61);
      if ( v48 <= 0 )
      {
        v55 = *(_DWORD *)(v1 + 584);
        v56 = *(_DWORD *)(v1 + 588);
      }
      else
      {
        v55 = *(_DWORD *)(v1 + 592);
        v56 = *(_DWORD *)(v1 + 596);
      }
      v70 = bswap32(v55);
      v71 = bswap32(v56);
    }
    else
    {
      if ( v48 <= 0 )
      {
        v53 = *(_DWORD *)(v1 + 584);
        v54 = *(_DWORD *)(v1 + 588);
      }
      else
      {
        v53 = *(_DWORD *)(v1 + 592);
        v54 = *(_DWORD *)(v1 + 596);
      }
      v74 = bswap32(v53);
      v75 = bswap32(v54);
    }
  }
  else
  {
    v49 = v61;
    v74 = bswap32(v60);
    v75 = bswap32(v61);
    *(_DWORD *)(v1 + 584) = v60;
    *(_DWORD *)(v1 + 588) = v49;
  }
  *(_DWORD *)(v1 + 664) = 48;
  v50 = *(_DWORD *)(v1 + 76);
  n = 48;
  v18 = (struct sockaddr *)(v1 + 16);
  if ( v50 >= sys_ttlmax )
    v50 = sys_ttlmax;
  v20 = *(_DWORD *)(v1 + 56);
  v21 = (unsigned __int8)sys_ttl[v50];
LABEL_16:
  sub_16A68(v18, v20, v21, v64, n);
  v22 = *(_BYTE *)(v1 + 65);
  v23 = *(_DWORD *)(v1 + 712);
  ++*(_DWORD *)(v1 + 740);
  *(_DWORD *)(v1 + 712) = v23 + (1 << v22) - 2;
  sub_5F724(&v62);
  v24 = *(_DWORD *)(v1 + 316);
  if ( v24 )
  {
    v25 = v63;
    if ( v24 <= 0 )
      v26 = (_DWORD *)(v1 + 592);
    else
      v26 = (_DWORD *)(v1 + 584);
    *v26 = v62;
    v26[1] = v25;
    *(_DWORD *)(v1 + 316) = -v24;
  }
  HIDWORD(v27) = v62 - v60;
  if ( v63 < v61 )
    --HIDWORD(v27);
  LODWORD(v27) = v63 - v61;
  v62 = HIDWORD(v27);
  v63 -= v61;
  if ( v27 < 0 )
  {
    v37 = COERCE_DOUBLE(sub_8BEC4(-(int)v27, (unsigned __int64)-v27 >> 32));
    v38 = v37;
    LODWORD(v37) = -32;
    a1 = ldexp(v37, v39);
    v29 = -v38;
  }
  else
  {
    v28 = COERCE_DOUBLE(sub_8BEC4(v27, HIDWORD(v27)));
    v29 = v28;
    LODWORD(v28) = -32;
    a1 = ldexp(v28, v30);
  }
  *(double *)(v1 + 640) = v29;
  return LODWORD(a1);
}
