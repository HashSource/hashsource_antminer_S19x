int __fastcall sub_51584(int a1)
{
  int v1; // r5
  int *v2; // r11
  int v3; // r8
  int v4; // r3
  size_t v5; // r10
  double v6; // r0
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r1
  bool v10; // cc
  unsigned __int8 *v11; // r1
  int v12; // t1
  unsigned int v13; // lr
  bool v14; // cc
  int v15; // r3
  int v16; // r2
  bool v17; // zf
  int v18; // t1
  bool v19; // zf
  int v20; // r3
  int v21; // lr
  int v22; // r12
  int v23; // t1
  unsigned int v24; // r1
  int v25; // r2
  int v26; // r9
  int v27; // r3
  int v28; // r9
  int v29; // r9
  int v30; // r6
  size_t v31; // r4
  double v32; // d0
  char *v33; // r0
  char v34; // r0
  int v35; // r1
  char v36; // r0
  int v37; // r1
  bool v38; // zf
  int v39; // r0
  int v40; // r1
  int v41; // r9
  int v42; // r6
  int v43; // r6
  int v44; // r0
  int v45; // r9
  int v46; // r5
  int v47; // r3
  int v48; // r0
  unsigned int v49; // r1
  int v50; // r3
  const char *v51; // r0
  int v52; // r1
  unsigned __int8 *v53; // r2
  int v54; // t1
  int v55; // r0
  int v56; // r3
  int v57; // r9
  const char *v58; // r0
  int v59; // r1
  unsigned __int8 *v60; // r2
  int v61; // t1
  int v62; // r0
  int v63; // r3
  int v64; // r9
  const char *v65; // r0
  int v66; // r1
  unsigned __int8 *v67; // r2
  int v68; // t1
  int v69; // r0
  __int64 v70; // r2
  int v71; // r1
  unsigned int v72; // r0
  int v73; // r0
  int v74; // r7
  int v75; // r4
  __int16 v76; // r8
  bool v77; // cc
  int v78; // r9
  unsigned __int16 v79; // r0
  const char *v80; // r0
  const char *v81; // r0
  bool v82; // zf
  char *v84; // [sp+10h] [bp-10Ch]
  char *v85; // [sp+10h] [bp-10Ch]
  char *v86; // [sp+18h] [bp-104h]
  char *v87; // [sp+18h] [bp-104h]
  char *v88; // [sp+18h] [bp-104h]
  unsigned __int8 v89; // [sp+1Ch] [bp-100h]
  int v90; // [sp+1Ch] [bp-100h]
  __int16 v91; // [sp+3Ch] [bp-E0h]
  _DWORD v92[2]; // [sp+40h] [bp-DCh] BYREF
  _DWORD v93[3]; // [sp+48h] [bp-D4h] BYREF
  int v94; // [sp+54h] [bp-C8h] BYREF
  unsigned int v95; // [sp+58h] [bp-C4h]
  int v96; // [sp+5Ch] [bp-C0h]
  int v97; // [sp+60h] [bp-BCh] BYREF
  unsigned int v98; // [sp+64h] [bp-B8h]
  int v99; // [sp+68h] [bp-B4h] BYREF
  _DWORD v100[2]; // [sp+6Ch] [bp-B0h] BYREF
  __int16 v101; // [sp+74h] [bp-A8h]
  unsigned int v102; // [sp+78h] [bp-A4h] BYREF
  char *v103; // [sp+7Ch] [bp-A0h]
  bool *v104; // [sp+84h] [bp-98h] BYREF
  unsigned __int8 *v105; // [sp+88h] [bp-94h]
  int v106; // [sp+8Ch] [bp-90h]
  int v107; // [sp+90h] [bp-8Ch]
  bool v108; // [sp+94h] [bp-88h] BYREF
  unsigned __int8 v109; // [sp+95h] [bp-87h] BYREF
  unsigned __int8 v110; // [sp+96h] [bp-86h] BYREF
  char s1[125]; // [sp+97h] [bp-85h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v3 = *v2;
  v100[0] = 0;
  v100[1] = 0;
  v101 = 0;
  v97 = 0;
  v96 = 0;
  v98 = 0;
  v99 = 0;
  LODWORD(v6) = sub_39EE4(a1, &v108, 128, &v94);
  v4 = LODWORD(v6) & ~(SLODWORD(v6) >> 31);
  v5 = LODWORD(v6);
  v104 = &v108;
  *(&v108 + v4) = 0;
  LODWORD(v6) = &v108 + v4;
  v105 = (unsigned __int8 *)&v108;
  v107 = 0;
  v106 = v4;
  if ( !v108 )
    return LODWORD(v6);
  if ( v108 != 36 )
    goto LABEL_3;
  v7 = v109;
  v106 = v4 - 1;
  v104 = (bool *)&v109;
  v105 = &v109;
  if ( (unsigned int)v109 - 65 > 0x19 )
    goto LABEL_3;
  v8 = v110;
  v9 = v110 - 48;
  v10 = v9 > 9;
  if ( v9 > 9 )
    v10 = (unsigned int)v110 - 65 > 0x19;
  v11 = &v110;
  if ( !v10 )
  {
    do
    {
      v7 ^= v8;
      v12 = *++v11;
      v8 = v12;
      v13 = v12 - 65;
      v14 = (unsigned int)(v12 - 48) > 9;
      if ( (unsigned int)(v12 - 48) > 9 )
        v14 = v13 > 0x19;
    }
    while ( !v14 );
  }
  if ( v8 != 44 || v11 - &v109 <= 4 )
    goto LABEL_3;
  v15 = v11[1];
  v16 = v7 ^ 0x2C;
  HIDWORD(v6) = v11 + 1;
  v17 = v15 == 42;
  if ( v15 != 42 )
    v17 = v15 == 0;
  if ( !v17 )
  {
    do
    {
      v16 ^= v15;
      v18 = *(unsigned __int8 *)++HIDWORD(v6);
      v15 = v18;
      v19 = v18 == 0;
      if ( v18 )
        v19 = v15 == 42;
    }
    while ( !v19 );
  }
  if ( !v15 )
  {
    v89 = 1;
    goto LABEL_34;
  }
  if ( v15 != 42 || LODWORD(v6) - 3 != HIDWORD(v6) || HIDWORD(v6) - (int)&v109 > 79 )
    goto LABEL_3;
  v20 = *(unsigned __int8 *)(LODWORD(v6) - 2);
  v21 = LODWORD(v6) - 2;
  if ( *(_BYTE *)(LODWORD(v6) - 2) )
  {
    v22 = 0;
    while ( 1 )
    {
      v24 = (unsigned __int8)(v20 - 48);
      if ( v24 <= 9 )
      {
        v22 = (unsigned __int8)(v24 + 16 * v22);
      }
      else
      {
        if ( (unsigned int)(v20 - 65) > 5 )
          goto LABEL_178;
        v22 = (unsigned __int8)(v20 - 55 + 16 * v22);
      }
      v23 = *(unsigned __int8 *)++v21;
      v20 = v23;
      if ( !v23 )
        goto LABEL_178;
    }
  }
  v22 = *(unsigned __int8 *)(LODWORD(v6) - 2);
LABEL_178:
  v82 = v22 == v16;
  if ( v22 == v16 )
    v82 = LODWORD(v6) == v21;
  if ( !v82 )
  {
LABEL_3:
    LODWORD(v6) = sub_394A0((__int16 *)v1, 2);
    return LODWORD(v6);
  }
  v89 = 2;
LABEL_34:
  ++*(_DWORD *)(v3 + 16);
  LODWORD(v6) = strncmp(s1, "RMC,", 4u);
  v26 = LODWORD(v6);
  if ( !LODWORD(v6) )
    goto LABEL_57;
  LODWORD(v6) = strncmp(s1, "GGA,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 1;
    v86 = (_BYTE *)(&dword_0 + 1);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "GLL,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 2;
    v86 = (_BYTE *)(&dword_0 + 2);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "ZDA,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 3;
    v86 = (_BYTE *)(&dword_0 + 3);
    goto LABEL_42;
  }
  LODWORD(v6) = strncmp(s1, "ZDG,", 4u);
  if ( !LODWORD(v6) )
  {
    v26 = 4;
LABEL_57:
    v27 = *(_DWORD *)(v1 + 76);
    v86 = (char *)v26;
    if ( (v27 & 0x80) == 0 )
      goto LABEL_43;
LABEL_58:
    LODWORD(v6) = -32;
    v32 = (double)v95;
    ldexp(v6, v25);
    v33 = strchr((const char *)&v108, 44);
    LODWORD(v6) = sub_42050(v1 + 16, (int)"delay %0.6f %.*s", v32, v33 - (char *)&v108, (const char *)&v108);
    v27 = *(_DWORD *)(v1 + 76);
    goto LABEL_43;
  }
  LODWORD(v6) = strncmp((const char *)&v109, "PGRMF,", 6u);
  if ( LODWORD(v6) )
    return LODWORD(v6);
  v26 = 5;
  v86 = &byte_5;
LABEL_42:
  v27 = *(_DWORD *)(v1 + 76);
  if ( (v27 & 0x80) != 0 )
    goto LABEL_58;
LABEL_43:
  if ( (v27 & 0xFF0F) != 0 && (v27 & dword_99210[v26 + 6]) == 0 )
    goto LABEL_45;
  v28 = v3 + v26;
  if ( *(unsigned __int8 *)(v28 + 40) > (unsigned int)v89 )
  {
    LODWORD(v6) = sub_394A0((__int16 *)v1, 2);
    ++*(_DWORD *)(v3 + 28);
    return LODWORD(v6);
  }
  *(_BYTE *)(v28 + 40) = v89;
  if ( *(_BYTE *)v3 )
  {
    if ( v86 != &byte_4 )
    {
LABEL_45:
      ++*(_DWORD *)(v3 + 32);
      return LODWORD(v6);
    }
LABEL_49:
    v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 1);
    v29 = sub_50DCC((int)v100, (int)&v104, 2, 1);
    *((_BYTE *)v2 + 40) = sub_509C4((unsigned __int8 **)&v104, 4, 48, 1u);
    v96 = -1;
  }
  else
  {
    switch ( (unsigned int)v86 )
    {
      case 1u:
        v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 1);
        v36 = sub_509C4((unsigned __int8 **)&v104, 6, 48, 1u);
        v37 = v94;
        *((_BYTE *)v2 + 40) = v36;
        v29 = sub_50D0C((int)v100, v37);
        if ( (v2[192] & 8) != 0 )
          sub_510A0((unsigned __int8 **)&v104, 2, 4, -1);
        goto LABEL_50;
      case 2u:
        v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 5);
        v34 = sub_509C4((unsigned __int8 **)&v104, 6, 65, 0);
        v35 = v94;
        *((_BYTE *)v2 + 40) = v34;
        v29 = sub_50D0C((int)v100, v35);
        if ( (v2[192] & 8) != 0 )
          sub_510A0((unsigned __int8 **)&v104, 1, 3, -1);
        goto LABEL_50;
      case 3u:
        *((_BYTE *)v2 + 40) = 0;
        v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 1);
        v29 = sub_50DCC((int)v100, (int)&v104, 2, 1);
        goto LABEL_50;
      case 4u:
        goto LABEL_49;
      case 5u:
        v50 = v107;
        if ( v107 <= 1 )
        {
          v51 = (const char *)v105;
          if ( v107 == 1 )
            goto LABEL_116;
        }
        else
        {
          v51 = (const char *)v104;
          v50 = 0;
          v107 = 0;
          v105 = (unsigned __int8 *)v104;
        }
        v52 = *(unsigned __int8 *)v51;
        if ( *v51 )
        {
          v53 = (unsigned __int8 *)(v51 + 1);
          do
          {
            if ( v52 == 44 )
              ++v50;
            v105 = v53;
            v107 = v50;
            v51 = (const char *)v53;
            if ( v50 == 1 )
              break;
            v54 = *v53++;
            v52 = v54;
          }
          while ( v54 );
        }
