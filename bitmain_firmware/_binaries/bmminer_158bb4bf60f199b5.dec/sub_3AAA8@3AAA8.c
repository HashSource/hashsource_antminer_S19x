int __fastcall sub_3AAA8(int a1)
{
  int *v1; // r5
  int i; // r4
  int v3; // lr
  int v4; // r3
  int result; // r0
  int *v6; // r4
  int v7; // r8
  int v8; // r6
  int v9; // r7
  unsigned int v10; // r0
  int v11; // r3
  unsigned int v12; // r1
  int *v13; // r2
  int v14; // r6
  int j; // r4
  unsigned int v16; // r9
  int v17; // r6
  int v18; // r4
  int v19; // r2
  int v20; // r4
  int v21; // r10
  unsigned int v22; // r9
  int *v23; // r2
  int v24; // lr
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // t1
  unsigned int v29; // t1
  int v30; // r2
  int v31; // r9
  int v32; // r5
  int v33; // r4
  int v34; // r2
  int v35; // r0
  unsigned int v36; // r0
  int v37; // r4
  int v38; // r0
  int v39; // r3
  int v40; // r7
  int v41; // r4
  int v42; // r6
  float v43; // s0
  int v44; // r2
  bool v45; // cc
  int v46; // r1
  int v47; // r3
  int v48; // r0
  int *v49; // r2
  int v50; // t1
  int v51; // r3
  int v52; // r0
  int *v53; // r2
  int v54; // t1
  int k; // r4
  int v56; // r10
  int v57; // r1
  int v58; // r12
  int v59; // r3
  int v60; // r2
  int v61; // r0
  int v62; // t1
  int v63; // r12
  int v64; // [sp+8h] [bp-13B4h]
  char *v65; // [sp+14h] [bp-13A8h]
  int c; // [sp+20h] [bp-139Ch]
  unsigned int v68; // [sp+28h] [bp-1394h] BYREF
  char v69[4]; // [sp+2Ch] [bp-1390h] BYREF
  int v70; // [sp+30h] [bp-138Ch] BYREF
  int v71; // [sp+34h] [bp-1388h] BYREF
  char s[4996]; // [sp+38h] [bp-1384h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, ">>>> Do single grade tuning.\n");
      sub_47AB4(3, s, 0);
    }
  }
  v1 = &dword_A0D68;
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 || sub_37D44(i) != 1 || (unsigned int)dword_9E31C <= 3 )
    {
      if ( ++i == 16 )
        goto LABEL_8;
    }
    v3 = i + 2512;
    v4 = i;
    snprintf(s, 0x800u, "chain = %d, grade = %d\n", v4, *(_DWORD *)(dword_1AEA80 + 4 * v3 + 4));
    sub_47AB4(3, s, 0);
  }
LABEL_8:
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Board init start.\n");
    sub_47AB4(3, s, 0);
  }
  c = sub_385EC(*(_DWORD *)(*(_DWORD *)dword_1AEA80 + 92));
  if ( c )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return c;
    strcpy(s, "Board init failed, exit.\n");
    sub_47AB4(3, s, 0);
    return c;
  }
  sub_38064();
  v6 = &v71;
  memset((void *)(dword_1AEA80 + 10116), 0, 0x40u);
  v7 = 8 - (_DWORD)s;
  memset(s, 0, 0x1380u);
  v8 = 0;
  v9 = 4 - (_DWORD)s;
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v8 + 4) != 1 )
    {
LABEL_17:
      ++v8;
      v6 += 78;
      if ( v8 == 16 )
        goto LABEL_25;
    }
    if ( sub_37D44(v8) == 1 )
    {
      v47 = (int)v6 + v7 + dword_1AEA80 - 4;
      v48 = (int)v6 + v9 + dword_1AEA80 + 312;
      v49 = v6;
      do
      {
        v50 = *(_DWORD *)(v47 + 4);
        v47 += 4;
        v49[1] = v50;
        ++v49;
      }
      while ( v47 != v48 );
      goto LABEL_17;
    }
    v10 = sub_3A3C4(v8, dword_1AEA80 + 4);
    v11 = dword_1AEA80;
    v12 = *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72);
    if ( v10 <= v12 )
    {
      v51 = (int)v6 + v7 + dword_1AEA80 - 4;
      v52 = (int)v6 + v9 + dword_1AEA80 + 312;
      v53 = v6;
      do
      {
        v54 = *(_DWORD *)(v51 + 4);
        v51 += 4;
        v53[1] = v54;
        ++v53;
      }
      while ( v51 != v52 );
      goto LABEL_17;
    }
    v13 = v6;
    while ( 1 )
    {
      v13[1] = v12;
      if ( ++v13 == v6 + 78 )
        break;
      v12 = *(_DWORD *)(*(_DWORD *)v11 + 72);
    }
    ++v8;
    v6 += 78;
  }
  while ( v8 != 16 );
