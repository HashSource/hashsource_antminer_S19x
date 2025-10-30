int __fastcall sub_1EE28(int a1)
{
  char *v2; // r7
  int v3; // r6
  ssize_t v4; // r3
  char v5; // r3
  char *v6; // r12
  char *v7; // r1
  const char *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // lr
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r7
  int v19; // r9
  int v20; // r9
  int v21; // r9
  int v22; // r9
  int v23; // r9
  int v24; // r0
  size_t v25; // r0
  unsigned int v26; // r9
  ssize_t v27; // r0
  ssize_t v28; // r11
  signed int v29; // [sp+8h] [bp-17F8h]
  char v30[4]; // [sp+10h] [bp-17F0h] BYREF
  socklen_t addr_len; // [sp+14h] [bp-17ECh] BYREF
  char needle[8]; // [sp+18h] [bp-17E8h] BYREF
  _DWORD optval[2]; // [sp+20h] [bp-17E0h] BYREF
  struct sockaddr addr; // [sp+28h] [bp-17D8h] BYREF
  char s[2040]; // [sp+38h] [bp-17C8h] BYREF
  char v36[4096]; // [sp+838h] [bp-FC8h] BYREF
  char v37[10240]; // [sp+1838h] [bp+38h] BYREF
  _DWORD v38[11]; // [sp+4038h] [bp+2838h] BYREF
  int v39; // [sp+4064h] [bp+2864h] BYREF

  optval[0] = 3;
  optval[1] = 0;
  v2 = v37;
  memset(v36, 0, sizeof(v36));
  addr_len = 0;
  strcpy(v30, "\r\n");
  v3 = 0;
  strcpy(needle, "\r\n\r\n");
  memset(v37, 0, sizeof(v37));
  do
  {
    if ( byte_A0630 )
      goto LABEL_6;
    v4 = recvfrom(a1, v2, 10239 - v3, 0, &addr, &addr_len);
    v3 += v4;
    if ( v4 <= 0 )
    {
      close(a1);
      if ( !byte_1AECC5 || !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
        return 0;
      strcpy((char *)v38, ":statusServiceThread recvfrom<=0");
      sub_47AB4(7, v38, 0);
      return 0;
    }
    v2 = &v37[v3];
    if ( v3 > 10238 )
    {
      close(a1);
      if ( !byte_1AECC5 || !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
        return 0;
      strcpy((char *)v38, "BUFSIZE is too small!");
      sub_47AB4(7, v38, 0);
      return 0;
    }
  }
  while ( !strstr(v37, needle) );
  if ( byte_1AECC5 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy((char *)v38, "find http request end flag!");
      sub_47AB4(7, v38, 0);
LABEL_6:
      if ( byte_1AECC5 )
      {
        if ( !byte_244080 )
          goto LABEL_8;
LABEL_10:
        snprintf((char *)v38, 0x800u, "get http=%s", v37);
        sub_47AB4(7, v38, 0);
      }
    }
    else
    {
LABEL_8:
      if ( byte_1AECC4 || dword_9E320 > 6 )
        goto LABEL_10;
    }
  }
  if ( v37[0] != 71 || v37[1] != 69 || v37[2] != 84 || v37[3] != 32 )
  {
    close(a1);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      qmemcpy(v38, "statusServiceThread not support http command", sizeof(v38));
      v5 = aStatusservicet[44];
      v6 = (char *)&v39;
      v7 = (char *)v38;
      goto LABEL_18;
    }
    return 0;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    close(a1);
    if ( !byte_1AECC5 || !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      return 0;
    v9 = "setsockopt SO_SNDTIMEO failed";
    goto LABEL_42;
  }
  v18 = setsockopt(a1, 1, 20, optval, 8u);
  if ( v18 )
  {
    close(a1);
    if ( !byte_1AECC5 || !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
      return 0;
    v9 = "setsockopt SO_RCVTIMEO failed";
LABEL_42:
    v10 = *(_DWORD *)v9;
    v11 = *((_DWORD *)v9 + 1);
    v12 = *((_DWORD *)v9 + 2);
    v13 = *((_DWORD *)v9 + 3);
    v14 = v9 + 16;
    v38[0] = v10;
    v38[1] = v11;
    v38[2] = v12;
    v38[3] = v13;
    v15 = v14[1];
    v16 = v14[2];
    v17 = v14[3];
    v38[4] = *v14;
    v38[5] = v15;
    v38[6] = v16;
    LOWORD(v38[7]) = v17;
    sub_47AB4(7, v38, 0);
    return 0;
  }
  if ( !off_A0634 )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      strcpy((char *)v38, "No 6060 test case found.");
      sub_47AB4(7, v38, 0);
    }
LABEL_48:
    v29 = strlen(v36);
    v19 = sprintf((char *)v38, "HTTP/1.0  200  OK%s", v30);
    v20 = v19 + sprintf((char *)v38 + v19, "Server: SearchFreqServer%s", v30);
    v21 = v20 + sprintf((char *)v38 + v20, "Cache-Control: no-cache%s", v30);
    v22 = v21 + sprintf((char *)v38 + v21, "Pragma: no-cache%s", v30);
    v23 = v22 + sprintf((char *)v38 + v22, "Content-Type: text/plain%s", v30);
    v24 = sprintf((char *)v38 + v23, "Content-Length: %d%s", v29, v30);
    sprintf((char *)v38 + v23 + v24, "Connection: Keep-Alive%s", needle);
    if ( !byte_1AECC5 )
    {
      if ( byte_A0630 )
        goto LABEL_70;
      goto LABEL_53;
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy(s, "send http response...\n");
      sub_47AB4(7, s, 0);
      if ( !byte_A0630 )
        goto LABEL_53;
LABEL_66:
      if ( !byte_1AECC5 )
        goto LABEL_70;
    }
    else if ( !byte_A0630 )
    {
LABEL_53:
      v25 = strlen((const char *)v38);
      v26 = 0;
      while ( 1 )
      {
        v27 = send(a1, (char *)v38 + v26, v25 - v26, 0);
        if ( v27 == -1 )
        {
          if ( *_errno_location() != 11 )
          {
LABEL_60:
            close(a1);
            if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
            {
              qmemcpy(s, "statusServiceThread send http response error", 44);
              v5 = aStatusservicet_1[44];
              v6 = &s[44];
              v7 = s;
LABEL_18:
              *v6 = v5;
              sub_47AB4(7, v7, 0);
            }
            return 0;
          }
          if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
          {
            strcpy(s, "statusServiceThread send http timeout, try again...");
            sub_47AB4(7, s, 0);
          }
          usleep((__useconds_t)&loc_186A0);
        }
        else
        {
          if ( v27 <= 0 )
            goto LABEL_60;
          v26 += v27;
        }
        v25 = strlen((const char *)v38);
        if ( v25 <= v26 || byte_A0630 )
          goto LABEL_66;
      }
    }
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy(s, "send http data...");
      sub_47AB4(7, s, 0);
    }
    while ( 1 )
    {
LABEL_70:
      v28 = send(a1, &v36[v18], v29 - v18, 0);
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        snprintf(s, 0x800u, "send http data ret=%d", v28);
        sub_47AB4(7, s, 0);
      }
      if ( v28 <= 0 )
        break;
      v18 += v28;
      if ( v29 <= v18 || byte_A0630 )
        goto LABEL_81;
    }
    if ( !byte_1AECC5 )
      goto LABEL_86;
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
    {
      strcpy(s, "statusServiceThread send http data error");
      sub_47AB4(7, s, 0);
LABEL_81:
      if ( !byte_1AECC5 )
        goto LABEL_86;
      if ( byte_244080 )
        goto LABEL_85;
    }
    if ( byte_1AECC4 || dword_9E320 > 6 )
    {
LABEL_85:
      strcpy(s, "one client disconnected!");
      sub_47AB4(7, s, 0);
    }
LABEL_86:
    close(a1);
    return v18;
  }
  if ( !((int (__fastcall *)(char *, char *, int))off_A0634)(v37, v36, 4096) )
    goto LABEL_48;
  close(a1);
  if ( !byte_1AECC5 || !byte_244080 && !byte_1AECC4 && dword_9E320 <= 6 )
    return 0;
  strcpy((char *)v38, "statusServiceThread exit for Error cmd!");
  sub_47AB4(7, v38, 0);
  return 0;
}
