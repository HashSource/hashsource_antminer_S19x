int __fastcall sub_15740(struct sockaddr *a1, int a2, int a3, int a4)
{
  int sa_family; // r0
  int v9; // r0
  unsigned int v10; // r5
  int v11; // r11
  socklen_t v12; // r2
  int v13; // r6
  const char *v15; // r6
  const char *v16; // r0
  int *v17; // r6
  unsigned int v18; // r5
  const char *v19; // r7
  const char *v20; // r0
  bool v21; // cc
  const char *v22; // r0
  int *v23; // r11
  const char *v24; // r0
  const char *v25; // r0
  int *v26; // r6
  const char *v27; // r0
  const char *v28; // r6
  const char *v29; // r0
  int v30; // r2
  bool v31; // zf
  int v32; // r2
  int v33; // r2
  const char *v34; // r2
  int optval; // [sp+14h] [bp-10h] BYREF
  int v36; // [sp+18h] [bp-Ch] BYREF

  sa_family = a1->sa_family;
  optval = 1;
  v36 = 0;
  if ( sa_family == 10 && !ipv6_works )
    return -1;
  if ( socket(sa_family, 2, 0) == -1 )
  {
    v17 = _errno_location();
    v18 = *v17;
    if ( a1->sa_family == 10 )
      v19 = "6";
    else
      v19 = byte_99528;
    v20 = (const char *)sub_6D2C0(a1);
    sub_65D40(3, "socket(AF_INET%s, SOCK_DGRAM, 0) failed on address %s: %m", v19, v20);
    v21 = v18 > 0x5D;
    if ( v18 != 93 )
      v21 = v18 - 96 > 1;
    if ( v21 )
    {
      *v17 = v18;
      sub_65D40(
        3,
        "unexpected socket() error %m code %d (not EPROTONOSUPPORT nor EAFNOSUPPORT nor EPFNOSUPPORT) - exiting",
        v18);
      exit(1);
    }
    return -1;
  }
  v9 = sub_6D070();
  v10 = v9;
  if ( !a3 )
  {
    if ( !setsockopt(v9, 1, 2, &optval, 4u) )
      goto LABEL_5;
    v15 = "on";
LABEL_20:
    v16 = (const char *)sub_6D2C0(a1);
    sub_65D40(3, "setsockopt SO_REUSEADDR %s fails for address %s: %m", v15, v16);
LABEL_21:
    close(v10);
    return -1;
  }
  if ( setsockopt(v9, 1, 2, &v36, 4u) )
  {
    v15 = "off";
    goto LABEL_20;
  }
LABEL_5:
  v11 = a1->sa_family;
  if ( v11 == 2 )
  {
    if ( setsockopt(v10, 0, 1, &qos, 4u) )
    {
      v23 = qos;
      v24 = (const char *)sub_6D2C0(a1);
      sub_65D40(3, "setsockopt IP_TOS (%02x) fails on address %s: %m", v23, v24);
    }
    if ( a2 )
      sub_1423C(a4, v10, &a1->sa_family);
    v11 = a1->sa_family;
  }
  if ( v11 == 10 )
  {
    if ( setsockopt(v10, 41, 67, &qos, 4u) )
    {
      v26 = qos;
      v27 = (const char *)sub_6D2C0(a1);
      sub_65D40(3, "setsockopt IPV6_TCLASS (%02x) fails on address %s: %m", v26, v27);
    }
    if ( !sub_75110() && setsockopt(v10, 41, 26, &optval, 4u) )
    {
      v25 = (const char *)sub_6D2C0(a1);
      sub_65D40(3, "setsockopt IPV6_V6ONLY on fails on address %s: %m", v25);
    }
    v11 = a1->sa_family;
  }
  if ( !sub_13F60(&a1->sa_family) )
  {
    sub_142F0(v11, 1);
    v11 = a1->sa_family;
  }
  if ( v11 == 2 )
    v12 = 16;
  else
    v12 = 28;
  v13 = bind(v10, a1, v12);
  if ( !sub_13F60(&a1->sa_family) )
    sub_142F0(a1->sa_family, 0);
  if ( v13 < 0 )
  {
    if ( !a3 )
    {
      if ( a1->sa_family == 10 )
        v28 = "6";
      else
        v28 = byte_99528;
      v29 = (const char *)sub_6D2C0(a1);
      v30 = a1->sa_family;
      v31 = v30 == 2;
      if ( v30 == 2 )
        v32 = *(_DWORD *)&a1->sa_data[2];
      else
        v32 = (unsigned __int8)a1->sa_data[6];
      if ( v31 )
        v33 = (v32 & 0xF0) - 224;
      else
        v33 = v32 - 255;
      if ( v33 )
        v34 = byte_99528;
      else
        v34 = " (multicast)";
      sub_65D40(
        3,
        "bind(%d) AF_INET%s %s#%d%s flags 0x%x failed: %m",
        v10,
        v28,
        v29,
        HIBYTE(*(_WORD *)a1->sa_data) | (unsigned __int16)(*(_WORD *)a1->sa_data << 8),
        v34,
        *(_DWORD *)(a4 + 144));
    }
    goto LABEL_21;
  }
  if ( setsockopt(v10, 1, 35, &optval, 4u) )
  {
    v22 = (const char *)sub_6D2C0(a1);
    sub_65D40(7, "setsockopt SO_TIMESTAMPNS on fails on address %s: %m", v22);
  }
  sub_6D244(v10);
  sub_156B8(v10, 0);
  return v10;
}