LABEL_25:
  sub_30CAC((int)s, (unsigned __int8)byte_A0D79, dword_9C298, *(unsigned __int8 *)(*(_DWORD *)dword_1AEA80 + 88));
  c = sub_3AA80();
  if ( c )
    return c;
  while ( 2 )
  {
    if ( !sub_37F50() )
      goto LABEL_38;
    if ( a1 )
    {
      v14 = 0;
      for ( j = 0; j != 16; ++j )
      {
        while ( *(_DWORD *)(*v1 + 4 * j + 4) != 1 || sub_37D44(j) != 1 )
        {
          if ( ++j == 16 )
            goto LABEL_37;
        }
        v16 = sub_3A3C4(j, dword_1AEA80 + 5060);
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(
            s,
            0x800u,
            "chain = %d, freq_avg = %d, freq_threshold = %d\n",
            j,
            v16,
            *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72));
          sub_47AB4(3, s, 0);
        }
        if ( v16 > *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72) )
          v14 = 1;
      }
LABEL_37:
      if ( v14 )
      {
LABEL_38:
        if ( (unsigned int)dword_9E31C > 3 )
        {
          v17 = 1;
          goto LABEL_40;
        }
        return c;
      }
    }
    v17 = 1;
    for ( k = 0; k != 16; ++k )
    {
      while ( 1 )
      {
        v56 = 4 * k;
        if ( *(_DWORD *)(*v1 + 4 * k + 4) == 1 && sub_37D44(k) == 1 )
          break;
        if ( ++k == 16 )
          goto LABEL_98;
      }
      v57 = *(_DWORD *)(dword_1AEA80 + v56 + 10116);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(
          s,
          0x800u,
          "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",
          k,
          *(_DWORD *)(dword_1AEA80 + v56 + 10052),
          *(_DWORD *)(dword_1AEA80 + v56 + 10116));
        sub_47AB4(3, s, 0);
        v57 = *(_DWORD *)(dword_1AEA80 + 4 * (k + 2528) + 4);
      }
      if ( !v57 )
        v17 = 0;
    }
LABEL_98:
    if ( (unsigned int)dword_9E31C > 3 )
    {
LABEL_40:
      snprintf(s, 0x800u, "is_single_grade_done = %d\n", v17);
      sub_47AB4(3, s, 0);
    }
    if ( v17 )
      return c;
    do
    {
      while ( 1 )
      {
        v18 = 4 * v17;
        if ( *(_DWORD *)(*v1 + 4 * v17 + 4) == 1 && sub_37D44(v17) == 1 )
        {
          v19 = dword_1AEA80 + v18 + 0x2000;
          v20 = *(_DWORD *)(dword_1AEA80 + v18 + 10116);
          if ( !v20 )
            break;
        }
        if ( ++v17 == 16 )
          goto LABEL_63;
      }
      v21 = *(_DWORD *)dword_1AEA80;
      v22 = *(_DWORD *)(v19 + 1860);
      v23 = (int *)(dword_1AEA80 + 312 * v17 + 5056);
      v24 = dword_1AEA80 + 312 + 312 * v17;
      v25 = dword_1AEA80 + 312 * v17;
      v26 = *(_DWORD *)dword_1AEA80 + 78 * v17 + 739;
      do
      {
        v28 = *(_DWORD *)(v25 + 4);
        v25 += 4;
        v27 = v28;
        v23[1] = v28;
        ++v23;
        v29 = *(unsigned __int8 *)++v26;
        if ( v29 > v22 )
        {
          v20 = v27 + *(_DWORD *)(v21 + 80);
          *v23 = v20;
        }
      }
      while ( v24 != v25 );
      if ( *(_BYTE *)(v21 + 89) )
        sub_306F0(v20, 1);
      sub_74E08(&v70, v69, 0);
      v30 = dword_9E31C;
      BYTE2(v71) = v69[0];
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(
          s,
          0x800u,
          "chain = %d, grade_curr = %d, freq_target = %d\n",
          v17,
          *(_DWORD *)(dword_1AEA80 + 4 * (v17 + 2512) + 4),
          v20);
        sub_47AB4(3, s, 0);
      }
      v31 = 0;
      v65 = (char *)v1;
      v64 = dword_1AEA80;
      while ( ++v31 != 6 )
      {
        while ( 1 )
        {
          v32 = *(_DWORD *)v64;
          if ( (unsigned int)sub_77070(v31, *(_DWORD *)(*(_DWORD *)v64 + 108), v30) <= *(_DWORD *)(v64
                                                                                                 + 4 * (v17 + 2512)
                                                                                                 + 4) )
            break;
          v33 = 0;
          while ( 1 )
          {
            v34 = 3 * v33++;
            sub_1B1F4(
              v17,
              0,
              (unsigned __int8)(3 * *(_DWORD *)(v32 + 8 * (v31 + 2 * v34) + 120)),
              (unsigned __int8)byte_A0D79,
              v70,
              v71);
            if ( v33 == 13 )
              break;
            v32 = *(_DWORD *)dword_1AEA80;
          }
          ++v31;
          usleep((__useconds_t)&unk_F4240);
          v64 = dword_1AEA80;
          if ( v31 == 6 )
            goto LABEL_62;
        }
      }
