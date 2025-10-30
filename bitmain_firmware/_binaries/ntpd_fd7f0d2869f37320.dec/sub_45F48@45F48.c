bool __fastcall sub_45F48(__int64 a1)
{
  int v1; // r8
  int v2; // r7
  int v3; // r4
  char **v4; // r6
  const char *v5; // r7
  const char *v6; // r8
  int v7; // r11
  const char *v8; // r0
  _BOOL4 result; // r0
  int *v10; // r5
  int v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r3
  char v19; // r3
  int v20; // r3
  int v21; // r2
  char v22; // r3
  const char *v23; // r0
  int v24; // [sp+8h] [bp-8Ch]
  int v25; // [sp+14h] [bp-80h]
  int v26; // [sp+18h] [bp-7Ch]
  _BYTE v27[16]; // [sp+20h] [bp-74h] BYREF
  int v28; // [sp+30h] [bp-64h]

  v1 = HIDWORD(a1);
  v24 = a1;
  v2 = *(_DWORD *)(HIDWORD(a1) + 84);
  if ( dword_BE588 )
  {
    if ( dword_BE588 <= 0 )
    {
      LODWORD(a1) = dword_BE574;
      if ( dword_BE574 )
      {
LABEL_8:
        result = a1 != 0;
        dword_BE588 = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v3 = 0;
      v4 = off_B56C4;
      v25 = *(_DWORD *)(HIDWORD(a1) + 84);
      v26 = HIDWORD(a1);
      do
      {
        v5 = off_B56C4[2 * v3];
        v6 = v4[1];
        v4 += 2;
        v7 = dword_BE578[v3++];
        v8 = gai_strerror(v7);
        a1 = sub_65D40(4, "GPSD_JSON: failed to resolve '%s:%s', rc=%d (%s)", v5, v6, v7, v8);
      }
      while ( v3 < dword_BE588 );
      LODWORD(a1) = dword_BE574;
      v2 = v25;
      v1 = v26;
      if ( dword_BE574 )
      {
        if ( v3 )
        {
          a1 = sub_65D40(
                 4,
                 "GPSD_JSON: using '%s:%s' instead of '%s:%s'",
                 off_B56C4[2 * v3],
                 off_B56C4[2 * v3 + 1],
                 "localhost",
                 "gpsd");
          LODWORD(a1) = dword_BE574;
        }
        goto LABEL_8;
      }
    }
    a1 = sub_65D40(3, "%s", "GPSD_JSON: failed to get socket address, giving up.");
    LODWORD(a1) = dword_BE574;
    goto LABEL_8;
  }
  result = dword_BE574 != 0;
LABEL_9:
  if ( !result )
    return result;
  v10 = &dword_BDD70;
  v11 = dword_BDD70;
  if ( dword_BDD70 )
  {
    v12 = v24 & 0x7F;
    if ( *(_DWORD *)(dword_BDD70 + 12) == v12 )
    {
LABEL_24:
      ++*(_DWORD *)(v11 + 4);
      goto LABEL_25;
    }
    while ( 1 )
    {
      v10 = (int *)v11;
      v11 = *(_DWORD *)v11;
      if ( !v11 )
        break;
      if ( *(_DWORD *)(v11 + 12) == v12 )
        goto LABEL_24;
    }
  }
  else
  {
    v12 = v24 & 0x7F;
  }
  v13 = sub_64B04(0, 8796, 0, 1);
  v14 = *(_DWORD *)(v13 + 4);
  v11 = v13;
  *v10 = v13;
  *(_DWORD *)(v13 + 4) = v14 + 1;
  v15 = sub_6B36C(v1 + 16);
  v16 = sub_64C8C(v15);
  *(_DWORD *)(v11 + 136) = -1;
  *(_DWORD *)(v11 + 12) = v12;
  v17 = dword_BE574;
  *(_DWORD *)(v11 + 148) = 10;
  *(_DWORD *)(v11 + 140) = v17;
  *(_DWORD *)(v11 + 20) = v16;
  if ( sub_45E90((void **)(v11 + 24), (int)"%s%u", "/dev/gps", v12) == -1 )
  {
    sub_65D40(3, "%s: clock device name too long", *(const char **)(v11 + 20));
    goto LABEL_19;
  }
  if ( _xstat64(3, *(_DWORD *)(v11 + 24), v27) == -1 || (v28 & 0xF000) != 0x2000 )
  {
    sub_65D40(3, "%s: '%s' is not a character device", *(const char **)(v11 + 20), *(const char **)(v11 + 24));
LABEL_19:
    v18 = *(_DWORD *)(v11 + 4) - 1;
    *(_DWORD *)(v11 + 4) = v18;
    if ( !v18 )
    {
      *v10 = *(_DWORD *)v11;
      free(*(void **)(v11 + 24));
      free((void *)v11);
    }
    result = 0;
    *(_DWORD *)v2 = 0;
    return result;
  }
LABEL_25:
  *(_DWORD *)v2 = v11;
  *(_DWORD *)(v2 + 20) = v1;
  *(_DWORD *)(v2 + 764) = *(_DWORD *)"GPSD";
  *(_DWORD *)(v2 + 12) = sub_46F8C;
  *(_DWORD *)(v2 + 44) = "GPSD JSON client clock";
  *(_DWORD *)(v2 + 28) = -1;
  *(_DWORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 184) = 0;
  if ( v24 <= 127 )
    v19 = -9;
  else
    v19 = -20;
  *(_BYTE *)(v1 + 95) = v19;
  if ( !*(_DWORD *)(v11 + 140) )
  {
    sub_65D40(3, "%s: no GPSD socket address, giving up", *(const char **)(v11 + 20));
    goto LABEL_19;
  }
  if ( (ntp_syslogmask & 0x100) != 0 )
  {
    v23 = (const char *)sub_6B36C(v1 + 16);
    a1 = sub_65D40(5, "%s: startup, device is '%s'", v23, (const char *)*(_DWORD *)(v11 + 24));
  }
  v20 = *(_DWORD *)(v1 + 76) & 3;
  *(_DWORD *)(v11 + 16) = v20;
  if ( v20 == 3 )
  {
    *(_DWORD *)(v11 + 16) = 0;
    if ( v24 <= 127 )
    {
      v21 = **(_DWORD **)(v1 + 84);
LABEL_35:
      *(_BYTE *)(v21 + 132) &= 0xF9u;
      return 1;
    }
  }
  else if ( v24 <= 127 )
  {
    if ( v20 == 2 )
      HIDWORD(a1) = 30;
    v21 = **(_DWORD **)(v1 + 84);
    if ( v20 == 2 )
    {
      v22 = *(_BYTE *)(v21 + 132);
      *(_DWORD *)(v21 + 72) = HIDWORD(a1);
      *(_BYTE *)(v21 + 132) = v22 & 0xEF;
    }
    goto LABEL_35;
  }
  *(_DWORD *)(v11 + 8) = v1;
  return 1;
}
