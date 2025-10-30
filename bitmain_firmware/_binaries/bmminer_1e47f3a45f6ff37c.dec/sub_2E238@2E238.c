int __fastcall sub_2E238(int a1)
{
  int v2; // r7
  char *v3; // r8
  char *v4; // r6
  ssize_t v5; // r3
  int v6; // r3
  const char *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // lr
  int v14; // r1
  int v15; // r2
  int v16; // r3
  signed int v17; // r10
  int v18; // r9
  int v19; // r9
  int v20; // r9
  int v21; // r9
  int v22; // r9
  int v23; // r0
  unsigned int v24; // r9
  size_t v25; // r0
  ssize_t v26; // r0
  int v27; // r8
  ssize_t v28; // r11
  int v29; // r3
  char v30; // [sp+10h] [bp-582Ch] BYREF
  char v31[2]; // [sp+11h] [bp-582Bh] BYREF
  socklen_t v32; // [sp+14h] [bp-5828h] BYREF
  char needle[3]; // [sp+18h] [bp-5824h] BYREF
  char v34[5]; // [sp+1Bh] [bp-5821h] BYREF
  _DWORD optval[2]; // [sp+20h] [bp-581Ch] BYREF
  struct sockaddr v36; // [sp+28h] [bp-5814h] BYREF
  char s[2040]; // [sp+38h] [bp-5804h] BYREF
  char v38[10240]; // [sp+838h] [bp-5004h] BYREF
  _DWORD v39[2561]; // [sp+3038h] [bp-2804h] BYREF

  optval[1] = 0;
  optval[0] = 3;
  v32 = 0;
  v2 = 0;
  v30 = 13;
  needle[0] = 13;
  v3 = v38;
  needle[2] = 13;
  strcpy(v31, "\n");
  needle[1] = 10;
  strcpy(v34, "\n");
  v4 = (char *)calloc(1u, 0x6000u);
  memset(v38, 0, sizeof(v38));
  do
  {
    if ( byte_B4120 )
      goto LABEL_6;
    v5 = recvfrom(a1, v3, 10239 - v2, 0, &v36, &v32);
    v2 += v5;
    if ( v5 <= 0 )
    {
      close(a1);
      if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        strcpy((char *)v39, ":statusServiceThread recvfrom<=0");
        sub_3B6AC(7, v39, 0, *(_DWORD *)"m<=0");
      }
      goto LABEL_18;
    }
    v3 = &v38[v2];
    if ( v2 > 10238 )
    {
      close(a1);
      if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        strcpy((char *)v39, "BUFSIZE is too small!");
        sub_3B6AC(7, v39, 0, *(_DWORD *)"oo small!");
      }
      goto LABEL_18;
    }
  }
  while ( !strstr(v38, needle) );
  if ( byte_4B9A22 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6 )
    {
      strcpy((char *)v39, "find http request end flag!");
      sub_3B6AC(7, v39, 0, *(_DWORD *)"quest end flag!");
LABEL_6:
      if ( byte_4B9A22 )
      {
        if ( !byte_5C0EFC )
          goto LABEL_8;
LABEL_10:
        snprintf((char *)v39, 0x800u, "get http=%s", v38);
        sub_3B6AC(7, v39, 0, v6);
      }
    }
    else
    {
LABEL_8:
      if ( byte_4B9A21 || dword_B3094 > 6 )
        goto LABEL_10;
    }
  }
  if ( v38[0] != 71 || v38[1] != 69 || v38[2] != 84 || v38[3] != 32 )
  {
    close(a1);
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)v39, "statusServiceThread not support http command");
      sub_3B6AC(7, v39, 0, *(_DWORD *)"");
    }
    goto LABEL_18;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    close(a1);
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      v8 = "setsockopt SO_SNDTIMEO failed";
      goto LABEL_41;
    }
    goto LABEL_18;
  }
  if ( setsockopt(a1, 1, 20, optval, 8u) )
  {
    close(a1);
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      v8 = "setsockopt SO_RCVTIMEO failed";
LABEL_41:
      v9 = *(_DWORD *)v8;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *((_DWORD *)v8 + 2);
      v12 = *((_DWORD *)v8 + 3);
      v13 = v8 + 16;
      v39[0] = v9;
      v39[1] = v10;
      v39[2] = v11;
      v39[3] = v12;
      v14 = v13[1];
      v15 = v13[2];
      v16 = v13[3];
      v39[4] = *v13;
      v39[5] = v14;
      v39[6] = v15;
      LOWORD(v39[7]) = v16;
      sub_3B6AC(7, v39, 0, v16);
    }
