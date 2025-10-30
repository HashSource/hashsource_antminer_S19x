int __fastcall sub_47BC4(int a1, int *a2)
{
  int v3; // r0
  void *v4; // r3
  int v5; // r1
  int v6; // r10
  int v7; // r6
  char *v8; // r8
  int v9; // r0
  int v10; // r0
  int v11; // r4
  int v12; // r4
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r10
  int i; // r4
  int v18; // r4
  signed int v19; // r5
  int j; // r8
  __useconds_t v21; // r5
  int v22; // r6
  int k; // r4
  char *v24; // r7
  int v25; // r4
  int v26; // r9
  char *v27; // r11
  int m; // r4
  char *v30; // r4
  int v31; // r3
  int v32; // r7
  char *v33; // r6
  int n; // r5
  int v35; // t1
  char v36; // r0
  char *v37; // r5
  char *v38; // r12
  int v39; // r3
  int v40; // r3
  int v41[34]; // [sp+0h] [bp-8A4h] BYREF
  int v42; // [sp+88h] [bp-81Ch]
  char *s; // [sp+8Ch] [bp-818h]
  int v44; // [sp+90h] [bp-814h]
  int v45; // [sp+94h] [bp-810h]
  __int16 v46; // [sp+9Ch] [bp-808h]
  char v47; // [sp+9Eh] [bp-806h]
  char v48[16]; // [sp+A0h] [bp-804h] BYREF
  _BYTE src[132]; // [sp+B0h] [bp-7F4h] BYREF

  v3 = sub_40D98();
  v4 = off_AFC24;
  v5 = *a2;
  v6 = BYTE2(v3);
  v46 = v3;
  v42 = BYTE1(v3);
  v44 = v5;
  v47 = BYTE2(v3);
  s = v48;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v48, 0x800u, "[DEBUG] Send work, max_freq = %d\n", v44);
    sub_3AF5C(4, v48, 0, v40);
    v4 = off_AFC24;
  }
  v7 = 3;
  v45 = v6;
  v8 = s;
  if ( (unsigned int)v4 > 4 )
    goto LABEL_15;
  while ( 1 )
  {
    v9 = sub_52EA0(24, 0);
    v10 = sub_5B4E4(v9);
    v11 = 0;
    sub_5B518(v10 & 0xFFFF70FF | 0x8400);
    do
    {
      if ( sub_266F0(v11) )
        sub_75C68((unsigned __int8)v11, 1, 0);
      ++v11;
    }
    while ( v11 != 4 );
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v8, "[DEBUG] Send null work.\n");
      sub_3AF5C(4, v8, 0, *(int *)" null work.\n");
    }
    v12 = 0;
    memset(v8, 0, 0x94u);
    v48[0] = 1;
    do
    {
      v13 = sub_266F0(v12);
      if ( v13 )
      {
        while ( (sub_5BDB8(v13) & (1 << v12)) == 0 )
          v13 = sub_3D9D4();
        v48[1] = v12 | 0x80;
        memcpy(v41, src, 0x84u);
        sub_27B6C(
          *(_DWORD *)v8,
          *((_DWORD *)v8 + 1),
          *((_DWORD *)v8 + 2),
          *((_DWORD *)v8 + 3),
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
          v41[12],
          v41[13],
          v41[14],
          v41[15],
          v41[16],
          v41[17],
          v41[18],
          v41[19],
          v41[20],
          v41[21],
          v41[22],
          v41[23],
          v41[24],
          v41[25],
          v41[26],
          v41[27],
          v41[28]);
        sub_3D9D4();
      }
      ++v12;
    }
    while ( v12 != 4 );
    v14 = sleep(1u);
    v15 = sub_5B4E4(v14);
    sub_5B518(v15 & 0xFFFF70FF | 0x8100);
    usleep((__useconds_t)&off_186A0);
    if ( !--v7 )
      break;
    if ( (unsigned int)off_AFC24 > 4 )
    {
LABEL_15:
      strcpy(v8, "[DEBUG] Set start nonce offset invalid.\n");
      sub_3AF5C(4, v8, 0, *(int *)"et invalid.\n");
    }
  }
  v16 = v45;
  sub_281C4(255, 1);
  sub_27C94(255, v42, v16, 1);
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  do
  {
    if ( sub_266F0(v7) )
      sub_763B8((unsigned __int8)v7, 0);
    ++v7;
  }
  while ( v7 != 4 );
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
      sub_768F0((unsigned __int8)i);
  }
  v18 = 3;
  v19 = 30000 - (v44 - 250) / 0x14u;
  do
  {
    for ( j = 0; j != 4; ++j )
    {
      if ( sub_266F0(j) )
        sub_769F8((unsigned __int8)j, v19 / 333);
    }
    usleep((__useconds_t)&off_186A0);
    --v18;
  }
  while ( v18 );
  do
  {
    if ( sub_266F0(v18) )
      sub_76A1C((unsigned __int8)v18, 8);
    ++v18;
  }
  while ( v18 != 4 );
  v21 = v19 + 1000;
  v22 = 8;
  do
  {
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_266F0(k) )
        sub_76A54((unsigned __int8)k);
    }
    usleep(v21);
    --v22;
  }
  while ( v22 );
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  sub_47560();
  usleep((__useconds_t)&off_186A0);
  sub_27C94(255, v42, v16, 0);
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v37 = s;
    v38 = s;
    *(_DWORD *)s = *(_DWORD *)"[DEBUG] Get nonce counter, chain.\n";
    strcpy(v38 + 4, "UG] Get nonce counter, chain.\n");
    sub_3AF5C(4, v37, 0, *(unsigned __int16 *)"");
    v24 = *(char **)(dword_530F00 + 4);
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v37, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      sub_3AF5C(4, v37, 0, v39);
    }
  }
  else
  {
    v24 = *(char **)(dword_530F00 + 4);
  }
  memset(v24, 0, 0x400u);
  v25 = 5;
  sub_27938(255, 1, 0, 224);
  while ( !sub_47B84() )
  {
    usleep((__useconds_t)&off_186A0);
    if ( !--v25 )
    {
      v42 = (int)&off_AFC24;
      v26 = 95;
      v27 = v24;
      while ( 1 )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( sub_266F0(m) )
          {
            v32 = sub_26540();
            if ( v32 )
            {
              v33 = &v27[256 * m];
              for ( n = 0; n != v32; ++n )
              {
                v35 = (unsigned __int8)*v33++;
                if ( v35 != 1 )
                {
                  v36 = sub_265B0();
                  sub_27938((unsigned __int8)m, 0, (unsigned __int8)(v36 * n), 224);
                }
              }
            }
          }
        }
        usleep((__useconds_t)&off_186A0);
        if ( sub_47B84() )
          break;
        if ( !--v26 )
        {
          if ( *(_DWORD *)v42 > 3u )
          {
            v30 = s;
            snprintf(s, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            sub_3AF5C(3, v30, 0, v31);
          }
          return -1;
        }
      }
      return 0;
    }
  }
  return 0;
}
