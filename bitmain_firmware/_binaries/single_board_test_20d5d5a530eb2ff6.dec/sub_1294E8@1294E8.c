size_t __fastcall sub_1294E8(FILE *s, int a2, int *a3)
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
  FILE *v45; // r3
  int v46; // r0
  int v47; // r0
  __int16 v48; // r2
  __int16 v49; // r2
  __int16 v50; // r2
  __int16 v51; // r2
  __int16 v52; // r2
  int v53; // r4
  int v54; // r0
  unsigned __int8 *v55; // r5
  int v56; // r4
  unsigned __int8 *v57; // r7
  unsigned int v58; // t1
  char v59; // lr
  size_t v60; // r3
  unsigned __int8 *v61; // r0
  unsigned __int8 *v62; // r4
  unsigned __int8 *v63; // r7
  unsigned __int8 *v64; // r5
  unsigned int v65; // t1
  char v66; // lr
  int v67; // [sp+8h] [bp-54h]
  __int16 v68; // [sp+Ch] [bp-50h]
  char v69; // [sp+10h] [bp-4Ch]
  _BYTE *v70; // [sp+10h] [bp-4Ch]
  char v71; // [sp+14h] [bp-48h]
  size_t v72; // [sp+18h] [bp-44h]
  int v73; // [sp+18h] [bp-44h]
  int v74; // [sp+1Ch] [bp-40h]
  char v75; // [sp+3Eh] [bp-1Eh] BYREF
  char ptr; // [sp+3Fh] [bp-1Dh] BYREF
  int v77; // [sp+40h] [bp-1Ch] BYREF
  unsigned __int8 *v78; // [sp+44h] [bp-18h] BYREF
  unsigned __int8 v79; // [sp+48h] [bp-14h]
  unsigned __int8 v80; // [sp+49h] [bp-13h]
  size_t v81[3]; // [sp+4Ch] [bp-10h] BYREF

  v3 = a2;
  v71 = a2;
  v6 = a3[1];
  v68 = a2 & 0x40F;
  v75 = 0;
  if ( (a2 & 0x40) != 0 )
  {
    v13 = (const char *)sub_12C9C0(v6);
    v14 = strlen(v13);
    v15 = v14;
    if ( s && (v14 != fwrite(v13, 1u, v14, s) || fwrite(&word_1B5258, 1u, 1u, s) != 1) )
      return -1;
    v72 = v15 + 1;
  }
  else
  {
    v72 = 0;
  }
  if ( (v3 & 0x80) != 0 )
  {
LABEL_5:
    if ( s )
    {
      if ( fwrite("#", 1u, 1u, s) != 1 )
        return -1;
      if ( (v3 & 0x200) == 0 )
      {
        v55 = (unsigned __int8 *)a3[2];
        v56 = *a3;
        v57 = &v55[*a3];
        if ( v57 != v55 )
        {
          while ( 1 )
          {
            v58 = *v55++;
            v59 = *((_BYTE *)&word_1CA6D0[144] + (v58 >> 4));
            BYTE1(v81[0]) = *((_BYTE *)&word_1CA6D0[144] + (v58 & 0xF));
            LOBYTE(v81[0]) = v59;
            if ( fwrite(v81, 1u, 2u, s) != 2 )
              return -1;
            if ( v57 == v55 )
              goto LABEL_249;
          }
        }
        goto LABEL_249;
      }
    }
    else if ( (v3 & 0x200) == 0 )
    {
      v56 = *a3;
LABEL_249:
      if ( (v56 & 0x40000000) != 0 )
        return -1;
      v54 = 2 * v56 + 1;
      return v72 + v54;
    }
    v60 = a3[1];
    v81[1] = (size_t)a3;
    v81[0] = v60;
    v61 = (unsigned __int8 *)sub_B23F4(v81, 0);
    v62 = v61;
    if ( (int)v61 <= 0 )
      return -1;
    v63 = (unsigned __int8 *)CRYPTO_malloc(v61);
    if ( !v63 )
    {
      sub_D0048(13, 125, 65, (int)"crypto/asn1/a_strex.c", 286);
      return -1;
    }
    v78 = v63;
    sub_B23F4(v81, &v78);
    if ( s && v63 != &v62[(_DWORD)v63] )
    {
      v64 = v63;
      while ( 1 )
      {
        v65 = *v64++;
        v66 = *((_BYTE *)&word_1CA6D0[144] + (v65 >> 4));
        BYTE1(v77) = *((_BYTE *)&word_1CA6D0[144] + (v65 & 0xF));
        LOBYTE(v77) = v66;
        if ( fwrite(&v77, 1u, 2u, s) != 2 )
          break;
        if ( &v62[(_DWORD)v63] == v64 )
          goto LABEL_188;
      }
      CRYPTO_free(v63);
      return -1;
    }
LABEL_188:
    v53 = 2 * (_DWORD)v62;
    CRYPTO_free(v63);
    if ( v53 < 0 )
      return -1;
    v54 = v53 + 1;
    return v72 + v54;
  }
  if ( (v3 & 0x20) != 0 )
  {
LABEL_22:
    if ( (v3 & 0x10) != 0 )
    {
      v11 = (unsigned __int8 *)a3[2];
      v67 = 1;
      v69 = 9;
      v74 = *a3;
      v12 = &v11[*a3];
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(v6 - 1) > 0x1D || (v8 = (char *)word_1CA6D0 + v6, v9 = v8[256], v69 = v8[256], v9 == -1) )
  {
    if ( (v3 & 0x100) != 0 )
      goto LABEL_5;
    goto LABEL_22;
  }
  v3 <<= 27;
  if ( v3 >= 0 )
  {
    v67 = v9 & 7;
    goto LABEL_13;
  }
  if ( !v8[256] )
  {
LABEL_23:
    v11 = (unsigned __int8 *)a3[2];
    v67 = 1;
    v74 = *a3;
    v12 = &v11[*a3];
    v69 = 1;
    goto LABEL_24;
  }
  v69 = v9 | 8;
  v67 = v9 & 7;
LABEL_13:
  v10 = *a3;
  v11 = (unsigned __int8 *)a3[2];
  v74 = *a3;
  v12 = &v11[*a3];
  if ( v67 == 2 )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_186;
  }
  else if ( v67 == 4 && v10 << 30 )
  {
    goto LABEL_16;
  }