LABEL_18:
    if ( v4 )
      goto LABEL_19;
    return 0;
  }
  if ( off_B4124 )
  {
    if ( ((int (__fastcall *)(char *, char *, int))off_B4124)(v38, v4, 24576) )
    {
      close(a1);
      if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        strcpy((char *)v39, "statusServiceThread exit for Error cmd!");
        sub_3B6AC(7, v39, 0, *(_DWORD *)" Error cmd!");
      }
      goto LABEL_18;
    }
  }
  else if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    strcpy((char *)v39, "No 6060 test case found.");
    sub_3B6AC(7, v39, 0, *(_DWORD *)" case found.");
  }
  v17 = strlen(v4);
  v18 = sprintf((char *)v39, "HTTP/1.0  200  OK%s", &v30);
  v19 = v18 + sprintf((char *)v39 + v18, "Server: SearchFreqServer%s", &v30);
  v20 = sprintf((char *)v39 + v19, "Cache-Control: no-cache%s", &v30) + v19;
  v21 = sprintf((char *)v39 + v20, "Pragma: no-cache%s", &v30) + v20;
  v22 = sprintf((char *)v39 + v21, "Content-Type: text/plain%s", &v30) + v21;
  v23 = sprintf((char *)v39 + v22, "Content-Length: %d%s", v17, &v30);
  sprintf((char *)v39 + v23 + v22, "Connection: Keep-Alive%s", needle);
  if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    strcpy(s, "send http response...\n");
    sub_3B6AC(7, s, 0, *(unsigned __int16 *)"");
  }
  v24 = (unsigned __int8)byte_B4120;
  if ( byte_B4120 )
  {
LABEL_75:
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy(s, "send http data...");
      sub_3B6AC(7, s, 0, *(_DWORD *)"ta...");
    }
    v27 = 0;
    while ( 1 )
    {
      v28 = send(a1, &v4[v27], v17 - v27, 0);
      if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
      {
        snprintf(s, 0x800u, "send http data ret=%d", v28);
        sub_3B6AC(7, s, 0, v29);
      }
      if ( v28 <= 0 )
        break;
      v27 += v28;
      if ( v17 <= v27 || byte_B4120 )
        goto LABEL_94;
    }
    if ( !byte_4B9A22 )
      goto LABEL_99;
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6 )
    {
      strcpy(s, "statusServiceThread send http data error");
      sub_3B6AC(7, s, 0, *(_DWORD *)"p data error");
LABEL_94:
      if ( !byte_4B9A22 )
        goto LABEL_99;
      if ( byte_5C0EFC )
        goto LABEL_98;
    }
    if ( byte_4B9A21 || dword_B3094 > 6 )
    {
LABEL_98:
      strcpy(s, "one client disconnected!");
      sub_3B6AC(7, s, 0, *(_DWORD *)"isconnected!");
    }
LABEL_99:
    close(a1);
    free(v4);
    return v27;
  }
  v25 = strlen((const char *)v39);
  while ( 1 )
  {
    v26 = send(a1, (char *)v39 + v24, v25 - v24, 0);
    if ( v26 == -1 )
      break;
    if ( v26 <= 0 )
      goto LABEL_64;
    v24 += v26;
LABEL_60:
    v25 = strlen((const char *)v39);
    if ( v25 <= v24 || byte_B4120 )
      goto LABEL_75;
  }
  if ( *_errno_location() == 11 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy(s, "statusServiceThread send http timeout, try again...");
      sub_3B6AC(7, s, 0, *(_DWORD *)"gain...");
    }
    usleep(0x186A0u);
    goto LABEL_60;
  }
LABEL_64:
  close(a1);
  if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    strcpy(s, "statusServiceThread send http response error");
    sub_3B6AC(7, s, 0, *(_DWORD *)"");
  }
LABEL_19:
  free(v4);
  return 0;
}
