int __fastcall sub_1288D4(int a1, int a2, int *a3)
{
  int v3; // r4
  int v6; // r5
  char *v8; // r5
  int v9; // r3
  int v10; // r3
  unsigned __int8 *v11; // r8
  unsigned __int8 *v12; // r10
  const char *v13; // r8
  size_t v14; // r0
  size_t v15; // r6
  int v16; // r5
  unsigned __int8 *v17; // r6
  int v18; // r3
  int v19; // r2
  unsigned int v20; // r2
  int v21; // r9
  __int16 v22; // r2
  __int16 v23; // r2
  __int16 v24; // r2
  __int16 v25; // r2
  __int16 v26; // r2
  int v27; // r2
  int v28; // r3
  unsigned __int8 *v29; // r8
  int v30; // r9
  unsigned __int8 *v31; // r10
  unsigned __int8 *v32; // r6
  __int16 v33; // r3
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r2
  unsigned int v38; // r2
  char *v39; // r4
  int v40; // r0
  char *v41; // r7
  int v42; // r3
  int v43; // t1
  __int16 v44; // r2
  int v45; // r0
  int v46; // r0
  __int16 v47; // r2
  __int16 v48; // r2
  __int16 v49; // r2
  __int16 v50; // r2
  __int16 v51; // r2
  int v52; // r4
  int v53; // r0
  unsigned __int8 *v54; // r5
  int v55; // r4
  unsigned __int8 *v56; // r6
  unsigned int v57; // t1
  char v58; // r3
  size_t v59; // r3
  unsigned __int8 *v60; // r0
  unsigned __int8 *v61; // r4
  unsigned __int8 *v62; // r6
  unsigned __int8 *v63; // r5
  unsigned int v64; // t1
  char v65; // r3
  int v66; // [sp+8h] [bp-54h]
  __int16 v67; // [sp+Ch] [bp-50h]
  char v68; // [sp+10h] [bp-4Ch]
  _BYTE *v69; // [sp+10h] [bp-4Ch]
  char v70; // [sp+14h] [bp-48h]
  size_t v71; // [sp+18h] [bp-44h]
  int v72; // [sp+18h] [bp-44h]
  int v73; // [sp+1Ch] [bp-40h]
  char v74; // [sp+3Eh] [bp-1Eh] BYREF
  char v75; // [sp+3Fh] [bp-1Dh] BYREF
  int v76; // [sp+40h] [bp-1Ch] BYREF
  unsigned __int8 *v77; // [sp+44h] [bp-18h] BYREF
  unsigned __int8 v78; // [sp+48h] [bp-14h]
  unsigned __int8 v79; // [sp+49h] [bp-13h]
  size_t v80[3]; // [sp+4Ch] [bp-10h] BYREF

  v3 = a2;
  v70 = a2;
  v6 = a3[1];
  v67 = a2 & 0x40F;
  v74 = 0;
  if ( (a2 & 0x40) != 0 )
  {
    v13 = (const char *)sub_12C9C0(v6);
    v14 = strlen(v13);
    v15 = v14;
    if ( a1 && (v14 != sub_B69CC(a1, (int)v13, v14) || sub_B69CC(a1, (int)&word_1B5258, 1) != 1) )
      return -1;
    v71 = v15 + 1;
  }
  else
  {
    v71 = 0;
  }
  if ( (v3 & 0x80) != 0 )
  {
LABEL_5:
    if ( a1 )
    {
      if ( sub_B69CC(a1, (int)"#", 1) != 1 )
        return -1;
      if ( (v3 & 0x200) == 0 )
      {
        v54 = (unsigned __int8 *)a3[2];
        v55 = *a3;
        v56 = &v54[*a3];
        if ( v56 != v54 )
        {
          while ( 1 )
          {
            v57 = *v54++;
            v58 = *((_BYTE *)&word_1CA6D0[144] + (v57 >> 4));
            BYTE1(v80[0]) = *((_BYTE *)&word_1CA6D0[144] + (v57 & 0xF));
            LOBYTE(v80[0]) = v58;
            if ( sub_B69CC(a1, (int)v80, 2) != 2 )
              return -1;
            if ( v56 == v54 )
              goto LABEL_248;
          }
        }
        goto LABEL_248;
      }
    }
    else if ( (v3 & 0x200) == 0 )
    {
      v55 = *a3;
LABEL_248:
      if ( (v55 & 0x40000000) != 0 )
        return -1;
      v53 = 2 * v55 + 1;
      return v71 + v53;
    }
    v59 = a3[1];
    v80[1] = (size_t)a3;
    v80[0] = v59;
    v60 = (unsigned __int8 *)sub_B23F4(v80, 0);
    v61 = v60;
    if ( (int)v60 <= 0 )
      return -1;
    v62 = (unsigned __int8 *)CRYPTO_malloc(v60);
    if ( !v62 )
    {
      sub_D0048(13, 125, 65, (int)"crypto/asn1/a_strex.c", 286);
      return -1;
    }
    v77 = v62;
    sub_B23F4(v80, &v77);
    if ( a1 && v62 != &v61[(_DWORD)v62] )
    {
      v63 = v62;
      while ( 1 )
      {
        v64 = *v63++;
        v65 = *((_BYTE *)&word_1CA6D0[144] + (v64 >> 4));
        BYTE1(v76) = *((_BYTE *)&word_1CA6D0[144] + (v64 & 0xF));
        LOBYTE(v76) = v65;
        if ( sub_B69CC(a1, (int)&v76, 2) != 2 )
          break;
        if ( &v61[(_DWORD)v62] == v63 )
          goto LABEL_187;
      }
      CRYPTO_free(v62);
      return -1;
    }
LABEL_187:
    v52 = 2 * (_DWORD)v61;
    CRYPTO_free(v62);
    if ( v52 < 0 )
      return -1;
    v53 = v52 + 1;
    return v71 + v53;
  }
  if ( (v3 & 0x20) != 0 )
  {
LABEL_22:
    if ( (v3 & 0x10) != 0 )
    {
      v11 = (unsigned __int8 *)a3[2];
      v66 = 1;
      v68 = 9;
      v73 = *a3;
      v12 = &v11[*a3];
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(v6 - 1) > 0x1D || (v8 = (char *)word_1CA6D0 + v6, v9 = v8[256], v68 = v8[256], v9 == -1) )
  {
    if ( (v3 & 0x100) != 0 )
      goto LABEL_5;
    goto LABEL_22;
  }
  v3 <<= 27;
  if ( v3 >= 0 )
  {
    v66 = v9 & 7;
    goto LABEL_13;
  }
  if ( !v8[256] )
  {
LABEL_23:
    v11 = (unsigned __int8 *)a3[2];
    v66 = 1;
    v73 = *a3;
    v12 = &v11[*a3];
    v68 = 1;
    goto LABEL_24;
  }
  v68 = v9 | 8;
  v66 = v9 & 7;
LABEL_13:
  v10 = *a3;
  v11 = (unsigned __int8 *)a3[2];
  v73 = *a3;
  v12 = &v11[*a3];
  if ( v66 == 2 )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_185;
  }
  else if ( v66 == 4 && v10 << 30 )
  {
    goto LABEL_16;
  }
LABEL_24:
  if ( v11 != v12 )
  {
    v17 = v11;
    v16 = 0;
    v18 = v68 & 8;
    while ( 1 )
    {
      if ( v11 == v17 )
        v18 = v70 & 1;
      else
        LOWORD(v3) = 0;
      if ( v11 == v17 )
        LOWORD(v3) = 32 * v18;
      switch ( v66 )
      {
        case 0:
          v36 = sub_12B614(v17, v73, &v76, v18);
          if ( v36 < 0 )
            return -1;
          v20 = v76;
          v17 += v36;
          v73 -= v36;
LABEL_34:
          if ( v17 == v12 )
          {
LABEL_89:
            if ( (v70 & 1) != 0 )
              LOWORD(v3) = 64;
            if ( (v68 & 8) == 0 )
              goto LABEL_92;
LABEL_36:
            v21 = sub_12B7E0(&v77, 6);
            if ( v21 <= 0 )
              goto LABEL_73;
            LOWORD(v3) = v3 | v67;
            if ( (v3 & 0x40F) != 0 )
            {
              if ( ((unsigned __int8)v77 & 0x80) != 0 )
              {
                v47 = v3 & 4;
              }
              else
              {
                v47 = word_1CA6D0[(unsigned __int8)v77] & v3;
                if ( (v47 & 0x61) != 0 )
                {
                  if ( (v47 & 8) != 0 )
                  {
                    v18 = 1;
                    v74 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_141;
                }
              }
              if ( (v47 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", (unsigned __int8)v77);
                v18 = 3;
              }
              else if ( (unsigned __int8)v77 == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_141:
              v16 += v18;
              if ( v21 == 1 )
                goto LABEL_73;
              if ( (BYTE1(v77) & 0x80) != 0 )
              {
                v48 = v3 & 4;
              }
              else
              {
                v48 = word_1CA6D0[BYTE1(v77)] & v3;
                if ( (v48 & 0x61) != 0 )
                {
                  if ( (v48 & 8) != 0 )
                  {
                    v18 = 1;
                    v74 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_146;
                }
              }
              if ( (v48 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", BYTE1(v77));
                v18 = 3;
              }
              else if ( BYTE1(v77) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_146:
              v16 += v18;
              if ( v21 == 2 )
                goto LABEL_73;
              if ( (BYTE2(v77) & 0x80) != 0 )
              {
                v49 = v3 & 4;
              }
              else
              {
                v49 = word_1CA6D0[BYTE2(v77)] & v3;
                if ( (v49 & 0x61) != 0 )
                {
                  if ( (v49 & 8) != 0 )
                  {
                    v18 = 1;
                    v74 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_151;
                }
              }
              if ( (v49 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", BYTE2(v77));
                v18 = 3;
              }
              else if ( BYTE2(v77) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_151:
              v16 += v18;
              if ( v21 == 3 )
                goto LABEL_73;
              if ( (HIBYTE(v77) & 0x80) != 0 )
              {
                v50 = v3 & 4;
              }
              else
              {
                v50 = word_1CA6D0[HIBYTE(v77)] & v3;
                if ( (v50 & 0x61) != 0 )
                {
                  if ( (v50 & 8) != 0 )
                  {
                    v18 = 1;
                    v74 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_156;
                }
              }
              if ( (v50 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", HIBYTE(v77));
                v18 = 3;
              }
              else if ( HIBYTE(v77) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_156:
              v16 += v18;
              if ( v21 == 4 )
                goto LABEL_73;
              if ( (v78 & 0x80) != 0 )
              {
                v51 = v3 & 4;
              }
              else
              {
                v51 = word_1CA6D0[v78] & v3;
                if ( (v51 & 0x61) != 0 )
                {
                  if ( (v51 & 8) != 0 )
                  {
                    v18 = 1;
                    v74 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_161;
                }
              }
              if ( (v51 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", v78);
                v18 = 3;
              }
              else if ( v78 == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_161:
              v16 += v18;
              if ( v21 == 5 )
                goto LABEL_73;
              if ( (v79 & 0x80) != 0 )
              {
                LOWORD(v3) = v3 & 4;
LABEL_165:
                if ( (v3 & 0x406) != 0 )
                {
                  sub_B5560(v80, 0xBu, "\\%02X");
                  v18 = 3;
                  v16 += 3;
                }
                else
                {
                  if ( v79 == 92 )
                    v18 = 2;
                  else
                    v18 = 1;
                  v16 += v18;
                }
                goto LABEL_73;
              }
              LOWORD(v3) = v3 & word_1CA6D0[v79];
              if ( (v3 & 0x61) == 0 )
                goto LABEL_165;
LABEL_70:
              if ( (v3 & 8) == 0 )
              {
                v18 = 2;
                v16 += 2;
                goto LABEL_73;
              }
              v18 = 1;
              v74 = 1;
              goto LABEL_72;
            }
            if ( ((unsigned __int8)v77 & 0x80) != 0 )
            {
              v22 = v3 & 4;
LABEL_40:
              if ( (v22 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", (unsigned __int8)v77);
                v18 = 3;
              }
              else
              {
                v18 = 1;
              }
              goto LABEL_43;
            }
            v22 = word_1CA6D0[(unsigned __int8)v77] & v3;
            if ( (v22 & 0x61) == 0 )
              goto LABEL_40;
            if ( (v22 & 8) != 0 )
              v18 = 1;
            else
              v18 = 2;
            if ( (v22 & 8) != 0 )
              v74 = v18;
LABEL_43:
            v16 += v18;
            if ( v21 == 1 )
              goto LABEL_73;
            if ( (BYTE1(v77) & 0x80) != 0 )
            {
              v23 = v3 & 4;
            }
            else
            {
              v23 = word_1CA6D0[BYTE1(v77)] & v3;
              if ( (v23 & 0x61) != 0 )
              {
                if ( (v23 & 8) != 0 )
                {
                  v18 = 1;
                  v74 = 1;
                }
                else
                {
                  v18 = 2;
                }
                goto LABEL_49;
              }
            }
            if ( (v23 & 0x406) != 0 )
            {
              sub_B5560(v80, 0xBu, "\\%02X", BYTE1(v77));
              v18 = 3;
            }
            else
            {
              v18 = 1;
            }
LABEL_49:
            v16 += v18;
            if ( v21 == 2 )
              goto LABEL_73;
            if ( (BYTE2(v77) & 0x80) != 0 )
            {
              v24 = v3 & 4;
            }
            else
            {
              v24 = word_1CA6D0[BYTE2(v77)] & v3;
              if ( (v24 & 0x61) != 0 )
              {
                if ( (v24 & 8) != 0 )
                {
                  v18 = 1;
                  v74 = 1;
                }
                else
                {
                  v18 = 2;
                }
                goto LABEL_55;
              }
            }
            if ( (v24 & 0x406) != 0 )
            {
              sub_B5560(v80, 0xBu, "\\%02X", BYTE2(v77));
              v18 = 3;
            }
            else
            {
              v18 = 1;
            }
LABEL_55:
            v16 += v18;
            if ( v21 == 3 )
              goto LABEL_73;
            if ( (HIBYTE(v77) & 0x80) != 0 )
            {
              v25 = v3 & 4;
            }
            else
            {
              v25 = word_1CA6D0[HIBYTE(v77)] & v3;
              if ( (v25 & 0x61) != 0 )
              {
                if ( (v25 & 8) != 0 )
                {
                  v18 = 1;
                  v74 = 1;
                }
                else
                {
                  v18 = 2;
                }
                goto LABEL_61;
              }
            }
            if ( (v25 & 0x406) != 0 )
            {
              sub_B5560(v80, 0xBu, "\\%02X", HIBYTE(v77));
              v18 = 3;
            }
            else
            {
              v18 = 1;
            }
LABEL_61:
            v16 += v18;
            if ( v21 == 4 )
              goto LABEL_73;
            if ( (v78 & 0x80) != 0 )
            {
              v26 = v3 & 4;
            }
            else
            {
              v26 = word_1CA6D0[v78] & v3;
              if ( (v26 & 0x61) != 0 )
              {
                if ( (v26 & 8) != 0 )
                {
                  v18 = 1;
                  v74 = 1;
                }
                else
                {
                  v18 = 2;
                }
                goto LABEL_67;
              }
            }
            if ( (v26 & 0x406) != 0 )
            {
              sub_B5560(v80, 0xBu, "\\%02X", v78);
              v18 = 3;
            }
            else
            {
              v18 = 1;
            }
LABEL_67:
            v16 += v18;
            if ( v21 != 5 )
            {
              if ( (v79 & 0x80) != 0 )
              {
                LOWORD(v3) = v3 & 4;
              }
              else
              {
                LOWORD(v3) = v3 & word_1CA6D0[v79];
                if ( (v3 & 0x61) != 0 )
                  goto LABEL_70;
              }
              if ( (v3 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X", v79);
                v18 = 3;
                v16 += 3;
                goto LABEL_73;
              }
              v18 = 1;
LABEL_72:
              ++v16;
            }
LABEL_73:
            if ( v17 == v12 )
              goto LABEL_74;
          }
          else
          {
LABEL_35:
            if ( (v68 & 8) != 0 )
              goto LABEL_36;
LABEL_92:
            v35 = sub_1287A4(v20, v67 | v3, &v74, v68 & 8);
            if ( v35 < 0 )
              return -1;
            v16 += v35;
            if ( v17 == v12 )
              goto LABEL_74;
          }
          break;
        case 1:
          v20 = *v17++;
          v76 = v20;
          goto LABEL_34;
        case 2:
          v76 = *v17 << 8;
          v34 = v17[1];
          v17 += 2;
          v20 = v76 | v34;
          v76 |= v34;
          if ( v17 == v12 )
            goto LABEL_89;
          goto LABEL_35;
        case 4:
          v19 = *v17;
          v17 += 4;
          v76 = v19 << 24;
          v76 = (v19 << 24) | (*(v17 - 3) << 16);
          v76 |= *(v17 - 2) << 8;
          v20 = v76 | *(v17 - 1);
          v76 = v20;
          goto LABEL_34;
        default:
          return -1;
      }
    }
  }
  v16 = 0;
LABEL_74:
  v27 = v71 + v16;
  v72 = v71 + v16;
  if ( v74 )
  {
    v28 = v27 + 2;
    v72 = v27 + 2;
    if ( !a1 )
      return v28;
    if ( sub_B69CC(a1, (int)"\"", 1) != 1 )
      return -1;
  }
  else if ( !a1 )
  {
    return v27;
  }
  v29 = (unsigned __int8 *)a3[2];
  v30 = *a3;
  v31 = &v29[*a3];
  if ( v66 == 2 )
  {
    if ( (v30 & 1) == 0 )
      goto LABEL_80;
LABEL_185:
    sub_D0048(13, 142, 129, (int)"crypto/asn1/a_strex.c", 161);
    return -1;
  }
  if ( v66 == 4 && (v30 & 3) != 0 )
  {
LABEL_16:
    sub_D0048(13, 142, 133, (int)"crypto/asn1/a_strex.c", 155);
    return -1;
  }
LABEL_80:
  if ( v29 != v31 )
  {
    v32 = (unsigned __int8 *)a3[2];
    v33 = v68 & 8;
    v69 = (_BYTE *)(v68 & 8);
    while ( 1 )
    {
      if ( v29 == v32 )
        v33 = v70 & 1;
      else
        LOWORD(v16) = 0;
      if ( v29 == v32 )
        LOWORD(v16) = 32 * v33;
      switch ( v66 )
      {
        case 0:
          v46 = sub_12B614(v32, v30, &v76, v66);
          if ( v46 < 0 )
            return -1;
          v38 = v76;
          v30 -= v46;
          v32 += v46;
          goto LABEL_99;
        case 1:
          v38 = *v32++;
          v76 = v38;
          goto LABEL_99;
        case 2:
          v76 = *v32 << 8;
          v45 = v32[1];
          v32 += 2;
          v38 = v76 | v45;
          v76 |= v45;
          if ( v31 == v32 )
            goto LABEL_113;
          goto LABEL_100;
        case 4:
          v37 = *v32;
          v32 += 4;
          v76 = v37 << 24;
          v76 = (v37 << 24) | (*(v32 - 3) << 16);
          v76 |= *(v32 - 2) << 8;
          v38 = v76 | *(v32 - 1);
          v76 = v38;
LABEL_99:
          if ( v31 == v32 )
          {
LABEL_113:
            if ( (v70 & 1) != 0 )
              LOWORD(v16) = 64;
            if ( !v69 )
            {
LABEL_116:
              if ( sub_1287A4(v38, v67 | v16, v69, a1) < 0 )
                return -1;
              goto LABEL_109;
            }
          }
          else
          {
LABEL_100:
            if ( !v69 )
              goto LABEL_116;
          }
          v39 = (char *)&v77;
          v40 = sub_12B7E0(&v77, 6);
          if ( v40 > 0 )
          {
            v41 = (char *)&v77 + v40;
            LOWORD(v16) = v16 | v67;
            while ( 1 )
            {
              v43 = (unsigned __int8)*v39++;
              v42 = v43;
              v75 = v43;
              if ( (v43 & 0x80) != 0 )
              {
                v44 = v16 & 4;
              }
              else
              {
                v44 = word_1CA6D0[v42] & v16;
                if ( (v44 & 0x61) != 0 )
                {
                  if ( (v44 & 8) == 0 && sub_B69CC(a1, (int)"\\", 1) != 1 )
                    return -1;
LABEL_107:
                  if ( sub_B69CC(a1, (int)&v75, 1) != 1 )
                    return -1;
                  goto LABEL_108;
                }
              }
              if ( (v44 & 0x406) != 0 )
              {
                sub_B5560(v80, 0xBu, "\\%02X");
                if ( sub_B69CC(a1, (int)v80, 3) != 3 )
                  return -1;
                if ( v39 == v41 )
                  break;
              }
              else
              {
                if ( v42 != 92 || (v16 & 0x40F) == 0 )
                  goto LABEL_107;
                if ( sub_B69CC(a1, (int)"\\\\", 2) != 2 )
                  return -1;
LABEL_108:
                if ( v39 == v41 )
                  break;
              }
            }
          }
LABEL_109:
          if ( v31 == v32 )
            goto LABEL_110;
          break;
        default:
          return -1;
      }
    }
  }
LABEL_110:
  if ( v74 && sub_B69CC(a1, (int)"\"", 1) != 1 )
    return -1;
  return v72;
}
