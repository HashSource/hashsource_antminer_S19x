int __fastcall sub_154A8(struct sockaddr *a1, int a2, int a3, int a4)
{
  int sa_family; // r0
  int *v9; // r6
  unsigned int v10; // r5
  const char *v11; // r7
  const char *v12; // r0
  bool v13; // cc
  unsigned int v14; // r5
  int v16; // r0
  int v17; // r11
  socklen_t v18; // r2
  int v19; // r6
  const char *v20; // r6
  const char *v21; // r0
  int v22; // r0
  const char *v23; // r0
  int *v24; // r6
  const char *v25; // r0
  int *v26; // r11
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r6
  const char *v30; // r0
  int v31; // r2
  int v32; // r3
  unsigned __int16 v33; // r1
  int v34; // r2
  const char *v35; // r2
  int v36; // r0
  int v37; // [sp+14h] [bp-10h] BYREF
  int optval; // [sp+18h] [bp-Ch] BYREF

  sa_family = a1->sa_family;
  v37 = 1;
  optval = 0;
  if ( sa_family == 10 && !ipv6_works )
    return -1;
  if ( socket(sa_family, 2, 0) == -1 )
  {
    v9 = _errno_location();
    v10 = *v9;
    if ( a1->sa_family == 10 )
      v11 = "6";
    else
      v11 = byte_97F7C;
    v12 = (const char *)sub_6C2E8(a1);
    sub_64E00(3, "socket(AF_INET%s, SOCK_DGRAM, 0) failed on address %s: %m", v11, v12);
    v13 = v10 > 0x5D;
    if ( v10 != 93 )
      v13 = v10 - 96 > 1;
    if ( v13 )
    {
      *v9 = v10;
      sub_64E00(
        3,
        "unexpected socket() error %m code %d (not EPROTONOSUPPORT nor EAFNOSUPPORT nor EPFNOSUPPORT) - exiting",
        v10);
      exit(1);
    }
    return -1;
  }
  v16 = sub_6C0B8();
  v14 = v16;
  if ( !a3 )
  {
    if ( !setsockopt(v16, 1, 2, &v37, 4u) )
      goto LABEL_13;
    v20 = "on";
LABEL_28:
    v21 = (const char *)sub_6C2E8(a1);
    sub_64E00(3, "setsockopt SO_REUSEADDR %s fails for address %s: %m", v20, v21);
    v22 = v14;
    v14 = -1;
    close(v22);
    return v14;
  }
  if ( setsockopt(v16, 1, 2, &optval, 4u) )
  {
    v20 = "off";
    goto LABEL_28;
  }
LABEL_13:
  v17 = a1->sa_family;
  if ( v17 == 2 )
  {
    if ( setsockopt(v14, 0, 1, &qos, 4u) )
    {
      v26 = qos;
      v27 = (const char *)sub_6C2E8(a1);
      sub_64E00(3, "setsockopt IP_TOS (%02x) fails on address %s: %m", v26, v27);
    }
    if ( a2 )
      sub_1400C(a4, v14, &a1->sa_family);
    v17 = a1->sa_family;
  }
  if ( v17 == 10 )
  {
    if ( setsockopt(v14, 41, 67, &qos, 4u) )
    {
      v24 = qos;
      v25 = (const char *)sub_6C2E8(a1);
      sub_64E00(3, "setsockopt IPV6_TCLASS (%02x) fails on address %s: %m", v24, v25);
    }
    if ( !sub_740D8() && setsockopt(v14, 41, 26, &v37, 4u) )
    {
      v28 = (const char *)sub_6C2E8(a1);
      sub_64E00(3, "setsockopt IPV6_V6ONLY on fails on address %s: %m", v28);
    }
    v17 = a1->sa_family;
  }
  if ( !sub_13D38(&a1->sa_family) )
  {
    sub_140C0(v17, 1);
    v17 = a1->sa_family;
  }
  if ( v17 == 2 )
    v18 = 16;
  else
    v18 = 28;
  v19 = bind(v14, a1, v18);
  if ( !sub_13D38(&a1->sa_family) )
    sub_140C0(a1->sa_family, 0);
  if ( v19 < 0 )
  {
    if ( !a3 )
    {
      if ( a1->sa_family == 10 )
        v29 = "6";
      else
        v29 = byte_97F7C;
      v30 = (const char *)sub_6C2E8(a1);
      v32 = a1->sa_family;
      if ( v32 == 2 )
        v31 = *(_DWORD *)&a1->sa_data[2];
      v33 = __rev16(*(unsigned __int16 *)a1->sa_data);
      if ( v32 == 2 )
        v34 = (v31 & 0xF0) - 224;
      else
        v34 = (unsigned __int8)a1->sa_data[6] - 255;
      if ( v34 )
        v35 = byte_97F7C;
      else
        v35 = " (multicast)";
      sub_64E00(3, "bind(%d) AF_INET%s %s#%d%s flags 0x%x failed: %m", v14, v29, v30, v33, v35, *(_DWORD *)(a4 + 144));
    }
    v36 = v14;
    v14 = -1;
    close(v36);
  }
  else
  {
    if ( setsockopt(v14, 1, 35, &v37, 4u) )
    {
      v23 = (const char *)sub_6C2E8(a1);
      sub_64E00(7, "setsockopt SO_TIMESTAMPNS on fails on address %s: %m", v23);
    }
    sub_6C26C(v14);
    sub_15420(v14, 0);
  }
  return v14;
}
