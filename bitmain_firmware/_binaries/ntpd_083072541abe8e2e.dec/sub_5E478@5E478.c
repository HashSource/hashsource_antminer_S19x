int __fastcall sub_5E478(int a1, int a2)
{
  int v4; // r0
  int v5; // r9
  int v6; // r10
  int v7; // r0
  int *v8; // r5
  int v9; // r4
  int v10; // r8
  double *v11; // r2
  double v12; // d6
  double *v13; // r1
  int v14; // r3
  double v15; // d7
  int v16; // r3
  int v17; // r0
  int v19; // r0
  char v20[20]; // [sp+0h] [bp-1Ch] BYREF

  v4 = sub_60AC0("/dev/audio", 240, a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_6C054(v20, 20, "/dev/chu%d", a1);
    v19 = sub_3A298(v20, 7u, 32);
    v6 = v19;
    if ( v19 < 0 )
      return 0;
  }
  else
  {
    v6 = v4;
  }
  v7 = sub_63BA4(0, 4672, 0, 1);
  v8 = *(int **)(a2 + 84);
  v9 = v7;
  *v8 = v7;
  v8[5] = a2;
  v8[7] = v6;
  v8[3] = (int)sub_5EC18;
  v8[6] = 0;
  v10 = sub_18DF0(v8 + 2);
  if ( v10 )
  {
    *(_BYTE *)(a2 + 95) = -10;
    v8[11] = (int)"CHU Audio/Modem Receiver";
    sub_6D4DC(v9 + 924);
    v8[191] = *(_DWORD *)(v9 + 924);
    *(_DWORD *)(v9 + 904) = 0;
    *(_DWORD *)(v9 + 1164) = v5;
    *(_DWORD *)(v9 + 908) = 157482134;
    *(_DWORD *)(v9 + 1144) = 127;
    *(_QWORD *)(v9 + 2192) = 0;
    *(_QWORD *)(v9 + 1168) = 0;
    *(_QWORD *)(v9 + 1176) = 0x3FF0000000000000LL;
    *(_QWORD *)(v9 + 2200) = 0xBFF0000000000000LL;
    *(_QWORD *)(v9 + 1184) = 0x4008000000000000LL;
    *(_QWORD *)(v9 + 2208) = 0xC008000000000000LL;
    v11 = (double *)(v9 + 1192);
    *(_QWORD *)(v9 + 1192) = 0x4014000000000000LL;
    v12 = 2.0;
    v13 = (double *)(v9 + 2224);
    v14 = 3;
    *(_QWORD *)(v9 + 2216) = 0xC014000000000000LL;
    while ( ++v14 != 128 )
    {
      v15 = *v11 + v12;
      if ( (v14 & 0xF) == 0 )
        v12 = v12 + v12;
      v11[1] = v15;
      ++v11;
      *v13++ = -v15;
    }
    v16 = *(_DWORD *)(a2 + 76);
    *(_DWORD *)(v9 + 3232) = 0;
    *(_DWORD *)(v9 + 3236) = (char *)&loc_83124 + 2;
    if ( v16 )
    {
      if ( (v16 & 0x80) != 0 )
        v17 = sub_63F68("/dev/icom", 9, 0);
      else
        v17 = sub_63F68("/dev/icom", 13, 0);
      *(_DWORD *)(v9 + 932) = v17;
    }
    else
    {
      v17 = *(_DWORD *)(v9 + 932);
    }
    if ( v17 > 0 )
    {
      v10 = 1;
      if ( sub_5DFB4(a2) )
      {
        sub_64E00(5, "icom: radio not found");
        close(*(_DWORD *)(v9 + 932));
        *(_DWORD *)(v9 + 932) = 0;
      }
      else
      {
        sub_64E00(5, "icom: autotune enabled");
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
