int __fastcall sub_2DC34(int a1)
{
  int v1; // r6
  char *v3; // r7
  char *v4; // r8
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
  int v17; // r8
  int v18; // r10
  int v19; // r10
  int v20; // r10
  int v21; // r10
  int v22; // r10
  int v23; // r0
  size_t v24; // r0
  unsigned int v25; // r10
  ssize_t v26; // r0
  ssize_t v27; // r10
  int v28; // r3
  signed int v29; // [sp+Ch] [bp-5838h]
  char v30[4]; // [sp+18h] [bp-582Ch] BYREF
  socklen_t addr_len; // [sp+1Ch] [bp-5828h] BYREF
  char needle[8]; // [sp+20h] [bp-5824h] BYREF
  _DWORD optval[2]; // [sp+28h] [bp-581Ch] BYREF
  struct sockaddr addr; // [sp+30h] [bp-5814h] BYREF
  char v35[2048]; // [sp+40h] [bp-5804h] BYREF
  char s[10240]; // [sp+840h] [bp-5004h] BYREF
  _DWORD v37[2561]; // [sp+3040h] [bp-2804h] BYREF

  v1 = 0;
  optval[0] = 3;
  optval[1] = 0;
  v3 = (char *)calloc(1u, 0x6000u);
  strcpy(v30, "\r\n");
  v4 = s;
  addr_len = 0;
  strcpy(needle, "\r\n\r\n");
  memset(s, 0, sizeof(s));
  do
  {
    if ( byte_B13B0 )
      goto LABEL_6;
    v5 = recvfrom(a1, v4, 10239 - v1, 0, &addr, &addr_len);
    v1 += v5;
    if ( v5 <= 0 )
    {
      close(a1);
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        strcpy((char *)v37, ":statusServiceThread recvfrom<=0");
        sub_3AF5C(7, v37, 0, *(_DWORD *)"m<=0");
      }
      goto LABEL_18;
    }
    v4 = &s[v1];
    if ( v1 > 10238 )
    {
      close(a1);
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        strcpy((char *)v37, "BUFSIZE is too small!");
        sub_3AF5C(7, v37, 0, *(_DWORD *)"oo small!");
      }
      goto LABEL_18;
    }
  }
  while ( !strstr(s, needle) );
  if ( byte_4B6CA6 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
    {
      strcpy((char *)v37, "find http request end flag!");
      sub_3AF5C(7, v37, 0, *(_DWORD *)"quest end flag!");
LABEL_6:
      if ( byte_4B6CA6 )
      {
        if ( !byte_5BC044 )
          goto LABEL_8;
LABEL_10:
        snprintf((char *)v37, 0x800u, "get http=%s", s);
        sub_3AF5C(7, v37, 0, v6);
      }
    }
    else
    {
LABEL_8:
      if ( byte_4B6CA5 || dword_AFC2C > 6 )
        goto LABEL_10;
    }
  }
  if ( s[0] != 71 || s[1] != 69 || s[2] != 84 || s[3] != 32 )
  {
    close(a1);
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)v37, "statusServiceThread not support http command");
      sub_3AF5C(7, v37, 0, *(_DWORD *)"");
    }
    goto LABEL_18;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    close(a1);
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      v8 = "setsockopt SO_SNDTIMEO failed";
      goto LABEL_41;
    }
    goto LABEL_18;
  }
  v17 = setsockopt(a1, 1, 20, optval, 8u);
  if ( v17 )
  {
    close(a1);
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      v8 = "setsockopt SO_RCVTIMEO failed";
LABEL_41:
      v9 = *(_DWORD *)v8;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *((_DWORD *)v8 + 2);
      v12 = *((_DWORD *)v8 + 3);
      v13 = v8 + 16;
      v37[0] = v9;
      v37[1] = v10;
      v37[2] = v11;
      v37[3] = v12;
      v14 = v13[1];
      v15 = v13[2];
      v16 = v13[3];
      v37[4] = *v13;
      v37[5] = v14;
      v37[6] = v15;
      LOWORD(v37[7]) = v16;
      sub_3AF5C(7, v37, 0, v16);
    }
