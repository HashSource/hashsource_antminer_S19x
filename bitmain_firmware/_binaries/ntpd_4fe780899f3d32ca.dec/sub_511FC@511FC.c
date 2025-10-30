bool __fastcall sub_511FC(int a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  speed_t v6; // r10
  int v7; // r0
  int v8; // r10
  const char *v10; // r0
  const char *v11; // r0
  unsigned int v12; // r0
  char *v13; // r0
  const struct addrinfo *v14; // r0
  struct addrinfo *v15; // r5
  int v16; // r0
  int v17; // r7
  const char *v18; // [sp+Ch] [bp-98h]
  struct addrinfo *pai[9]; // [sp+14h] [bp-90h] BYREF
  char v20[20]; // [sp+38h] [bp-6Ch] BYREF
  char buf[88]; // [sp+4Ch] [bp-58h] BYREF

  v4 = *(int **)(a2 + 84);
  v5 = sub_63BA4(0, 48, 0, 1);
  switch ( (*(_DWORD *)(a2 + 76) >> 4) & 7 )
  {
    case 0:
      v6 = 12;
      v18 = "4800";
      break;
    case 1:
      v6 = 13;
      v18 = "9600";
      break;
    case 2:
      v6 = 14;
      v18 = "19200";
      break;
    case 3:
      v6 = 15;
      v18 = "38400";
      break;
    case 4:
      v6 = 4097;
      v18 = "57600";
      break;
    case 5:
      v6 = 4098;
      v18 = "115200";
      break;
    default:
      v6 = 12;
      v18 = "4800 (fallback)";
      break;
  }
  *v4 = v5;
  v4[3] = (int)sub_51584;
  v4[5] = a2;
  v4[7] = -1;
  v4[6] = 0;
  *(_BYTE *)(v5 + 40) = 2;
  *(_DWORD *)(v5 + 4) = -1;
  *(_DWORD *)(v5 + 8) = -1;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  *(_BYTE *)(a2 + 95) = -9;
  v4[191] = 5460039;
  v4[11] = (int)"NMEA GPS Clock";
  if ( (unsigned int)sub_6C054(v20, 20, "/dev/gps%d", a1) > 0x13 )
  {
    v8 = 0;
    v10 = (const char *)sub_6A3FC(a2 + 16);
    sub_64E00(3, "%s clock device name too long", v10);
    return v8;
  }
  v7 = sub_3A298(v20, v6, 1);
  v4[7] = v7;
  if ( v7 > 0 )
  {
LABEL_5:
    if ( (ntp_syslogmask & 0x100) != 0 )
    {
      v11 = (const char *)sub_6A3FC(a2 + 16);
      sub_64E00(5, "%s serial %s open at %s bps", v11, v20, v18);
    }
    return sub_18DF0(v4 + 2) != 0;
  }
  v12 = readlink(v20, buf, 0x50u);
  if ( v12 > 0x4F )
    goto LABEL_28;
  buf[v12] = 0;
  v13 = strchr(buf, 58);
  v8 = (int)v13;
  if ( !v13 )
  {
LABEL_27:
    v4[7] = -1;
    return v8;
  }
  *v13 = 0;
  v14 = (const struct addrinfo *)memset(&pai[1], 0, 0x20u);
  pai[4] = (struct addrinfo *)&byte_6;
  pai[3] = (struct addrinfo *)(&dword_0 + 1);
  v8 = getaddrinfo(buf, (const char *)(v8 + 1), v14, pai);
  if ( v8 )
  {
LABEL_28:
    v4[7] = -1;
    return 0;
  }
  v15 = pai[0];
  if ( !pai[0] )
  {
    freeaddrinfo(0);
    goto LABEL_27;
  }
  do
  {
    v16 = socket(v15->ai_family, v15->ai_socktype, v15->ai_protocol);
    v17 = v16;
    if ( v16 != -1 )
    {
      if ( connect(v16, v15->ai_addr, v15->ai_addrlen) != -1 )
      {
        freeaddrinfo(pai[0]);
        v4[7] = v17;
        goto LABEL_5;
      }
      close(v17);
    }
    v15 = v15->ai_next;
  }
  while ( v15 );
  freeaddrinfo(pai[0]);
  v4[7] = -1;
  return v8;
}
