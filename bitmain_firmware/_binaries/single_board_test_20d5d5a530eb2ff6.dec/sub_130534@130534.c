_DWORD *__fastcall sub_130534(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r3
  int v3; // r4
  bool v4; // cf
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r3
  int v15; // r3
  int v16; // r4
  int v17; // r3
  int v18; // r5
  int v19; // r3
  int v20; // r2
  int v21; // r5
  int v22; // r4
  int v23; // r3
  int v24; // r3
  int v25; // r2

  *result = *a2 * *a2;
  v2 = *a2 * a2[1];
  result[1] = 2 * v2;
  v3 = a2[1] * a2[1];
  v5 = 0;
  if ( v2 > 2 * v2 )
  {
    v4 = __CFADD__(v3++, 1);
    if ( v4 )
      v5 = 1;
  }
  v6 = *a2 * a2[2];
  v4 = __CFADD__(v6, v3);
  v7 = v6 + v3;
  if ( v4 )
    ++v5;
  v4 = __CFADD__(v6, v7);
  v8 = v6 + v7;
  if ( v4 )
    ++v5;
  result[2] = v8;
  v9 = *a2 * a2[3];
  v4 = __CFADD__(v9, v5);
  v10 = v9 + v5;
  v11 = v4;
  v4 = __CFADD__(v9, v10);
  v12 = v9 + v10;
  if ( v4 )
    ++v11;
  v13 = a2[1] * a2[2];
  v4 = __CFADD__(v12, v13);
  v14 = v12 + v13;
  if ( v4 )
    ++v11;
  result[3] = v14 + v13;
  if ( __CFADD__(v14, v13) )
    ++v11;
  v15 = a2[2] * a2[2];
  v16 = a2[1] * a2[3];
  v4 = __CFADD__(v15, v11);
  v17 = v15 + v11;
  v18 = v4;
  v4 = __CFADD__(v17, v16);
  v19 = v17 + v16;
  if ( v4 )
    ++v18;
  result[4] = v19 + v16;
  if ( __CFADD__(v19, v16) )
    ++v18;
  v20 = a2[2] * a2[3];
  v4 = __CFADD__(v20, v18);
  v21 = v20 + v18;
  v22 = v4;
  result[5] = v20 + v21;
  if ( __CFADD__(v20, v21) )
    ++v22;
  v23 = a2[3] * a2[3];
  v4 = __CFADD__(v23, v22);
  v24 = v23 + v22;
  v25 = v4;
  result[6] = v24;
  result[7] = v25;
  return result;
}
