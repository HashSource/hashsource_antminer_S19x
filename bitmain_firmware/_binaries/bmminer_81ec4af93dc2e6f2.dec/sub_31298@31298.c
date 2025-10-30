int sub_31298()
{
  int v0; // r3
  int v1; // r2
  __int64 v2; // r0
  int v3; // r3
  int v4; // r2
  __int64 v5; // r0
  int v7; // r0
  time_t v8; // r0
  double v9; // d8
  unsigned int *v10; // r6
  int *v11; // r11
  int v12; // r9
  int v13; // r3
  int v14; // r8
  int v15; // r12
  __int64 v16; // r0
  int v17; // r3
  bool v18; // cc
  char *v19; // r3
  int v20; // lr
  unsigned int v21; // r10
  int v22; // r4
  unsigned int v23; // r12
  char *v24; // r4
  int v25; // r0
  unsigned int v26; // r2
  unsigned int v27; // r1
  unsigned int v28; // r1
  unsigned int v29; // r1
  double v30; // d6
  unsigned int v31; // r1
  unsigned int v32; // r2
  int v33; // r0
  bool v34; // cf
  int v35; // r4
  time_t v36; // r0
  int v37; // r7
  int v38; // r7
  double v39; // d7
  double v40; // d6
  unsigned int v41; // r12
  double v42; // d6
  int v43; // r2
  double v44; // d7
  double *v45; // r3
  double v46; // d6
  double v48; // d6
  int v49; // [sp+4h] [bp-18h]

  sub_3FA64();
  v0 = dword_B2C14;
  v1 = dword_B2C14 >> 31;
  if ( !(dword_B2C14 % 5) && byte_B13C8 )
  {
    if ( dword_B4130 == 1 )
    {
      memset(&unk_B2C18, 0, 0x140u);
      memset(&unk_B2D58, 0, 0x20u);
      memset(&unk_B2D78, 0, 0x20u);
      dword_B2D98[0] = 0;
      dword_B2DA8[0] = 0;
      dword_B4130 = 0;
      dword_B2D9C = 0;
      dword_B2DA0 = 0;
      dword_B2DA4 = 0;
      dword_B2DAC = 0;
      dword_B2DB0 = 0;
      dword_B2DB4 = 0;
    }
    v8 = sub_30368();
    v9 = 0.0;
    v10 = (unsigned int *)&unk_B2D78;
    v11 = (int *)&unk_B2D58;
    v12 = 0;
    v49 = v8 - dword_B13F4;
    dword_B13F4 = v8;
    do
    {
      if ( sub_266F0(v12) )
      {
        v13 = dword_B2D98[v12];
        v14 = dword_B2DA8[v12];
        v15 = v13 + 1;
        v16 = 1717986919LL * (v13 + 1);
        v17 = v13 + 10 * v12;
        v18 = v14 <= 9;
        if ( v14 <= 9 )
          ++v14;
        v19 = (char *)&unk_B2C20 + 8 * v17;
        if ( v18 )
          dword_B2DA8[v12] = v14;
        v20 = dword_9C89D8[2 * v12 + 1];
        v21 = v10[1];
        v22 = v15 - 10 * ((SHIDWORD(v16) >> 2) - (v15 >> 31));
        v23 = *v10;
        dword_B2D98[v12] = v22;
        v24 = (char *)&unk_B2C20 + 80 * v12 + 8 * v22;
        v25 = dword_9C89D8[2 * v12];
        v26 = *v11;
        v27 = v11[1];
        *v11 = v25;
        v11[1] = v20;
        v28 = (__PAIR64__(v20, v25) - __PAIR64__(v27, v26)) >> 32;
        *((_QWORD *)v19 - 1) = __PAIR64__(v28, v25 - v26);
        *v10 = v25 - v26 + v23;
        v29 = v21 + __CFADD__(v25 - v26, v23) + v28;
        v10[1] = v29;
        v30 = sub_8CA4C(v25 - v26 + v23, v29) * 4294967300.0 / (double)v14;
        if ( v49 )
          v30 = v30 / (double)v49;
        sub_26920(v12);
        v31 = *((_DWORD *)v24 - 2);
        v32 = v10[1];
        v33 = *((_DWORD *)v24 - 1);
        v9 = v9 + v30 / 1000000000.0;
        v34 = *v10 >= v31;
        *v10 -= v31;
        v10[1] = v32 - (v33 + !v34);
      }
      ++v12;
      v10 += 2;
      v11 += 2;
    }
    while ( v12 != 4 );
    v35 = 0;
    sub_26708();
    sprintf(byte_B4194, "%.2f", v9);
    if ( dword_B4134 == 1 )
    {
      *(_QWORD *)&dword_B2DB8 = 0;
      memset(dbl_B2DC0, 0, 0xB40u);
      dword_B3900 = 0;
      dword_B4134 = 0;
    }
    v36 = sub_30368();
    v37 = dword_B13F8;
    dword_B13F8 = v36;
    if ( qword_9C8A48 )
    {
      v38 = v36 - v37;
      v39 = 1000000000.0;
      v40 = sub_8CA4C(
              dword_B2DB8 - (int)qword_9C8A48,
              (unsigned __int64)(0xFFFFFFFFLL * (qword_9C8A48 - *(_QWORD *)&dword_B2DB8)) >> 32);
      v41 = dword_B3900;
      v42 = v40 / 1000000000.0;
      if ( v38 )
        HIDWORD(v39) = v38;
      v43 = dword_B3900 + 1;
      if ( v38 )
        v39 = (double)SHIDWORD(v39);
      ++dword_B3900;
      if ( v38 )
        v42 = v42 / v39;
      v44 = 0.0;
      dbl_B2DC0[v41 % 0x168] = v42;
      v45 = dbl_B2DC0;
      do
      {
        if ( v43 == v35++ )
          goto LABEL_46;
        v46 = *v45++;
        v44 = v44 + v46;
      }
      while ( v35 != 360 );
      if ( (unsigned int)v43 < 0x168 )
      {
LABEL_46:
        v48 = (double)v43;
        goto LABEL_47;
      }
      v48 = 360.0;
LABEL_47:
      dbl_B41A8 = v44 / v48;
      sub_2672C();
      v0 = dword_B2C14;
      v1 = dword_B2C14 >> 31;
      *(_QWORD *)&dword_B2DB8 = qword_9C8A48;
    }
    else
    {
      v0 = dword_B2C14;
      v1 = dword_B2C14 >> 31;
    }
  }
  v2 = 1717986919LL * v0;
  if ( v0 == 10 * ((SHIDWORD(v2) >> 2) - v1) )
  {
    if ( sub_3F36C(v2) == 3 )
      sub_39B30();
    v0 = dword_B2C14;
  }
  v3 = v0 + 1;
  v4 = v3 >> 31;
  dword_B2C14 = v3;
  if ( v3 == 60 * (v3 / 60) )
  {
    if ( v3 > 1499 )
      sub_3F36C(v3 % 60);
    sub_3FE6C();
    v3 = dword_B2C14;
    v4 = dword_B2C14 >> 31;
    if ( dword_B2C14 % 1800 )
      goto LABEL_8;
  }
  else if ( v3 % 1800 )
  {
    goto LABEL_10;
  }
  sub_30398();
  v3 = dword_B2C14;
  v4 = dword_B2C14 >> 31;
LABEL_8:
  v5 = 2290649225LL * v3;
  if ( v3 == 60 * ((SHIDWORD(v5) >> 5) - v4) )
  {
    v7 = sub_394B8(v5);
    sub_397AC(v7);
    v3 = dword_B2C14;
    v4 = dword_B2C14 >> 31;
  }
LABEL_10:
  if ( v3 == 180 * (((int)((unsigned __int64)(3054198967LL * v3) >> 32) >> 7) - v4) && !byte_B4148 )
  {
    sub_3102C();
    v3 = dword_B2C14;
    v4 = dword_B2C14 >> 31;
  }
  if ( v3 == 900 * (((int)((unsigned __int64)(2443359173LL * v3) >> 32) >> 9) - v4) )
    sub_30698();
  return 0;
}
