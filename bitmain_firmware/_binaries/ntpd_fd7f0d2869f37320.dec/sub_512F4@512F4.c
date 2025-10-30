int __fastcall sub_512F4(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  char *v5; // r0
  char *v6; // r11
  void **v7; // lr
  int v8; // r7
  int v9; // r11
  unsigned int v10; // r5
  int v11; // r9
  int v12; // r4
  int v13; // r6
  int v14; // r10
  bool v15; // zf
  _BYTE *v16; // r1
  _BYTE *v17; // r3
  char *v18; // r11
  int v19; // r4
  char *v20; // r0
  __int16 v21; // r6
  char *v22; // r5
  size_t v23; // r7
  void *v24; // r0
  _BYTE *v26; // r2
  void *v27; // r0
  int v28; // r4
  int fd; // [sp+8h] [bp-19Ch]
  unsigned int v30; // [sp+Ch] [bp-198h]
  char *haystack; // [sp+10h] [bp-194h]
  unsigned int v33; // [sp+20h] [bp-184h]
  void **v34; // [sp+24h] [bp-180h]
  char *v35; // [sp+2Ch] [bp-178h]
  int v36; // [sp+30h] [bp-174h]
  unsigned __int8 v37; // [sp+47h] [bp-15Dh] BYREF
  int v38; // [sp+48h] [bp-15Ch] BYREF
  struct termios termios_p; // [sp+4Ch] [bp-158h] BYREF
  char v40[20]; // [sp+88h] [bp-11Ch] BYREF
  _BYTE v41[264]; // [sp+9Ch] [bp-108h] BYREF

  sub_6D00C(v40, 19, "/dev/neoclock4x-%d", a1);
  v3 = sub_3AA90(v40, 0xBu, 0);
  fd = v3;
  if ( v3 <= 0 )
    return 0;
  if ( tcgetattr(v3, &termios_p) < 0 )
  {
    v4 = 0;
    sub_65D40(2, "NeoClock4X(%d): (tcgetattr) can't query serial port settings: %m", a1);
    close(fd);
    return v4;
  }
  v4 = 0;
  termios_p.c_oflag = 0;
  termios_p.c_iflag = 261;
  termios_p.c_cflag = 2288;
  cfsetispeed(&termios_p, 0xBu);
  cfsetospeed(&termios_p, 0xBu);
  if ( tcsetattr(fd, 0, &termios_p) < 0 )
  {
    sub_65D40(2, "NeoClock4X(%d): (tcsetattr) can't set serial port 2400 8N2: %m", a1);
    close(fd);
    return v4;
  }
  if ( ioctl(fd, 0x5415u, &v38) == -1 )
  {
    sub_65D40(2, "NeoClock4X(%d): can't query RTS/DTR state: %m", a1);
    close(fd);
    return v4;
  }
  v38 |= 6u;
  if ( ioctl(fd, 0x5418u, &v38) == -1 )
  {
    sub_65D40(2, "NeoClock4X(%d): can't set RTS/DTR to power neoclock4x: %m", a1);
    close(fd);
    return v4;
  }
  v5 = (char *)sub_64B04(0, 156, 0, 0);
  v6 = v5;
  if ( !v5 )
  {
    v4 = 0;
    sub_65D40(3, "NeoClock4X(%d): can't allocate memory for: %m", a1);
    close(fd);
    return v4;
  }
  memset(v5, 0, 0x9Cu);
  haystack = v6 + 24;
  v7 = *(void ***)(a2 + 84);
  v7[11] = "NeoClock4X";
  v7[3] = sub_50C2C;
  v7[186] = (void *)458129845;
  v7[187] = (void *)1069921512;
  v7[5] = (void *)a2;
  *v7 = v6;
  v7[6] = 0;
  v7[7] = (void *)fd;
  v34 = v7;
  *(_BYTE *)(a2 + 95) = -10;
  v7[191] = *(void **)"neol";
  *((_WORD *)v6 + 4) = a1;
  v6[16] = 0;
  sub_6E4B4(v6 + 24);
  v6[104] = 63;
  sub_6E4B4(v6 + 105);
  sub_6E4B4(v6 + 112);
  *((_DWORD *)v6 + 30) = -1;
  *((_DWORD *)v6 + 31) = -1;
  v6[116] = 63;
  v6[117] = 63;
  v36 = 0;
  v6[118] = 63;
  *((_DWORD *)v6 + 32) = 0;
  *((_DWORD *)v6 + 33) = 0;
  *((_DWORD *)v6 + 34) = 0;
  *((_DWORD *)v6 + 35) = 0;
  *((_DWORD *)v6 + 36) = 0;
  *((_DWORD *)v6 + 37) = 0;
  *((_DWORD *)v6 + 38) = 0;
  v35 = v6;
  while ( 1 )
  {
    if ( (ntp_syslogmask & 0x100) != 0 )
      sub_65D40(6, "NeoClock4X(%d): checking NeoClock4X firmware version (%d/5)", a1, v36);
    sleep(3u);
    v8 = (int)v34[7];
    v9 = *((__int16 *)v35 + 4);
    sleep(1u);
    if ( write(v8, "V", 1u) != -1 )
      break;
    sub_65D40(3, "NeoClock4X(%d): can't query firmware version", v9);
    sub_6E4B4(v41);
LABEL_27:
    if ( (unsigned int)sub_6E4B4(haystack) > 0x4F )
      sub_6E4B4(haystack);
    if ( ++v36 == 5 )
    {
      v18 = v35;
      goto LABEL_31;
    }
  }
  v10 = 0;
  sleep(1u);
  memset(v41, 0, 0x100u);
  v33 = 0;
  v11 = 0;
  v30 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1;
  while ( 1 )
  {
    if ( read(v8, &v37, 1u) == -1 )
    {
      if ( *_errno_location() == 11 )
      {
        sleep(1u);
      }
      else
      {
        ++v13;
        sub_65D40(7, "NeoClock4x(%d): read: %m", v9);
        if ( v13 > 5 )
        {
          sub_65D40(3, "NeoClock4X(%d): can't read firmware version (timeout)", v9);
          sub_6E4B4(v41);
          goto LABEL_27;
        }
      }
      goto LABEL_16;
    }
    ++v12;
    if ( !v14 )
      break;
    if ( v37 == 169 )
    {
      v14 = 0;
      sub_6E4B4(v41);
      v10 = 3;
    }
    else
    {
      v14 = 1;
    }
LABEL_16:
    if ( v12 > 500 )
    {
      sub_65D40(3, "NeoClock4X(%d): can't read firmware version (garbage)", v9);
      sub_6E4B4(v41);
      goto LABEL_27;
    }
  }
  v15 = v37 == 10;
  if ( v37 != 10 )
    v15 = v37 == 13;
  if ( !v15 )
  {
    v11 = 0;
    if ( v37 )
    {
      v26 = &v41[v10++ + 260];
      *(v26 - 260) = v37;
    }
LABEL_26:
    v41[v10] = 0;
    if ( v10 > 0xFB )
      goto LABEL_27;
    goto LABEL_16;
  }
  if ( !v11 )
  {
    v11 = 1;
    goto LABEL_26;
  }
  if ( !strstr(&v41[v30], "S/N") )
  {
    v16 = &v41[v10 + 260];
    v17 = &v41[v10 + 262];
    v11 = 1;
    v33 = v10;
    v10 += 3;
    *(v16 - 259) = 47;
    v30 = v10;
    *(v16 - 260) = 32;
    *(v17 - 260) = 32;
    goto LABEL_26;
  }
  v28 = v9;
  v18 = v35;
  v41[v33] = 0;
  if ( (unsigned int)sub_6E4B4(haystack) > 0x4F )
    sub_6E4B4(haystack);
  if ( (ntp_syslogmask & 0x100) != 0 )
    sub_65D40(6, "NeoClock4X(%d): firmware version: %s", v28, haystack);
  if ( strstr(haystack, "/R2") )
    sub_65D40(
      6,
      "NeoClock4X(%d): Your NeoClock4X uses the new R2 firmware release. Please note the changed LED behaviour.",
      v28);
LABEL_31:
  v19 = 63;
  v18[104] = 63;
  v20 = strstr(haystack, "NDF:");
  v21 = *((_WORD *)v18 + 4);
  v22 = v20;
  if ( v20
    && (v23 = strlen(haystack), v23 - strlen(v22) > 6)
    && v22[5] == 58
    && v22[6] == 42
    && (v19 = (unsigned __int8)v22[4], v18[104] = v19, v19 == 65) )
  {
    v4 = sub_19084(v34 + 2);
    if ( v4 )
    {
      v4 = 1;
      if ( (ntp_syslogmask & 0x100) != 0 )
        sub_65D40(6, "NeoClock4X(%d): receiver setup successful done", a1);
    }
    else
    {
      sub_65D40(3, "NeoClock4X(%d): error add peer to ntpd: %m", a1);
      close(fd);
      v27 = *v34;
      v34[7] = (void *)-1;
      free(v27);
      *v34 = 0;
    }
  }
  else
  {
    sub_65D40(2, "NeoClock4X(%d): firmware version \"%c\" not supported with this driver version!", v21, v19);
    close(fd);
    v24 = *v34;
    v34[7] = (void *)-1;
    free(v24);
    v4 = 0;
    *v34 = 0;
  }
  return v4;
}
