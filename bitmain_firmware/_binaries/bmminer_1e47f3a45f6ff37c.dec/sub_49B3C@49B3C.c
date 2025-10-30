int __fastcall sub_49B3C(int a1, int *a2)
{
  int v3; // r0
  unsigned int v4; // r3
  int v5; // r11
  char *v6; // r8
  int v7; // r9
  int v8; // r6
  int *v9; // r8
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r5
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r0
  char *v17; // r8
  int i; // r4
  unsigned int v19; // r11
  int v20; // r5
  int j; // r4
  int k; // r4
  int v23; // r5
  int m; // r4
  char *v25; // r6
  int v26; // r4
  int v27; // r11
  char *v28; // r10
  char *v29; // r9
  int n; // r8
  char *v31; // r10
  int v33; // r3
  int v34; // r6
  char *v35; // r5
  int ii; // r4
  int v37; // t1
  char v38; // r0
  int v39; // r3
  int v40; // r3
  int v41[17]; // [sp+0h] [bp-85Ch] BYREF
  int *v42; // [sp+48h] [bp-814h]
  char *s; // [sp+4Ch] [bp-810h]
  __int16 v44; // [sp+54h] [bp-808h]
  char v45; // [sp+56h] [bp-806h]
  unsigned int v46[513]; // [sp+58h] [bp-804h] BYREF

  v42 = &dword_B308C;
  v3 = sub_42988();
  v4 = dword_B308C;
  v5 = *a2;
  v44 = v3;
  v6 = (char *)BYTE1(v3);
  v7 = BYTE2(v3);
  v45 = BYTE2(v3);
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf((char *)v46, 0x800u, "[DEBUG] Send work, max_freq = %d\n", v5);
    sub_3B6AC(4, (const char *)v46, 0, v40);
    v4 = *v42;
  }
  s = v6;
  v8 = 3;
  v9 = v42;
  if ( v4 > 4 )
    goto LABEL_15;
  while ( 1 )
  {
    v10 = sub_5485C(24, 0);
    v11 = 0;
    v12 = sub_69D38(v10);
    sub_69D6C(v12 & 0xFFFF70FF | 0x8400);
    do
    {
      if ( sub_26C0C(v11) )
        sub_790E0((unsigned __int8)v11, 1, 0);
      ++v11;
    }
    while ( v11 != 4 );
    if ( (unsigned int)*v9 > 4 )
    {
      strcpy((char *)v46, "[DEBUG] Send null work.\n");
      sub_3B6AC(4, (const char *)v46, 0, *(int *)" null work.\n");
    }
    v13 = 0;
    memset(v46, 0, 0x54u);
    LOBYTE(v46[0]) = 1;
    do
    {
      v14 = sub_26C0C(v13);
      if ( v14 )
      {
        while ( (sub_6A5C0(v14) & (1 << v13)) == 0 )
          v14 = sub_3E0F0();
        BYTE1(v46[0]) = ~((unsigned int)~(v13 << 25) >> 25);
        memcpy(v41, &v46[4], sizeof(v41));
        sub_280FC(
          v46[0],
          v46[1],
          v46[2],
          v46[3],
          v41[0],
          v41[1],
          v41[2],
          v41[3],
          v41[4],
          v41[5],
          v41[6],
          v41[7],
          v41[8],
          v41[9],
          v41[10],
          v41[11],
          v41[12]);
        sub_3E0F0();
      }
      ++v13;
    }
    while ( v13 != 4 );
    v15 = sleep(1u);
    v16 = sub_69D38(v15);
    sub_69D6C(v16 & 0xFFFF70FF | 0x8100);
    usleep(0x186A0u);
    if ( !--v8 )
      break;
    if ( (unsigned int)*v9 > 4 )
    {
LABEL_15:
      strcpy((char *)v46, "[DEBUG] Set start nonce offset invalid.\n");
      sub_3B6AC(4, (const char *)v46, 0, *(int *)"et invalid.\n");
    }
  }
  v17 = s;
  sub_28758(255, 1);
  sub_28220(255, (int)v17, v7, 1);
  sub_49480();
  usleep(0x186A0u);
  sub_49480();
  usleep(0x186A0u);
  sub_49480();
  usleep(0x186A0u);
  do
  {
    if ( sub_26C0C(v8) )
      sub_79800((unsigned __int8)v8, 0);
    ++v8;
  }
  while ( v8 != 4 );
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_79D34((unsigned __int8)i);
  }
  v19 = v5 - 250;
  v20 = 3;
  do
  {
    for ( j = 0; j != 4; ++j )
    {
      if ( sub_26C0C(j) )
        sub_79E3C((unsigned __int8)j, (int)(30000 - v19 / 0x14) / 333);
    }
    usleep(0x186A0u);
    --v20;
  }
  while ( v20 );
  for ( k = 0; k != 4; ++k )
  {
    if ( sub_26C0C(k) )
      sub_79E60((unsigned __int8)k, 8);
  }
  v23 = 8;
  do
  {
    for ( m = 0; m != 4; ++m )
    {
      if ( sub_26C0C(m) )
        sub_79E98((unsigned __int8)m);
    }
    usleep(31000 - v19 / 0x14);
    --v23;
  }
  while ( v23 );
  sub_49480();
  usleep(0x186A0u);
  sub_49480();
  usleep(0x186A0u);
  sub_49480();
  usleep(0x186A0u);
  sub_28220(255, (int)v17, v7, 0);
  if ( (unsigned int)*v42 > 4 )
  {
    strcpy((char *)v46, "[DEBUG] Get nonce counter, chain.\n");
    sub_3B6AC(4, (const char *)v46, 0, *(int *)"hain.\n");
    v25 = *(char **)(dword_535D8C + 4);
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf((char *)v46, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      sub_3B6AC(4, (const char *)v46, 0, v39);
    }
  }
  else
  {
    v25 = *(char **)(dword_535D8C + 4);
  }
  v26 = 5;
  memset(v25, 0, 0x400u);
  sub_27E80(255, 1, 0, 224);
  while ( !sub_49AFC() )
  {
    usleep(0x186A0u);
    if ( !--v26 )
    {
      s = (char *)v46;
      v27 = 95;
      v28 = v25 - 1;
      while ( 1 )
      {
        v29 = v28;
        for ( n = 0; n != 4; ++n )
        {
          if ( sub_26C0C(n) )
          {
            v34 = sub_26A44();
            if ( v34 )
            {
              v35 = v29;
              for ( ii = 0; ii != v34; ++ii )
              {
                v37 = (unsigned __int8)*++v35;
                if ( v37 != 1 )
                {
                  v38 = sub_26AB4();
                  sub_27E80((unsigned __int8)n, 0, (unsigned __int8)(v38 * ii), 224);
                }
              }
            }
          }
          v29 += 256;
        }
        usleep(0x186A0u);
        if ( sub_49AFC() )
          break;
        if ( !--v27 )
        {
          v31 = s;
          if ( (unsigned int)*v42 > 3 )
          {
            snprintf(s, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            sub_3B6AC(3, v31, 0, v33);
          }
          return -1;
        }
      }
      return 0;
    }
  }
  return 0;
}
