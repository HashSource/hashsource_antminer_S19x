bool __fastcall sub_633D8(int a1, int a2, int a3, int a4, int a5, int a6, int *a7, _DWORD *a8)
{
  int v8; // r2
  int v9; // r0
  int v10; // r4
  int v11; // r3
  int v12; // r0
  int v13; // r5
  int v14; // r7
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r3
  _BYTE *v19; // r3
  _BOOL4 result; // r0
  int v21; // r2
  int v22; // r3
  _DWORD v23[2]; // [sp+10h] [bp-44h] BYREF
  _DWORD v24[2]; // [sp+18h] [bp-3Ch] BYREF
  _DWORD v25[5]; // [sp+20h] [bp-34h] BYREF
  _DWORD v26[3]; // [sp+34h] [bp-20h]
  unsigned int v27; // [sp+40h] [bp-14h]
  unsigned int v28; // [sp+44h] [bp-10h]
  unsigned int v29; // [sp+48h] [bp-Ch]
  _BYTE v30[4]; // [sp+50h] [bp-4h] BYREF

  v8 = a3 + 60 * (a2 + a5 + 24 * (a1 - 1));
  v9 = *a7;
  v10 = a4 + 60 * v8;
  if ( !*a7 )
    goto LABEL_5;
  v11 = v9 + v10;
  v12 = v9 + v10 - a6;
  if ( v12 < 0 )
    v12 = -v12;
  v26[0] = v11;
  v27 = v12;
  if ( (unsigned int)v12 <= 0xEFF0FF )
  {
    *a8 = v11;
    return (unsigned int)v12 < 0x3840;
  }
  else
  {
LABEL_5:
    sub_658E8((int)v23, a6 - v10, 0);
    v24[0] = v23[0];
    v24[1] = v23[1];
    sub_6598C(v25, v24);
    v13 = 0;
    sub_65A30(v25, v25[0] + 693595);
    v14 = v25[0] - 1;
    do
    {
      v15 = (_DWORD)&off_15180 * (sub_660F4(v14 + v13) - 693595);
      v25[v13 + 2] = v15;
      v16 = v10 + v15 - a6;
      v26[v13] = v10 + v15;
      if ( v16 < 0 )
        v16 = a6 - (v10 + v15);
      *(&v27 + v13++) = v16;
    }
    while ( v13 != 3 );
    v17 = v28;
    v18 = v27;
    if ( v27 >= v28 )
      v18 = 1;
    else
      v17 = v27;
    if ( v27 < v28 )
      v18 = 0;
    if ( v29 < v17 )
    {
      v17 = v29;
      v18 = 2;
    }
    v19 = &v30[4 * v18];
    result = v17 < 0x3840;
    v21 = *((_DWORD *)v19 - 7);
    v22 = *((_DWORD *)v19 - 10);
    *a8 = v21;
    *a7 = v22;
  }
  return result;
}
