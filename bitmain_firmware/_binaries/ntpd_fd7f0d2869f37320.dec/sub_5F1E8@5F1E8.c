int __fastcall sub_5F1E8(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  int v6; // r9
  int v7; // r0
  int *v8; // r5
  int v9; // r4
  int v10; // r11
  double *v11; // r2
  double *v12; // r1
  int v13; // r3
  double v14; // d17
  double v15; // d16
  int v16; // r3
  int v17; // r0
  int v19; // r0
  char v20[20]; // [sp+0h] [bp-1Ch] BYREF

  v4 = sub_619B8("/dev/audio", 240, a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_6D00C(v20, 20, "/dev/chu%d", a1);
    v19 = sub_3AA90(v20, 7u, 32);
    v6 = v19;
    if ( v19 < 0 )
      return 0;
  }
  else
  {
    v6 = v4;
  }
  v7 = sub_64B04(0, 4672, 0, 1);
  v8 = *(int **)(a2 + 84);
  v8[5] = a2;
  v8[7] = v6;
  v8[3] = (int)sub_5F960;
  v8[6] = 0;
  v9 = v7;
  *v8 = v7;
  v10 = sub_19084(v8 + 2);
  if ( v10 )
  {
    *(_BYTE *)(a2 + 95) = -10;
    v8[11] = (int)"CHU Audio/Modem Receiver";
    sub_6E4B4(v9 + 924);
    v8[191] = *(_DWORD *)(v9 + 924);
    *(_DWORD *)(v9 + 904) = 0;
    *(_DWORD *)(v9 + 1164) = v5;
    *(_DWORD *)(v9 + 908) = 157482134;
    *(_DWORD *)(v9 + 1144) = 127;
    *(_QWORD *)(v9 + 2192) = 0;
    v11 = (double *)(v9 + 1192);
    *(_QWORD *)(v9 + 1168) = 0;
    *(double *)(v9 + 1176) = 1.0;
    v12 = (double *)(v9 + 2224);
    *(_QWORD *)(v9 + 2200) = 0xBFF0000000000000LL;
    *(_QWORD *)(v9 + 1184) = 0x4008000000000000LL;
    *(_QWORD *)(v9 + 2208) = 0xC008000000000000LL;
    *(_QWORD *)(v9 + 1192) = 0x4014000000000000LL;
    v13 = 3;
    v14 = 2.0;
    *(_QWORD *)(v9 + 2216) = 0xC014000000000000LL;
    while ( ++v13 != 128 )
    {
      v15 = v14 + *v11;
      if ( (v13 & 0xF) == 0 )
        v14 = v14 + v14;
      v11[1] = v15;
      ++v11;
      *v12++ = -v15;
    }
    *(_DWORD *)(v9 + 3232) = 0;
    v16 = *(_DWORD *)(a2 + 76);
    *(_DWORD *)(v9 + 3236) = 536870;
    if ( v16 )
    {
      if ( (v16 & 0x80) != 0 )
        v17 = sub_64EE8("/dev/icom", 9, 0);
      else
        v17 = sub_64EE8("/dev/icom", 13, 0);
      *(_DWORD *)(v9 + 932) = v17;
    }
    else
    {
      v17 = *(_DWORD *)(v9 + 932);
    }
    if ( v17 > 0 )
    {
      v10 = 1;
      if ( sub_5ED84((_DWORD *)a2) )
      {
        sub_65D40(5, "icom: radio not found");
        close(*(_DWORD *)(v9 + 932));
        *(_DWORD *)(v9 + 932) = 0;
      }
      else
      {
        sub_65D40(5, "icom: autotune enabled");
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    close(v6);
    v8[7] = -1;
    free((void *)v9);
    *v8 = 0;
  }
  return v10;
}
