int __fastcall sub_B82F8(int *a1, int *a2)
{
  int v2; // r2
  int v3; // r6
  int v4; // r1
  int v5; // r4
  unsigned int v6; // r0
  unsigned int v7; // r5
  int v8; // r2
  int v9; // r4
  int v10; // r3
  unsigned int v11; // t1
  unsigned int v12; // t1

  v2 = a1[1];
  if ( v2 != a2[1] )
    return v2 - a2[1];
  v3 = *a2;
  v4 = v2 - 1;
  v5 = *a1;
  if ( v2 - 1 < 0 )
    return 0;
  v6 = *(_DWORD *)(v5 + 4 * v4);
  v7 = *(_DWORD *)(v3 + 4 * v4);
  if ( v6 == v7 )
  {
    v8 = 4 * (v2 + 0x3FFFFFFF);
    v9 = v5 + v8;
    v10 = v3 + v8;
    while ( v4-- != 0 )
    {
      v11 = *(_DWORD *)(v9 - 4);
      v9 -= 4;
      v6 = v11;
      v12 = *(_DWORD *)(v10 - 4);
      v10 -= 4;
      v7 = v12;
      if ( v6 != v12 )
        goto LABEL_10;
    }
    return 0;
  }
  else
  {
LABEL_10:
    if ( v6 <= v7 )
      return -1;
    else
      return 1;
  }
}
