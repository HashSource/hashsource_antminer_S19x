int __fastcall sub_B8CD4(_DWORD *a1, int a2, signed int a3)
{
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // lr
  unsigned int v13; // r4
  int v14; // r5
  char v15; // r6
  unsigned int v16; // r3
  int v17; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // lr
  int v23; // r0
  int v24; // r3
  int v25; // r0
  _DWORD v26[13]; // [sp+4h] [bp-34h] BYREF

  if ( a3 < 0 )
    return -1;
  v6 = sub_B85BC(a1);
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 < 0 )
    v8 = v7;
  if ( a3 < v8 >> 3 )
  {
    v19 = a1[1];
    v20 = a1[2];
    v21 = a1[3];
    v22 = a1[4];
    v26[0] = *a1;
    v26[1] = v19;
    v26[2] = v20;
    v26[3] = v21;
    v26[4] = v22;
    sub_B8ACC(v26);
    v23 = sub_B85BC(v26);
    v24 = v23 + 14;
    v25 = v23 + 7;
    if ( v25 < 0 )
      v25 = v24;
    if ( a3 < v25 >> 3 )
      return -1;
    v9 = 8 * a1[2];
    if ( v9 )
      goto LABEL_6;
LABEL_14:
    sub_E07F8(a2, a3);
    return a3;
  }
  v9 = 8 * a1[2];
  if ( !v9 )
    goto LABEL_14;
LABEL_6:
  v10 = a1[1];
  v11 = a2 + a3;
  v12 = v9 - 1;
  v13 = 0;
  v14 = -8 * v10;
  if ( a3 )
  {
    do
    {
      v15 = 8 * (v13 & 7);
      v16 = *(_DWORD *)(*a1 + 4 * (v13 >> 3));
      v13 += (v13 - v12) >> 31;
      v17 = (v16 >> v15) & (v14++ >> 31);
      *(_BYTE *)--v11 = v17;
    }
    while ( a3 - 8 * v10 != v14 );
  }
  return a3;
}
