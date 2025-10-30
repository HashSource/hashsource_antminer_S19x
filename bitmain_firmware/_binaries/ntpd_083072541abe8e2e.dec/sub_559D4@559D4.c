int __fastcall sub_559D4(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r0
  int *v6; // r6
  int v7; // r4
  double *v8; // r1
  double v9; // d6
  double *v10; // r2
  int v11; // r3
  double v12; // d7
  int v13; // r0
  int v14; // r0

  v3 = sub_60AC0("/dev/audio", 320, a1);
  if ( v3 < 0 )
    return 0;
  v5 = sub_63BA4(0, 4344, 0, 1);
  v6 = *(int **)(a2 + 84);
  v7 = v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = (int)sub_58E24;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( v4 )
  {
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -10;
    v6[11] = (int)"WWV/H Audio Demodulator/Decoder";
    *(_QWORD *)(v7 + 1088) = 0;
    *(_QWORD *)(v7 + 72) = 0x3FF0000000000000LL;
    *(_QWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 1096) = 0xBFF0000000000000LL;
    *(_QWORD *)(v7 + 80) = 0x4008000000000000LL;
    *(_QWORD *)(v7 + 1104) = 0xC008000000000000LL;
    *(_QWORD *)(v7 + 88) = 0x4014000000000000LL;
    v8 = (double *)(v7 + 1120);
    *(_QWORD *)(v7 + 1112) = 0xC014000000000000LL;
    v9 = 2.0;
    v10 = (double *)(v7 + 88);
    v11 = 3;
    while ( ++v11 != 128 )
    {
      v12 = *v10 + v9;
      if ( (v11 & 0xF) == 0 )
        v9 = v9 + v9;
      v10[1] = v12;
      ++v10;
      *v8++ = -v12;
    }
    v13 = *(_DWORD *)(a2 + 76);
    *(_DWORD *)(v7 + 12) = 536870;
    *(_DWORD *)(v7 + 3408) = 6;
    *(_DWORD *)(v7 + 3632) = 3;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 3296) = 10;
    *(_DWORD *)(v7 + 3520) = 10;
    *(_DWORD *)(v7 + 3744) = 10;
    *(_DWORD *)(v7 + 3856) = 10;
    *(_DWORD *)(v7 + 4080) = 10;
    *(_DWORD *)(v7 + 3968) = 4;
    *(_DWORD *)(v7 + 4192) = 10;
    if ( v13 )
    {
      if ( (v13 & 0x80) != 0 )
        v14 = sub_63F68("/dev/icom", 9, 0);
      else
        v14 = sub_63F68("/dev/icom", 13, 0);
      *(_DWORD *)(v7 + 48) = v14;
    }
    else
    {
      v14 = *(_DWORD *)(v7 + 48);
    }
    if ( v14 > 0 )
    {
      if ( sub_55620(*(_DWORD *)(a2 + 76), *(int **)(a2 + 84), 3) )
      {
        sub_64E00(5, "icom: radio not found");
        close(*(_DWORD *)(v7 + 48));
        *(_DWORD *)(v7 + 48) = 0;
      }
      else
      {
        sub_64E00(5, "icom: autotune enabled");
      }
    }
    v4 = 1;
    sub_55870(a2);
  }
  else
  {
    close(v3);
    free((void *)v7);
  }
  return v4;
}
