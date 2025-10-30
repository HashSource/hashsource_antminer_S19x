int __fastcall sub_2D30C(const char *a1, int a2)
{
  int v4; // r5
  int v5; // r4
  ssize_t v6; // r0
  char *v7; // r4
  int v8; // r8
  int *v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r6
  _DWORD *v15; // r4
  int v16; // r1
  int v18; // r4
  ssize_t v19; // r0
  size_t v20; // r0
  fd_set *v21; // r3
  __fd_mask v22; // r2
  int v23; // r6
  int v24; // r6
  ssize_t v25; // r0
  const char *v26; // r4
  char *v27; // r0
  char *v28; // r6
  size_t v29; // r10
  _BYTE *v30; // r0
  const char *v31; // r1
  _BYTE *v32; // r11
  int v33; // r6
  int v34; // r10
  _DWORD *v35; // r11
  const char *v36; // r0
  unsigned int *v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r2
  unsigned int *v40; // r3
  unsigned int v41; // r2
  unsigned int *v42; // r3
  unsigned int v43; // r2
  _DWORD *v44; // r0
  const char *v45; // r0
  int v46; // r0
  unsigned int v47; // r3
  unsigned int v48; // r7
  unsigned int *v49; // r3
  unsigned int v50; // r2
  unsigned int v51; // r2
  unsigned int *v52; // r3
  unsigned int v53; // r2
  struct timeval tv; // [sp+14h] [bp-2138h] BYREF
  _DWORD v55[11]; // [sp+1Ch] [bp-2130h] BYREF
  char v56; // [sp+48h] [bp-2104h] BYREF
  fd_set readfds; // [sp+4Ch] [bp-2100h] BYREF
  _WORD s[4098]; // [sp+148h] [bp-2004h] BYREF

  memset(s, 0, 0x2000u);
  v4 = sub_2CAF0(a1, a2);
  if ( v4 < 0 )
  {
    sub_1E938((char *)&readfds, 0x30u);
    printf("%s ", (const char *)&readfds);
    printf("%s : tcp client create failed\n", "get_time_from_pool");
    strcpy(&byte_614B08[1792], "tcp client create failed");
    sub_3CC5C(&byte_614B08[1792], &readfds);
    return -1;
  }
  strcpy((char *)s, "{\"id\":1, \"method\": \"mining.subscribe\", \"params\": [\"gominer/1.0.0\"]}");
  v5 = 0;
  strcpy((char *)&s[33] + 1, "\n");
  while ( 1 )
  {
    v6 = send(v4, (char *)s + v5, 68 - v5, 0);
    v5 += v6;
    if ( v6 == -1 )
      break;
    if ( v5 > 67 )
    {
      if ( strlen((const char *)s) == v5 )
        goto LABEL_11;
LABEL_6:
      sub_1E938((char *)&readfds, 0x30u);
      v7 = &byte_614B08[2048];
      printf("%s ", (const char *)&readfds);
      v8 = -2;
      LOWORD(v9) = (unsigned __int16)"tcp client send failed";
      printf("%s : tcp client send failed\n", "get_time_from_pool");
LABEL_7:
      HIWORD(v9) = (unsigned int)"tcp client send failed" >> 16;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v14 = v9 + 4;
      *(_DWORD *)v7 = v10;
      *((_DWORD *)v7 + 1) = v11;
      *((_DWORD *)v7 + 2) = v12;
      *((_DWORD *)v7 + 3) = v13;
      v15 = v7 + 16;
      v16 = v14[1];
      *v15++ = *v14;
      *(_WORD *)v15 = v16;
      v15 = (_DWORD *)((char *)v15 + 2);
      *(_BYTE *)v15 = BYTE2(v16);
      sub_3CC5C((char *)v15 - 22, &readfds);
      goto LABEL_8;
    }
  }
  if ( strlen((const char *)s) != -1 )
    goto LABEL_6;
LABEL_11:
  v18 = 0;
  strcpy((char *)s, "{\"id\":2, \"method\": \"mining.authorize\", \"params\": [\"user\",\"123\"]}\n");
  do
  {
    v19 = send(v4, (char *)s + v18, 65 - v18, 0);
    v18 += v19;
    if ( v19 == -1 )
    {
      v18 = -1;
      v20 = strlen((const char *)s);
      goto LABEL_15;
    }
  }
  while ( v18 <= 64 );
  v20 = strlen((const char *)s);
LABEL_15:
  if ( v20 != v18 )
  {
    sub_1E938((char *)&readfds, 0x30u);
    v8 = -3;
    printf("%s ", (const char *)&readfds);
    LOWORD(v9) = 19528;
    printf("%s : tcp client send failed\n", "get_time_from_pool");
    v7 = &byte_614B08[2304];
    goto LABEL_7;
  }
  v21 = (fd_set *)&v56;
  do
  {
    v21->__fds_bits[1] = 0;
    v21 = (fd_set *)((char *)v21 + 4);
  }
  while ( v21 != (fd_set *)&readfds.__fds_bits[31] );
  tv.tv_usec = 0;
  v22 = readfds.__fds_bits[v4 >> 5];
  v23 = 1 << (v4 & 0x1F);
  tv.tv_sec = 20;
  readfds.__fds_bits[v4 >> 5] = v22 | v23;
  if ( select(v4 + 1, &readfds, 0, 0, &tv) <= 0 )
    goto LABEL_22;
  if ( (v23 & readfds.__fds_bits[v4 >> 5]) == 0 )
    goto LABEL_22;
  memset(v55, 0, 24);
  v24 = 0;
  sub_3C940(v55);
  printf("prepare recv:%s\n", (const char *)v55);
  while ( 1 )
  {
    v25 = recv(v4, (char *)s + v24, 0x1FFF - v24, 0);
    if ( v25 <= 0 )
      break;
    v24 += v25;
  }
  if ( !v24 )
  {
LABEL_22:
    sub_1E938((char *)&readfds, 0x30u);
    printf("%s ", (const char *)&readfds);
    printf("%s : tcp client recv failed\n", "get_time_from_pool");
    v8 = -4;
    strcpy(&byte_614B08[2560], "tcp client recv failed");
    sub_3CC5C(&byte_614B08[2560], &readfds);
    goto LABEL_8;
  }
  v26 = (const char *)s;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v27 = strchr(v26, 10);
            v28 = v27;
            if ( !v27 )
            {
              v8 = -5;
              goto LABEL_8;
            }
            v29 = v27 - v26;
            v30 = malloc(v27 - v26 + 1);
            v31 = v26;
            v32 = v30;
            v26 = v28 + 1;
            memcpy(v30, v31, v29);
            v32[v29] = 0;
            v33 = sub_7AA44(v32, 0, &readfds);
            free(v32);
            if ( v33 )
              break;
            sub_1E938((char *)v55, 0x30u);
            printf("%s ", (const char *)v55);
            printf(
              "%s : JSON decode failed(%d): %s\n",
              "get_time_from_pool",
              readfds.__fds_bits[0],
              (const char *)&readfds.__fds_bits[23]);
            snprintf(
              &byte_614B08[2816],
              0x100u,
              "JSON decode failed(%d): %s",
              readfds.__fds_bits[0],
              (const char *)&readfds.__fds_bits[23]);
            sub_3CC5C(&byte_614B08[2816], v55);
          }
          v34 = sub_7B2D0(v33, "method");
          if ( v34 )
            break;
          if ( *(_DWORD *)(v33 + 4) != -1 )
          {
            v40 = (unsigned int *)(v33 + 4);
            __dmb(0xBu);
            do
            {
              v41 = __ldrex(v40);
              v39 = v41 - 1;
            }
            while ( __strex(v39, v40) );
LABEL_37:
            if ( !v39 )
              sub_7B714(v33);
          }
        }
        v35 = (_DWORD *)sub_7B2D0(v33, "params");
        if ( v35 )
          break;
        if ( *(_DWORD *)(v33 + 4) != -1 )
        {
          v42 = (unsigned int *)(v33 + 4);
          __dmb(0xBu);
          do
          {
            v43 = __ldrex(v42);
            v39 = v43 - 1;
          }
          while ( __strex(v39, v42) );
          goto LABEL_37;
        }
      }
      v36 = (const char *)sub_7B4A8(v34);
      if ( v36 )
        break;
      if ( *(_DWORD *)(v33 + 4) != -1 )
      {
        v52 = (unsigned int *)(v33 + 4);
        __dmb(0xBu);
        do
        {
          v53 = __ldrex(v52);
          v39 = v53 - 1;
        }
        while ( __strex(v39, v52) );
        goto LABEL_37;
      }
    }
    if ( !strncasecmp(v36, "mining.notify", 0xDu) && *v35 == 1 && (unsigned int)sub_7B3A0(v35) > 6 )
    {
      v44 = (_DWORD *)sub_7B3B4(v35, 7);
      if ( v44 )
      {
        if ( *v44 == 2 )
        {
          v45 = (const char *)sub_7B4A8(v44);
          if ( v45 )
            break;
        }
      }
    }
    if ( *(_DWORD *)(v33 + 4) != -1 )
    {
      v37 = (unsigned int *)(v33 + 4);
      __dmb(0xBu);
      do
      {
        v38 = __ldrex(v37);
        v39 = v38 - 1;
      }
      while ( __strex(v39, v37) );
      goto LABEL_37;
    }
  }
  v46 = strtol(v45, 0, 16);
  v47 = v46;
  if ( v46 )
    v47 = 1;
  v48 = v46;
  if ( (unsigned __int8)byte_614B08[3072] < v47 )
  {
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    gettimeofday(&tv, 0);
    sub_1E938((char *)v55, 0x30u);
    printf("%s ", (const char *)v55);
    printf("%s : ntime_value:%d\n", "set_time_based_notify_ntime", v48);
    snprintf(&byte_614B08[3076], 0x100u, "ntime_value:%d", v48);
    sub_3CC5C(&byte_614B08[3076], v55);
    if ( v48 > tv.tv_sec )
    {
      tv.tv_sec = v48;
      settimeofday(&tv, 0);
      sub_1E938((char *)v55, 0x30u);
      printf("%s ", (const char *)v55);
      printf("%s : settime notify.ntime successfuly, ntimeValue:%d\n", "set_time_based_notify_ntime", v48);
      snprintf(&byte_614B08[3332], 0x100u, "settime notify.ntime successfuly, ntimeValue:%d", v48);
      sub_3CC5C(&byte_614B08[3332], v55);
      byte_614B08[3072] = 1;
    }
  }
  if ( *(_DWORD *)(v33 + 4) == -1 )
    goto LABEL_60;
  v49 = (unsigned int *)(v33 + 4);
  __dmb(0xBu);
  do
  {
    v50 = __ldrex(v49);
    v51 = v50 - 1;
  }
  while ( __strex(v51, v49) );
  if ( v51 )
  {
LABEL_60:
    v8 = 0;
  }
  else
  {
    v8 = 0;
    sub_7B714(v33);
  }
LABEL_8:
  close(v4);
  return v8;
}
