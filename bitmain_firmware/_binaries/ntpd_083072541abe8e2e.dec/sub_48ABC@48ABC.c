int __fastcall sub_48ABC(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r0
  int *v6; // r5
  int v7; // r4
  double *v8; // r1
  double *v9; // r2
  double v10; // d6
  int v11; // r3
  double v12; // d7
  __int64 v13; // r2

  v3 = sub_60AC0("/dev/audio", 320, a1);
  if ( v3 < 0 )
    return 0;
  v5 = sub_63BA4(0, 3232, 0, 1);
  v6 = *(int **)(a2 + 84);
  v7 = v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = (int)sub_49588;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( v4 )
  {
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -17;
    v6[11] = (int)"Generic IRIG Audio Driver";
    v6[191] = *(_DWORD *)"IRIG";
    *(_DWORD *)(v7 + 3160) = 1;
    *(_DWORD *)(v7 + 2836) = 127;
    *(_DWORD *)(v7 + 3180) = 2;
    v8 = (double *)(v7 + 1832);
    *(_QWORD *)(v7 + 1800) = 0;
    *(_DWORD *)(v7 + 776) = 0;
    *(_DWORD *)(v7 + 780) = 0;
    *(_QWORD *)(v7 + 784) = 0x3FF0000000000000LL;
    *(_QWORD *)(v7 + 1808) = 0xBFF0000000000000LL;
    *(_QWORD *)(v7 + 792) = 0x4008000000000000LL;
    *(_QWORD *)(v7 + 1816) = 0xC008000000000000LL;
    *(_DWORD *)(v7 + 800) = 0;
    v9 = (double *)(v7 + 800);
    *(_DWORD *)(v7 + 804) = 1075052544;
    v10 = 2.0;
    v11 = 3;
    *(_QWORD *)(v7 + 1824) = 0xC014000000000000LL;
    while ( ++v11 != 128 )
    {
      v12 = *v9 + v10;
      if ( (v11 & 0xF) == 0 )
        v10 = v10 + v10;
      v9[1] = v12;
      ++v9;
      *v8++ = -v12;
    }
    HIDWORD(v13) = (char *)&loc_83124 + 2;
    v4 = 1;
    LODWORD(v13) = 0;
    *(_QWORD *)(v7 + 32) = v13;
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free((void *)v7);
  }
  return v4;
}