LABEL_62:
      v35 = v17++;
      v1 = (int *)v65;
      sub_3A79C(v35, v64 + 5060, 1);
    }
    while ( v17 != 16 );
LABEL_63:
    v36 = sub_3A458(255, dword_1AEA80 + 5060);
    sub_22E9C(v36, 8, 20);
    result = sub_3AA80();
    v37 = result;
    if ( !result )
    {
      v68 = sub_3A520(255, dword_1AEA80 + 5060);
      sub_39138((int)&v68);
      v38 = sub_37770();
      v39 = *v1;
      v40 = v38;
      do
      {
        while ( *(_DWORD *)(v39 + 4 * v37 + 4) != 1 )
        {
          if ( ++v37 == 16 )
            goto LABEL_71;
        }
        if ( sub_37D44(v37) == 1 && !*(_DWORD *)(dword_1AEA80 + 4 * (v37 + 2528) + 4) )
          sub_3883C(v37, v40);
        ++v37;
        v39 = *v1;
      }
      while ( v37 != 16 );
LABEL_71:
      v41 = 0;
LABEL_74:
      v42 = 4 * v41;
      if ( *(_DWORD *)(v39 + 4 * v41 + 4) == 1
        && sub_37D44(v41) == 1
        && !*(_DWORD *)(dword_1AEA80 + 4 * (v41 + 2528) + 4) )
      {
        v43 = *(float *)(*(_DWORD *)dword_1AEA80 + 96);
        if ( sub_3816C(v41) )
        {
          v44 = dword_1AEA80 + v42 + 0x2000;
          v45 = (unsigned int)dword_9E31C > 3;
          v46 = *(_DWORD *)(dword_1AEA80 + v42 + 10052);
          *(_DWORD *)(v44 + 1924) = 1;
          *(_DWORD *)(v44 + 1860) = v46 + 1;
          if ( !v45 )
            goto LABEL_79;
          snprintf(s, 0x800u, "Inc grade: chain = %d, grade_curr = %d\n", v41, v46 + 1);
LABEL_105:
          sub_47AB4(3, s, 0);
        }
        else
        {
          v58 = dword_1AEA80;
          v59 = dword_1AEA80 + 312 * v41;
          v60 = dword_1AEA80 + 312 * v41 + 5056;
          v61 = dword_1AEA80 + 312 + 312 * v41;
          do
          {
            v62 = *(_DWORD *)(v60 + 4);
            v60 += 4;
            *(_DWORD *)(v59 + 4) = v62;
            v59 += 4;
          }
          while ( v59 != v61 );
          v63 = v58 + v42;
          *(_DWORD *)(v63 + 4996) = 1;
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf(
              s,
              0x800u,
              "Update freq result of high grade, chain = %d, grade_curr = %d.\n",
              v41,
              *(_DWORD *)(v63 + 10052));
            sub_47AB4(3, s, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              snprintf(
                s,
                0x800u,
                "Update high grade freq: chain = %d, grade_curr = %d\n",
                v41,
                *(_DWORD *)(dword_1AEA80 + 4 * (v41 + 2512) + 4));
              goto LABEL_105;
            }
          }
        }
LABEL_79:
        sub_38ECC(v41);
        if ( v43 > *(float *)(dword_1AEA80 + v42 + 10180) )
          *(float *)(dword_1AEA80 + v42 + 10180) = v43;
        if ( sub_3A5E8(v41) )
          sub_37BD4(v41, 2);
      }
      if ( ++v41 == 16 )
        continue;
      v39 = *v1;
      goto LABEL_74;
    }
    return result;
  }
}
