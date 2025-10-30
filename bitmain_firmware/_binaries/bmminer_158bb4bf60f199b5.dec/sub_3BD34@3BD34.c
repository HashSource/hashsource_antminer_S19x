int sub_3BD34()
{
  int **v0; // r9
  int v1; // r7
  int v2; // r8
  int v3; // lr
  int v4; // r2
  int v5; // t1
  int v6; // r12
  unsigned int v7; // r3
  int v8; // r0
  int v9; // r1
  int i; // r7
  bool v12; // zf
  int v13; // r1
  int v14; // r0
  int v15; // r8
  int v16; // r7
  unsigned int v17; // r0
  int v18; // r7
  unsigned int v19; // r10
  int v20; // r7
  int v21; // r8
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r3
  int v25; // t1
  int v26; // lr
  unsigned int v27; // r1
  int j; // r7
  int v29; // r8
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Do freq tuning PM grade.\n");
    sub_47AB4(3, s, 0);
  }
  v0 = (int **)dword_1AEA80;
  v1 = 1;
  v2 = dword_A0D68;
  v3 = 0;
  v4 = dword_1AEA80;
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      if ( v5 == 1 )
        break;
      ++v3;
      v4 += 312;
      if ( v3 == 16 )
        goto LABEL_13;
    }
    v6 = (int)&(*v0)[v3];
    v7 = *(_DWORD *)(v6 + 4);
    if ( v7 >= (*v0)[17] )
    {
      v8 = 0;
    }
    else
    {
      v8 = (*v0)[21];
      v1 = 0;
    }
    v9 = v4 + 312;
    while ( 1 )
    {
      *(_DWORD *)(v4 + 4) = v7 - v8;
      v4 += 4;
      if ( v4 == v9 )
        break;
      v7 = *(_DWORD *)(v6 + 4);
    }
    ++v3;
    v4 = v9;
  }
  while ( v3 != 16 );
LABEL_13:
  if ( v1 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Freq is already enough of all chain, exit.\n");
      sub_47AB4(3, s, 0);
    }
    return 0;
  }
  else
  {
    sub_1A0F0(**v0);
    memcpy((void *)(dword_1AEA80 + 5060), (const void *)(dword_1AEA80 + 4), 0x1380u);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, ">>>> Do PM grade tuning parallel.\n");
        sub_47AB4(3, s, 0);
      }
    }
    for ( i = 0; i != 16; ++i )
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      {
        v12 = sub_3A5E8(i) == 0;
        v13 = 2;
        v14 = i;
        if ( v12 )
        {
          v13 = 1;
          v14 = i;
        }
        ++i;
        sub_37BD4(v14, v13);
        if ( i == 16 )
          goto LABEL_24;
      }
    }
    do
    {
LABEL_24:
      if ( !sub_37F50() )
        goto LABEL_39;
      v15 = 0;
      v16 = 0;
      do
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v16 + 4) == 1 && sub_37D44(v16) == 1 )
          {
            v17 = sub_3A3C4(v16, dword_1AEA80 + 5060);
            if ( v17 >= *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72) )
              v15 = 1;
            if ( (unsigned int)dword_9E31C > 3 )
              break;
          }
          if ( ++v16 == 16 )
            goto LABEL_33;
        }
        snprintf(
          s,
          0x800u,
          "chain = %d, freq_avg = %d, freq_serial_threshold = %d\n",
          v16++,
          v17,
          *(_DWORD *)(*(_DWORD *)dword_1AEA80 + 72));
        sub_47AB4(3, s, 0);
      }
      while ( v16 != 16 );
LABEL_33:
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "is_need_serial = %d\n", v15);
        sub_47AB4(3, s, 0);
      }
      if ( v15 )
      {
LABEL_39:
        if ( !sub_383C0() )
        {
          if ( (unsigned int)dword_9E31C > 3 )
          {
            strcpy(s, "\n");
            sub_47EC8(3, s, 0);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              strcpy(s, ">>>> Do PM grade tuning serial.\n");
              sub_47AB4(3, s, 0);
            }
          }
          for ( j = 0; j != 16; ++j )
          {
            if ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) == 1 && sub_37D44(j) == 1 )
              sub_37BD4(j, 0);
          }
          v29 = 0;
          while ( sub_37EF8() )
          {
            sub_37FA8(2);
            if ( (unsigned int)dword_9E31C > 3 )
            {
              strcpy(s, "\n");
              sub_47EC8(3, s, 0);
              if ( (unsigned int)dword_9E31C > 3 )
              {
                snprintf(s, 0x800u, ">>>> serial round %d:\n", v29++);
                sub_47AB4(3, s, 0);
              }
            }
            while ( sub_37F50() )
            {
              v18 = sub_3AAA8(0);
              if ( v18 )
              {
                if ( (unsigned int)dword_9E31C <= 3 )
                  goto LABEL_38;
                strcpy(s, "Serial tuning failed, exit.\n");
                sub_47AB4(3, s, 0);
                v19 = dword_9E31C;
                goto LABEL_58;
              }
            }
          }
        }
        v19 = dword_9E31C;
        v20 = 0;
        v21 = 4;
        do
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v20 + 4) == 1 )
          {
            v22 = 0;
            v23 = dword_1AEA80 + v21 - 4;
            v24 = v23;
            do
            {
              v25 = *(_DWORD *)(v24 + 4);
              v24 += 4;
              v22 += v25;
            }
            while ( v24 != v21 - 4 + dword_1AEA80 + 312 );
            v26 = *(_DWORD *)dword_1AEA80 + 4 * v20;
            v27 = *(_DWORD *)(v26 + 4);
            if ( v22 < v27 )
            {
              while ( 1 )
              {
                *(_DWORD *)(v23 + 4) = v27;
                v23 += 4;
                if ( v24 == v23 )
                  break;
                v27 = *(_DWORD *)(v26 + 4);
              }
              if ( v19 > 3 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Back to conf freq, chain = %d, pm_freq_avg = %d, conf_freq = %d.\n",
                  v20,
                  v22,
                  *(_DWORD *)(v26 + 4));
                sub_47AB4(3, s, 0);
                v19 = dword_9E31C;
              }
            }
          }
          ++v20;
          v21 += 312;
        }
        while ( v20 != 16 );
        v18 = 0;
        goto LABEL_58;
      }
      v18 = sub_3AAA8(1);
    }
    while ( !v18 );
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_38;
    strcpy(s, "Parallel tuning failed, exit.\n");
    sub_47AB4(3, s, 0);
    v19 = dword_9E31C;
LABEL_58:
    if ( v19 > 3 )
    {
      strcpy(s, "Dump PM grade tuning result:\n");
      sub_47AB4(3, s, 0);
    }
LABEL_38:
    sub_3A79C(255, dword_1AEA80 + 4, 0);
    return v18;
  }
}
