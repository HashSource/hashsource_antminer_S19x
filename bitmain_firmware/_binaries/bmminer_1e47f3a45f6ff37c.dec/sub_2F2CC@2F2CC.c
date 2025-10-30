char *__fastcall sub_2F2CC(const char *a1)
{
  const char *v2; // r4
  char *v3; // r6
  size_t v4; // r5
  size_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  int v8; // r3
  char *v9; // r0
  int v10; // r5
  struct hostent *v11; // r3
  int v12; // r0
  int v13; // r6
  int v14; // r4
  signed int v15; // r5
  ssize_t v16; // r0
  const char *v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r12
  int v23; // r1
  size_t v25; // r7
  size_t v26; // r5
  char *v27; // r0
  char *v28; // r0
  char *v29; // r5
  size_t v30; // r0
  char *v31; // r0
  char *v32; // r4
  _DWORD v33[2]; // [sp+8h] [bp-2008h] BYREF
  char s[1024]; // [sp+10h] [bp-2000h] BYREF
  char dest[1024]; // [sp+410h] [bp-1C00h] BYREF
  struct sockaddr v36[127]; // [sp+810h] [bp-1800h] BYREF
  char v37[4096]; // [sp+1010h] [bp-1000h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(s, 0, sizeof(s));
  memset(dest, 0, sizeof(dest));
  if ( !a1 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      strcpy((char *)v36, "url is null!\n");
      sub_3B6AC(5, v36, 0, *(_DWORD *)"\n");
      return 0;
    }
    return 0;
  }
  if ( strncmp(a1, "http://", 7u) )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      strcpy((char *)v36, "parse url failed!\n");
      sub_3B6AC(5, v36, 0, *(_DWORD *)"iled!\n");
      return 0;
    }
    return 0;
  }
  v2 = a1 + 7;
  v3 = strchr(v2, 47);
  if ( v3 )
  {
    v4 = strlen(v2);
    v5 = strlen(v3);
    v6 = v4 - v5;
    v7 = v5;
    memcpy(s, v2, v6);
    v8 = (unsigned __int8)v3[1];
    s[v6] = 0;
    if ( v8 )
    {
      v25 = v7 - 1;
      memcpy(dest, v3 + 1, v25);
      dest[v25] = 0;
    }
  }
  else
  {
    v26 = strlen(v2);
    memcpy(s, v2, v26);
    s[v26] = 0;
  }
  v9 = strchr(s, 58);
  if ( v9 )
  {
    *v9 = 0;
    v10 = strtol(v9 + 1, 0, 10);
  }
  else
  {
    v10 = 80;
  }
  v11 = gethostbyname(s);
  if ( !v11 )
    goto LABEL_31;
  v36[0].sa_family = 2;
  *(_WORD *)v36[0].sa_data = BYTE1(v10) | (unsigned __int16)((_WORD)v10 << 8);
  *(_DWORD *)&v36[0].sa_data[2] = **(_DWORD **)v11->h_addr_list;
  v12 = socket(2, 1, 0);
  v13 = v12;
  if ( v12 == -1
    || (v33[0] = 10, v33[1] = 0, setsockopt(v12, 1, 21, v33, 8u))
    || (v14 = setsockopt(v13, 1, 20, v33, 8u)) != 0
    || connect(v13, v36, 0x10u) == -1
    || v13 < 0 )
  {
LABEL_31:
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      strcpy((char *)v36, "tcp client create failed\n");
      sub_3B6AC(5, v36, 0, *(_DWORD *)"reate failed\n");
      return 0;
    }
    return 0;
  }
  sprintf(v37, "GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n", dest, s, v10);
  v15 = strlen(v37);
  if ( v15 > 0 )
  {
    while ( 1 )
    {
      v16 = send(v13, &v37[v14], v15 - v14, 0);
      v14 += v16;
      if ( v16 == -1 )
        break;
      if ( v15 <= v14 )
        goto LABEL_34;
    }
    if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 4 )
      return 0;
    v17 = "tcp client send failed\n";
LABEL_23:
    v18 = *(_DWORD *)v17;
    v19 = *((_DWORD *)v17 + 1);
    v20 = *((_DWORD *)v17 + 2);
    v21 = *((_DWORD *)v17 + 3);
    v22 = v17 + 16;
    *(_DWORD *)&v36[0].sa_family = v18;
    *(_DWORD *)&v36[0].sa_data[2] = v19;
    *(_DWORD *)&v36[0].sa_data[6] = v20;
    *(_DWORD *)&v36[0].sa_data[10] = v21;
    v23 = v22[1];
    *(_DWORD *)&v36[1].sa_family = *v22;
    *(_DWORD *)&v36[1].sa_data[2] = v23;
    sub_3B6AC(5, v36, 0, v21);
    return 0;
  }
LABEL_34:
  if ( recv(v13, v37, 0x1000u, 0) <= 0 )
  {
    if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 4 )
      return 0;
    v17 = "tcp client recv failed\n";
    goto LABEL_23;
  }
  close(v13);
  v27 = strstr(v37, "HTTP/1.1");
  if ( !v27 )
    return 0;
  if ( strtol(v27 + 9, 0, 10) != 200 )
    return 0;
  v28 = strstr(v37, "\r\n\r\n");
  v29 = v28;
  if ( !v28 )
    return 0;
  v30 = strlen(v28);
  v31 = (char *)malloc(v30 + 1);
  v32 = v31;
  if ( !v31 )
    return 0;
  strcpy(v31, v29 + 4);
  return v32;
}