LABEL_116:
        v55 = sscanf(v51, "%hu", &v99);
        v56 = v107;
        v57 = v55;
        if ( v107 <= 2 )
        {
          v58 = (const char *)v105;
          if ( v107 == 2 )
            goto LABEL_125;
        }
        else
        {
          v58 = (const char *)v104;
          v56 = 0;
          v107 = 0;
          v105 = (unsigned __int8 *)v104;
        }
        v59 = *(unsigned __int8 *)v58;
        if ( *v58 )
        {
          v60 = (unsigned __int8 *)(v58 + 1);
          do
          {
            if ( v59 == 44 )
              ++v56;
            v105 = v60;
            v107 = v56;
            v58 = (const char *)v60;
            if ( v56 == 2 )
              break;
            v61 = *v60++;
            v59 = v61;
          }
          while ( v61 );
        }
LABEL_125:
        v62 = sscanf(v58, "%lu", &v102);
        v63 = v107;
        v64 = v57 + v62;
        if ( v107 <= 5 )
        {
          v65 = (const char *)v105;
          if ( v107 == 5 )
            goto LABEL_134;
        }
        else
        {
          v65 = (const char *)v104;
          v63 = 0;
          v107 = 0;
          v105 = (unsigned __int8 *)v104;
        }
        v66 = *(unsigned __int8 *)v65;
        if ( *v65 )
        {
          v67 = (unsigned __int8 *)(v65 + 1);
          do
          {
            if ( v66 == 44 )
              ++v63;
            v105 = v67;
            v107 = v63;
            v65 = (const char *)v67;
            if ( v63 == 5 )
              break;
            v68 = *v67++;
            v66 = v68;
          }
          while ( v68 );
        }
