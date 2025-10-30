int __fastcall sub_5717C(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r0
  int *v6; // r5
  int v7; // r4
  double *v8; // r1
  double *v9; // r2
  double v10; // d17
  int v11; // r3
  double v12; // d16
  int v13; // r0
  bool v14; // zf
  int v16; // r0
  int v17; // r0

  v3 = sub_619B8("/dev/audio", 320, a1);
  if ( v3 >= 0 )
  {
    v5 = sub_64B04(0, 4344, 0, 1);
    v6 = *(int **)(a2 + 84);
    v6[5] = a2;
    v6[7] = v3;
    v6[3] = (int)sub_59B0C;
    v6[6] = 0;
    v7 = v5;
    v4 = sub_19084(v6 + 2);
    if ( !v4 )
    {
      close(v3);
      free((void *)v7);
      return v4;
    }
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -10;
    v6[11] = (int)"WWV/H Audio Demodulator/Decoder";
    *(_QWORD *)(v7 + 1088) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 72) = 0x3FF0000000000000LL;
    *(_QWORD *)(v7 + 1096) = 0xBFF0000000000000LL;
    *(_QWORD *)(v7 + 80) = 0x4008000000000000LL;
    *(_QWORD *)(v7 + 1104) = 0xC008000000000000LL;
    v8 = (double *)(v7 + 1120);
    *(_QWORD *)(v7 + 88) = 0x4014000000000000LL;
    v9 = (double *)(v7 + 88);
    *(_QWORD *)(v7 + 1112) = 0xC014000000000000LL;
    v10 = 2.0;
    v11 = 3;
    while ( ++v11 != 128 )
    {
      v12 = v10 + *v9;
      if ( (v11 & 0xF) == 0 )
        v10 = v10 + v10;
      v9[1] = v12;
      ++v9;
      *v8++ = -v12;
    }
    *(_DWORD *)(v7 + 8) = 0;
    v13 = *(_DWORD *)(a2 + 76);
    v14 = v13 == 0;
    *(_DWORD *)(v7 + 3296) = 10;
    *(_DWORD *)(v7 + 12) = (char *)&loc_83124 + 2;
    *(_DWORD *)(v7 + 3520) = 10;
    *(_DWORD *)(v7 + 3408) = 6;
    *(_DWORD *)(v7 + 3744) = 10;
    *(_DWORD *)(v7 + 3632) = 3;
    *(_DWORD *)(v7 + 3856) = 10;
    *(_DWORD *)(v7 + 4080) = 10;
    *(_DWORD *)(v7 + 3968) = 4;
    if ( !v13 )
      v13 = *(_DWORD *)(v7 + 48);
    *(_DWORD *)(v7 + 4192) = 10;
    if ( v14 )
    {
      if ( v13 <= 0 )
      {
LABEL_16:
        v4 = 1;
        sub_57010(a2);
        return v4;
      }
    }
    else if ( (v13 & 0x80) != 0 )
    {
      v16 = sub_64EE8("/dev/icom", 9, 0);
      *(_DWORD *)(v7 + 48) = v16;
      if ( v16 <= 0 )
        goto LABEL_16;
    }
    else
    {
      v17 = sub_64EE8("/dev/icom", 13, 0);
      *(_DWORD *)(v7 + 48) = v17;
      if ( v17 <= 0 )
        goto LABEL_16;
    }
    if ( sub_56DB4(*(_DWORD *)(a2 + 76), *(int **)(a2 + 84), 3) )
    {
      sub_65D40(5, "icom: radio not found");
      close(*(_DWORD *)(v7 + 48));
      *(_DWORD *)(v7 + 48) = 0;
    }
    else
    {
      sub_65D40(5, "icom: autotune enabled");
    }
    goto LABEL_16;
  }
  return 0;
}
