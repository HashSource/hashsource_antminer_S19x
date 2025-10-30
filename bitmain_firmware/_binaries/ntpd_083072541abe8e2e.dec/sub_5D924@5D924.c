Elf32_Dyn **__fastcall sub_5D924(Elf32_Dyn **result)
{
  Elf32_Dyn *v1; // r1
  __int32 d_tag; // r5
  int v3; // r9
  int v4; // r3
  int *v5; // r11
  int v6; // r4
  int v7; // lr
  int *v8; // r6
  int v9; // t1
  int v10; // r1
  int v11; // r2
  bool v12; // zf
  int v13; // r2
  int v14; // r8
  _DWORD *v15; // r6
  int v16; // r12
  int v17; // r2
  int v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r7
  _BYTE *v22; // r0
  int v23; // r2
  int v24; // r2
  int v25; // r1
  __int32 v26; // r8
  int v27; // r7
  unsigned int v28; // r4
  const char *v29; // r6
  size_t v30; // r0
  int v31; // t1
  __int32 v32; // r2
  int v33; // r12
  __int32 v34; // r10
  const char *v35; // r7
  int v36; // r8
  unsigned int v37; // r6
  size_t v38; // r0
  int v39; // t1
  int v40; // r3
  int v41; // r9
  int v42; // r7
  unsigned int v43; // r3
  __int32 v44; // r10
  int v45; // r12
  int v46; // r0
  int v47; // r1
  int v48; // lr
  __int32 v49; // r2
  int v50; // r1
  unsigned int v51; // r0
  int v52; // r1
  int v53; // r2
  bool v54; // cf
  int v55; // r2
  int v56; // lr
  int v57; // r4
  int v58; // lr
  _BYTE *v59; // r3
  char v60; // t1
  char v61; // r2
  unsigned int v62; // r3
  int v63; // r8
  int v64; // r2
  int i; // r1
  int v66; // t1
  char v67; // r3
  char *v68; // r2
  int v69; // r2
  int v70; // r2
  int v71; // [sp+14h] [bp-98h]
  Elf32_Dyn *v72; // [sp+28h] [bp-84h]
  Elf32_Dyn **v73; // [sp+2Ch] [bp-80h]
  int v74; // [sp+34h] [bp-78h]
  int v75; // [sp+38h] [bp-74h]
  char s[12]; // [sp+48h] [bp-64h] BYREF
  char v77[80]; // [sp+54h] [bp-58h] BYREF

  v1 = result[21];
  d_tag = v1->d_tag;
  v73 = result;
  v72 = v1;
  v3 = *(_DWORD *)(v1->d_tag + 1112);
  v4 = *(_DWORD *)(v1->d_tag + 920);
  if ( v3 <= 8 )
  {
    *(_DWORD *)(d_tag + 920) = v4 | 1;
    return result;
  }
  v5 = (int *)(d_tag + 1064);
  v6 = 0;
  v7 = 0;
  v8 = (int *)(d_tag + 1064);
  *(_DWORD *)(d_tag + 1120) = 0;
  do
  {
    v9 = *v8++;
    v10 = 8;
    result = 0;
    v11 = v9 ^ v8[4];
    do
    {
      v12 = (v11 & 1) == 0;
      v11 >>= 1;
      if ( v12 )
        result = (Elf32_Dyn **)((char *)result + 1);
      else
        result = (Elf32_Dyn **)((char *)result - 1);
      --v10;
    }
    while ( v10 );
    ++v6;
    v7 += (int)result;
    *(_DWORD *)(d_tag + 1120) = v7;
  }
  while ( v6 != 5 && v6 != v3 - 5 );
  if ( v7 > 27 )
  {
    v13 = *(_DWORD *)(d_tag + 1076);
    v14 = 0;
    v15 = (_DWORD *)(d_tag + 1064);
    v16 = -1;
    *(_DWORD *)(d_tag + 1124) = 0;
    v17 = v13 & 0xF;
    v74 = 0;
    while ( 1 )
    {
      v18 = v17 ^ 0x63;
      v19 = 8;
      v20 = 0;
      do
      {
        v12 = (v18 & 1) == 0;
        v18 >>= 1;
        if ( v12 )
          ++v20;
        else
          --v20;
        --v19;
      }
      while ( v19 );
      v21 = 0;
      if ( v3 > v16 + 9 )
        v6 = v15[8];
      v22 = v15;
      v23 = 16 * v15[4];
      if ( v3 > v16 + 9 )
        v6 &= 0xFu;
      v23 = (unsigned __int8)v23;
      if ( v3 > v16 + 9 )
        v23 = (unsigned __int8)v23 | v6;
      v6 = 8;
      v24 = v23 ^ 0x63;
      do
      {
        v12 = (v24 & 1) == 0;
        v24 >>= 1;
        if ( v12 )
          ++v21;
        else
          --v21;
        --v6;
      }
      while ( v6 );
      v25 = v20 + v21;
      if ( v25 > v14 )
        v74 = v16;
      ++v16;
      if ( v25 > v14 )
      {
        v14 = v25;
        *(_DWORD *)(d_tag + 1124) = v25;
      }
      if ( v16 == 2 )
        break;
      ++v15;
      v17 = (unsigned __int8)(16 * *v22) | v15[3] & 0xF;
    }
    v32 = d_tag + 4 * v74;
    v33 = (unsigned __int8)*(_DWORD *)(v32 + 1080) >> 4;
    if ( (unsigned int)(v33 - 2) <= 7 && v3 > v74 + 9 )
    {
      v69 = (unsigned __int8)*(_DWORD *)(v32 + 1100) >> 4;
      if ( v33 != v69 )
        v69 = 0;
      v75 = v69;
    }
    else
    {
      v75 = 0;
    }
    v71 = v14;
    v34 = d_tag + 1060;
    v35 = v77;
    v36 = 0;
    v37 = 80;
    sub_6C054(v77, 80, "chuA %04x %4.0f %2d %2d %2d %2d %1d ", v4, *(double *)(d_tag + 1136), v3, v7, v74, v71, v75);
    do
    {
      v38 = strlen(v35);
      if ( v38 + 1 > v37 )
      {
        sub_64E00(3, "chu_a() fatal out buffer");
        exit(1);
      }
      v37 -= v38;
      v35 += v38;
      ++v36;
      v39 = *(_DWORD *)(v34 + 4);
      v34 += 4;
      sub_6C054(v35, v37, "%02x", v39);
    }
    while ( v3 != v36 );
    if ( (v72[96].d_tag & 8) != 0 )
      sub_41F44((int)(v73 + 4), v77);
    v40 = *(_DWORD *)(d_tag + 920);
    if ( *(int *)(d_tag + 1124) > 7 )
    {
      if ( v75 )
      {
        *(_DWORD *)(d_tag + 920) = v40 | 0x100;
        v41 = v75 + 30;
        v72[25].d_un.d_val = v75 + 30;
        *(_DWORD *)(d_tag + 912) = v75 + 30;
        if ( v74 == -1 )
        {
          v41 = *(_DWORD *)(d_tag + 904);
          v42 = 0;
          v43 = *(_DWORD *)(d_tag + 908);
        }
        else
        {
          v42 = v74;
          v43 = 0;
          if ( v74 )
            v42 = 1;
        }
        v44 = d_tag + 8 * v42;
        do
        {
          if ( v42 - 9 > v74 )
            break;
          v45 = *(_DWORD *)(d_tag + 1108);
          v46 = *(_DWORD *)(v44 + 320);
          v47 = *(_DWORD *)(v44 + 324);
          v48 = 0;
          ++v42;
          v44 += 8;
          v49 = d_tag + 8 * v45;
          *(_DWORD *)(v49 + 408) = v46;
          *(_DWORD *)(v49 + 412) = v47;
          v50 = v46;
          v51 = *(_DWORD *)(v49 + 412);
          v52 = v50 - v41;
          if ( v51 < v43 )
            --v52;
          *(_DWORD *)(v49 + 412) = v51 - v43;
          *(_DWORD *)(v49 + 408) = v52;
          v53 = *(_DWORD *)(d_tag + 908);
          v54 = __CFADD__(v53, v43);
          v43 += v53;
          v55 = *(_DWORD *)(d_tag + 904);
          if ( v54 )
            v48 = 1;
          if ( v45 <= 58 )
            *(_DWORD *)(d_tag + 1108) = v45 + 1;
          v41 += v48 + v55;
        }
        while ( v36 > v42 );
        v56 = *(_DWORD *)(d_tag + 1116);
        v57 = 0;
        if ( v56 < v75 )
        {
          v58 = v75 - v56;
          do
          {
            v59 = (_BYTE *)(d_tag + 159);
            do
            {
              v60 = *--v59;
              v61 = v59[160];
              v59[1] = v60;
              v59[161] = v61;
            }
            while ( v59 != (_BYTE *)(d_tag + 144) );
            ++v57;
            *(_BYTE *)(d_tag + 304) = 0;
            *(_BYTE *)(d_tag + 144) = 0;
          }
          while ( v58 != v57 );
          *(_DWORD *)(d_tag + 1116) = v75;
        }
      }
      else
      {
        *(_DWORD *)(d_tag + 920) = v40 | 0x20;
      }
      v62 = -2 * v74;
      v63 = -2 * v74 + 2 * v36;
      do
      {
        if ( v62 <= 0x12 )
        {
          v64 = (unsigned __int8)*v5 >> 4;
          ++*(_BYTE *)(d_tag + 16 * v62 + (*v5 & 0xF));
          ++*(_BYTE *)(d_tag + 16 * (v62 + 1) + v64);
        }
        v62 += 2;
        ++v5;
      }
      while ( v62 != v63 );
      ++*(_DWORD *)(d_tag + 1128);
    }
    else
    {
      *(_DWORD *)(d_tag + 920) = v40 | 0x10;
    }
  }
  else
  {
    if ( v7 >= -27 )
    {
      *(_DWORD *)(d_tag + 920) = v4 | 2;
      return result;
    }
    v26 = d_tag + 1060;
    v27 = 0;
    v28 = 80;
    v29 = v77;
    sub_6C054(v77, 80, "chuB %04x %4.0f %2d %2d ", v4, *(double *)(d_tag + 1136), v3, -v7);
    do
    {
      v30 = strlen(v29);
      if ( v30 + 1 > v28 )
      {
        sub_64E00(3, "chu_b() fatal out buffer");
        exit(1);
      }
      v28 -= v30;
      v29 += v30;
      ++v27;
      v31 = *(_DWORD *)(v26 + 4);
      v26 += 4;
      sub_6C054(v29, v28, "%02x", v31);
    }
    while ( v3 != v27 );
    if ( (v72[96].d_tag & 8) != 0 )
      sub_41F44((int)(v73 + 4), v77);
    if ( *(int *)(d_tag + 1120) < -39 )
    {
      for ( i = 0; i != 10; i += 2 )
      {
        v66 = *v5++;
        v67 = a0123456789abcd[(unsigned __int8)v66 >> 4];
        s[i] = a0123456789abcd[v66 & 0xF];
        v68 = &s[i];
        v68[1] = v67;
      }
      if ( sscanf(s, "%1x%1d%4d%2d%2x", d_tag + 1148, d_tag + 1152, &v72[23].d_un, d_tag + 1156, d_tag + 1160) == 5 )
      {
        v70 = *(_DWORD *)(d_tag + 1148);
        *(_DWORD *)(d_tag + 920) |= 0x200u;
        if ( (v70 & 8) != 0 )
          *(_DWORD *)(d_tag + 1152) = -*(_DWORD *)(d_tag + 1152);
      }
      else
      {
        *(_DWORD *)(d_tag + 920) |= 8u;
      }
    }
    else
    {
      *(_DWORD *)(d_tag + 920) |= 4u;
    }
  }
  result = &GLOBAL_OFFSET_TABLE_;
  if ( v73[179] != (Elf32_Dyn *)current_time )
    v73[180] = (Elf32_Dyn *)(current_time + 10);
  return result;
}
