bool __fastcall sub_450E4(int a1, int a2)
{
  int v2; // r7
  int v3; // r6
  int v4; // r4
  const char *v5; // r6
  const char *v6; // r11
  int v7; // r7
  const char *v8; // r0
  _BOOL4 v9; // r5
  int *v10; // r10
  _DWORD *v11; // r4
  int v12; // r11
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r2
  __int64 v17; // r0
  char v18; // r3
  int v19; // r3
  int v20; // r2
  char v21; // r3
  int v23; // r5
  const char *v24; // r0
  void *v26; // r0
  int v28; // [sp+10h] [bp-7Ch]
  _BYTE v30[16]; // [sp+18h] [bp-74h] BYREF
  int v31; // [sp+28h] [bp-64h]

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 84);
  if ( !dword_BD574 )
  {
    v9 = dword_BD560 != 0;
    goto LABEL_7;
  }
  if ( dword_BD574 <= 0 )
  {
    v23 = dword_BD560;
    if ( dword_BD560 )
      goto LABEL_34;
LABEL_38:
    sub_64E00(3, "%s", "GPSD_JSON: failed to get socket address, giving up.");
    v23 = dword_BD560;
    goto LABEL_34;
  }
  v4 = 0;
  v28 = *(_DWORD *)(a2 + 84);
  v5 = "gpsd";
  v6 = "localhost";
  while ( 1 )
  {
    v7 = dword_BD564[v4++];
    v8 = gai_strerror(v7);
    sub_64E00(4, "GPSD_JSON: failed to resolve '%s:%s', rc=%d (%s)", v6, v5, v7, v8);
    if ( v4 >= dword_BD574 )
      break;
    v6 = off_B46C4[2 * v4];
    v5 = off_B46C4[2 * v4 + 1];
  }
  v3 = v28;
  v2 = a2;
  if ( !dword_BD560 )
    goto LABEL_38;
  sub_64E00(
    4,
    "GPSD_JSON: using '%s:%s' instead of '%s:%s'",
    off_B46C4[2 * v4],
    off_B46C4[2 * v4 + 1],
    "localhost",
    "gpsd");
  v23 = dword_BD560;
LABEL_34:
  v9 = v23 != 0;
  dword_BD574 = 0;
LABEL_7:
  if ( !v9 )
    return v9;
  v10 = &dword_BCD5C;
  v11 = (_DWORD *)dword_BCD5C;
  v12 = a1 & 0x7F;
  if ( dword_BCD5C )
  {
    if ( v12 == *(_DWORD *)(dword_BCD5C + 12) )
    {
LABEL_17:
      ++v11[1];
      goto LABEL_18;
    }
    while ( 1 )
    {
      v10 = v11;
      v11 = (_DWORD *)*v11;
      if ( !v11 )
        break;
      if ( v11[3] == v12 )
        goto LABEL_17;
    }
  }
  v11 = (_DWORD *)sub_63BA4(0, 8796, 0, 1);
  v13 = v11[1];
  *v10 = (int)v11;
  v11[1] = v13 + 1;
  v14 = sub_6A3FC(v2 + 16);
  v15 = sub_63D08(v14);
  v11[37] = 10;
  v11[5] = v15;
  v16 = dword_BD560;
  v11[3] = v12;
  v11[34] = -1;
  v11[35] = v16;
  if ( sub_45034((void **)v11 + 6, (int)"%s%u", "/dev/gps", v12) == -1 )
  {
    sub_64E00(3, "%s: clock device name too long", (const char *)v11[5]);
  }
  else
  {
    if ( _xstat64(3, v11[6], v30) != -1 && (v31 & 0xF000) == 0x2000 )
    {
LABEL_18:
      HIDWORD(v17) = -1;
      *(_DWORD *)v3 = v11;
      *(_DWORD *)(v3 + 20) = v2;
      *(_DWORD *)(v3 + 12) = sub_460C4;
      *(_DWORD *)(v3 + 24) = 0;
      *(_BYTE *)(v3 + 56) = 0;
      *(_DWORD *)(v3 + 184) = 0;
      if ( a1 <= 127 )
        v18 = -9;
      else
        v18 = -20;
      *(_DWORD *)(v3 + 764) = *(_DWORD *)"GPSD";
      *(_DWORD *)(v3 + 28) = -1;
      *(_DWORD *)(v3 + 44) = "GPSD JSON client clock";
      *(_BYTE *)(v2 + 95) = v18;
      if ( v11[35] )
      {
        if ( (ntp_syslogmask & 0x100) != 0 )
        {
          v24 = (const char *)sub_6A3FC(v2 + 16);
          v17 = sub_64E00(5, "%s: startup, device is '%s'", v24, (const char *)v11[6]);
        }
        v19 = *(_DWORD *)(v2 + 76) & 3;
        v11[4] = v19;
        if ( v19 == 3 )
        {
          v11[4] = 0;
          if ( a1 <= 127 )
          {
            v20 = **(_DWORD **)(v2 + 84);
LABEL_30:
            *(_BYTE *)(v20 + 132) &= 0xF9u;
            return v9;
          }
        }
        else if ( a1 <= 127 )
        {
          if ( v19 == 2 )
            HIDWORD(v17) = 30;
          v20 = **(_DWORD **)(v2 + 84);
          if ( v19 == 2 )
          {
            v21 = *(_BYTE *)(v20 + 132);
            *(_DWORD *)(v20 + 72) = HIDWORD(v17);
            *(_BYTE *)(v20 + 132) = v21 & 0xEF;
          }
          goto LABEL_30;
        }
        v11[2] = v2;
        return v9;
      }
      sub_64E00(3, "%s: no GPSD socket address, giving up", (const char *)v11[5]);
      goto LABEL_41;
    }
    sub_64E00(3, "%s: '%s' is not a character device", (const char *)v11[5], (const char *)v11[6]);
  }
LABEL_41:
  if ( v11[1]-- == 1 )
  {
    v26 = (void *)v11[6];
    *v10 = *v11;
    free(v26);
    free(v11);
  }
  v9 = 0;
  *(_DWORD *)v3 = 0;
  return v9;
}
