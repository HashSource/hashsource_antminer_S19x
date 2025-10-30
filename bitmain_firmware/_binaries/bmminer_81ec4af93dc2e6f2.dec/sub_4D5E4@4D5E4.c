int sub_4D5E4()
{
  int *v0; // r9
  int i; // r4
  int j; // r4
  int k; // r4
  int v4; // r5
  int v6; // r3
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r4
  int v10; // r4
  float v11; // s0
  int m; // r4
  int v13; // r4
  int n; // r5
  char *v15; // r5
  unsigned int v16; // r0
  int v17; // r6
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r6
  char *v22; // r7
  int *v23; // r4
  int v24; // r9
  int v25; // r6
  unsigned int v26; // t1
  int v27; // r0
  int v28; // r2
  double v29; // d8
  int v30; // r1
  int v31; // r3
  double v32; // d7
  int v33; // r0
  int v34; // r2
  int v35; // r0
  int v36; // r3
  int v37; // t1
  int v38; // r0
  int v39; // r12
  int v40; // r0
  int v41; // r3
  int v42; // r2
  int v43; // t1
  int v44; // r12
  bool v45; // cc
  int v46; // r3
  int v47; // r5
  int v48; // r0
  unsigned int v49; // r6
  int v50; // r12
  int v51; // r0
  _DWORD *v52; // r3
  int v53; // r2
  int v54; // r1
  int v55; // t1
  int v56; // r7
  int v57; // r1
  unsigned __int8 v58; // r2
  int v59; // r12
  int v60; // r3
  int v61; // r0
  int v62; // r3
  int v63; // r3
  int v64; // r0
  int v65; // r1
  int v66; // r0
  char *v67; // r3
  char *v68; // r1
  int v69; // r3
  int v70; // r3
  void *v71; // r3
  bool v72; // zf
  int v73; // r1
  int v74; // r0
  int v75; // r0
  int v76; // r3
  char *v77; // r2
  int v78; // r0
  int v79; // t1
  int v80; // r0
  int v81; // r1
  int v82; // r3
  int v83; // r0
  int v84; // r0
  int v85; // r3
  char *v86; // r2
  int v87; // r0
  int v88; // t1
  char *v89; // [sp+Ch] [bp-1030h]
  char *v90; // [sp+10h] [bp-102Ch]
  unsigned int v91; // [sp+28h] [bp-1014h] BYREF
  char v92[4]; // [sp+2Ch] [bp-1010h] BYREF
  int v93; // [sp+30h] [bp-100Ch] BYREF
  int v94; // [sp+34h] [bp-1008h]
  char s[4100]; // [sp+38h] [bp-1004h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Do freq tuning fine.\n");
    sub_3AF5C(3, s, 0, *(int *)"ng fine.\n");
  }
  v0 = &dword_530F10;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      v80 = sub_26540();
      if ( v80 )
      {
        v81 = dword_530F10 + 4 * (v80 + (i << 8));
        v82 = dword_530F10 + (i << 10);
        v83 = *(_DWORD *)dword_530F10 + 4 * i;
        do
        {
          *(_DWORD *)(v82 + 4) = *(_DWORD *)(v83 + 4);
          v82 += 4;
        }
        while ( v82 != v81 );
      }
    }
  }
  sub_46E7C(**(_DWORD **)dword_530F10);
  memcpy((void *)(dword_530F10 + 4116), (const void *)(dword_530F10 + 4), 0x1000u);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    strcpy(s, "\n");
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, ">>>> Do freq tuning fine parallel.\n");
      sub_3AF5C(3, s, 0, *(int *)"allel.\n");
    }
  }
  for ( j = 0; j != 4; ++j )
  {
    if ( sub_266F0(j) )
    {
      v72 = sub_4C994(j) == 0;
      v73 = 2;
      v74 = j;
      if ( v72 )
      {
        v73 = 1;
        v74 = j;
      }
      sub_4A294(v74, v73);
    }
  }
