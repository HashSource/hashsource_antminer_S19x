int sub_4F5F8()
{
  int i; // r4
  int j; // r4
  int k; // r4
  int v3; // r5
  int v5; // r3
  int v6; // r3
  int v7; // r4
  int v8; // r7
  int *v9; // r5
  int v10; // r6
  int v11; // r4
  int v12; // r0
  float v13; // s0
  int m; // r4
  int v15; // r6
  int n; // r4
  int v17; // r10
  char *v18; // r4
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r8
  int v22; // r4
  int v23; // r10
  int v24; // r6
  char *v25; // r7
  unsigned int v26; // t1
  int v27; // r0
  int v28; // r2
  double v29; // d8
  int v30; // r2
  int v31; // r3
  double v32; // d16
  int v33; // r2
  int v34; // r3
  int v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // r0
  int v39; // t1
  int v40; // r0
  int v41; // r12
  int v42; // r3
  int v43; // r2
  int v44; // r0
  int v45; // t1
  int v46; // r6
  int v47; // r12
  bool v48; // cc
  int v49; // r3
  unsigned int v50; // r5
  int v51; // r0
  int v52; // r12
  int v53; // r0
  unsigned int *v54; // r3
  int v55; // lr
  int v56; // r12
  int v57; // r1
  unsigned int v58; // r2
  unsigned int v59; // t1
  int v60; // t1
  int v61; // r0
  int v62; // r1
  int v63; // r7
  int v64; // r4
  unsigned __int8 v65; // r2
  int v66; // r3
  int v67; // r12
  int v68; // r3
  int v69; // r3
  int v70; // r0
  int v71; // r12
  int *v72; // r3
  int v73; // r3
  unsigned int v74; // r3
  int v75; // r3
  int v76; // r0
  int *v77; // r2
  int v78; // r0
  int v79; // r3
  int v80; // t1
  int v81; // r0
  int v82; // r1
  int v83; // r0
  int v84; // r3
  int v85; // r1
  int v86; // r0
  int v87; // r0
  int *v88; // r2
  int v89; // r0
  int v90; // r3
  int v91; // t1
  int v92; // [sp+18h] [bp-101Ch]
  unsigned int v93; // [sp+20h] [bp-1014h] BYREF
  char v94[4]; // [sp+24h] [bp-1010h] BYREF
  int v95; // [sp+28h] [bp-100Ch] BYREF
  int v96; // [sp+2Ch] [bp-1008h] BYREF
  unsigned int s[1025]; // [sp+30h] [bp-1004h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy((char *)s, "Do freq tuning fine.\n");
    sub_3B6AC(3, (const char *)s, 0, *(int *)"ng fine.\n");
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      v83 = sub_26A44();
      if ( v83 )
      {
        v84 = dword_535D9C + (i << 10);
        v85 = dword_535D9C + 4 * (v83 + (i << 8));
        v86 = *(_DWORD *)dword_535D9C + 4 * i;
        do
        {
          *(_DWORD *)(v84 + 4) = *(_DWORD *)(v86 + 4);
          v84 += 4;
        }
        while ( v84 != v85 );
      }
    }
  }
  sub_48D5C(**(_DWORD **)dword_535D9C);
  memcpy((void *)(dword_535D9C + 4116), (const void *)(dword_535D9C + 4), 0x1000u);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    strcpy((char *)s, "\n");
    sub_3C5B8(3, (const char *)s, 0);
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)s, ">>>> Do freq tuning fine parallel.\n");
      sub_3B6AC(3, (const char *)s, 0, *(int *)"allel.\n");
    }
  }
  for ( j = 0; j != 4; ++j )
  {
    if ( sub_26C0C(j) )
    {
      v81 = sub_4E988(j);
      v82 = 1;
      if ( v81 )
        v82 = 2;
      sub_4C198(j, v82);
    }
  }
