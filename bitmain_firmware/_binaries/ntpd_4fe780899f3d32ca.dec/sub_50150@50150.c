int __fastcall sub_50150(int a1, int a2)
{
  int v4; // r0
  int v5; // r10
  int v6; // r4
  char *v7; // r0
  int v8; // r8
  int v9; // r7
  unsigned int v10; // r9
  unsigned int v11; // r5
  int v12; // r10
  int v13; // r4
  int v14; // r6
  int v15; // r11
  bool v16; // zf
  _BYTE *v17; // r1
  _BYTE *v18; // r3
  int v19; // r10
  int v20; // r9
  int v21; // r4
  char *v22; // r5
  int v23; // r6
  size_t v24; // r7
  int v26; // r3
  void *v27; // r0
  _BYTE *v28; // r2
  void *v29; // r0
  _BYTE *v30; // r3
  int v31; // [sp+Ch] [bp-198h]
  char *haystack; // [sp+10h] [bp-194h]
  int v33; // [sp+14h] [bp-190h]
  char *v34; // [sp+18h] [bp-18Ch]
  unsigned int v35; // [sp+1Ch] [bp-188h]
  int v36; // [sp+30h] [bp-174h]
  int v37; // [sp+3Ch] [bp-168h]
  unsigned __int8 buf; // [sp+47h] [bp-15Dh] BYREF
  int v39; // [sp+48h] [bp-15Ch] BYREF
  struct termios termios_p; // [sp+4Ch] [bp-158h] BYREF
  char v41[20]; // [sp+88h] [bp-11Ch] BYREF
  _BYTE v42[264]; // [sp+9Ch] [bp-108h] BYREF

  sub_6C054(v41, 19, "/dev/neoclock4x-%d", a1);
  v4 = sub_3A298(v41, 0xBu, 0);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  if ( tcgetattr(v4, &termios_p) < 0 )
  {
    v6 = 0;
    sub_64E00(2, "NeoClock4X(%d): (tcgetattr) can't query serial port settings: %m", a1);
    close(v5);
    return v6;
  }
  v6 = 0;
  termios_p.c_iflag = 261;
  termios_p.c_cflag = 2288;
  termios_p.c_oflag = 0;
  cfsetispeed(&termios_p, 0xBu);
  cfsetospeed(&termios_p, 0xBu);
  if ( tcsetattr(v5, 0, &termios_p) < 0 )
  {
    sub_64E00(2, "NeoClock4X(%d): (tcsetattr) can't set serial port 2400 8N2: %m", a1);
    close(v5);
    return v6;
  }
  if ( ioctl(v5, 0x5415u, &v39) == -1 )
  {
    sub_64E00(2, "NeoClock4X(%d): can't query RTS/DTR state: %m", a1);
    close(v5);
    return v6;
  }
  v39 |= 6u;
  if ( ioctl(v5, 0x5418u, &v39) == -1 )
  {
    sub_64E00(2, "NeoClock4X(%d): can't set RTS/DTR to power neoclock4x: %m", a1);
    close(v5);
    return v6;
  }
  v7 = (char *)sub_63BA4(0, 156, 0, 0);
  v34 = v7;
  if ( !v7 )
  {
    v6 = 0;
    sub_64E00(3, "NeoClock4X(%d): can't allocate memory for: %m", a1);
    close(v5);
    return v6;
  }
  memset(v7, 0, 0x9Cu);
  v8 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)v8 = v34;
  *(_DWORD *)(v8 + 12) = sub_4FA84;
  *(_QWORD *)(v8 + 744) = 0x3FC5B4E81B4E81B5LL;
  *(_DWORD *)(v8 + 20) = a2;
  *(_DWORD *)(v8 + 44) = "NeoClock4X";
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = v5;
  *(_BYTE *)(a2 + 95) = -10;
  *(_DWORD *)(v8 + 764) = *(_DWORD *)"neol";
  v34[16] = 0;
  *((_WORD *)v34 + 4) = a1;
  haystack = v34 + 24;
  v33 = 0;
  sub_6D4DC(v34 + 24);
  v34[104] = 63;
  sub_6D4DC(v34 + 105);
  sub_6D4DC(v34 + 112);
  *((_DWORD *)v34 + 30) = -1;
  *((_DWORD *)v34 + 31) = -1;
  v34[118] = 63;
  *((_DWORD *)v34 + 32) = 0;
  *((_DWORD *)v34 + 33) = 0;
  *((_DWORD *)v34 + 34) = 0;
  *((_DWORD *)v34 + 35) = 0;
  *((_DWORD *)v34 + 36) = 0;
  *((_DWORD *)v34 + 37) = 0;
  *((_DWORD *)v34 + 38) = 0;
  *((_WORD *)v34 + 58) = 16191;
  v37 = v5;
  v36 = a1;
  while ( 1 )
  {
    if ( (ntp_syslogmask & 0x100) != 0 )
      sub_64E00(6, "NeoClock4X(%d): checking NeoClock4X firmware version (%d/5)", v36, v33);
    sleep(3u);
    v9 = *(_DWORD *)(v8 + 28);
    v31 = *((__int16 *)v34 + 4);
    sleep(1u);
    if ( write(v9, "V", 1u) != -1 )
      break;
    sub_64E00(3, "NeoClock4X(%d): can't query firmware version", v31);
    sub_6D4DC(v42);
LABEL_27:
    if ( (unsigned int)sub_6D4DC(haystack) > 0x4F )
      sub_6D4DC(haystack);
    if ( ++v33 == 5 )
    {
      v19 = v37;
      v20 = v36;
      goto LABEL_31;
    }
  }
  v10 = 0;
  sleep(1u);
  v11 = 0;
  memset(v42, 0, 0x100u);
  v12 = 0;
  v35 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 1;
  while ( read(v9, &buf, 1u) == -1 )
  {
    if ( *_errno_location() == 11 )
    {
      sleep(1u);
    }
    else
    {
      ++v14;
      sub_64E00(7, "NeoClock4x(%d): read: %m", v31);
    }
LABEL_15:
    if ( v14 == 6 )
    {
      sub_64E00(3, "NeoClock4X(%d): can't read firmware version (timeout)", v31);
      sub_6D4DC(v42);
      goto LABEL_27;
    }
    if ( v13 == 501 )
    {
      sub_64E00(3, "NeoClock4X(%d): can't read firmware version (garbage)", v31);
      sub_6D4DC(v42);
      goto LABEL_27;
    }
  }
  ++v13;
  if ( v15 )
  {
    if ( buf == 169 )
    {
      v15 = 0;
      sub_6D4DC(v42);
      v11 = 3;
    }
    goto LABEL_15;
  }
  v16 = buf == 13;
  if ( buf != 13 )
    v16 = buf == 10;
  if ( !v16 )
  {
    v12 = 0;
    if ( buf )
    {
      v28 = &v42[v11++ + 260];
      *(v28 - 260) = buf;
    }
LABEL_26:
    v42[v11] = 0;
    if ( v11 > 0xFB )
      goto LABEL_27;
    goto LABEL_15;
  }
  if ( !v12 )
  {
    v12 = 1;
    goto LABEL_26;
  }
  if ( !strstr(&v42[v35], "S/N") )
  {
    v17 = &v42[v11 + 260];
    v18 = &v42[v11 + 262];
    v10 = v11;
    v11 += 3;
    *(v17 - 259) = 47;
    *(v17 - 260) = 32;
    v35 = v11;
    *(v18 - 260) = 32;
    goto LABEL_26;
  }
  v30 = &v42[v10 + 260];
  v19 = v37;
  v20 = v36;
  *(v30 - 260) = 0;
  if ( (unsigned int)sub_6D4DC(haystack) > 0x4F )
    sub_6D4DC(haystack);
  if ( (ntp_syslogmask & 0x100) != 0 )
    sub_64E00(6, "NeoClock4X(%d): firmware version: %s", v31, haystack);
  if ( strstr(haystack, "/R2") )
    sub_64E00(
      6,
      "NeoClock4X(%d): Your NeoClock4X uses the new R2 firmware release. Please note the changed LED behaviour.",
      v31);
