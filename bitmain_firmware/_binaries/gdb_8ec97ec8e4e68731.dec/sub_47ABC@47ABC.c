FILE *__fastcall sub_47ABC(FILE *result, int a2)
{
  const char *v2; // r3
  FILE *v3; // r4
  FILE *v5; // r2
  socklen_t v6; // r10
  const char *v7; // r12
  unsigned int flags; // r11
  const char *v9; // r3
  int v10; // r0
  int v11; // r2
  unsigned int v12; // r3
  const char *v13; // [sp+18h] [bp-28E8h]
  const char *v14; // [sp+1Ch] [bp-28E4h]
  FILE *stream; // [sp+24h] [bp-28DCh] BYREF
  __uid_t uid; // [sp+28h] [bp-28D8h] BYREF
  unsigned int v17; // [sp+2Ch] [bp-28D4h] BYREF
  unsigned int v18; // [sp+30h] [bp-28D0h] BYREF
  int v19; // [sp+34h] [bp-28CCh] BYREF
  struct sockaddr sa; // [sp+38h] [bp-28C8h] BYREF
  char v21; // [sp+48h] [bp-28B8h] BYREF
  char v22; // [sp+4Ch] [bp-28B4h] BYREF
  int v23; // [sp+50h] [bp-28B0h]
  struct sockaddr v24; // [sp+54h] [bp-28ACh] BYREF
  char v25; // [sp+64h] [bp-289Ch] BYREF
  char v26; // [sp+68h] [bp-2898h] BYREF
  int v27; // [sp+6Ch] [bp-2894h]
  char v28[32]; // [sp+70h] [bp-2890h] BYREF
  char serv[8]; // [sp+90h] [bp-2870h] BYREF
  char v30[32]; // [sp+B0h] [bp-2850h] BYREF
  char s[1024]; // [sp+D0h] [bp-2830h] BYREF
  char v32[1020]; // [sp+4D4h] [bp-242Ch] BYREF
  char v33[8232]; // [sp+8D8h] [bp-2028h] BYREF

  if ( result == (FILE *)2 )
  {
    v2 = "/proc/net/udp";
    if ( a2 )
      v2 = "/proc/net/tcp";
  }
  else
  {
    if ( result != (FILE *)10 )
      return result;
    v2 = "/proc/net/udp6";
    if ( a2 )
      v2 = "/proc/net/tcp6";
  }
  v3 = result;
  result = (FILE *)sub_967F0((int)&stream, (int)v2, "r");
  v5 = stream;
  if ( stream )
  {
    if ( v3 == (FILE *)2 )
      v6 = 16;
    else
      v6 = 28;
    LOWORD(v7) = (unsigned __int16)"INET";
    if ( a2 )
      flags = 3;
    else
      flags = 19;
    HIWORD(v7) = (unsigned int)"INET" >> 16;
    LOWORD(v9) = (unsigned __int16)"STREAM";
    if ( v3 != (FILE *)2 )
      v7 = "INET6";
    HIWORD(v9) = (unsigned int)"STREAM" >> 16;
    if ( !a2 )
      v9 = "DGRAM";
    v14 = v9;
    v13 = v7;
    while ( 1 )
    {
      if ( !fgets(v33, 0x2000, v5)
        || sscanf(
             v33,
             "%*d: %32[0-9A-F]:%X %32[0-9A-F]:%X %X %*X:%*X %*X:%*X %*X %d %*d %*u %*s\n",
             s,
             &v17,
             v32,
             &v18,
             &v19,
             &uid) != 6 )
      {
        goto LABEL_43;
      }
      if ( v3 == (FILE *)2 )
      {
        sscanf(s, "%X", &sa.sa_data[2]);
        sscanf(v32, "%X", &v24.sa_data[2]);
        *(_WORD *)sa.sa_data = __rev16(v17);
        *(_WORD *)v24.sa_data = __rev16(v18);
      }
      else
      {
        sscanf(s, "%8X%8X%8X%8X", &sa.sa_data[6], &sa.sa_data[10], &v21, &v22);
        sscanf(v32, "%8X%8X%8X%8X", &v24.sa_data[6], &v24.sa_data[10], &v25, &v26);
        *(_WORD *)&sa.sa_data[4] = 0;
        *(_WORD *)&v24.sa_data[4] = 0;
        *(_DWORD *)sa.sa_data = (unsigned __int16)__rev16(v17);
        *(_DWORD *)v24.sa_data = (unsigned __int16)__rev16(v18);
        v23 = 0;
        v27 = 0;
      }
      sa.sa_family = (unsigned __int16)v3;
      v24.sa_family = (unsigned __int16)v3;
      if ( getnameinfo(&sa, v6, s, 0x401u, serv, 0x20u, flags) || getnameinfo(&v24, v6, v32, 0x401u, v30, 0x20u, flags) )
      {
LABEL_43:
        if ( feof(stream) )
          goto LABEL_34;
      }
      else
      {
        v10 = (int)sub_47A80(v28, uid);
        v12 = (unsigned __int8)(v19 - 1);
        if ( v12 > 0xA )
          v10 = 7040;
        else
          v11 = 6196;
        if ( v12 > 0xA )
          HIWORD(v10) = 53;
        else
          HIWORD(v11) = 53;
        if ( v12 <= 0xA )
          v10 = *(_DWORD *)(v11 + 4 * v12);
        sub_920B0(
          &unk_47263C,
          "<item><column name=\"local address\">%s</column><column name=\"local port\">%s</column><column name=\"remote a"
          "ddress\">%s</column><column name=\"remote port\">%s</column><column name=\"state\">%s</column><column name=\"u"
          "ser\">%s</column><column name=\"family\">%s</column><column name=\"protocol\">%s</column></item>",
          s,
          serv,
          v32,
          v30,
          v10,
          v28,
          v13,
          v14);
        if ( feof(stream) )
        {
LABEL_34:
          result = stream;
          if ( stream )
            return (FILE *)fclose(stream);
          return result;
        }
      }
      v5 = stream;
    }
  }
  return result;
}
