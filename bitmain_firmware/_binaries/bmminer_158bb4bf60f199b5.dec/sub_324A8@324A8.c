int __fastcall sub_324A8(int a1, __useconds_t *a2)
{
  int v3; // r0
  unsigned int v4; // r3
  __useconds_t v5; // r1
  int v6; // r11
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r4
  void *v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int i; // r4
  int v19; // r0
  int v20; // r4
  signed int v21; // r5
  int v22; // r2
  int v23; // r10
  int v24; // r0
  int v25; // r0
  __useconds_t v26; // r5
  int v27; // r6
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r9
  int v32; // r7
  char *v33; // r10
  char *v34; // r5
  int j; // r4
  int v36; // t1
  char *v37; // r9
  bool v39; // cc
  int v40[34]; // [sp+0h] [bp-8A4h] BYREF
  int *v41; // [sp+88h] [bp-81Ch]
  void *v42; // [sp+8Ch] [bp-818h]
  __useconds_t useconds; // [sp+90h] [bp-814h]
  char *v44; // [sp+94h] [bp-810h]
  __int16 v45; // [sp+9Ch] [bp-808h]
  char v46; // [sp+9Eh] [bp-806h]
  char s[2052]; // [sp+A0h] [bp-804h] BYREF

  v41 = &dword_9E31C;
  v3 = sub_24858();
  v4 = dword_9E31C;
  v5 = *a2;
  v6 = BYTE2(v3);
  v45 = v3;
  v42 = (void *)BYTE1(v3);
  useconds = v5;
  v46 = BYTE2(v3);
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Send work, max_freq = %d\n", useconds);
    sub_47AB4(4, s, 0);
    v4 = *v41;
  }
  v7 = 3;
  while ( 1 )
  {
    if ( v4 > 4 )
    {
      strcpy(s, "[DEBUG] Set start nonce offset invalid.\n");
      sub_47AB4(4, s, 0);
    }
    v8 = sub_66908(24, 0);
    v9 = sub_6F79C(v8);
    v10 = 0;
    sub_6F7C4(v9 & 0xFFFF70FF | 0x8400);
    do
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * v10 + 4) != 1 )
      {
        if ( ++v10 == 16 )
          goto LABEL_10;
      }
      v11 = (unsigned __int8)v10++;
      sub_74DD0(v11, 1, 0);
    }
    while ( v10 != 16 );
LABEL_10:
    if ( (unsigned int)*v41 > 4 )
    {
      strcpy(s, "[DEBUG] Send null work.\n");
      sub_47AB4(4, s, 0);
    }
    v12 = 0;
    v13 = memset(s, 0, 0x94u);
    s[0] = 1;
    do
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * v12 + 4) != 1 )
      {
        if ( ++v12 == 16 )
          goto LABEL_15;
      }
      while ( (sub_6FF04(v13) & (1 << v12)) == 0 )
        v13 = (void *)sub_4A804(1);
      s[1] = v12++ | 0x80;
      memcpy(v40, &s[16], 0x84u);
      sub_1B010(
        *(unsigned int *)s,
        *(int *)&s[4],
        *(int *)&s[8],
        *(int *)&s[12],
        v40[0],
        v40[1],
        v40[2],
        v40[3],
        v40[4],
        v40[5],
        v40[6],
        v40[7],
        v40[8],
        v40[9],
        v40[10],
        v40[11],
        v40[12],
        v40[13],
        v40[14],
        v40[15],
        v40[16],
        v40[17],
        v40[18],
        v40[19],
        v40[20],
        v40[21],
        v40[22],
        v40[23],
        v40[24],
        v40[25],
        v40[26],
        v40[27],
        v40[28]);
      v13 = (void *)sub_4A804(10);
    }
    while ( v12 != 16 );
LABEL_15:
    v14 = sleep(1u);
    v15 = sub_6F79C(v14);
    sub_6F7C4(v15 & 0xFFFF70FF | 0x8100);
    usleep((__useconds_t)&loc_186A0);
    if ( !--v7 )
      break;
    v4 = *v41;
  }
  sub_1B298(255, 1);
  sub_1B138(255, (int)v42, v6, 1);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  v16 = dword_A0D68;
  do
  {
    while ( *(_DWORD *)(v16 + 4 * v7 + 4) != 1 )
    {
      if ( ++v7 == 16 )
        goto LABEL_25;
    }
    v17 = (unsigned __int8)v7++;
    sub_75458(v17, 0);
    v16 = dword_A0D68;
  }
  while ( v7 != 16 );