LABEL_18:
    if ( v3 )
      goto LABEL_19;
    return 0;
  }
  if ( off_B13B4 )
  {
    if ( ((int (__fastcall *)(char *, char *, int))off_B13B4)(s, v3, 24576) )
    {
      close(a1);
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        strcpy((char *)v37, "statusServiceThread exit for Error cmd!");
        sub_3AF5C(7, v37, 0, *(_DWORD *)" Error cmd!");
      }
      goto LABEL_18;
    }
  }
  else if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    strcpy((char *)v37, "No 6060 test case found.");
    sub_3AF5C(7, v37, 0, *(_DWORD *)" case found.");
  }
  v29 = strlen(v3);
  v18 = sprintf((char *)v37, "HTTP/1.0  200  OK%s", v30);
  v19 = v18 + sprintf((char *)v37 + v18, "Server: SearchFreqServer%s", v30);
  v20 = v19 + sprintf((char *)v37 + v19, "Cache-Control: no-cache%s", v30);
  v21 = v20 + sprintf((char *)v37 + v20, "Pragma: no-cache%s", v30);
  v22 = v21 + sprintf((char *)v37 + v21, "Content-Type: text/plain%s", v30);
  v23 = sprintf((char *)v37 + v22, "Content-Length: %d%s", v29, v30);
  sprintf((char *)v37 + v22 + v23, "Connection: Keep-Alive%s", needle);
  if ( !byte_4B6CA6 )
  {
    if ( byte_B13B0 )
      goto LABEL_73;
    goto LABEL_56;
  }
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
  {
    strcpy(v35, "send http response...\n");
    sub_3AF5C(7, v35, 0, *(unsigned __int16 *)"");
    if ( !byte_B13B0 )
      goto LABEL_56;
LABEL_69:
    if ( !byte_4B6CA6 )
      goto LABEL_73;
LABEL_113:
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
    {
      strcpy(v35, "send http data...");
      sub_3AF5C(7, v35, 0, *(_DWORD *)"ta...");
    }
    while ( 1 )
    {
LABEL_73:
      v27 = send(a1, &v3[v17], v29 - v17, 0);
      if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
      {
        snprintf(v35, 0x800u, "send http data ret=%d", v27);
        sub_3AF5C(7, v35, 0, v28);
      }
      if ( v27 <= 0 )
        break;
      v17 += v27;
      if ( v29 <= v17 || byte_B13B0 )
        goto LABEL_84;
    }
    if ( !byte_4B6CA6 )
      goto LABEL_89;
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6 )
    {
      strcpy(v35, "statusServiceThread send http data error");
      sub_3AF5C(7, v35, 0, *(_DWORD *)"p data error");
LABEL_84:
      if ( !byte_4B6CA6 )
        goto LABEL_89;
      if ( byte_5BC044 )
        goto LABEL_88;
    }
    if ( byte_4B6CA5 || dword_AFC2C > 6 )
    {
LABEL_88:
      strcpy(v35, "one client disconnected!");
      sub_3AF5C(7, v35, 0, *(_DWORD *)"isconnected!");
    }
LABEL_89:
    close(a1);
    free(v3);
    return v17;
  }
  if ( byte_B13B0 )
    goto LABEL_113;
LABEL_56:
  v24 = strlen((const char *)v37);
  v25 = 0;
  while ( 1 )
  {
    v26 = send(a1, (char *)v37 + v25, v24 - v25, 0);
    if ( v26 == -1 )
      break;
    if ( v26 <= 0 )
      goto LABEL_63;
    v25 += v26;
LABEL_59:
    v24 = strlen((const char *)v37);
    if ( v24 <= v25 || byte_B13B0 )
      goto LABEL_69;
  }
  if ( *_errno_location() == 11 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy(v35, "statusServiceThread send http timeout, try again...");
      sub_3AF5C(7, v35, 0, *(_DWORD *)"gain...");
    }
    usleep((__useconds_t)&off_186A0);
    goto LABEL_59;
  }
LABEL_63:
  close(a1);
  if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
  {
    strcpy(v35, "statusServiceThread send http response error");
    sub_3AF5C(7, v35, 0, *(_DWORD *)"");
  }
LABEL_19:
  free(v3);
  return 0;
}
