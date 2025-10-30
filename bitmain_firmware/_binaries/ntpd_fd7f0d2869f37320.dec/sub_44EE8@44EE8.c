int __fastcall sub_44EE8(double a1, int a2, int a3)
{
  int v4; // r9
  _DWORD *v5; // r4
  double v6; // d0
  int v7; // r10
  int v8; // r6
  __int64 v9; // r0
  __int64 v10; // r2
  unsigned int v11; // kr00_4
  double v12; // r0
  double v13; // d0
  unsigned __int64 v14; // r6
  __int64 v15; // r0
  int v16; // r12
  __int64 v17; // r0
  int v18; // r3
  int v19; // r2
  char v20; // r3
  int v21; // r2
  int v22; // r3
  char v23; // r3
  int v24; // r6

  v4 = *(_DWORD *)(a3 + 84);
  v5 = *(_DWORD **)v4;
  v6 = *(double *)(v4 + 744);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 8);
  if ( v7 == a3 )
  {
    LODWORD(a1) = 32;
    if ( v6 >= 0.0 )
    {
      v24 = 0;
    }
    else
    {
      v6 = -v6;
      v24 = 1;
    }
    ldexp(a1, 2092);
    v17 = sub_8D558(LODWORD(v6), HIDWORD(v6)) ^ -(__int64)(unsigned int)v24;
    v5[30] = v24 + v17;
    v5[29] = ((unsigned __int64)(unsigned int)v24 + v17) >> 32;
    if ( (*(_BYTE *)(v4 + 768) & 1) == 0 )
      *(_DWORD *)(v7 + 68) &= ~0x80u;
  }
  else
  {
    LODWORD(a1) = 32;
    if ( v6 >= 0.0 )
    {
      v8 = 0;
    }
    else
    {
      v6 = -v6;
      v8 = 1;
    }
    ldexp(a1, 2092);
    v9 = sub_8D558(LODWORD(v6), HIDWORD(v6));
    v10 = -(__int64)(unsigned int)v8;
    *(_QWORD *)&v12 = v9 ^ v10;
    v11 = LODWORD(v12);
    LODWORD(v12) = 32;
    v14 = (unsigned int)v8 + __PAIR64__(HIDWORD(v12), v11);
    v5[27] = HIDWORD(v14);
    v13 = *(double *)(v4 + 752);
    HIDWORD(v14) = 0;
    v5[28] = v14;
    if ( v13 >= 0.0 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v13 = -v13;
      LODWORD(v14) = 1;
    }
    ldexp(v12, v10);
    v15 = sub_8D558(LODWORD(v13), HIDWORD(v13));
    v16 = v5[4];
    v17 = (v15 ^ -(__int64)v14) + v14;
    v5[31] = HIDWORD(v17);
    v18 = *(_DWORD *)(a3 + 76);
    v5[32] = v17;
    if ( (((unsigned __int8)v18 ^ (unsigned __int8)v16) & 3) != 0 )
    {
      v19 = **(_DWORD **)(a3 + 84);
      if ( (v16 & 3) == 2 )
      {
        v20 = *(_BYTE *)(v19 + 132);
        *(_DWORD *)(v19 + 72) = 0;
        *(_BYTE *)(v19 + 132) = v20 & 0xEF;
      }
      *(_BYTE *)(v19 + 132) &= 0xF9u;
      v21 = **(_DWORD **)(a3 + 84);
      v22 = *(_DWORD *)(a3 + 76) & 3;
      v5[4] = v22;
      if ( v22 == 2 )
      {
        v23 = *(_BYTE *)(v21 + 132);
        *(_DWORD *)(v21 + 72) = 30;
        *(_BYTE *)(v21 + 132) = v23 & 0xEF;
      }
      *(_BYTE *)(v21 + 132) &= 0xF9u;
    }
  }
  return v17;
}
