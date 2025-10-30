int __fastcall sub_2B2C38(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  bool v7; // cc
  int v8; // r3
  bool v9; // zf
  bool v10; // zf
  int v11; // r2
  int v12; // r3
  bool v13; // zf
  bool v14; // zf
  int result; // r0
  _DWORD v18[9]; // [sp+Ch] [bp+0h] BYREF
  _DWORD v19[10]; // [sp+30h] [bp+24h] BYREF
  _DWORD v20[3]; // [sp+58h] [bp+4Ch] BYREF
  _DWORD v21[19]; // [sp+64h] [bp+58h]
  _DWORD v22[12]; // [sp+B0h] [bp+A4h] BYREF
  _DWORD v23[13]; // [sp+E0h] [bp+D4h] BYREF
  _DWORD v24[14]; // [sp+114h] [bp+108h] BYREF
  _DWORD v25[15]; // [sp+14Ch] [bp+140h] BYREF
  _DWORD v26[16]; // [sp+188h] [bp+17Ch] BYREF
  _BYTE dest[68]; // [sp+1C8h] [bp+1BCh] BYREF
  _BYTE v28[72]; // [sp+20Ch] [bp+200h] BYREF
  _BYTE v29[76]; // [sp+254h] [bp+248h] BYREF

  v18[0] = 8;
  v18[1] = 8;
  v18[2] = 8;
  v18[3] = 8;
  v18[4] = 8;
  v18[5] = 8;
  v18[6] = 8;
  v18[7] = 10;
  v18[8] = 8;
  v19[0] = 9;
  v19[1] = 9;
  v19[2] = 9;
  v19[3] = 9;
  v19[4] = 9;
  v19[5] = 9;
  v19[6] = 9;
  v19[7] = 7;
  v19[8] = 10;
  v19[9] = 9;
  v20[0] = 10;
  v20[1] = 10;
  v20[2] = 10;
  v21[0] = 10;
  v21[1] = 10;
  v21[2] = 10;
  v21[3] = 10;
  v21[4] = 10;
  v21[5] = 10;
  v21[6] = 10;
  v21[7] = 10;
  v22[0] = -1;
  v22[1] = -1;
  v22[2] = 9;
  v22[3] = 9;
  v22[4] = 9;
  v22[5] = 9;
  v22[6] = 9;
  v22[7] = 7;
  v22[8] = 10;
  v22[9] = 9;
  v22[10] = 10;
  v22[11] = 11;
  v23[0] = -1;
  v23[1] = -1;
  v23[2] = 9;
  v23[3] = 9;
  v23[4] = 9;
  v23[5] = 9;
  v23[6] = 9;
  v23[7] = 7;
  v23[8] = 10;
  v23[9] = 9;
  v23[10] = 10;
  v23[11] = 12;
  v23[12] = 12;
  v24[0] = -1;
  v24[1] = -1;
  v24[2] = 13;
  v24[3] = 13;
  v24[4] = 13;
  v24[5] = 13;
  v24[6] = 13;
  v24[7] = 13;
  v24[8] = 13;
  v24[9] = 13;
  v24[10] = 13;
  v24[11] = 13;
  v24[12] = 13;
  v24[13] = 13;
  v25[0] = 14;
  v25[1] = 14;
  v25[2] = 14;
  v25[3] = 14;
  v25[4] = 14;
  v25[5] = 14;
  v25[6] = 14;
  v25[7] = 14;
  v25[8] = 14;
  v25[9] = 14;
  v25[10] = 14;
  v25[11] = 14;
  v25[12] = 14;
  v25[13] = 14;
  v25[14] = 14;
  v26[0] = 15;
  v26[1] = 15;
  v26[2] = 15;
  v26[3] = 15;
  v26[4] = 15;
  v26[5] = 15;
  v26[6] = 15;
  v26[7] = 15;
  v26[8] = 15;
  v26[9] = 15;
  v26[10] = 15;
  v26[11] = 15;
  v26[12] = 15;
  v26[13] = 15;
  v26[14] = 14;
  v26[15] = 15;
  memcpy(dest, &unk_4135BC, sizeof(dest));
  memcpy(v28, &unk_413600, sizeof(v28));
  memcpy(v29, &unk_413648, sizeof(v29));
  v7 = a4 <= 17;
  if ( a4 <= 17 )
    v7 = a2 <= 17;
  v21[17] = v28;
  v21[16] = dest;
  v21[18] = v29;
  v21[8] = v18;
  v21[9] = v19;
  v21[10] = v20;
  v21[11] = v22;
  v21[12] = v23;
  v21[13] = v24;
  v21[14] = v25;
  v21[15] = v26;
  if ( !v7 )
  {
    sub_2A6A5C("error: %B: Unknown CPU architecture", a1);
    return -1;
  }
  if ( a2 == 11 )
  {
    v8 = a5;
    if ( *a3 == 2 )
      a2 = 18;
    v14 = a4 == 11;
    if ( a4 == 11 )
      v14 = a5 == 2;
    if ( v14 )
      goto LABEL_18;
  }
  else if ( a2 == 2 )
  {
    v8 = a5;
    if ( *a3 == 11 )
      a2 = 18;
    v13 = a4 == 11;
    if ( a4 == 11 )
      v13 = a5 == 2;
    if ( v13 )
      goto LABEL_18;
  }
  else
  {
    v8 = a5;
    v9 = a4 == 11;
    if ( a4 == 11 )
      v9 = a5 == 2;
    if ( v9 )
      goto LABEL_18;
  }
  v10 = a4 == 2;
  if ( a4 == 2 )
    v10 = v8 == 11;
  if ( v10 )
  {
LABEL_18:
    a4 = 18;
    v11 = a2;
    result = 18;
    goto LABEL_19;
  }
  if ( a2 < a4 )
    result = a4;
  else
    result = a2;
  if ( result <= 7 )
    return result;
  if ( a2 >= a4 )
    v11 = a4;
  else
    v11 = a2;
LABEL_19:
  v12 = v21[result];
  if ( !v12 )
  {
    *a3 = -1;
    goto LABEL_36;
  }
  result = *(_DWORD *)(v12 + 4 * v11);
  if ( result == 18 )
  {
    *a3 = 11;
    return 2;
  }
  *a3 = -1;
  if ( result == -1 )
  {
LABEL_36:
    sub_2A6A5C("error: %B: Conflicting CPU architectures %d/%d", a1, a2, a4, a3);
    return -1;
  }
  return result;
}
