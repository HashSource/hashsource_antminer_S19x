int __fastcall sub_170E28(int *a1, char *s, int a3, int a4, unsigned int a5, int a6, int a7)
{
  signed int v7; // r7
  char *v8; // r8
  unsigned int v10; // r5
  int v11; // r3
  bool v12; // cc
  int v13; // r1
  _BOOL4 v14; // r3
  signed int v15; // r11
  unsigned __int8 *v16; // r6
  int v17; // r3
  int v18; // r1
  int v19; // r4
  unsigned int v20; // r10
  int v21; // r6
  int v22; // r5
  int v23; // r4
  _BOOL4 v24; // r0
  _BOOL4 v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r4
  int v29; // r11
  int (__fastcall *v30)(char, _DWORD *); // r10
  int v31; // r0
  _BYTE *v32; // r0
  int v33; // r0
  int v34; // r4
  unsigned __int8 *v35; // r5
  int v36; // r6
  int v37; // r0
  int v38; // r4
  unsigned __int8 *v39; // r6
  int v40; // lr
  unsigned int v41; // t1
  int v42; // r0
  int v43; // r0
  char *v44; // r8
  int v45; // r2
  int v46; // lr
  int v47; // r0
  int v48; // r3
  int v49; // r2
  char *v50; // r8
  int v51; // r2
  int v52; // r3
  int v53; // r10
  char *v54; // r6
  signed int v55; // r4
  int v56; // r2
  int v57; // r12
  int v58; // r3
  int v59; // lr
  signed int v60; // r6
  char *v61; // r10
  unsigned int v62; // t1
  char *v63; // r6
  signed int v64; // r4
  int v65; // r2
  int v66; // r3
  int v68; // [sp+Ch] [bp-38h]
  int v69; // [sp+Ch] [bp-38h]
  int v71; // [sp+14h] [bp-30h]
  _BYTE *v72; // [sp+1Ch] [bp-28h] BYREF
  unsigned int v73[9]; // [sp+20h] [bp-24h] BYREF
  int v74; // [sp+68h] [bp+24h]

  v7 = a3 + 1;
  v8 = s;
  if ( a3 != -1 )
    v7 = a3;
  v10 = a5;
  if ( a3 == -1 )
    v7 = strlen(s);
  if ( !a5 )
    v10 = 10246;
  switch ( a4 )
  {
    case 4096:
      if ( !v7 )
        goto LABEL_9;
      v74 = v10;
      v34 = v7;
      v35 = (unsigned __int8 *)v8;
      v36 = 0;
      while ( 1 )
      {
        ++v36;
        v37 = sub_12B614(v35, v34, v73);
        v35 += v37;
        if ( v37 < 0 )
          break;
        v34 -= v37;
        if ( !v34 )
        {
          v68 = v36;
          v11 = v36;
          v10 = v74;
          goto LABEL_10;
        }
      }
      sub_D0048(13, 122, 134, (int)"crypto/asn1/a_mbstr.c", 85);
      return -1;
    case 4097:
LABEL_9:
      v11 = v7;
      v68 = v7;
      goto LABEL_10;
    case 4098:
      if ( (v7 & 1) == 0 )
      {
        v11 = v7 >> 1;
        v68 = v7 >> 1;
        goto LABEL_10;
      }
      sub_D0048(13, 122, 129, (int)"crypto/asn1/a_mbstr.c", 65);
      return -1;
    case 4100:
      if ( v7 << 30 )
      {
        sub_D0048(13, 122, 133, (int)"crypto/asn1/a_mbstr.c", 74);
        return -1;
      }
      v11 = v7 >> 2;
      v68 = v7 >> 2;
LABEL_10:
      v12 = a6 <= 0;
      if ( a6 > 0 )
        v12 = a6 <= v11;
      if ( !v12 )
      {
        sub_D0048(13, 122, 152, (int)"crypto/asn1/a_mbstr.c", 100);
        sub_B5560(v73, 0x20u, "%ld", a6);
        sub_D1240(2, "minsize=", v73);
        return -1;
      }
      v13 = v11;
      v14 = a7 > 0;
      if ( a7 >= v13 )
        v14 = 0;
      if ( v14 )
      {
        sub_D0048(13, 122, 151, (int)"crypto/asn1/a_mbstr.c", 107);
        sub_B5560(v73, 0x20u, "%ld", a7);
        sub_D1240(2, "maxsize=", v73);
        return -1;
      }
      if ( !v7 )
        goto LABEL_39;
      v15 = v7;
      v16 = (unsigned __int8 *)v8;
      break;
    default:
      sub_D0048(13, 122, 160, (int)"crypto/asn1/a_mbstr.c", 95);
      return -1;
  }
  do
  {
    switch ( a4 )
    {
      case 4097:
        v19 = *v16;
        --v7;
        ++v16;
        v73[0] = v19;
        break;
      case 4098:
        v27 = *v16;
        v7 -= 2;
        v28 = v16[1];
        v16 += 2;
        v19 = v28 | (v27 << 8);
        v73[0] = v19;
        break;
      case 4100:
        v17 = v16[1];
        v7 -= 4;
        v18 = *v16;
        v16 += 4;
        v19 = (v17 << 16) | (v18 << 24) | *(v16 - 1) | (*(v16 - 2) << 8);
        v73[0] = v19;
        break;
      default:
        v26 = sub_12B614(v16, v7, v73);
        if ( v26 < 0 )
        {
LABEL_127:
          sub_D0048(13, 122, 124, (int)"crypto/asn1/a_mbstr.c", 115);
          return -1;
        }
        v19 = v73[0];
        v7 -= v26;
        v16 += v26;
        break;
    }
    if ( v19 < 0 )
      v20 = 0x7FFFFFFF;
    else
      v20 = v19;
    if ( (v10 & 1) != 0 )
    {
      v24 = sub_BDB10(v20, 4);
      v25 = v20 != 32;
      if ( v24 )
        v25 = 0;
      if ( v25 )
        v10 &= ~1u;
    }
    if ( (v10 & 2) != 0 && !sub_BDB10(v20, 2048) )
      v10 &= ~2u;
    if ( (v10 & 0x10) != 0 && (v20 & 0xFFFFFF80) != 0 )
      v10 &= ~0x10u;
    if ( (((unsigned int)v19 > 0xFF) & (v10 >> 2)) != 0 )
      v10 &= ~4u;
    if ( (v10 & 0x800) != 0 )
    {
      if ( (unsigned int)v19 < 0x10000 )
        continue;
      v10 &= ~0x800u;
    }
    if ( !v10 )
      goto LABEL_127;
  }
  while ( v7 );
  v7 = v15;
LABEL_39:
  if ( (v10 & 1) != 0 )
  {
    v21 = 4097;
    v22 = 18;
  }
  else if ( (v10 & 2) != 0 )
  {
    v21 = 4097;
    v22 = 19;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    v21 = 4097;
    v22 = 22;
  }
  else if ( (v10 & 4) != 0 )
  {
    v21 = 4097;
    v22 = 20;
  }
  else if ( (v10 & 0x800) != 0 )
  {
    v21 = 4098;
    v22 = 30;
  }
  else
  {
    v21 = 4100;
    if ( (v10 & 0x100) != 0 )
    {
      v22 = 28;
    }
    else
    {
      v21 = 4096;
      v22 = 12;
    }
  }
  if ( !a1 )
    return v22;
  v23 = *a1;
  if ( *a1 )
  {
    CRYPTO_free(*(void **)(v23 + 8));
    *(_DWORD *)(v23 + 4) = v22;
    *(_DWORD *)(v23 + 8) = 0;
    v71 = 0;
    *(_DWORD *)v23 = 0;
    goto LABEL_47;
  }
  v43 = sub_AE194(v22);
  v23 = v43;
  if ( !v43 )
  {
    v49 = 152;
    goto LABEL_121;
  }
  v71 = 1;
  *a1 = v43;
LABEL_47:
  if ( v21 == a4 )
  {
    if ( sub_AE088((size_t *)v23, v8, v7) )
      return v22;
    v49 = 160;
LABEL_121:
    sub_D0048(13, 122, 65, (int)"crypto/asn1/a_mbstr.c", v49);
    return -1;
  }
  switch ( v21 )
  {
    case 4096:
      v31 = 1;
      v29 = v7;
      if ( !v7 )
        goto LABEL_101;
      if ( a4 != 4097 )
      {
        if ( a4 == 4098 )
        {
          v53 = v23;
          v63 = v8 + 2;
          v29 = 0;
          v64 = v7;
          do
          {
            v65 = (unsigned __int8)*(v63 - 2);
            v64 -= 2;
            v66 = (unsigned __int8)*(v63 - 1);
            v63 += 2;
            v73[0] = v66 | (v65 << 8);
            v29 += sub_12B7E0(0, -1, v73[0]);
          }
          while ( v64 );
        }
        else
        {
          if ( a4 != 4100 )
          {
            v69 = v23;
            v29 = 0;
            v38 = v7;
            v39 = (unsigned __int8 *)v8;
            do
            {
              v40 = sub_12B614(v39, v38, v73);
              v38 -= v40;
              if ( v40 < 0 )
              {
                v23 = v69;
                v31 = v29 + 1;
                goto LABEL_101;
              }
              v39 += v40;
              v29 += sub_12B7E0(0, -1, v73[0]);
            }
            while ( v38 );
            v23 = v69;
            goto LABEL_131;
          }
          v53 = v23;
          v54 = v8 + 4;
          v29 = 0;
          v55 = v7;
          do
          {
            v56 = (unsigned __int8)*(v54 - 4);
            v55 -= 4;
            v57 = (unsigned __int8)*(v54 - 3);
            v58 = (unsigned __int8)*(v54 - 1);
            v59 = (unsigned __int8)*(v54 - 2);
            v54 += 4;
            v73[0] = v58 | (v56 << 24) | (v57 << 16) | (v59 << 8);
            v29 += sub_12B7E0(0, -1, v73[0]);
          }
          while ( v55 );
        }
        v23 = v53;
        goto LABEL_131;
      }
      v60 = v7;
      v61 = v8;
      v29 = 0;
      do
      {
        v62 = (unsigned __int8)*v61++;
        --v60;
        v73[0] = v62;
        v29 += sub_12B7E0(0, -1, v62);
      }
      while ( v60 );
LABEL_131:
      v31 = v29 + 1;
LABEL_101:
      v30 = (int (__fastcall *)(char, _DWORD *))sub_170D6C;
LABEL_67:
      v32 = CRYPTO_malloc((void *)v31);
      v72 = v32;
      if ( !v32 )
      {
        if ( v71 )
          ASN1_STRING_free(v23);
        v49 = 192;
        goto LABEL_121;
      }
      *(_DWORD *)v23 = v29;
      *(_DWORD *)(v23 + 8) = v32;
      v32[v29] = 0;
      if ( !v7 )
        return v22;
      if ( a4 == 4097 )
      {
        if ( v30 )
        {
          while ( 1 )
          {
            v41 = (unsigned __int8)*v8++;
            --v7;
            v73[0] = v41;
            if ( v30(v41, &v72) <= 0 )
              break;
            if ( !v7 )
              return v22;
          }
          return v22;
        }
        return v22;
      }
      if ( !v30 )
      {
        if ( a4 != 4100 && a4 != 4098 )
        {
          while ( 1 )
          {
            v42 = sub_12B614((unsigned __int8 *)v8, v7, v73);
            v8 += v42;
            if ( v42 < 0 )
              break;
            v7 -= v42;
            if ( !v7 )
              return v22;
          }
          return v22;
        }
        return v22;
      }
      if ( a4 == 4098 )
      {
        v50 = v8 + 2;
        while ( 1 )
        {
          v51 = (unsigned __int8)*(v50 - 2);
          v52 = (unsigned __int8)*(v50 - 1);
          v7 -= 2;
          v50 += 2;
          v73[0] = v52 | (v51 << 8);
          if ( v30(v52, &v72) <= 0 )
            break;
          if ( !v7 )
            return v22;
        }
        return v22;
      }
      else
      {
        if ( a4 != 4100 )
        {
          do
          {
            v33 = sub_12B614((unsigned __int8 *)v8, v7, v73);
            v7 -= v33;
            v8 += v33;
          }
          while ( v33 >= 0 && v30(v73[0], &v72) > 0 && v7 );
          return v22;
        }
        v44 = v8 + 4;
        while ( 1 )
        {
          v45 = (unsigned __int8)*(v44 - 3);
          v46 = (unsigned __int8)*(v44 - 4);
          v7 -= 4;
          v47 = (unsigned __int8)*(v44 - 2);
          v44 += 4;
          v48 = (unsigned __int8)*(v44 - 5) | (v45 << 16) | (v46 << 24) | (v47 << 8);
          LOBYTE(v47) = *(v44 - 5);
          v73[0] = v48;
          if ( v30(v47, &v72) <= 0 )
            break;
          if ( !v7 )
            return v22;
        }
        return v22;
      }
    case 4097:
      v31 = v68 + 1;
      v29 = v68;
      v30 = sub_170D20;
      goto LABEL_67;
    case 4098:
      v29 = 2 * v68;
      v30 = (int (__fastcall *)(char, _DWORD *))sub_170D30;
      v31 = 2 * v68 + 1;
      goto LABEL_67;
    case 4100:
      v29 = 4 * v68;
      v30 = (int (__fastcall *)(char, _DWORD *))sub_170D4C;
      v31 = 4 * v68 + 1;
      goto LABEL_67;
  }
}
