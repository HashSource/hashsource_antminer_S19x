int __fastcall sub_B8354(int *a1, int *a2)
{
  bool v2; // zf
  int result; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // lr
  int v8; // r3
  int v9; // r5
  int v10; // r6
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // r1
  int v14; // r4
  int v15; // r6
  int v16; // r2
  unsigned int v17; // r7
  unsigned int v18; // t1
  unsigned int v19; // t1
  bool v20; // cf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
  {
    if ( a1 )
      return -1;
    result = (int)a2;
    if ( a2 )
      return 1;
    return result;
  }
  v4 = a1[3];
  if ( v4 != a2[3] )
  {
    if ( v4 )
      return -1;
    else
      return 1;
  }
  v5 = a1[1];
  v6 = a2[1];
  if ( v4 )
    v7 = 1;
  else
    v7 = -1;
  if ( v4 )
    v8 = -1;
  else
    v8 = 1;
  if ( v5 > v6 )
    return v8;
  if ( v5 < v6 )
    return v7;
  v9 = v5 - 1;
  if ( v5 - 1 < 0 )
    return 0;
  v10 = *a1;
  v11 = *a2;
  v12 = *(_DWORD *)(*a1 + 4 * v9);
  v13 = *(_DWORD *)(*a2 + 4 * v9);
  if ( v12 > v13 )
    return v8;
  if ( v12 < v13 )
    return v7;
  v14 = 4 * (v5 + 0x3FFFFFFF);
  v15 = v10 + v14;
  v16 = v11 + v14;
  while ( 1 )
  {
    v20 = v9-- != 0;
    if ( !v20 )
      break;
    v18 = *(_DWORD *)(v15 - 4);
    v15 -= 4;
    v17 = v18;
    v19 = *(_DWORD *)(v16 - 4);
    v16 -= 4;
    v20 = v17 >= v19;
    if ( v17 > v19 )
      return v8;
    if ( !v20 )
      return v7;
  }
  return 0;
}