LABEL_10:
  while ( 2 )
  {
    if ( !sub_4A600() )
    {
      v4 = 0;
      goto LABEL_141;
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "is_need_serial = %d\n", 0);
      sub_3AF5C(3, s, 0, v7);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        memset(s, 0, 0x800u);
        strcpy(s, "\n");
        sub_3BE28(3, s, 0);
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, ">>>> Do single grade tuning.\n");
          sub_3AF5C(3, s, 0, *(int *)"\n");
        }
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_266F0(k) && sub_4A408(k) == 1 && (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "chain = %d, grade = %d\n", k, *(_DWORD *)(*v0 + 4 * (k + 3076) + 4));
        sub_3AF5C(3, s, 0, v6);
      }
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "Board init start.\n");
      sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    v4 = sub_4AC1C(*(_DWORD *)(*(_DWORD *)*v0 + 40));
    if ( !v4 )
    {
      sub_4A6E4();
      v8 = (_DWORD *)*v0;
      v9 = 0;
      v8[3081] = 0;
      v8 += 3081;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      memset(s, 0, 0x1000u);
      do
      {
        if ( sub_266F0(v9) )
        {
          if ( sub_4A408(v9) == 1 )
          {
            v84 = sub_26540();
            if ( v84 )
            {
              v85 = *v0 + (v9 << 10);
              v86 = &s[1024 * v9];
              v87 = *v0 + 4 * (v84 + (v9 << 8));
              do
              {
                v88 = *(_DWORD *)(v85 + 4);
                v85 += 4;
                *(_DWORD *)v86 = v88;
                v86 += 4;
              }
              while ( v85 != v87 );
            }
          }
          else if ( (unsigned int)sub_4C750(v9, *v0 + 4) <= *(_DWORD *)(*(_DWORD *)*v0 + 24) )
          {
            v75 = sub_26540();
            if ( v75 )
            {
              v76 = *v0 + (v9 << 10);
              v77 = &s[1024 * v9];
              v78 = *v0 + 4 * (v75 + (v9 << 8));
              do
              {
                v79 = *(_DWORD *)(v76 + 4);
                v76 += 4;
                *(_DWORD *)v77 = v79;
                v77 += 4;
              }
              while ( v76 != v78 );
            }
          }
          else
          {
            v64 = sub_26540();
            if ( v64 )
            {
              v65 = v64 + (v9 << 8);
              v66 = *v0;
              v67 = &s[1024 * v9];
              v68 = &s[4 * v65];
              do
              {
                *(_DWORD *)v67 = *(_DWORD *)(*(_DWORD *)v66 + 24);
                v67 += 4;
              }
              while ( v67 != v68 );
            }
          }
        }
        ++v9;
      }
      while ( v9 != 4 );
      v10 = sub_46E9C();
      if ( v10 == sub_46E8C() )
      {
        v11 = (float)SLODWORD(flt_AFE60);
        sub_23B00((int)s, (unsigned __int8)byte_4B6CCC, *(unsigned __int8 *)(*(_DWORD *)*v0 + 36));
      }
      else
      {
        v4 = sub_46EA0();
        v11 = (float)SLODWORD(flt_AFE60);
        sub_23B00((int)s, (unsigned __int8)byte_4B6CCC, *(unsigned __int8 *)(*(_DWORD *)*v0 + 36));
        if ( v4 )
        {
          v71 = off_AFC24;
          goto LABEL_121;
        }
      }
      while ( sub_4A600() )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( sub_266F0(m) )
          {
            if ( sub_4A408(m) == 1 )
            {
              v59 = sub_4C750(m, *v0 + 4116);
              if ( (unsigned int)off_AFC24 > 3 )
              {
                snprintf(
                  s,
                  0x800u,
                  "chain = %d, freq_avg = %d, freq_threshold = %d\n",
                  m,
                  v59,
                  *(_DWORD *)(*(_DWORD *)*v0 + 24));
                sub_3AF5C(3, s, 0, v60);
              }
            }
          }
        }
        v13 = 1;
        for ( n = 0; n != 4; ++n )
        {
          if ( sub_266F0(n) && sub_4A408(n) == 1 )
          {
            v61 = *(_DWORD *)(*v0 + 4 * n + 12324);
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(
                s,
                0x800u,
                "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",
                n,
                *(_DWORD *)(*v0 + 4 * n + 12308),
                *(_DWORD *)(*v0 + 4 * n + 12324));
              sub_3AF5C(3, s, 0, v69);
              v61 = *(_DWORD *)(*v0 + 4 * (n + 3080) + 4);
            }
            if ( !v61 )
              v13 = 0;
          }
        }
        if ( (unsigned int)off_AFC24 > 3 )
          goto LABEL_112;