LABEL_134:
        if ( v64 + sscanf(v65, "%hd", (char *)&v99 + 2) != 3
          || (unsigned __int16)v99 >= 0x400u
          || v102 > (unsigned int)"found."
          || (v98 = v102, !sub_50DCC((int)v100, (int)&v104, 3, 0)) )
        {
          v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 4);
          v29 = 0;
          *((_BYTE *)v2 + 40) = sub_509C4((unsigned __int8 **)&v104, 11, 48, 1u);
          goto LABEL_136;
        }
        v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 4);
        *((_BYTE *)v2 + 40) = sub_509C4((unsigned __int8 **)&v104, 11, 48, 1u);
        v69 = sub_665B0(v100);
        v70 = 1374389535LL * LOWORD(v100[0]);
        v71 = SHIWORD(v99) + v69;
        v72 = (unsigned int)v71 >> 31;
        if ( v71 > (int)&off_1517C + 3 )
          v73 = 1 - v72;
        else
          v73 = -v72;
        v29 = 5;
        v74 = v3;
        LODWORD(v70) = *(unsigned __int16 *)(v3 + 2);
        v75 = v73;
        v76 = LOWORD(v100[0]) % 0x64u;
        v91 = v76;
        break;
      default:
        v84 = (char *)sub_50F28(v100, (unsigned int *)&v97, (int)&v104, 1);
        *((_BYTE *)v2 + 40) = sub_509C4((unsigned __int8 **)&v104, 2, 65, 0);
        v29 = sub_50DCC((int)v100, (int)&v104, 9, 0);
        if ( v29 )
        {
          sub_66750(&v102, v94, 0);
          v78 = (unsigned __int16)v102 - 20;
          if ( v78 < dword_BD5F4 )
            v78 = dword_BD5F4;
          v79 = sub_657A8(v78, LOWORD(v100[0]), 100);
          LOWORD(v100[0]) = v79;
          v29 = v78 <= v79 && v78 + 99 >= v79;
        }
        if ( (v2[192] & 8) != 0 )
          sub_510A0((unsigned __int8 **)&v104, 3, 4, 5, 6, -1, &_stack_chk_guard);
        goto LABEL_50;
    }
    while ( 1 )
    {
      v77 = (unsigned int)(v70 - 19) > 4;
      if ( (unsigned int)(v70 - 19) > 4 )
      {
        LOWORD(v70) = 1900;
        WORD2(v70) = 19;
      }
      else
      {
        LOWORD(v70) = 5 * v70;
      }
      if ( v77 )
        *(_WORD *)(v74 + 2) = WORD2(v70);
      else
        LOWORD(v70) = 5 * v70;
      if ( !v77 )
        LOWORD(v70) = 4 * v70;
      LOWORD(v100[0]) = v76 + v70;
      LODWORD(v70) = sub_66428(v100) - 722819 + v75;
      if ( (int)v70 >= 0 )
      {
        WORD2(v70) = 9363;
        if ( (unsigned __int16)v99 == (((__int16)v70 / 7) & 0x3FF) )
          break;
      }
      --v29;
      LODWORD(v70) = (unsigned __int16)(*(_WORD *)(v74 + 2) + 1);
      *(_WORD *)(v74 + 2) = v70;
      if ( !v29 )
      {
        v3 = v74;
        LOWORD(v100[0]) = v91;
        goto LABEL_136;
      }
    }
    v3 = v74;
    v29 = 1;
