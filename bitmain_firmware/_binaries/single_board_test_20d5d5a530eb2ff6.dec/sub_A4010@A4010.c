int __fastcall sub_A4010(_DWORD *a1)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r5
  void *v3; // r10
  int v4; // r4
  int v5; // r2
  unsigned int v6; // r4
  unsigned int v7; // r3
  unsigned __int16 *v8; // r2
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r3
  bool v12; // zf
  int v13; // r8
  int v14; // r3
  int v15; // r5
  int v16; // r7
  unsigned __int16 *v17; // r10
  char **v18; // r2
  int v19; // r11
  int v20; // lr
  unsigned __int16 *v21; // r1
  int v22; // r2
  int v23; // t1
  int v24; // r4
  unsigned int v25; // r0
  int v26; // r3
  int v27; // r4
  int *v28; // r2
  int v29; // r3
  unsigned int v30; // r5
  int v31; // r2
  bool v32; // cc
  unsigned __int16 *v34; // r2
  int v35; // r1
  int v36; // r0
  int v37; // r11
  unsigned __int16 *v38; // r9
  _DWORD *v39; // r10
  unsigned __int16 *v40; // r6
  char **v41; // r4
  int v42; // lr
  unsigned __int16 *v43; // r1
  int v44; // r2
  int v45; // t1
  int v46; // [sp+Ch] [bp-20h]
  int v47; // [sp+Ch] [bp-20h]
  unsigned __int16 *v48; // [sp+10h] [bp-1Ch]
  void *v49; // [sp+14h] [bp-18h]
  int v50; // [sp+14h] [bp-18h]
  unsigned __int16 *v51; // [sp+18h] [bp-14h]
  void *v52; // [sp+18h] [bp-14h]
  char ***v53; // [sp+1Ch] [bp-10h]
  unsigned __int16 *v54; // [sp+24h] [bp-8h] BYREF

  v1 = a1;
  v2 = (_DWORD *)a1[257];
  v3 = (void *)(a1[31] + 636);
  v4 = v2[4];
  CRYPTO_free(a1[994], "ssl/t1_lib.c", 1759);
  v5 = v1[7];
  v6 = v4 & 0x30000;
  v1[994] = 0;
  v1[995] = 0;
  v7 = __clz(v6);
  if ( v5 )
  {
    v9 = v7 >> 5;
  }
  else
  {
    v8 = (unsigned __int16 *)v2[54];
    v9 = v7 >> 5;
    if ( v8 )
      v10 = v9 & 1;
    else
      v10 = 0;
    if ( v10 )
    {
      v11 = v1[315];
      v54 = (unsigned __int16 *)v2[54];
      v48 = v8;
      v12 = (v11 & 0x400000) == 0;
      v13 = v2[55];
      v14 = v1[31];
      if ( !v12 )
        goto LABEL_7;
      goto LABEL_46;
    }
  }
  v34 = (unsigned __int16 *)v2[52];
  if ( v34 )
    v35 = v9 & 1;
  else
    v35 = 0;
  if ( v35 )
  {
    v54 = (unsigned __int16 *)v2[52];
    v48 = v34;
    v13 = v2[53];
  }
  else
  {
    v13 = sub_A2E74((int)v1, 0, &v54);
    v48 = v54;
  }
  v14 = v1[31];
  if ( (v1[315] & 0x400000) != 0 )
    goto LABEL_7;
LABEL_46:
  if ( !v6 )
  {
    v15 = v13;
    v13 = *(_DWORD *)(v14 + 624);
    v51 = v48;
    v48 = *(unsigned __int16 **)(v14 + 616);
    goto LABEL_8;
  }
LABEL_7:
  v15 = *(_DWORD *)(v14 + 624);
  v51 = *(unsigned __int16 **)(v14 + 616);