LABEL_39:
        if ( v13 )
          goto LABEL_10;
        do
        {
          if ( sub_266F0(v13) )
          {
            if ( sub_4A408(v13) == 1 )
            {
              v47 = *(_DWORD *)(*v0 + 4 * (v13 + 3080) + 4);
              if ( !v47 )
              {
                v48 = sub_26540();
                v49 = v48;
                if ( v48 )
                {
                  v49 = 0;
                  v50 = *(_DWORD *)*v0;
                  v51 = *v0 + 4 * (v48 + (v13 << 8));
                  v52 = (_DWORD *)(*v0 + (v13 << 10) + 4116);
                  v53 = *v0 + (v13 << 10);
                  do
                  {
                    v55 = *(_DWORD *)(v53 + 4);
                    v53 += 4;
                    v54 = v55;
                    *v52++ = v55;
                    if ( v52[1023] == 1 )
                    {
                      v49 = v54 - *(_DWORD *)(v50 + 32);
                      *(v52 - 1) = v49;
                    }
                  }
                  while ( v53 != v51 );
                }
                else
                {
                  v50 = *(_DWORD *)*v0;
                }
                if ( *(_BYTE *)(v50 + 37) )
                  nullsub_3();
                v11 = (float)v49;
                sub_75D54(&v93, v92, 0);
                BYTE2(v94) = v92[0];
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  snprintf(
                    s,
                    0x800u,
                    "chain = %d, grade_curr = %d, freq_target = %d\n",
                    v13,
                    *(_DWORD *)(*v0 + 4 * (v13 + 3076) + 4),
                    v49);
                  sub_3AF5C(3, s, 0, v70);
                }
                v56 = sub_26540();
                v57 = *v0;
                if ( v56 )
                {
                  do
                  {
                    while ( *(_DWORD *)(v57 + 4 * ((v13 << 8) + v47 + 1028) + 4) != v49 )
                    {
                      if ( v56 == ++v47 )
                        goto LABEL_100;
                    }
                    if ( (unsigned int)off_AFC24 > 3 )
                    {
                      snprintf(s, 0x800u, "chain = %d, asic = %d, freq = %d\n", v13, v47, v49);
                      sub_3AF5C(3, s, 0, v63);
                    }
                    v58 = sub_265B0() * v47++;
                    sub_27E18(v13, 0, v58, (unsigned __int8)byte_4B6CCC, v93, v94);
                    usleep((__useconds_t)&unk_F4240);
                    v57 = *v0;
                  }
                  while ( v56 != v47 );
                }
LABEL_100:
                sub_4CAF8(v13, v57 + 4116);
              }
            }
          }
          ++v13;
        }
        while ( v13 != 4 );
        v15 = 0;
        v16 = sub_4C7FC(255, *v0 + 4116);
        sub_3F61C(v16, dword_AFBE0, 20);
        v91 = sub_4C8C8(255, *v0 + 4116);
        sub_4B64C((int)&v91);
        v17 = sub_49E5C();
        do
        {
          if ( sub_266F0((int)v15) && sub_4A408((int)v15) == 1 && !*(_DWORD *)(*v0 + 4 * (_DWORD)(v15 + 3080) + 4) )
            sub_4ACBC(v15, v17);
          ++v15;
        }
        while ( v15 != (char *)4 );
        v18 = 0;
        v89 = (char *)&unk_808FFC + v17;
        if ( sub_266F0(0) )
        {
LABEL_48:
          if ( sub_4A408(v18) == 1 )
          {
            v19 = *(_DWORD *)(*v0 + 4 * (v18 + 3080) + 4);
            if ( !v19 )
            {
              v20 = sub_26540();
              if ( v20 > 0 )
              {
                v21 = v18 << 8;
                v90 = (char *)v18;
                v22 = &v89[1024 * v18];
                v23 = v0;
                v24 = v21;
                v25 = v20;
                do
                {
                  v26 = *((_DWORD *)v22 + 1);
                  v22 += 4;
                  v27 = sub_26580();
                  v29 = (double)v26;
                  v30 = v24 + v19++ + 2052;
                  v31 = v30;
                  v32 = (double)(8 * v27) * 0.98;
                  if ( (double)v26 <= v32 )
                    v31 = *v23;
                  else
                    v28 = 0;
                  if ( v29 <= v32 )
                    v31 += 4 * v30;
                  else
                    v30 = *v23;
                  if ( v29 <= v32 )
                    *(_DWORD *)(v31 + 4) = 1;
                  else
                    v31 = v30 + 4 * v31;
                  if ( v29 > v32 )
                    *(_DWORD *)(v31 + 4) = v28;
                }
                while ( v25 != v19 );
                v0 = v23;
                v18 = (int)v90;
              }
              v33 = sub_26540();
              if ( v33 <= 0 )
                goto LABEL_119;
              v34 = 0;
              v35 = *v0 + 8208 + 4 * (v33 + (v18 << 8));
              v36 = *v0 + (v18 << 10) + 8208;
              do
              {
                v37 = *(_DWORD *)(v36 + 4);
                v36 += 4;
                v34 += v37;
              }
              while ( v35 != v36 );
              if ( !v34 )
LABEL_119:
                sub_4A294(v18, 2);
              v38 = sub_26540();
              v39 = *v0;
              if ( v38 )
              {
                v40 = v39 + 4 * (v38 + (v18 << 8));
                v41 = v39 + (v18 << 10);
                v42 = v39 + (v18 << 10) + 4112;
                do
                {
                  v43 = *(_DWORD *)(v42 + 4);
                  v42 += 4;
                  *(_DWORD *)(v41 + 4) = v43;
                  v41 += 4;
                }
                while ( v41 != v40 );
              }
              v44 = v39 + 4 * v18;
              v45 = (unsigned int)off_AFC24 > 3;
              *(_DWORD *)(v44 + 4100) = 1;
              if ( v45 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Update freq result of high grade, chain = %d, grade_curr = %d.\n",
                  v18,
                  *(_DWORD *)(v44 + 12308));
                sub_3AF5C(3, s, 0, v46);
              }
              sub_4B608();
              if ( v11 > *(float *)(*v0 + 4 * v18 + 12340) )
                *(float *)(*v0 + 4 * v18 + 12340) = v11;
              if ( sub_4C994(v18) )
                sub_4A294(v18, 2);
            }
          }
        }
        while ( ++v18 != 4 )
        {
          if ( sub_266F0(v18) )
            goto LABEL_48;
        }
      }
      if ( (unsigned int)off_AFC24 <= 3 )
        continue;
      v13 = 1;
LABEL_112:
      snprintf(s, 0x800u, "is_single_grade_done = %d\n", v13);
      sub_3AF5C(3, s, 0, v62);
      goto LABEL_39;
    }
    break;
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_19;
  strcpy(s, "Board init failed, exit.\n");
  sub_3AF5C(3, s, 0, *(int *)"ailed, exit.\n");
  v71 = off_AFC24;
LABEL_121:
  if ( (unsigned int)v71 <= 3 )
    goto LABEL_19;
  strcpy(s, "Parallel tuning failed, exit.\n");
  sub_3AF5C(3, s, 0, *(int *)".\n");
LABEL_141:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Dump freq tuning fine result:\n");
    sub_3AF5C(3, s, 0, *(int *)":\n");
  }
LABEL_19:
  sub_4CAF8(255, *v0 + 4);
  return v4;
}