LABEL_25:
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(v16 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_29;
    }
    v19 = (unsigned __int8)i;
    sub_7561C(v19);
    v16 = dword_A0D68;
  }
LABEL_29:
  v20 = 3;
  v21 = 30000 - (useconds - 250) / 0x14;
  v22 = (unsigned __int64)(3301836721LL * v21) >> 32;
  do
  {
    v23 = 0;
    while ( *(_DWORD *)(v16 + 4 * v23 + 4) != 1 )
    {
      if ( ++v23 == 16 )
        goto LABEL_35;
LABEL_32:
      v16 = dword_A0D68;
    }
    v24 = (unsigned __int8)v23++;
    sub_756F4(v24, v21 / 333, v22);
    if ( v23 != 16 )
      goto LABEL_32;
LABEL_35:
    usleep((__useconds_t)&loc_186A0);
    --v20;
    v16 = dword_A0D68;
  }
  while ( v20 );
  if ( *(_DWORD *)(dword_A0D68 + 4) == 1 )
    goto LABEL_39;
  while ( ++v20 != 16 )
  {
    while ( *(_DWORD *)(v16 + 4 * v20 + 4) == 1 )
    {
LABEL_39:
      v25 = (unsigned __int8)v20++;
      sub_75718(v25, 8);
      v16 = dword_A0D68;
      if ( v20 == 16 )
        goto LABEL_40;
    }
  }
LABEL_40:
  v26 = v21 + 1000;
  v27 = 8;
  while ( 2 )
  {
    v28 = 0;
    while ( 2 )
    {
      if ( *(_DWORD *)(v16 + 4 * v28 + 4) != 1 )
      {
        if ( ++v28 == 16 )
          break;
        goto LABEL_43;
      }
      v29 = (unsigned __int8)v28++;
      sub_7575C(v29);
      if ( v28 != 16 )
      {
LABEL_43:
        v16 = dword_A0D68;
        continue;
      }
      break;
    }
    usleep(v26);
    if ( --v27 )
    {
      v16 = dword_A0D68;
      continue;
    }
    break;
  }
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_31E2C();
  usleep(0x186A0u);
  sub_1B138(255, (int)v42, v6, 0);
  if ( (unsigned int)*v41 > 4 )
  {
    strcpy(s, "[DEBUG] Get nonce counter, chain.\n");
    sub_47AB4(4, s, 0);
    v39 = (unsigned int)*v41 > 4;
    v42 = *(void **)(dword_1AEA64 + 4);
    if ( v39 )
    {
      snprintf(s, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      sub_47AB4(4, s, 0);
    }
  }
  else
  {
    v42 = *(void **)(dword_1AEA64 + 4);
  }
  memset(v42, 0, 0x4E0u);
  v30 = 5;
  sub_1AD6C(255, 1, 0, 224);
  while ( !sub_32450() )
  {
    usleep((__useconds_t)&loc_186A0);
    if ( !--v30 )
    {
      v44 = s;
      v31 = 95;
      useconds = (__useconds_t)&loc_186A0;
      while ( 1 )
      {
        v32 = 0;
        v33 = (char *)v42 - 1;
        do
        {
          while ( *(_DWORD *)(dword_A0D68 + 4 * v32 + 4) != 1 )
          {
            if ( ++v32 == 16 )
              goto LABEL_62;
          }
          v34 = &v33[78 * v32];
          for ( j = 0; j != 234; j = (unsigned __int8)(j + 3) )
          {
            v36 = (unsigned __int8)*++v34;
            if ( v36 != 1 )
              sub_1AD6C((unsigned __int8)v32, 0, j, 224);
          }
          ++v32;
        }
        while ( v32 != 16 );
LABEL_62:
        usleep(useconds);
        if ( sub_32450() )
          return 0;
        if ( !--v31 )
        {
          v37 = v44;
          if ( (unsigned int)*v41 > 3 )
          {
            snprintf(v44, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            sub_47AB4(3, v37, 0);
          }
          return -1;
        }
      }
    }
  }
  return 0;
}
