Elf32_Dyn **__fastcall sub_5E6C4(Elf32_Dyn **result)
{
  __int32 d_tag; // r4
  int v2; // r7
  __int32 v3; // r8
  __int32 v4; // r5
  int v5; // r12
  __int32 v6; // r6
  int v7; // lr
  Elf32_Dyn **v8; // t1
  int v9; // r2
  int v10; // t1
  int v11; // r1
  int v12; // r3
  bool v13; // zf
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r2
  int v17; // r0
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r1
  int v22; // r5
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r2
  int v27; // r3
  __int32 v28; // r1
  int v29; // r3
  unsigned int v30; // r6
  const char *v31; // r9
  int v32; // r10
  size_t v33; // r0
  int v34; // t1
  _DWORD *v35; // r0
  unsigned int v36; // r1
  int v37; // r7
  int v38; // r3
  int v39; // r9
  const char *v40; // r6
  unsigned int v41; // r5
  __int32 v42; // r10
  size_t v43; // r0
  int v44; // t1
  char *v45; // r2
  int v46; // t1
  char v47; // r3
  unsigned int v48; // r8
  unsigned int v49; // r2
  int v50; // r6
  __int32 v51; // r9
  int v52; // r12
  int *v53; // r3
  int v54; // r0
  int v55; // r1
  __int32 v56; // r3
  int v57; // r0
  unsigned int v58; // r10
  int v59; // r1
  int v60; // r6
  int v61; // r6
  __int32 v62; // r12
  __int32 v63; // r0
  __int32 v64; // r1
  __int32 v65; // r2
  int v66; // r3
  char v67; // t1
  char v68; // t1
  int v69; // r2
  int v70; // r1
  int v71; // r2
  Elf32_Dyn *v72; // [sp+28h] [bp-7Ch]
  Elf32_Dyn **v73; // [sp+2Ch] [bp-78h]
  int v74; // [sp+34h] [bp-70h]
  int v75; // [sp+38h] [bp-6Ch]
  char s[12]; // [sp+40h] [bp-64h] BYREF
  char v77[80]; // [sp+4Ch] [bp-58h] BYREF

  v73 = result;
  v72 = result[21];
  d_tag = v72->d_tag;
  v2 = *(_DWORD *)(v72->d_tag + 1112);
  if ( v2 <= 8 )
  {
    *(_DWORD *)(d_tag + 920) |= 1u;
  }
  else
  {
    v3 = d_tag + 1060;
    v4 = d_tag + 1080;
    v5 = 0;
    v6 = d_tag + 1060;
    v7 = 0;
    *(_DWORD *)(d_tag + 1120) = 0;
    do
    {
      v8 = *(Elf32_Dyn ***)(v4 + 4);
      v4 += 4;
      result = v8;
      v9 = 8;
      v10 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      v11 = 0;
      v12 = v10 ^ (unsigned int)result;
      do
      {
        v13 = (v12 & 1) == 0;
        v12 >>= 1;
        if ( v13 )
          ++v11;
        else
          --v11;
        --v9;
      }
      while ( v9 );
      ++v7;
      v5 += v11;
      *(_DWORD *)(d_tag + 1120) = v5;
    }
    while ( v7 != 5 && v7 != v2 - 5 );
    if ( v5 > 27 )
    {
      v14 = 0;
      v15 = (_DWORD *)d_tag;
      v16 = *(_DWORD *)(d_tag + 1076) & 0xF;
      v17 = -1;
      *(_DWORD *)(d_tag + 1124) = 0;
      v74 = 0;
      while ( 1 )
      {
        v18 = v16 ^ 0x63;
        v19 = 8;
        v20 = 0;
        do
        {
          v13 = (v18 & 1) == 0;
          v18 >>= 1;
          if ( v13 )
            ++v20;
          else
            --v20;
          --v19;
        }
        while ( v19 );
        v21 = v17 + 9;
        v22 = 8;
        if ( v2 > v17 + 9 )
          v21 = v15[274];
        v23 = 16 * v15[270];
        if ( v2 > v17 + 9 )
          v21 &= 0xFu;
        v23 = (unsigned __int8)v23;
        if ( v2 > v17 + 9 )
          v23 = (unsigned __int8)v23 | v21;
        v24 = 0;
        v25 = v23 ^ 0x63;
        do
        {
          v13 = (v25 & 1) == 0;
          v25 >>= 1;
          if ( v13 )
            ++v24;
          else
            --v24;
          --v22;
        }
        while ( v22 );
        v26 = v24 + v20;
        if ( v26 > v14 )
          v74 = v17;
        ++v17;
        if ( v26 > v14 )
        {
          *(_DWORD *)(d_tag + 1124) = v26;
          v14 = v26;
        }
        if ( v17 == 2 )
          break;
        v27 = v15[266];
        ++v15;
        v16 = (unsigned __int8)(16 * v27) | v15[269] & 0xF;
      }
      v28 = d_tag + 4 * v74;
      v29 = (unsigned __int8)*(_DWORD *)(v28 + 1080) >> 4;
      if ( (unsigned int)(v29 - 2) <= 7 && v2 > v74 + 9 )
      {
        v69 = (unsigned __int8)*(_DWORD *)(v28 + 1100) >> 4;
        v70 = v69;
        if ( v29 != v69 )
          v70 = 0;
        v75 = v70;
      }
      else
      {
        v75 = 0;
      }
      v30 = 80;
      v31 = v77;
      sub_6D00C(
        v77,
        80,
        "chuA %04x %4.0f %2d %2d %2d %2d %1d ",
        *(_DWORD *)(d_tag + 920),
        *(double *)(d_tag + 1136),
        v2,
        v5,
        v74,
        v14,
        v75);
      v32 = 0;
      do
      {
        v33 = strlen(v31);
        if ( v33 + 1 > v30 )
        {
          sub_65D40(3, "chu_a() fatal out buffer");
          exit(1);
        }
        v30 -= v33;
        v31 += v33;
        ++v32;
        v34 = *(_DWORD *)(v3 + 4);
        v3 += 4;
        sub_6D00C(v31, v30, "%02x", v34);
      }
      while ( v32 != v2 );
      if ( (v72[96].d_tag & 8) != 0 )
        sub_42D0C((int)(v73 + 4), v77);
      if ( *(int *)(d_tag + 1124) <= 7 )
      {
        *(_DWORD *)(d_tag + 920) |= 0x10u;
      }
      else
      {
        if ( v75 )
        {
          v48 = v75 + 30;
          *(_DWORD *)(d_tag + 920) |= 0x100u;
          v72[25].d_un.d_val = v75 + 30;
          *(_DWORD *)(d_tag + 912) = v75 + 30;
          if ( v74 == -1 )
          {
            v48 = *(_DWORD *)(d_tag + 904);
            v50 = 0;
            v49 = *(_DWORD *)(d_tag + 908);
          }
          else
          {
            v49 = 0;
            v50 = v74;
            if ( v74 )
              v50 = 1;
          }
          v51 = d_tag + 8 * v50;
          do
          {
            if ( v50 - 9 > v74 )
              break;
            v52 = *(_DWORD *)(d_tag + 1108);
            v53 = (int *)(v51 + 320);
            ++v50;
            v51 += 8;
            v54 = *v53;
            v55 = v53[1];
            v56 = d_tag + 8 * v52;
            *(_DWORD *)(v56 + 408) = v54;
            *(_DWORD *)(v56 + 412) = v55;
            v57 = v54 - v48;
            v58 = *(_DWORD *)(v56 + 412);
            *(_DWORD *)(v56 + 412) = v58 - v49;
            if ( v58 < v49 )
              v59 = v57 - 1;
            else
              v59 = v57;
            *(_DWORD *)(v56 + 408) = v59;
            v48 = (__PAIR64__(v48, v49) + __PAIR64__(*(_DWORD *)(d_tag + 904), *(_DWORD *)(d_tag + 908))) >> 32;
            v49 += *(_DWORD *)(d_tag + 908);
            if ( v52 <= 58 )
              *(_DWORD *)(d_tag + 1108) = v52 + 1;
          }
          while ( v2 > v50 );
          v60 = *(_DWORD *)(d_tag + 1116);
          if ( v75 > v60 )
          {
            v61 = v75 - v60;
            do
            {
              v62 = d_tag + 159;
              v63 = d_tag + 160;
              v64 = d_tag + 319;
              v65 = d_tag + 320;
              v66 = 15;
              do
              {
                v67 = *(_BYTE *)--v62;
                --v66;
                *(_BYTE *)--v63 = v67;
                v68 = *(_BYTE *)--v64;
                *(_BYTE *)--v65 = v68;
              }
              while ( v66 );
              ++v22;
              *(_BYTE *)(d_tag + 304) = 0;
              *(_BYTE *)(d_tag + 144) = 0;
            }
            while ( v22 != v61 );
            *(_DWORD *)(d_tag + 1116) = v75;
          }
        }
        else
        {
          *(_DWORD *)(d_tag + 920) |= 0x20u;
        }
        v35 = (_DWORD *)(d_tag + 1064);
        v36 = -2 * v74;
        v37 = -2 * v74 + 2 * v2;
        do
        {
          if ( v36 <= 0x12 )
          {
            v38 = ((unsigned __int8)*v35 >> 4) + 16 * (v36 + 1);
            ++*(_BYTE *)(d_tag + (*v35 & 0xF) + 16 * v36);
            ++*(_BYTE *)(d_tag + v38);
          }
          v36 += 2;
          ++v35;
        }
        while ( v36 != v37 );
        ++*(_DWORD *)(d_tag + 1128);
      }
    }
    else
    {
      if ( v5 >= -27 )
      {
        *(_DWORD *)(d_tag + 920) |= 2u;
        return result;
      }
      v39 = 0;
      v40 = v77;
      v41 = 80;
      sub_6D00C(v77, 80, "chuB %04x %4.0f %2d %2d ", *(_DWORD *)(d_tag + 920), *(double *)(d_tag + 1136), v2, -v5);
      v42 = d_tag + 1060;
      do
      {
        v43 = strlen(v40);
        if ( v43 + 1 > v41 )
        {
          sub_65D40(3, "chu_b() fatal out buffer");
          exit(1);
        }
        v41 -= v43;
        v40 += v43;
        ++v39;
        v44 = *(_DWORD *)(v42 + 4);
        v42 += 4;
        sub_6D00C(v40, v41, "%02x", v44);
      }
      while ( v39 != v2 );
      if ( (v72[96].d_tag & 8) != 0 )
        sub_42D0C((int)(v73 + 4), v77);
      if ( *(int *)(d_tag + 1120) < -39 )
      {
        v45 = s;
        do
        {
          v46 = *(_DWORD *)(v3 + 4);
          v3 += 4;
          v45 += 2;
          v47 = a0123456789abcd_0[(unsigned __int8)v46 >> 4];
          *(v45 - 2) = a0123456789abcd_0[v46 & 0xF];
          *(v45 - 1) = v47;
        }
        while ( v3 != d_tag + 1080 );
        if ( sscanf(s, "%1x%1d%4d%2d%2x", d_tag + 1148, d_tag + 1152, &v72[23].d_un, d_tag + 1156, d_tag + 1160) == 5 )
        {
          v71 = *(_DWORD *)(d_tag + 1148);
          *(_DWORD *)(d_tag + 920) |= 0x200u;
          if ( (v71 & 8) != 0 )
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
  }
  return result;
}
