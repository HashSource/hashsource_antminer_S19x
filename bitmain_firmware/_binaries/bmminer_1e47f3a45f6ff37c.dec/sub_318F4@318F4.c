int sub_318F4()
{
  int v0; // s15
  double v1; // d18
  int v2; // r3
  int v3; // r2
  __int64 v4; // r0
  int v5; // r3
  int v6; // r12
  int v7; // r2
  int v9; // r0
  time_t v10; // r0
  int *v11; // r10
  double v12; // d9
  int *v13; // r6
  int v14; // r9
  int v15; // r3
  double v16; // d16
  int v17; // r8
  int v18; // lr
  int v19; // r2
  int v20; // lr
  __int64 v21; // d17
  int v22; // r11
  double v23; // r0
  char *v24; // r11
  __int64 v25; // d16
  double v26; // r0
  double v27; // d8
  double v28; // d17
  time_t v29; // r0
  int v30; // r9
  unsigned int v31; // r12
  int v32; // r9
  int v33; // r4
  unsigned int v34; // r6
  double v35; // r0
  int v36; // r3
  double *v37; // r6
  double *v38; // r2
  double v39; // d16
  double v40; // d17
  double v42; // d17
  __int64 v43; // [sp+0h] [bp-14h]
  char *v44; // [sp+8h] [bp-Ch]
  void *v45; // [sp+Ch] [bp-8h]
  int v46; // [sp+10h] [bp-4h]
  int savedregs; // [sp+14h] [bp+0h]
  int savedregs_4; // [sp+18h] [bp+4h]
  int savedregs_8; // [sp+1Ch] [bp+8h]
  int savedregs_12; // [sp+20h] [bp+Ch]
  int savedregs_16; // [sp+24h] [bp+10h]
  char savedregs_20; // [sp+28h] [bp+14h]

  sub_416B4();
  v2 = dword_B5984;
  v3 = dword_B5984 >> 31;
  if ( !(dword_B5984 % 5) && byte_B4138 )
  {
    if ( dword_B6EA8 == 1 )
    {
      memset(&unk_B5988, 0, 0x140u);
      dword_B5AC8 = 0;
      dword_B5ACC = 0;
      dword_B5AD0 = 0;
      dword_B5AD4 = 0;
      dword_B5AE8 = 0;
      dword_B5AEC = 0;
      dword_B5AF0 = 0;
      dword_B5AF4 = 0;
      dword_B5AD8 = 0;
      dword_B5AF8 = 0;
      dword_B5AFC = 0;
      dword_B5ADC = 0;
      dword_B5B00 = 0;
      dword_B5AE0 = 0;
      dword_B5B08[0] = 0;
      dword_B5B0C = 0;
      dword_B5B10 = 0;
      dword_B5B14 = 0;
      dword_B5B18[0] = 0;
      dword_B5B1C = 0;
      dword_B5B20 = 0;
      dword_B5B24 = 0;
      dword_B6EA8 = 0;
      dword_B5AE4 = 0;
      dword_B5B04 = 0;
    }
    v10 = sub_309B4();
    v11 = &dword_B5AE8;
    v12 = 0.0;
    v13 = &dword_B5AC8;
    v14 = 0;
    v44 = byte_B4128;
    v45 = &unk_B6120;
    v15 = v10 - dword_B4164;
    dword_B4164 = v10;
    v43 = (unsigned int)v15 | 0x6666666700000000LL;
    do
    {
      if ( sub_26C0C(v14) )
      {
        v16 = dbl_9CD890[v14];
        v17 = dword_B5B18[v14];
        v18 = dword_B5B08[v14];
        v19 = 10 * v14 + v18;
        v20 = v18 + 1;
        v21 = *(_QWORD *)v11;
        if ( v17 <= 9 )
          dword_B5B18[v14] = ++v17;
        v22 = v20 - 10 * (((int)((unsigned __int64)(v20 * (__int64)SHIDWORD(v43)) >> 32) >> 2) - (v20 >> 31));
        dword_B5B08[v14] = v22;
        v23 = *(double *)v13;
        *(double *)v13 = v16;
        v24 = (char *)&qword_B5990[10 * v14 + v22];
        v1 = v23;
        v25 = *(_QWORD *)&v16 - *(_QWORD *)&v23;
        qword_B5990[v19 - 1] = v25;
        *(_QWORD *)v11 = v25 + v21;
        LODWORD(v26) = sub_8FDB4(v25 + v21, (unsigned __int64)(v25 + v21) >> 32);
        v0 = v17;
        if ( (_DWORD)v43 )
          v0 = v43;
        v27 = v26 * 4294967300.0 / (double)v17;
        if ( (_DWORD)v43 )
          v28 = (double)v0;
        else
          v28 = 1.0;
        sub_26E48(v14);
        v12 = v12 + v27 / v28 / 1000000000.0;
        *(_QWORD *)v11 -= *((_QWORD *)v24 - 1);
      }
      ++v14;
      v11 += 2;
      v13 += 2;
    }
    while ( v14 != 4 );
    sub_26C28();
    sprintf(byte_B6F0C, "%.2f", v12);
    if ( dword_B6EAC == 1 )
    {
      dbl_B5B28 = 0.0;
      memset(&unk_B5B30, 0, 0xB40u);
      dword_B6670 = 0;
      dword_B6EAC = 0;
    }
    v29 = sub_309B4();
    v30 = dword_B4168;
    dword_B4168 = v29;
    if ( *(_QWORD *)&dbl_9CD900 )
    {
      v31 = dword_B6670;
      v32 = v29 - v30;
      v33 = ++dword_B6670;
      v34 = v31 % 0x168;
      LODWORD(v35) = sub_8FDB4(
                       LODWORD(dbl_B5B28) - LODWORD(dbl_9CD900),
                       LODWORD(dbl_9CD900)
                     - LODWORD(dbl_B5B28)
                     - (((*(_QWORD *)&dbl_9CD900 - *(_QWORD *)&dbl_B5B28) >> 32)
                      + (LODWORD(dbl_9CD900) != LODWORD(dbl_B5B28))));
      v36 = 0;
      if ( v32 )
        v0 = v32;
      else
        v1 = 1.0;
      v37 = (double *)((char *)&unk_B5B30 + 8 * v34);
      v38 = (double *)&unk_B5B30;
      v39 = 0.0;
      if ( v32 )
        v1 = (double)v0;
      *v37 = v35 / 1000000000.0 / v1;
      do
      {
        if ( v36++ == v33 )
          goto LABEL_46;
        v40 = *v38++;
        v39 = v39 + v40;
      }
      while ( v36 != 360 );
      if ( (unsigned int)v33 < 0x168 )
      {
LABEL_46:
        v42 = (double)v33;
        goto LABEL_47;
      }
      v42 = 360.0;
LABEL_47:
      dbl_B6F20 = v39 / v42;
      sub_26C4C();
      v2 = dword_B5984;
      v3 = dword_B5984 >> 31;
      dbl_B5B28 = dbl_9CD900;
    }
    else
    {
      v2 = dword_B5984;
      v3 = dword_B5984 >> 31;
    }
  }
  v4 = 1717986919LL * v2;
  if ( v2 == 10 * ((SHIDWORD(v4) >> 2) - v3) )
  {
    if ( sub_40F54(v4) == 3 )
      sub_3A1F0();
    v2 = dword_B5984;
  }
  v5 = v2 + 1;
  dword_B5984 = v5;
  v6 = v5 >> 31;
  if ( v5 % 60 )
  {
    if ( v5 != 1800 * (v5 / 1800) )
      goto LABEL_10;
  }
  else
  {
    if ( v5 > 1499 )
      sub_40F54(0);
    sub_41A9C();
    v5 = dword_B5984;
    v6 = dword_B5984 >> 31;
    if ( v5 != 1800 * (v5 / 1800) )
      goto LABEL_8;
  }
  sub_309DC();
  v5 = dword_B5984;
  v6 = dword_B5984 >> 31;
LABEL_8:
  if ( v5 == 60 * (((int)((unsigned __int64)(2290649225LL * v5) >> 32) >> 5) - v6) )
  {
    v9 = sub_39B50(-2004318071 * v5);
    sub_39E70(v9);
    v5 = dword_B5984;
    v6 = dword_B5984 >> 31;
  }
LABEL_10:
  if ( v5 == 180 * (((int)((unsigned __int64)(3054198967LL * v5) >> 32) >> 7) - v6) && !byte_B6EC0 )
  {
    sub_31668();
    v5 = dword_B5984;
    v6 = dword_B5984 >> 31;
  }
  v7 = ((int)((unsigned __int64)(2443359173LL * v5) >> 32) >> 9) - v6;
  if ( v5 == 900 * v7 )
    sub_30CC8(
      -1851608123 * v5,
      (unsigned __int64)(-1851608123LL * v5) >> 32,
      v7,
      0,
      *(double *)&v43,
      (int)v44,
      (int)v45,
      v46,
      savedregs,
      savedregs_4,
      savedregs_8,
      savedregs_12,
      savedregs_16,
      savedregs_20);
  return 0;
}
