int __fastcall sub_43D64(int a1, int a2)
{
  int v2; // r6
  char *v5; // r4
  char *v6; // r3
  char *v7; // r7
  char *v8; // r0
  int v9; // r0
  int v10; // r4
  ssize_t v11; // r0
  _BYTE *v12; // r3
  bool v13; // cc
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r12
  int v20; // r1
  ssize_t v21; // r0
  _BYTE *v22; // r3
  int *v23; // r12
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int *v28; // r12
  int v29; // r1
  _DWORD *v30; // r0
  pthread_t newthread; // [sp+4h] [bp-314h] BYREF
  struct sockaddr addr; // [sp+8h] [bp-310h] BYREF
  int v34; // [sp+18h] [bp-300h] BYREF
  int v35; // [sp+1Ch] [bp-2FCh]
  int v36; // [sp+20h] [bp-2F8h]
  int v37; // [sp+24h] [bp-2F4h]
  int v38; // [sp+28h] [bp-2F0h]
  int v39; // [sp+2Ch] [bp-2ECh]
  _BYTE v40[232]; // [sp+30h] [bp-2E8h] BYREF
  _DWORD buf[128]; // [sp+118h] [bp-200h] BYREF
  _BYTE vars0[24]; // [sp+318h] [bp+0h] BYREF

  v2 = dword_6ACE8;
  if ( dword_6ACE8 )
    return -1;
  pthread_mutex_init(&stru_6ACEC, 0);
  if ( a2 )
  {
    v5 = (char *)(a1 + 4);
    v6 = s2;
    v7 = &v5[136 * a2];
    do
    {
      v8 = (char *)memcpy(v6, v5, 0x80u);
      v5 += 136;
      v6 = v8 + 136;
      v9 = *((_DWORD *)v5 - 35);
      *((_DWORD *)v6 - 2) = *((_DWORD *)v5 - 2);
      *((_DWORD *)v6 - 35) = v9;
    }
    while ( v5 != v7 );
  }
  *(_WORD *)&addr.sa_data[6] = 0;
  *(_DWORD *)&addr.sa_data[8] = 0;
  *(_WORD *)&addr.sa_data[12] = 0;
  dword_6ACE4 = a2;
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  *(_WORD *)addr.sa_data = 2646;
  v10 = socket(2, 1, 0);
  if ( v10 < 0 )
  {
    v2 = -4;
    perror("socket err:");
  }
  else
  {
    while ( connect(v10, &addr, 0x10u) < 0 )
    {
      perror("connect err:");
      sleep(1u);
    }
    memset(buf, 0, sizeof(buf));
    v11 = recv(v10, buf, 0x100u, 0);
    v13 = v11 <= 0;
    LOWORD(v14) = (unsigned __int16)"func1 func2 func3 func4";
    if ( v11 > 0 )
      v12 = vars0;
    HIWORD(v14) = (unsigned int)"func1 func2 func3 func4" >> 16;
    if ( v11 > 0 )
      v11 += (ssize_t)v12;
    if ( !v13 )
      *(_BYTE *)(v11 - 512) = 0;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14 + 4;
    v34 = v15;
    v35 = v16;
    v36 = v17;
    v37 = v18;
    v20 = v19[1];
    v38 = *v19;
    v39 = v20;
    memset(v40, 0, sizeof(v40));
    send(v10, &v34, 0x18u, 0);
    v21 = recv(v10, buf, 0x100u, 0);
    LOWORD(v23) = (unsigned __int16)"3f heart-beats 22027";
    if ( v21 > 0 )
      v22 = vars0;
    HIWORD(v23) = (unsigned int)"3f heart-beats 22027" >> 16;
    if ( v21 > 0 )
      v22[v21 - 512] = 0;
    v24 = *v23;
    v25 = v23[1];
    v26 = v23[2];
    v27 = v23[3];
    v28 = v23 + 4;
    v34 = v24;
    v35 = v25;
    v36 = v26;
    v37 = v27;
    v29 = v28[1];
    v38 = *v28;
    LOBYTE(v39) = v29;
    send(v10, &v34, 0x15u, 0);
    dword_6AD04 = v10;
    v30 = malloc(0xCu);
    v30[2] = v10;
    *v30 = 22026;
    pthread_create(&newthread, 0, (void *(*)(void *))sub_437BC, v30);
    dword_6ACE8 = 1;
  }
  return v2;
}