LABEL_31:
  v21 = 63;
  v34[104] = 63;
  v22 = strstr(haystack, "NDF:");
  v23 = *((__int16 *)v34 + 4);
  if ( v22
    && (v24 = strlen(haystack), v24 - strlen(v22) > 6)
    && v22[5] == 58
    && v22[6] == 42
    && (v21 = (unsigned __int8)v22[4], v34[104] = v21, v21 == 65) )
  {
    v6 = sub_18DF0((int *)(v8 + 8));
    if ( v6 )
    {
      v6 = 1;
      if ( (ntp_syslogmask & 0x100) != 0 )
        sub_64E00(6, "NeoClock4X(%d): receiver setup successful done", v20);
    }
    else
    {
      sub_64E00(3, "NeoClock4X(%d): error add peer to ntpd: %m", v20);
      close(v19);
      v29 = *(void **)v8;
      *(_DWORD *)(v8 + 28) = -1;
      free(v29);
      *(_DWORD *)v8 = 0;
    }
  }
  else
  {
    v26 = v21;
    v6 = 0;
    sub_64E00(2, "NeoClock4X(%d): firmware version \"%c\" not supported with this driver version!", v23, v26);
    close(v19);
    v27 = *(void **)v8;
    *(_DWORD *)(v8 + 28) = -1;
    free(v27);
    *(_DWORD *)v8 = 0;
  }
  return v6;
}
