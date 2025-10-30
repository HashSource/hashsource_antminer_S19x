bool __fastcall sub_64318(int a1, int a2, int a3, int a4, int a5, int a6, int *a7, _DWORD *a8)
{
  int v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r3
  int v12; // r0
  int v13; // r11
  int v14; // r6
  int v15; // r2
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r0
  _BYTE *v20; // r3
  _BOOL4 result; // r0
  int v22; // r2
  int v23; // r3
  double v24; // [sp+10h] [bp-44h] BYREF
  double v25; // [sp+18h] [bp-3Ch] BYREF
  _DWORD v26[5]; // [sp+20h] [bp-34h] BYREF
  _DWORD v27[3]; // [sp+34h] [bp-20h]
  unsigned int v28; // [sp+40h] [bp-14h]
  unsigned int v29; // [sp+44h] [bp-10h]
  unsigned int v30; // [sp+48h] [bp-Ch]
  _BYTE v31[4]; // [sp+50h] [bp-4h] BYREF

  v8 = a2 + a5 + 24 * (a1 - 1);
  v9 = *a7;
  v10 = 60 * (60 * v8 + a3) + a4;
  if ( !*a7 )
    goto LABEL_5;
  v11 = v10 + v9;
  v12 = v10 + v9 - a6;
  if ( v12 < 0 )
    v12 = -v12;
  v27[0] = v11;
  v28 = v12;
  if ( (unsigned int)v12 <= 0xEFF0FF )
  {
    *a8 = v11;
    return (unsigned int)v12 < 0x3840;
  }
  else
  {
LABEL_5:
    sub_6694C((int)&v24, a6 - v10, 0);
    v25 = v24;
    sub_66A00(v26, &v25);
    sub_66AA8(v26, v26[0] + 693595, 0);
    v13 = 0;
    v14 = v26[0] - 1;
    do
    {
      v15 = (_DWORD)&loc_15180 * (sub_670F0(v14 + v13) - 693595);
      v27[v13] = v15 + v10;
      v16 = v15 + v10 - a6;
      if ( v16 < 0 )
        v16 = a6 - (v15 + v10);
      v26[v13 + 2] = v15;
      *(&v28 + v13++) = v16;
    }
    while ( v13 != 3 );
    v17 = v28;
    v18 = v29;
    v19 = v30;
    if ( v28 >= v29 )
      v17 = 1;
    else
      v18 = v28;
    if ( v28 < v29 )
      v17 = 0;
    if ( v30 < v18 )
      v17 = 2;
    else
      v19 = v18;
    v20 = &v31[4 * v17];
    result = v19 < 0x3840;
    v22 = *((_DWORD *)v20 - 7);
    v23 = *((_DWORD *)v20 - 10);
    *a8 = v22;
    *a7 = v23;
  }
  return result;
}
