int __fastcall sub_28188(const char **a1, int a2)
{
  int v2; // r0
  char v7[4]; // [sp+10h] [bp-A14h] BYREF
  char buf; // [sp+810h] [bp-214h] BYREF
  char v9; // [sp+811h] [bp-213h]
  unsigned __int8 v10; // [sp+812h] [bp-212h]
  char v11; // [sp+813h] [bp-211h]
  char v12; // [sp+814h] [bp-210h]
  _BYTE v13[3]; // [sp+815h] [bp-20Fh] BYREF
  char v14; // [sp+A13h] [bp-11h]
  __int16 v15; // [sp+A14h] [bp-10h]
  char v16; // [sp+A17h] [bp-Dh]
  int v17; // [sp+A18h] [bp-Ch]
  int i; // [sp+A1Ch] [bp-8h]

  buf = 5;
  v9 = 1;
  v10 = 0;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v7, 0x800u, "Attempting to negotiate with %s:%s SOCKS5 proxy", a1[155], a1[156]);
    sub_1E4EC(7, v7, 0);
  }
  send(a2, &buf, 3u, 0);
  if ( sub_27A44(a2) != 5 || (v2 = sub_27A44(a2), v2 != v10) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v7, 0x800u, "Bad response from %s:%s SOCKS5 server", a1[155], a1[156]);
      sub_1E4EC(4, v7, 0);
    }
    return 0;
  }
  buf = 5;
  v9 = 1;
  v10 = 0;
  v11 = 3;
  v17 = strlen(a1[154]);
  if ( v17 > 255 )
    v17 = 255;
  v16 = v17;
  v12 = v17;
  sub_2BEFC(v13, a1[154], v17, "util.c", "socks5_negotiate", 2879);
  v15 = atoi(a1[146]);
  *(&buf + v17 + 5) = HIBYTE(v15);
  *(&buf + v17 + 6) = v15;
  send(a2, &buf, v17 + 7, 0);
  if ( sub_27A44(a2) != 5 || sub_27A44(a2) )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v7, 0x800u, "Bad response from %s:%s SOCKS5 server", a1[155], a1[156]);
      sub_1E4EC(4, v7, 0);
    }
    return 0;
  }
  sub_27A44(a2);
  v14 = sub_27A44(a2);
  if ( v14 == 1 )
  {
    for ( i = 0; i <= 3; ++i )
      sub_27A44(a2);
LABEL_37:
    for ( i = 0; i <= 1; ++i )
      sub_27A44(a2);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v7, 0x800u, "Success negotiating with %s:%s SOCKS5 proxy", a1[155], a1[156]);
      sub_1E4EC(7, v7, 0);
    }
    return 1;
  }
  if ( v14 == 3 )
  {
    v17 = sub_27A44(a2);
    for ( i = 0; i < v17; ++i )
      sub_27A44(a2);
    goto LABEL_37;
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v7, 0x800u, "Bad response from %s:%s SOCKS5 server", a1[155], a1[156]);
    sub_1E4EC(4, v7, 0);
  }
  return 0;
}
