int __fastcall sub_B8648(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r0
  size_t v7; // r7
  int v8; // r3
  int v9; // r2
  int v10; // r12
  size_t v11; // r1
  int v12; // r8
  int v13; // r4
  unsigned int v14; // r2
  size_t v15; // r8
  char v16; // r5
  unsigned int v17; // r3
  int v18; // r3

  v4 = sub_B85BC(a1);
  v5 = v4 + 14;
  v6 = v4 + 7;
  if ( v6 < 0 )
    v6 = v5;
  v7 = v6 >> 3;
  v8 = 8 * a1[2];
  if ( v8 )
  {
    v9 = a1[1];
    v10 = v8 - 1;
    v11 = a2 + v7;
    v12 = 8 * v9;
    if ( v7 )
    {
      v13 = -8 * v9;
      v14 = 0;
      v15 = v7 - v12;
      do
      {
        v16 = 8 * (v14 & 7);
        v17 = *(_DWORD *)(*a1 + 4 * (v14 >> 3));
        v14 += (v14 - v10) >> 31;
        v18 = (v17 >> v16) & (v13++ >> 31);
        *(_BYTE *)--v11 = v18;
      }
      while ( v15 != v13 );
    }
    return v6 >> 3;
  }
  else
  {
    sub_E07F8(a2, v7);
    return v7;
  }
}
