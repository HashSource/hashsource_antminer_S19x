int __fastcall sub_56E54(int a1)
{
  unsigned int v1; // r2
  int v2; // r7
  double v4; // d16
  unsigned __int64 v5; // r0
  int v6; // r4
  int v7; // r3
  double v8; // d17
  bool v9; // nf
  double v10; // d17
  int v11; // lr
  __int64 v13; // r2
  __int64 v14; // r0
  bool v15; // zf

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 84);
  v4 = 0.0;
  v5 = 0;
  v6 = *(_DWORD *)v2;
  v7 = *(_DWORD *)v2 + 2312;
  do
  {
    v8 = *(double *)(v7 + 72);
    v9 = v8 < v4;
    if ( v8 >= v4 )
      v4 = *(double *)(v7 + 72);
    v10 = *(double *)(v7 - 32);
    if ( !v9 )
      v5 = __PAIR64__(v1, v7);
    if ( v4 <= v10 )
      HIDWORD(v5) = v1;
    ++v1;
    if ( v4 <= v10 )
    {
      LODWORD(v5) = v7 - 104;
      v4 = *(double *)(v7 - 32);
    }
    v7 += 216;
  }
  while ( v1 != 5 );
  v11 = *(_DWORD *)(v6 + 4328);
  *(_DWORD *)(v6 + 4328) = v11 & 0xFFFFFCFF;
  if ( v4 >= 13.0 )
  {
    *(_QWORD *)(v6 + 3280) = v5;
    *(_DWORD *)(v2 + 764) = *(_DWORD *)(v5 + 92);
    LODWORD(v13) = *(_DWORD *)(v5 + 88);
    HIDWORD(v13) = *(_DWORD *)(v6 + 4328);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(v2 + 764);
    HIDWORD(v5) = HIDWORD(v13) | 0x80;
    *(_DWORD *)(v6 + 4328) = HIDWORD(v13) | 0x80;
    if ( (v13 & 0x100) != 0 )
    {
      v14 = *(_QWORD *)(v2 + 744);
      v2 = 1;
      *(_DWORD *)(v6 + 4328) = HIDWORD(v13) | 0x180;
      *(_QWORD *)(v6 + 40) = v14;
    }
    else
    {
      v15 = (v13 & 0x200) == 0;
      if ( (v13 & 0x200) != 0 )
      {
        HIDWORD(v13) |= 0x280u;
        v5 = *(_QWORD *)(v2 + 752);
      }
      else
      {
        LODWORD(v13) = 0;
      }
      if ( v15 )
        HIDWORD(v13) = 0;
      else
        *(_DWORD *)(v6 + 4328) = HIDWORD(v13);
      v2 = 1;
      if ( v15 )
        *(_QWORD *)(v6 + 40) = v13;
      else
        *(_QWORD *)(v6 + 40) = v5;
    }
  }
  else
  {
    if ( (v11 & 0x80) == 0 )
      v2 = 0;
    *(_DWORD *)(v6 + 3284) = (*(_DWORD *)(v6 + 3284) + 1) % 5;
    if ( (v11 & 0x80) != 0 )
    {
      *(_DWORD *)(v6 + 4328) = v11 & 0xFFFFFC7F;
      sub_39C88(a1, 4);
      v2 = 0;
    }
  }
  if ( *(int *)(v6 + 48) > 0 )
    sub_56DB4(*(_DWORD *)(a1 + 76), *(int **)(a1 + 84), *(_DWORD *)(v6 + 3284));
  return v2;
}