LABEL_24:
  if ( v11 != v12 )
  {
    v17 = v11;
    v16 = 0;
    v18 = v69 & 8;
    while ( 1 )
    {
      if ( v11 == v17 )
        v18 = v71 & 1;
      else
        LOWORD(v3) = 0;
      if ( v11 == v17 )
        LOWORD(v3) = 32 * v18;
      switch ( v67 )
      {
        case 0:
          v36 = sub_12B614(v17, v74, &v77, v18);
          if ( v36 < 0 )
            return -1;
          v20 = v77;
          v17 += v36;
          v74 -= v36;
LABEL_34:
          if ( v17 == v12 )
          {
LABEL_89:
            if ( (v71 & 1) != 0 )
              LOWORD(v3) = 64;
            if ( (v69 & 8) == 0 )
              goto LABEL_92;
LABEL_36:
            v21 = sub_12B7E0(&v78, 6);
            if ( v21 <= 0 )
              goto LABEL_73;
            LOWORD(v3) = v3 | v68;
            if ( (v3 & 0x40F) != 0 )
            {
              if ( ((unsigned __int8)v78 & 0x80) != 0 )
              {
                v48 = v3 & 4;
              }
              else
              {
                v48 = word_1CA6D0[(unsigned __int8)v78] & v3;
                if ( (v48 & 0x61) != 0 )
                {
                  if ( (v48 & 8) != 0 )
                  {
                    v18 = 1;
                    v75 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_142;
                }
              }
              if ( (v48 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", (unsigned __int8)v78);
                v18 = 3;
              }
              else if ( (unsigned __int8)v78 == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_142:
              v16 += v18;
              if ( v21 == 1 )
                goto LABEL_73;
              if ( (BYTE1(v78) & 0x80) != 0 )
              {
                v49 = v3 & 4;
              }
              else
              {
                v49 = word_1CA6D0[BYTE1(v78)] & v3;
                if ( (v49 & 0x61) != 0 )
                {
                  if ( (v49 & 8) != 0 )
                  {
                    v18 = 1;
                    v75 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_147;
                }
              }
              if ( (v49 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", BYTE1(v78));
                v18 = 3;
              }
              else if ( BYTE1(v78) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_147:
              v16 += v18;
              if ( v21 == 2 )
                goto LABEL_73;
              if ( (BYTE2(v78) & 0x80) != 0 )
              {
                v50 = v3 & 4;
              }
              else
              {
                v50 = word_1CA6D0[BYTE2(v78)] & v3;
                if ( (v50 & 0x61) != 0 )
                {
                  if ( (v50 & 8) != 0 )
                  {
                    v18 = 1;
                    v75 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_152;
                }
              }
              if ( (v50 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", BYTE2(v78));
                v18 = 3;
              }
              else if ( BYTE2(v78) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_152:
              v16 += v18;
              if ( v21 == 3 )
                goto LABEL_73;
              if ( (HIBYTE(v78) & 0x80) != 0 )
              {
                v51 = v3 & 4;
              }
              else
              {
                v51 = word_1CA6D0[HIBYTE(v78)] & v3;
                if ( (v51 & 0x61) != 0 )
                {
                  if ( (v51 & 8) != 0 )
                  {
                    v18 = 1;
                    v75 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_157;
                }
              }
              if ( (v51 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", HIBYTE(v78));
                v18 = 3;
              }
              else if ( HIBYTE(v78) == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_157:
              v16 += v18;
              if ( v21 == 4 )
                goto LABEL_73;
              if ( (v79 & 0x80) != 0 )
              {
                v52 = v3 & 4;
              }
              else
              {
                v52 = word_1CA6D0[v79] & v3;
                if ( (v52 & 0x61) != 0 )
                {
                  if ( (v52 & 8) != 0 )
                  {
                    v18 = 1;
                    v75 = 1;
                  }
                  else
                  {
                    v18 = 2;
                  }
                  goto LABEL_162;
                }
              }
              if ( (v52 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", v79);
                v18 = 3;
              }
              else if ( v79 == 92 )
              {
                v18 = 2;
              }
              else
              {
                v18 = 1;
              }
LABEL_162:
              v16 += v18;
              if ( v21 == 5 )
                goto LABEL_73;
              if ( (v80 & 0x80) != 0 )
              {
                LOWORD(v3) = v3 & 4;
LABEL_166:
                if ( (v3 & 0x406) != 0 )
                {
                  sub_B5560(v81, 0xBu, "\\%02X");
                  v18 = 3;
                  v16 += 3;
                }
                else
                {
                  if ( v80 == 92 )
                    v18 = 2;
                  else
                    v18 = 1;
                  v16 += v18;
                }
                goto LABEL_73;
              }
              LOWORD(v3) = v3 & word_1CA6D0[v80];
              if ( (v3 & 0x61) == 0 )
                goto LABEL_166;
LABEL_70:
              if ( (v3 & 8) == 0 )
              {
                v18 = 2;
                v16 += 2;
                goto LABEL_73;
              }
              v18 = 1;
              v75 = 1;
              goto LABEL_72;
            }
            if ( ((unsigned __int8)v78 & 0x80) != 0 )
            {
              v22 = v3 & 4;
LABEL_40:
              if ( (v22 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", (unsigned __int8)v78);
                v18 = 3;
              }
              else
              {
                v18 = 1;
              }
              goto LABEL_43;
            }
            v22 = word_1CA6D0[(unsigned __int8)v78] & v3;
            if ( (v22 & 0x61) == 0 )
              goto LABEL_40;
            if ( (v22 & 8) != 0 )
              v18 = 1;
            else
              v18 = 2;
            if ( (v22 & 8) != 0 )
              v75 = v18;
LABEL_43:
            v16 += v18;
            if ( v21 == 1 )
              goto LABEL_73;
            if ( (BYTE1(v78) & 0x80) != 0 )
            {
              v23 = v3 & 4;
            }
            else
            {
              v23 = word_1CA6D0[BYTE1(v78)] & v3;
              if ( (v23 & 0x61) != 0 )
              {
                if ( (v23 & 8) != 0 )
                {
                  v18 = 1;
                  v75 = 1;
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
              sub_B5560(v81, 0xBu, "\\%02X", BYTE1(v78));
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
            if ( (BYTE2(v78) & 0x80) != 0 )
            {
              v24 = v3 & 4;
            }
            else
            {
              v24 = word_1CA6D0[BYTE2(v78)] & v3;
              if ( (v24 & 0x61) != 0 )
              {
                if ( (v24 & 8) != 0 )
                {
                  v18 = 1;
                  v75 = 1;
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
              sub_B5560(v81, 0xBu, "\\%02X", BYTE2(v78));
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
            if ( (HIBYTE(v78) & 0x80) != 0 )
            {
              v25 = v3 & 4;
            }
            else
            {
              v25 = word_1CA6D0[HIBYTE(v78)] & v3;
              if ( (v25 & 0x61) != 0 )
              {
                if ( (v25 & 8) != 0 )
                {
                  v18 = 1;
                  v75 = 1;
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
              sub_B5560(v81, 0xBu, "\\%02X", HIBYTE(v78));
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
            if ( (v79 & 0x80) != 0 )
            {
              v26 = v3 & 4;
            }
            else
            {
              v26 = word_1CA6D0[v79] & v3;
              if ( (v26 & 0x61) != 0 )
              {
                if ( (v26 & 8) != 0 )
                {
                  v18 = 1;
                  v75 = 1;
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
              sub_B5560(v81, 0xBu, "\\%02X", v79);
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
              if ( (v80 & 0x80) != 0 )
              {
                LOWORD(v3) = v3 & 4;
              }
              else
              {
                LOWORD(v3) = v3 & word_1CA6D0[v80];
                if ( (v3 & 0x61) != 0 )
                  goto LABEL_70;
              }
              if ( (v3 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X", v80);
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
            if ( (v69 & 8) != 0 )
              goto LABEL_36;
LABEL_92:
            v35 = sub_1293AC(v20, v68 | v3, &v75, (FILE *)(v69 & 8));
            if ( v35 < 0 )
              return -1;
            v16 += v35;
            if ( v17 == v12 )
              goto LABEL_74;
          }
          break;
        case 1:
          v20 = *v17++;
          v77 = v20;
          goto LABEL_34;
        case 2:
          v77 = *v17 << 8;
          v34 = v17[1];
          v17 += 2;
          v20 = v77 | v34;
          v77 |= v34;
          if ( v17 == v12 )
            goto LABEL_89;
          goto LABEL_35;
        case 4:
          v19 = *v17;
          v17 += 4;
          v77 = v19 << 24;
          v77 = (v19 << 24) | (*(v17 - 3) << 16);
          v77 |= *(v17 - 2) << 8;
          v20 = v77 | *(v17 - 1);
          v77 = v20;
          goto LABEL_34;
        default:
          return -1;
      }
    }
  }
  v16 = 0;
LABEL_74:
  v27 = v72 + v16;
  v73 = v72 + v16;
  if ( v75 )
  {
    v28 = v27 + 2;
    v73 = v27 + 2;
    if ( !s )
      return v28;
    if ( fwrite("\"", 1u, 1u, s) != 1 )
      return -1;
  }
  else if ( !s )
  {
    return v27;
  }
  v29 = (unsigned __int8 *)a3[2];
  v30 = *a3;
  v31 = &v29[*a3];
  if ( v67 == 2 )
  {
    if ( (v30 & 1) == 0 )
      goto LABEL_80;
LABEL_186:
    sub_D0048(13, 142, 129, (int)"crypto/asn1/a_strex.c", 161);
    return -1;
  }
  if ( v67 == 4 && (v30 & 3) != 0 )
  {
LABEL_16:
    sub_D0048(13, 142, 133, (int)"crypto/asn1/a_strex.c", 155);
    return -1;
  }
LABEL_80:
  if ( v29 != v31 )
  {
    v32 = (unsigned __int8 *)a3[2];
    v33 = v69 & 8;
    v70 = (_BYTE *)(v69 & 8);
    while ( 1 )
    {
      if ( v29 == v32 )
        v33 = v71 & 1;
      else
        LOWORD(v16) = 0;
      if ( v29 == v32 )
        LOWORD(v16) = 32 * v33;
      switch ( v67 )
      {
        case 0:
          v47 = sub_12B614(v32, v30, &v77, v67);
          if ( v47 < 0 )
            return -1;
          v38 = v77;
          v30 -= v47;
          v32 += v47;
          goto LABEL_99;
        case 1:
          v38 = *v32++;
          v77 = v38;
          goto LABEL_99;
        case 2:
          v77 = *v32 << 8;
          v46 = v32[1];
          v32 += 2;
          v38 = v77 | v46;
          v77 |= v46;
          if ( v31 == v32 )
            goto LABEL_114;
          goto LABEL_100;
        case 4:
          v37 = *v32;
          v32 += 4;
          v77 = v37 << 24;
          v77 = (v37 << 24) | (*(v32 - 3) << 16);
          v77 |= *(v32 - 2) << 8;
          v38 = v77 | *(v32 - 1);
          v77 = v38;
LABEL_99:
          if ( v31 == v32 )
          {
LABEL_114:
            if ( (v71 & 1) != 0 )
              LOWORD(v16) = 64;
            if ( !v70 )
            {
LABEL_117:
              if ( sub_1293AC(v38, v68 | v16, v70, s) < 0 )
                return -1;
              goto LABEL_110;
            }
          }
          else
          {
LABEL_100:
            if ( !v70 )
              goto LABEL_117;
          }
          v39 = (char *)&v78;
          v40 = sub_12B7E0(&v78, 6);
          if ( v40 > 0 )
          {
            v41 = (char *)&v78 + v40;
            LOWORD(v16) = v16 | v68;
            while ( 1 )
            {
              v43 = (unsigned __int8)*v39++;
              v42 = v43;
              ptr = v43;
              if ( (v43 & 0x80) != 0 )
              {
                v44 = v16 & 4;
              }
              else
              {
                v44 = word_1CA6D0[v42] & v16;
                if ( (v44 & 0x61) != 0 )
                {
                  if ( (v44 & 8) != 0 )
                  {
LABEL_107:
                    v45 = s;
                  }
                  else
                  {
                    if ( fwrite("\\", 1u, 1u, s) != 1 )
                      return -1;
                    v45 = s;
                  }
                  if ( fwrite(&ptr, 1u, 1u, v45) != 1 )
                    return -1;
                  goto LABEL_109;
                }
              }
              if ( (v44 & 0x406) != 0 )
              {
                sub_B5560(v81, 0xBu, "\\%02X");
                if ( fwrite(v81, 1u, 3u, s) != 3 )
                  return -1;
                if ( v39 == v41 )
                  break;
              }
              else
              {
                if ( v42 != 92 || (v16 & 0x40F) == 0 )
                  goto LABEL_107;
                if ( fwrite("\\\\", 1u, 2u, s) != 2 )
                  return -1;
LABEL_109:
                if ( v39 == v41 )
                  break;
              }
            }
          }
LABEL_110:
          if ( v31 == v32 )
            goto LABEL_111;
          break;
        default:
          return -1;
      }
    }
  }
LABEL_111:
  if ( v75 && fwrite("\"", 1u, 1u, s) != 1 )
    return -1;
  return v73;
}