LABEL_8:
  if ( !v13 )
  {
LABEL_24:
    v24 = 0;
    v47 = 0;
    goto LABEL_25;
  }
  v16 = 0;
  v49 = v3;
  v17 = v48;
  v46 = 0;
  do
  {
    while ( 1 )
    {
      v18 = &off_202A94;
      do
      {
        if ( *((unsigned __int16 *)v18 + 2) == *v17 )
        {
          v19 = (int)v18;
          goto LABEL_14;
        }
        v18 += 8;
      }
      while ( v18 != &off_202DD4 );
      v19 = 0;
LABEL_14:
      if ( !sub_A2D04(v19, 0) || !sub_A34AC(v1, (int)&loc_5000C, v19) || !v15 )
        goto LABEL_22;
      v20 = *v17;
      if ( *v51 == v20 )
        break;
      v21 = v51;
      v22 = 0;
      while ( v15 != ++v22 )
      {
        v23 = v21[1];
        ++v21;
        if ( v23 == v20 )
          goto LABEL_50;
      }
LABEL_22:
      ++v16;
      ++v17;
      if ( v13 == v16 )
        goto LABEL_23;
    }
LABEL_50:
    ++v16;
    ++v17;
    ++v46;
  }
  while ( v13 != v16 );
LABEL_23:
  v3 = v49;
  if ( !v46 )
    goto LABEL_24;
  v36 = CRYPTO_malloc(4 * v46, "ssl/t1_lib.c", 1784);
  v50 = v36;
  if ( !v36 )
  {
    sub_D0048(20, 631, 65, "ssl/t1_lib.c", 1785);
    return 0;
  }
  v37 = 0;
  v38 = v51;
  v52 = v3;
  v39 = v1;
  v40 = v48;
  v47 = 0;
  v53 = (char ***)v36;
  while ( 2 )
  {
    while ( 2 )
    {
      v41 = &off_202A94;
      while ( *((unsigned __int16 *)v41 + 2) != *v40 )
      {
        v41 += 8;
        if ( v41 == &off_202DD4 )
        {
          v41 = 0;
          break;
        }
      }
      if ( !sub_A2D04((int)v41, 0) || !sub_A34AC(v39, (int)&loc_5000C, (int)v41) || !v15 )
      {
LABEL_65:
        ++v37;
        ++v40;
        if ( v13 == v37 )
          goto LABEL_66;
        continue;
      }
      break;
    }
    v42 = *v40;
    if ( *v38 != v42 )
    {
      v43 = v38;
      v44 = 0;
      while ( v15 != ++v44 )
      {
        v45 = v43[1];
        ++v43;
        if ( v45 == v42 )
          goto LABEL_68;
      }
      goto LABEL_65;
    }
LABEL_68:
    ++v47;
    if ( !v53 )
      goto LABEL_65;
    ++v37;
    *v53++ = v41;
    ++v40;
    if ( v13 != v37 )
      continue;
    break;
  }
LABEL_66:
  v1 = v39;
  v24 = v50;
  v3 = v52;
LABEL_25:
  v1[994] = v24;
  v1[995] = v47;
  memset(v3, 0, 0x24u);
  v25 = v1[995];
  if ( v25 )
  {
    v26 = v24;
    v27 = 0;
    while ( 1 )
    {
      v28 = (int *)v1[1];
      v29 = *(_DWORD *)(v26 + 4 * v27);
      v30 = *(_DWORD *)(v29 + 20);
      if ( (*(_DWORD *)(v28[25] + 48) & 8) == 0 )
      {
        v31 = *v28;
        v32 = v31 <= 0x10000;
        if ( v31 != 0x10000 )
          v32 = v31 <= 771;
        if ( !v32 && *(_DWORD *)(v29 + 16) == 6 )
          goto LABEL_27;
      }
      if ( *((_DWORD *)v3 + v30) )
      {
LABEL_27:
        if ( ++v27 >= v25 )
          return 1;
      }
      else
      {
        if ( !sub_875C0(v30) )
          *((_DWORD *)v3 + v30) = 258;
        v25 = v1[995];
        if ( ++v27 >= v25 )
          return 1;
      }
      v26 = v1[994];
    }
  }
  return 1;
}