LABEL_10:
  while ( 2 )
  {
    if ( !sub_4C524() )
    {
      v3 = 0;
      goto LABEL_139;
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf((char *)s, 0x800u, "is_need_serial = %d\n", 0);
      sub_3B6AC(3, (const char *)s, 0, v6);
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        strcpy((char *)s, "\n");
        sub_3C5B8(3, (const char *)s, 0);
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy((char *)s, ">>>> Do single grade tuning.\n");
          sub_3B6AC(3, (const char *)s, 0, *(int *)"\n");
        }
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_26C0C(k) && sub_4C304(k) == 1 && (unsigned int)dword_B308C > 3 )
      {
        snprintf((char *)s, 0x800u, "chain = %d, grade = %d\n", k, *(_DWORD *)(dword_535D9C + 4 * (k + 3076) + 4));
        sub_3B6AC(3, (const char *)s, 0, v5);
      }
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)s, "Board init start.\n");
      sub_3B6AC(3, (const char *)s, 0, *(int *)"tart.\n");
    }
    v3 = sub_4CB4C(*(_DWORD *)(*(_DWORD *)dword_535D9C + 40));
    if ( !v3 )
    {
      sub_4C608();
      v7 = 0;
      v8 = 0;
      memset((void *)(dword_535D9C + 12324), 0, 0x10u);
      memset(s, 0, 0x1000u);
      v9 = &v96;
      v10 = 0;
      do
      {
        if ( sub_26C0C(v8) )
        {
          if ( sub_4C304(v8) == 1 )
          {
            v87 = sub_26A44();
            if ( v87 )
            {
              v88 = v9;
              v89 = dword_535D9C + 4 * (v87 + v7);
              v90 = dword_535D9C + v10;
              do
              {
                v91 = *(_DWORD *)(v90 + 4);
                v90 += 4;
                v88[1] = v91;
                ++v88;
              }
              while ( v90 != v89 );
            }
          }
          else if ( (unsigned int)sub_4E738(v8, dword_535D9C + 4) <= *(_DWORD *)(*(_DWORD *)dword_535D9C + 24) )
          {
            v76 = sub_26A44();
            if ( v76 )
            {
              v77 = v9;
              v78 = dword_535D9C + 4 * (v76 + v7);
              v79 = dword_535D9C + v10;
              do
              {
                v80 = *(_DWORD *)(v79 + 4);
                v79 += 4;
                v77[1] = v80;
                ++v77;
              }
              while ( v79 != v78 );
            }
          }
          else
          {
            v70 = sub_26A44();
            if ( v70 )
            {
              v71 = dword_535D9C;
              v72 = v9;
              do
              {
                v72[1] = *(_DWORD *)(*(_DWORD *)v71 + 24);
                ++v72;
              }
              while ( v72 != (int *)&s[v70 + v7 - 1] );
            }
          }
        }
        ++v8;
        v9 += 256;
        v10 += 1024;
        v7 += 256;
      }
      while ( v8 != 4 );
      v11 = sub_48D7C();
      if ( v11 == sub_48D6C() )
      {
        v13 = (float)SLODWORD(flt_B32C8);
        sub_23FD0(s, (unsigned __int8)byte_534B58, *(unsigned __int8 *)(*(_DWORD *)dword_535D9C + 36));
      }
      else
      {
        v12 = sub_48D80();
        v13 = (float)SLODWORD(flt_B32C8);
        v3 = v12;
        sub_23FD0(s, (unsigned __int8)byte_534B58, *(unsigned __int8 *)(*(_DWORD *)dword_535D9C + 36));
        if ( v3 )
        {
          v74 = dword_B308C;
          goto LABEL_119;
        }
      }
      while ( sub_4C524() )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( sub_26C0C(m) )
          {
            if ( sub_4C304(m) == 1 )
            {
              v67 = sub_4E738(m, dword_535D9C + 4116);
              if ( (unsigned int)dword_B308C > 3 )
              {
                snprintf(
                  (char *)s,
                  0x800u,
                  "chain = %d, freq_avg = %d, freq_threshold = %d\n",
                  m,
                  v67,
                  *(_DWORD *)(*(_DWORD *)dword_535D9C + 24));
                sub_3B6AC(3, (const char *)s, 0, v68);
              }
            }
          }
        }
        v15 = 1;
        for ( n = 0; n != 4; ++n )
        {
          if ( sub_26C0C(n) && sub_4C304(n) == 1 )
          {
            if ( (unsigned int)dword_B308C > 3 )
            {
              snprintf(
                (char *)s,
                0x800u,
                "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",
                n,
                *(_DWORD *)(dword_535D9C + 4 * n + 12308),
                *(_DWORD *)(dword_535D9C + 4 * n + 12324));
              sub_3B6AC(3, (const char *)s, 0, v73);
            }
            if ( !*(_DWORD *)(dword_535D9C + 4 * (n + 3080) + 4) )
              v15 = 0;
          }
        }
        if ( (unsigned int)dword_B308C > 3 )
          goto LABEL_111;
