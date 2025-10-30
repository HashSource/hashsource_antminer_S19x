int __fastcall sub_157698(_DWORD *a1, int a2)
{
  _DWORD *v2; // lr
  unsigned int v3; // r4
  int v4; // r5
  unsigned __int8 *v5; // r6
  unsigned int v6; // r3
  int v7; // r2
  int v8; // t1
  char v9; // r7
  bool v10; // cc
  unsigned __int64 v11; // r6
  unsigned __int64 v12; // r6
  unsigned __int64 v13; // r6
  unsigned __int64 v14; // r6
  unsigned __int64 v15; // r6
  unsigned __int64 v16; // r4
  unsigned __int64 v17; // r2
  unsigned __int64 v18; // r4
  unsigned __int64 v19; // r2
  unsigned __int64 v20; // r4
  unsigned __int64 v21; // r2
  unsigned __int64 v22; // r6

  v2 = a1 - 1;
  v3 = 0;
  do
  {
    v4 = 0;
    if ( v3 != 56 )
    {
      v5 = (unsigned __int8 *)(a2 + v3);
      v6 = 0;
      do
      {
        v8 = *v5++;
        v7 = v8;
        v9 = 8 * v6;
        ++v3;
        v10 = ++v6 > 3;
        if ( v6 <= 3 )
          v10 = v3 > 0x37;
        v4 |= v7 << v9;
      }
      while ( !v10 );
    }
    v2[1] = v4;
    ++v2;
  }
  while ( a1 + 13 != v2 );
  v11 = __CFADD__(*a1, 1420278541) - 1 + (unsigned __int64)(unsigned int)a1[1];
  v12 = HIDWORD(v11) + __CFADD__((_DWORD)v11, -595116690) - 1 + (unsigned __int64)(unsigned int)a1[2];
  v13 = HIDWORD(v12) + __CFADD__((_DWORD)v12, 1916432555) - 1 + (unsigned __int64)(unsigned int)a1[3];
  v14 = HIDWORD(v13) + __CFADD__((_DWORD)v13, -560775794) - 1 + (unsigned __int64)(unsigned int)a1[4];
  v15 = HIDWORD(v14) + __CFADD__((_DWORD)v14, 1361693040) - 1 + (unsigned __int64)(unsigned int)a1[5];
  v16 = (int)((HIDWORD(v15) + __CFADD__((_DWORD)v15, 1001465015) - 1 + (unsigned __int64)(unsigned int)a1[6] - 2093622249) >> 32)
      + (unsigned __int64)(unsigned int)a1[7];
  v17 = __CFADD__((_DWORD)v16, 1) + HIDWORD(v16) - 1 + (unsigned __int64)(unsigned int)a1[8];
  v18 = __CFADD__((_DWORD)v17, 1) + HIDWORD(v17) - 1 + (unsigned __int64)(unsigned int)a1[9];
  v19 = __CFADD__((_DWORD)v18, 1) + HIDWORD(v18) - 1 + (unsigned __int64)(unsigned int)a1[10];
  v20 = __CFADD__((_DWORD)v19, 1) + HIDWORD(v19) - 1 + (unsigned __int64)(unsigned int)a1[11];
  v21 = __CFADD__((_DWORD)v20, 1) + HIDWORD(v20) - 1 + (unsigned __int64)(unsigned int)a1[12];
  v22 = __CFADD__((_DWORD)v21, 1) + HIDWORD(v21) - 1 + (unsigned __int64)(unsigned int)a1[13] - 0x3FFFFFFF;
  sub_156CA8(a1, (int)a1, curve448_scalar_one);
  return ~(((HIDWORD(v22) - 1) & ~HIDWORD(v22)) >> 31);
}