LABEL_136:
    if ( (v2[192] & 8) != 0 )
      sub_510A0((unsigned __int8 **)&v104, 6, 8, -1);
  }
LABEL_50:
  if ( !v84 )
  {
    v30 = 6;
    ++*(_DWORD *)(v3 + 28);
LABEL_52:
    if ( v5 >= 0x7F )
      v31 = 127;
    else
      v31 = v5;
    v2[46] = v31;
    memcpy(v2 + 14, &v108, v31);
    *((_BYTE *)v2 + v31 + 56) = 0;
    LODWORD(v6) = sub_394A0((__int16 *)v1, v30);
    return LODWORD(v6);
  }
  if ( !v29 )
  {
    v30 = 5;
    ++*(_DWORD *)(v3 + 28);
    goto LABEL_52;
  }
  if ( *((_BYTE *)v2 + 40) == 3 )
  {
    v30 = 2;
    ++*(_DWORD *)(v3 + 24);
    goto LABEL_52;
  }
  v38 = *(_BYTE *)v3 == 0;
  if ( !*(_BYTE *)v3 )
    v38 = v86 == &byte_4;
  if ( v38 )
  {
    v81 = (const char *)sub_6A3FC(v1 + 16);
    sub_64E00(6, "%s using GPS time as if it were UTC", v81);
    *(_BYTE *)v3 = 1;
  }
  v85 = **(char ***)(v1 + 84);
  v87 = (char *)sub_665B0(v100);
  v39 = sub_66428(v100);
  v40 = v97;
  v41 = v39 - 693596;
  v42 = v96;
  if ( v97 < 0 )
  {
    do
    {
      v40 += 1000000000;
      --v42;
    }
    while ( v40 < 0 );
  }
  else if ( v97 > 999999999 )
  {
    if ( v97 - 1000000000 <= 999999999 )
      v42 = v96 + 1;
    else
      v40 = v97 - 2013265920;
    if ( v97 - 1000000000 <= 999999999 )
      v40 = v97 - 1000000000;
    else
      v40 += 13238272;
    if ( v97 - 1000000000 > 999999999 )
    {
      v42 += 2;
      v40 += 27648;
    }
  }
  v43 = (int)&v87[v42];
  v88 = (char *)sub_8BFD0(500000000, v40, 1000000000, 0);
  if ( (*(_DWORD *)(v1 + 76) & 0x2000000) != 0 )
  {
    LODWORD(v6) = sub_66038(v92, v41, v43);
    v46 = v92[0];
  }
  else
  {
    if ( v43 <= 86399 )
    {
      while ( v43 < 0 )
      {
        --v41;
        v43 += 86400;
      }
    }
    else
    {
      do
      {
        ++v41;
        v43 -= 86400;
      }
      while ( v43 > 86399 );
    }
    sub_658E8((int)v92, v94, 0);
    v93[0] = v92[0];
    v93[1] = v92[1];
    sub_6598C(&v102, v93);
    v44 = v102 - 3584;
    if ( (int)v103 > v43 || v103 == (char *)v43 && (unsigned int)v88 < v95 )
      v44 = v102 - 3583;
    if ( v44 < dword_BD5F0 )
      v44 = dword_BD5F0;
    v90 = sub_657A8(v44, v41, 7168);
    v45 = (v90 - v41) / 7;
    if ( v45 != *((__int16 *)v85 + 6) )
    {
      *((_WORD *)v85 + 6) = v45;
      if ( (ntp_syslogmask & 0x100) != 0 )
      {
        v80 = (const char *)sub_6A3FC(v1 + 16);
        sub_64E00(6, "%s Changed GPS epoch warp to %d weeks", v80, v45);
      }
    }
    LODWORD(v6) = sub_66038(v92, v90, v43);
    v46 = v92[0];
  }
  if ( *(_DWORD *)(v3 + 4) == v46 && *(char **)(v3 + 8) == v88 )
    goto LABEL_45;
  if ( v5 >= 0x7F )
    v5 = 127;
  v47 = *(_DWORD *)(v3 + 20) + 1;
  *(_DWORD *)(v3 + 4) = v46;
  *(_DWORD *)(v3 + 20) = v47;
  *(_DWORD *)(v3 + 8) = v88;
  v2[46] = v5;
  memcpy(v2 + 14, &v108, v5);
  v48 = v94;
  v49 = v95;
  *((_BYTE *)v2 + v5 + 56) = 0;
  v2[58] = v48;
  v2[59] = v49;
  v102 = v46;
  v103 = v88;
  LODWORD(v6) = sub_39A70(v2, v46, (unsigned int)v88);
  return LODWORD(v6);
}