LABEL_39:
        if ( v15 )
          goto LABEL_10;
        v17 = 4112;
        do
        {
          if ( sub_26C0C(v15) )
          {
            if ( sub_4C304(v15) == 1 )
            {
              v50 = *(_DWORD *)(dword_535D9C + 4 * (v15 + 3080) + 4);
              if ( !v50 )
              {
                v51 = sub_26A44();
                if ( v51 )
                {
                  v52 = v51 + (v15 << 8) + 1028;
                  v53 = dword_535D9C + (v15 << 10);
                  v54 = (unsigned int *)(dword_535D9C + v17);
                  v55 = *(_DWORD *)dword_535D9C;
                  v56 = dword_535D9C + 4 * v52;
                  v57 = dword_535D9C + v17 + 4096;
                  do
                  {
                    v59 = *(_DWORD *)(v53 + 4);
                    v53 += 4;
                    v58 = v59;
                    v54[1] = v59;
                    ++v54;
                    v60 = *(_DWORD *)(v57 + 4);
                    v57 += 4;
                    if ( v60 == 1 )
                    {
                      v50 = v58 - *(_DWORD *)(v55 + 32);
                      *v54 = v50;
                    }
                  }
                  while ( v54 != (unsigned int *)v56 );
                }
                else
                {
                  v50 = 0;
                  v55 = *(_DWORD *)dword_535D9C;
                }
                if ( *(_BYTE *)(v55 + 37) )
                  nullsub_4();
                v13 = (float)v50;
                sub_791C0(&v95, v94, 0);
                BYTE2(v96) = v94[0];
                if ( (unsigned int)dword_B308C > 3 )
                {
                  snprintf(
                    (char *)s,
                    0x800u,
                    "chain = %d, grade_curr = %d, freq_target = %d\n",
                    v15,
                    *(_DWORD *)(dword_535D9C + 4 * (v15 + 3076) + 4),
                    v50);
                  sub_3B6AC(3, (const char *)s, 0, v75);
                }
                v61 = sub_26A44();
                v62 = dword_535D9C;
                v63 = v61;
                if ( v61 )
                {
                  v64 = 0;
                  do
                  {
                    while ( v50 != *(_DWORD *)(v62 + 4 * ((v15 << 8) + v64 + 1028) + 4) )
                    {
                      if ( v63 == ++v64 )
                        goto LABEL_99;
                    }
                    if ( (unsigned int)dword_B308C > 3 )
                    {
                      snprintf((char *)s, 0x800u, "chain = %d, asic = %d, freq = %d\n", v15, v64, v50);
                      sub_3B6AC(3, (const char *)s, 0, v66);
                    }
                    v65 = sub_26AB4() * v64++;
                    sub_283A0(v15, 0, v65, (unsigned __int8)byte_534B58, v95, v96);
                    usleep((__useconds_t)&unk_F4240);
                    v62 = dword_535D9C;
                  }
                  while ( v63 != v64 );
                }
LABEL_99:
                sub_4EAE4(v15, v62 + 4116);
              }
            }
          }
          ++v15;
          v17 += 1024;
        }
        while ( v15 != 4 );
        v18 = 0;
        v19 = sub_4E7E8(255, dword_535D9C + 4116);
        sub_41228(v19, dword_B3048, 20);
        v93 = sub_4E8B8(255, dword_535D9C + 4116);
        sub_4D56C((int)&v93);
        v92 = sub_4BCE4();
        do
        {
          if ( sub_26C0C((int)v18)
            && sub_4C304((int)v18) == 1
            && !*(_DWORD *)(dword_535D9C + 4 * (_DWORD)(v18 + 3080) + 4) )
          {
            sub_4CBEC(v18, v92);
          }
          ++v18;
        }
        while ( v18 != (char *)4 );
        v20 = 0;
        v21 = 8208;
        v22 = 0;
        if ( sub_26C0C(0) )
        {
LABEL_49:
          if ( sub_4C304(v22) == 1 )
          {
            v23 = *(_DWORD *)(dword_535D9C + 4 * (v22 + 3080) + 4);
            if ( !v23 )
            {
              v24 = sub_26A44();
              if ( v24 > 0 )
              {
                v25 = (char *)&unk_806FEC + v21 + v92;
                do
                {
                  v26 = *((_DWORD *)v25 + 1);
                  v25 += 4;
                  v27 = sub_26A84();
                  v28 = (v22 << 8) + v23++;
                  v29 = (double)v26;
                  v30 = v28 + 2052;
                  v31 = v30;
                  v32 = (double)(8 * v27) * 0.98;
                  if ( (double)v26 > v32 )
                    v30 = dword_535D9C;
                  else
                    v31 = dword_535D9C;
                  if ( v29 > v32 )
                  {
                    v34 = v30 + 4 * v31;
                    v33 = 0;
                  }
                  else
                  {
                    v33 = v31 + 4 * v30;
                    v34 = 1;
                  }
                  if ( v29 > v32 )
                    *(_DWORD *)(v34 + 4) = v33;
                  else
                    *(_DWORD *)(v33 + 4) = v34;
                }
                while ( v23 != v24 );
              }
              v35 = sub_26A44();
              if ( v35 <= 0 )
                goto LABEL_121;
              v36 = 0;
              v37 = dword_535D9C + v21;
              v38 = dword_535D9C + 4 * (v20 + 2052 + v35);
              do
              {
                v39 = *(_DWORD *)(v37 + 4);
                v37 += 4;
                v36 += v39;
              }
              while ( v37 != v38 );
              if ( !v36 )
LABEL_121:
                sub_4C198(v22, 2);
              v40 = sub_26A44();
              if ( v40 )
              {
                v41 = dword_535D9C;
                v42 = dword_535D9C + v21 - 4096;
                v43 = dword_535D9C + (v22 << 10);
                v44 = dword_535D9C + 4 * (v40 + v20 + 1028);
                do
                {
                  v45 = *(_DWORD *)(v42 + 4);
                  v42 += 4;
                  *(_DWORD *)(v43 + 4) = v45;
                  v43 += 4;
                }
                while ( v42 != v44 );
              }
              else
              {
                v41 = dword_535D9C;
              }
              v46 = 4 * v22;
              v47 = v41 + 4 * v22;
              v48 = (unsigned int)dword_B308C > 3;
              *(_DWORD *)(v47 + 4100) = 1;
              if ( v48 )
              {
                snprintf(
                  (char *)s,
                  0x800u,
                  "Update freq result of high grade, chain = %d, grade_curr = %d.\n",
                  v22,
                  *(_DWORD *)(v47 + 12308));
                sub_3B6AC(3, (const char *)s, 0, v49);
              }
              sub_4D528();
              if ( v13 > *(float *)(dword_535D9C + v46 + 12340) )
                *(float *)(dword_535D9C + v46 + 12340) = v13;
              if ( sub_4E988(v22) )
                sub_4C198(v22, 2);
            }
          }
        }
        while ( 1 )
        {
          ++v22;
          v21 += 1024;
          v20 += 256;
          if ( v22 == 4 )
            break;
          if ( sub_26C0C(v22) )
            goto LABEL_49;
        }
      }
      if ( (unsigned int)dword_B308C <= 3 )
        continue;
      v15 = 1;
LABEL_111:
      snprintf((char *)s, 0x800u, "is_single_grade_done = %d\n", v15);
      sub_3B6AC(3, (const char *)s, 0, v69);
      goto LABEL_39;
    }
    break;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_19;
  strcpy((char *)s, "Board init failed, exit.\n");
  sub_3B6AC(3, (const char *)s, 0, *(int *)"ailed, exit.\n");
  v74 = dword_B308C;
LABEL_119:
  if ( v74 <= 3 )
    goto LABEL_19;
  strcpy((char *)s, "Parallel tuning failed, exit.\n");
  sub_3B6AC(3, (const char *)s, 0, *(int *)".\n");
LABEL_139:
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy((char *)s, "Dump freq tuning fine result:\n");
    sub_3B6AC(3, (const char *)s, 0, *(int *)":\n");
  }
LABEL_19:
  sub_4EAE4(255, dword_535D9C + 4);
  return v3;
}
