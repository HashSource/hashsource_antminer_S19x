bool __fastcall sub_523C0(int a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  int v6; // r11
  int v7; // r5
  int v8; // r0
  const char *v10; // r0
  const char *v11; // r0
  unsigned int v12; // r0
  char *v13; // r0
  struct addrinfo *v14; // r10
  int v15; // r0
  int v16; // r9
  speed_t v17; // [sp+10h] [bp-9Ch]
  const char *v18; // [sp+14h] [bp-98h]
  struct addrinfo *pai; // [sp+1Ch] [bp-90h] BYREF
  struct addrinfo req; // [sp+20h] [bp-8Ch] BYREF
  char v21[20]; // [sp+40h] [bp-6Ch] BYREF
  char buf[88]; // [sp+54h] [bp-58h] BYREF

  v4 = *(int **)(a2 + 84);
  v5 = sub_64B04(0, 48, 0, 1);
  v6 = v5;
  switch ( (*(_DWORD *)(a2 + 76) >> 4) & 7 )
  {
    case 0:
      v18 = "4800";
      v17 = 12;
      break;
    case 1:
      v18 = "9600";
      v17 = 13;
      break;
    case 2:
      v18 = "19200";
      v17 = 14;
      break;
    case 3:
      v18 = "38400";
      v17 = 15;
      break;
    case 4:
      v18 = "57600";
      v17 = 4097;
      break;
    case 5:
      v18 = "115200";
      v17 = 4098;
      break;
    default:
      v18 = "4800 (fallback)";
      v17 = 12;
      break;
  }
  v7 = 0;
  *v4 = v5;
  v4[3] = (int)sub_52768;
  v4[5] = a2;
  v4[7] = -1;
  v4[6] = 0;
  memset((void *)(v5 + 4), 255, 8u);
  *(_BYTE *)(v6 + 40) = 2;
  memset((void *)(v6 + 16), 0, 0x18u);
  *(_BYTE *)(a2 + 95) = -9;
  v4[11] = (int)"NMEA GPS Clock";
  v4[191] = 5460039;
  if ( (unsigned int)sub_6D00C(v21, 20, "/dev/gps%d", a1) > 0x13 )
  {
    v10 = (const char *)sub_6B36C(a2 + 16);
    sub_65D40(3, "%s clock device name too long", v10);
  }
  else
  {
    v8 = sub_3AA90(v21, v17, 1);
    v4[7] = v8;
    if ( v8 <= 0 )
    {
      v12 = readlink(v21, buf, 0x50u);
      if ( v12 > 0x4F )
        goto LABEL_26;
      buf[v12] = 0;
      v13 = strchr(buf, 58);
      if ( !v13
        || (*v13 = 0,
            req.ai_flags = 0,
            req.ai_family = 0,
            memset(&req.ai_addrlen, 0, 16),
            req.ai_protocol = 6,
            req.ai_socktype = 1,
            (v7 = getaddrinfo(buf, v13 + 1, &req, &pai)) != 0) )
      {
LABEL_26:
        v7 = 0;
        v4[7] = -1;
      }
      else
      {
        v14 = pai;
        if ( pai )
        {
          do
          {
            v15 = socket(v14->ai_family, v14->ai_socktype, v14->ai_protocol);
            v16 = v15;
            if ( v15 != -1 )
            {
              if ( connect(v15, v14->ai_addr, v14->ai_addrlen) != -1 )
              {
                freeaddrinfo(pai);
                v4[7] = v16;
                goto LABEL_5;
              }
              close(v16);
            }
            v14 = v14->ai_next;
          }
          while ( v14 );
          freeaddrinfo(pai);
          v4[7] = -1;
        }
        else
        {
          freeaddrinfo(0);
          v4[7] = -1;
        }
      }
    }
    else
    {
LABEL_5:
      if ( (ntp_syslogmask & 0x100) != 0 )
      {
        v11 = (const char *)sub_6B36C(a2 + 16);
        sub_65D40(5, "%s serial %s open at %s bps", v11, v21, v18);
      }
      return sub_19084(v4 + 2) != 0;
    }
  }
  return v7;
}
