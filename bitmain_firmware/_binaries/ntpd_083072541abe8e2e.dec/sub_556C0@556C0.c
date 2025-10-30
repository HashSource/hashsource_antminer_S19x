int __fastcall sub_556C0(int a1)
{
  int v1; // r2
  int *v3; // r7
  __int64 v4; // r0
  int v5; // r4
  double v6; // d7
  int v7; // r3
  double v8; // d6
  bool v9; // nf
  int v10; // lr
  int v11; // r7
  int v13; // r2
  __int64 v14; // r2
  __int64 v15; // r0
  bool v16; // zf

  v1 = 0;
  v3 = *(int **)(a1 + 84);
  v4 = 0;
  v5 = *v3;
  v6 = 0.0;
  v7 = *v3 + 2208;
  do
  {
    v8 = *(double *)(v7 + 176);
    v9 = v8 < v6;
    if ( v8 >= v6 )
      LODWORD(v4) = v7 + 104;
    else
      v8 = v6;
    v6 = *(double *)(v7 + 72);
    if ( !v9 )
      HIDWORD(v4) = v1;
    if ( v8 <= v6 )
      HIDWORD(v4) = v1;
    ++v1;
    if ( v8 > v6 )
      v6 = v8;
    else
      LODWORD(v4) = v7;
    v7 += 216;
  }
  while ( v1 != 5 );
  v10 = *(_DWORD *)(v5 + 4328);
  *(_DWORD *)(v5 + 4328) = v10 & 0xFFFFFCFF;
  if ( v6 >= 13.0 )
  {
    *(_QWORD *)(v5 + 3280) = v4;
    v13 = *(_DWORD *)(v4 + 92);
    v3[191] = v13;
    HIDWORD(v4) = *(_DWORD *)(v4 + 88);
    HIDWORD(v14) = *(_DWORD *)(v5 + 4328);
    *(_DWORD *)(a1 + 112) = v13;
    LODWORD(v14) = HIDWORD(v14) | 0x80;
    *(_DWORD *)(v5 + 4328) = HIDWORD(v14) | 0x80;
    if ( (v4 & 0x10000000000LL) != 0 )
    {
      v15 = *((_QWORD *)v3 + 93);
      *(_DWORD *)(v5 + 4328) = HIDWORD(v14) | 0x180;
      v11 = 1;
      *(_QWORD *)(v5 + 40) = v15;
    }
    else
    {
      v16 = (v4 & 0x20000000000LL) == 0;
      if ( (v4 & 0x20000000000LL) != 0 )
      {
        v4 = *((_QWORD *)v3 + 94);
        HIDWORD(v14) |= 0x280u;
      }
      else
      {
        v14 = 0;
      }
      if ( v16 )
      {
        v11 = 1;
        *(_QWORD *)(v5 + 40) = v14;
      }
      else
      {
        *(_DWORD *)(v5 + 4328) = HIDWORD(v14);
        v11 = 1;
        *(_QWORD *)(v5 + 40) = v4;
      }
    }
  }
  else
  {
    v11 = v10 & 0x80;
    *(_DWORD *)(v5 + 3284) = (*(_DWORD *)(v5 + 3284) + 1) % 5;
    if ( (v10 & 0x80) != 0 )
    {
      *(_DWORD *)(v5 + 4328) = v10 & 0xFFFFFC7F;
      sub_394A0((__int16 *)a1, 4);
      v11 = 0;
    }
  }
  if ( *(int *)(v5 + 48) > 0 )
    sub_55620(*(_DWORD *)(a1 + 76), *(int **)(a1 + 84), *(_DWORD *)(v5 + 3284));
  return v11;
}
