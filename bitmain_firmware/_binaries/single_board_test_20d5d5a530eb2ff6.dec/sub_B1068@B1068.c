int __fastcall sub_B1068(size_t **a1, void **a2, int a3, int a4, int a5)
{
  size_t **v5; // r4
  int v6; // r7
  int v7; // r11
  int v8; // r8
  int v9; // r1
  unsigned int v10; // r9
  int v11; // r3
  size_t *v12; // r6
  int v13; // r3
  char v14; // r3
  int v15; // r3
  int v16; // r5
  int v17; // r4
  size_t *v18; // r0
  unsigned __int8 *v19; // r2
  int v20; // r0
  bool v21; // cc
  int v22; // r1
  unsigned int v23; // r9
  int v24; // r0
  size_t *v25; // r10
  int v26; // r1
  int v27; // r2
  unsigned __int8 *v28; // r7
  int v29; // r4
  int v30; // r1
  int result; // r0
  unsigned __int8 *v32; // r2
  int v33; // r0
  int v34; // r5
  int v35; // r0
  bool v36; // zf
  bool v37; // zf
  int v38; // r2
  int v39; // r0
  void *v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r8
  _DWORD *i; // r4
  int v45; // r0
  size_t *v46; // r3
  int v47; // r2
  int v48; // r1
  size_t v49; // r1
  _DWORD *v50; // r4
  int v51; // r5
  int v52; // r1
  void *v53; // r2
  size_t v54; // r2
  int v55; // r1
  void **v56; // r2
  int v57; // r4
  char *j; // r5
  int v59; // r2
  int v60; // r1
  int v62; // [sp+10h] [bp-2Ch]
  int v63; // [sp+14h] [bp-28h]
  int v64; // [sp+18h] [bp-24h]
  char *v65; // [sp+18h] [bp-24h]
  int v66; // [sp+1Ch] [bp-20h]
  char v67; // [sp+20h] [bp-1Ch]
  void *v68; // [sp+20h] [bp-1Ch]
  int v69; // [sp+24h] [bp-18h]
  size_t **v70; // [sp+28h] [bp-14h] BYREF
  size_t *v71; // [sp+2Ch] [bp-10h] BYREF
  size_t *v72; // [sp+30h] [bp-Ch] BYREF
  void *dest; // [sp+34h] [bp-8h] BYREF

  v5 = a1;
  v6 = *(_DWORD *)a3;
  v7 = a4;
  v8 = a3;
  if ( (*(_DWORD *)a3 & 0x1000) != 0 )
  {
    v70 = a1;
    v5 = (size_t **)&v70;
  }
  if ( (v6 & 0x18) != 0 )
  {
    if ( a4 != -1 )
      return -1;
    v7 = *(_DWORD *)(a3 + 4);
    a3 = v6 & 0xC0;
    v62 = a3;
  }
  else
  {
    if ( a4 == -1 )
      v62 = v6 & 0x18;
    else
      a3 = a5 & 0xC0;
    if ( a4 != -1 )
      v62 = a3;
  }
  v9 = v6 << 20;
  v10 = a5 & 0xFFFFFF3F;
  if ( (v6 & 0x800) != 0 )
  {
    if ( (a5 & 0x800) != 0 )
      v11 = 2;
    else
      v11 = 1;
    v63 = v11;
  }
  else
  {
    v63 = 1;
  }
  v12 = (size_t *)(v6 & 6);
  if ( (v6 & 6) == 0 )
  {
    v32 = *(unsigned __int8 **)(v8 + 16);
    if ( (v6 & 0x10) != 0 )
    {
      v33 = sub_B0D50(v5, (_BYTE **)(v6 & 6), v32, -1, a5 & 0xFFFFFF3F);
      v34 = v33;
      if ( v33 )
      {
        v35 = sub_AE038(v63, v33, v7);
        v12 = (size_t *)v35;
        v36 = a2 == 0;
        if ( a2 )
          v36 = v35 == -1;
        if ( !v36 )
        {
          sub_ADE9C((_BYTE **)a2, v63, v34, v7, v62);
          sub_B0D50(v5, (_BYTE **)a2, *(unsigned __int8 **)(v8 + 16), -1, v10);
          if ( v63 == 2 )
            sub_AE020((_BYTE **)a2);
        }
      }
      return (int)v12;
    }
    return sub_B0D50(v5, (_BYTE **)a2, v32, v7, v62 | v10);
  }
  v12 = *v5;
  if ( !*v5 )
    return (int)v12;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 4) != 0 )
      v13 = 2;
    else
      v13 = 1;
    v66 = v13;
    if ( v7 == -1 )
    {
      v67 = 0;
      v64 = 17;
    }
    else
    {
      v14 = v62;
      if ( (v6 & 0x10) != 0 )
        v14 = 0;
      v67 = v14;
      if ( (v6 & 0x10) != 0 )
        v15 = 17;
      else
        v15 = v7;
      v64 = v15;
    }
  }
  else if ( v7 == -1 || (a3 = v6 & 0x10, (v6 & 0x10) != 0) )
  {
    a3 = 16;
    v66 = v6 & 2;
    v64 = 16;
    v67 = v6 & 2;
  }
  else
  {
    v66 = 0;
    v64 = v7;
    v67 = v62;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v21 = v17 < sub_10C010(v12, v9, a3);
    v22 = v17++;
    if ( !v21 )
      break;
    v18 = (size_t *)sub_10C01C(v12, v22);
    v19 = *(unsigned __int8 **)(v8 + 16);
    v71 = v18;
    v20 = sub_B0D50(&v71, 0, v19, -1, a5 & 0xFFFFFF3F);
    a3 = v20 + 1;
    if ( v20 != -1 )
    {
      v21 = 0x7FFFFFFF - v20 < v16;
      v16 += v20;
      if ( !v21 )
        continue;
    }
    return -1;
  }
  v23 = a5 & 0xFFFFFF3F;
  v24 = sub_AE038(v63, v16, v64);
  v25 = (size_t *)v24;
  if ( v24 == -1 )
    return -1;
  v69 = v6 & 0x10;
  if ( (v6 & 0x10) == 0 )
  {
    if ( !a2 )
      return (int)v25;
LABEL_37:
    sub_ADE9C((_BYTE **)a2, v63, v16, v64, v67);
    v28 = *(unsigned __int8 **)(v8 + 16);
    dest = 0;
    if ( v66 && sub_10C010(v12, v26, v27) > 1 )
    {
      v39 = sub_10C010(v12, v26, v27);
      v65 = (char *)CRYPTO_malloc(12 * v39, "crypto/asn1/tasn_enc.c", 400);
      if ( v65 )
      {
        v40 = (void *)CRYPTO_malloc(v16, "crypto/asn1/tasn_enc.c", 403);
        v68 = v40;
        if ( v40 )
        {
          v43 = 0;
          dest = v40;
          for ( i = v65 + 52; ; *(i - 14) = v46 )
          {
            __pld(i);
            v21 = v43 < sub_10C010(v12, v41, v42);
            v48 = v43++;
            if ( !v21 )
              break;
            v72 = (size_t *)sub_10C01C(v12, v48);
            *(i - 13) = dest;
            i += 3;
            v45 = sub_B0D50(&v72, (_BYTE **)&dest, v28, -1, v23);
            v46 = v72;
            *(i - 15) = v45;
          }
          v49 = sub_10C010(v12, v48, v47);
          v50 = v65 + 76;
          v51 = 0;
          qsort(v65, v49, 0xCu, (__compar_fn_t)sub_B0A4C);
          for ( dest = *a2; ; dest = (char *)dest + *(v50 - 21) )
          {
            __pld(v50);
            v21 = v51++ < sub_10C010(v12, v52, v53);
            if ( !v21 )
              break;
            v54 = *(v50 - 18);
            v50 += 3;
            memcpy(dest, (const void *)*(v50 - 22), v54);
            v53 = dest;
          }
          v56 = a2;
          *a2 = dest;
          if ( v66 == 2 )
          {
            v57 = 0;
            for ( j = v65 + 92; ; j += 12 )
            {
              __pld(j);
              v21 = v57 < sub_10C010(v12, v55, v56);
              v60 = v57++;
              if ( !v21 )
                break;
              v59 = *((_DWORD *)j - 21);
              sub_10C040(v12, v60, v59);
            }
          }
          CRYPTO_free(v65, "crypto/asn1/tasn_enc.c", 442);
          CRYPTO_free(v68, "crypto/asn1/tasn_enc.c", 443);
        }
        else
        {
          CRYPTO_free(v65, "crypto/asn1/tasn_enc.c", 405);
        }
      }
    }
    else
    {
      v29 = 0;
      while ( 1 )
      {
        v21 = v29 < sub_10C010(v12, v26, v27);
        v30 = v29++;
        if ( !v21 )
          break;
        v72 = (size_t *)sub_10C01C(v12, v30);
        sub_B0D50(&v72, (_BYTE **)a2, v28, -1, v23);
      }
    }
    if ( v63 == 2 )
    {
      sub_AE020((_BYTE **)a2);
      if ( v69 )
      {
        v12 = v25;
        sub_AE020((_BYTE **)a2);
        return (int)v12;
      }
    }
    return (int)v25;
  }
  result = sub_AE038(v63, v24, v7);
  v37 = result == -1;
  if ( result != -1 )
    v37 = a2 == 0;
  if ( !v37 )
  {
    v38 = (int)v25;
    v25 = (size_t *)result;
    sub_ADE9C((_BYTE **)a2, v63, v38, v7, v62);
    goto LABEL_37;
  }
  return result;
}
