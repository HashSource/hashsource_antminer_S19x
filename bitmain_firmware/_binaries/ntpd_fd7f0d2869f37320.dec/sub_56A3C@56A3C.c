int __fastcall sub_56A3C(double a1, int a2)
{
  int v2; // r4
  _BYTE *v3; // r8
  double v4; // d16
  int v5; // r6
  int *v6; // r7
  double v7; // d17
  int v8; // r5
  double v9; // d0
  int v10; // r2
  int v11; // r3
  double v12; // d16
  double v13; // d17
  double v14; // d16
  double v15; // d0
  int v16; // r3
  double v17; // d16
  double v18; // d18
  int v19; // r2
  char v21[128]; // [sp+34h] [bp-88h] BYREF
  int v22; // [sp+B4h] [bp-8h]

  v2 = HIDWORD(a1);
  v3 = *(_BYTE **)(LODWORD(a1) + 84);
  v4 = *(double *)(HIDWORD(a1) + 40);
  v5 = LODWORD(a1);
  v6 = *(int **)v3;
  v7 = *(double *)(HIDWORD(a1) + 8);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 2196);
  v9 = *(double *)(HIDWORD(a1) + 16);
  v10 = v8 - a2;
  v11 = v10 - 6400;
  if ( v10 - 6400 < 0 )
    v11 = v10 + 473600;
  HIDWORD(a1) = _stack_chk_guard;
  if ( v4 > v7 )
  {
    *(double *)(v2 + 8) = v4;
    *(_DWORD *)(v2 + 24) = v11;
  }
  v22 = HIDWORD(a1);
  v12 = v4 + v9;
  *(double *)(v2 + 16) = v12;
  if ( !v8 )
  {
    v13 = *(double *)(v2 + 8);
    *(double *)(v2 + 56) = v13;
    if ( v13 <= 0.0 )
    {
      v15 = 0.0;
    }
    else
    {
      v14 = v12 - v13;
      if ( v14 / 480000.0 > 0.0 )
      {
        log10(a1);
        v15 = v13 / (v14 / 480000.0) * 20.0;
        if ( v15 > 40.0 )
          v15 = 40.0;
        v13 = *(double *)(v2 + 56);
      }
      else
      {
        v15 = 40.0;
      }
    }
    LODWORD(a1) = *(_DWORD *)(v2 + 84);
    HIDWORD(a1) = *(_DWORD *)(v2 + 24);
    *(double *)(v2 + 64) = v15;
    if ( LODWORD(a1) )
      v8 = HIDWORD(a1) - *(_DWORD *)(v2 + 28) - (_DWORD)&loc_75300 * ((HIDWORD(a1) - *(_DWORD *)(v2 + 28)) / 480000);
    else
      *(_DWORD *)(v2 + 28) = HIDWORD(a1);
    v16 = 2 * *(_DWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 80) = v16;
    if ( (v16 & 0x40) != 0 )
      *(_DWORD *)(v2 + 84) = --LODWORD(a1);
    if ( v13 > 2500.0 && v15 > 20.0 )
    {
      LODWORD(a1) = v8 + 159;
      if ( (unsigned int)(v8 + 159) > 0x13E )
      {
        if ( *(_DWORD *)(v2 + 84) == 1 )
          *(_DWORD *)(v2 + 28) = HIDWORD(a1);
      }
      else
      {
        v19 = *(_DWORD *)(v2 + 84);
        *(_DWORD *)(v2 + 28) = HIDWORD(a1);
        *(_DWORD *)(v2 + 80) = v16 | 1;
        *(_DWORD *)(v2 + 32) = HIDWORD(a1);
        *(_DWORD *)(v2 + 84) = v19 + 1;
      }
    }
    if ( v6[14] <= 6 )
    {
      v17 = (double)*(int *)(v2 + 84) * 6000.0;
      if ( v13 < 6000.0 )
        v18 = v17 + v13;
      else
        v18 = 5999.0;
      if ( v13 >= 6000.0 )
        v18 = v17 + v18;
      *(double *)(v2 + 72) = v18 / 42000.0 * 100.0;
      if ( (v3[768] & 8) == 0 )
        goto LABEL_21;
    }
    else
    {
      *(_QWORD *)(v2 + 72) = 0;
      if ( (v3[768] & 8) == 0 )
      {
LABEL_21:
        *(_QWORD *)(v2 + 16) = 0;
        *(_QWORD *)(v2 + 8) = 0;
        return LODWORD(a1);
      }
    }
    sub_6D00C(
      v21,
      128,
      "wwv8 %04x %3d %s %04x %.0f %.0f/%.1f %ld %ld",
      v6[1082],
      v6[529],
      (const char *)(v2 + 92),
      *(unsigned __int16 *)(v2 + 80),
      *(double *)(v2 + 72),
      v13,
      v15,
      SHIDWORD(a1) % 8000,
      v8);
    LODWORD(a1) = sub_42D0C(v5 + 16, v21);
    goto LABEL_21;
  }
  return LODWORD(a1);
}
