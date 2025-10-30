int __fastcall sub_8A8F4(int result)
{
  _DWORD *v1; // r7
  _DWORD *v2; // r9
  _BOOL4 v3; // lr
  int v4; // r5
  int v5; // r6
  int v6; // r3
  int v7; // r4
  int v8; // r8
  int v9; // r6
  _DWORD *v10; // r3
  int v11; // r3
  int v12; // r4
  int v13; // r6
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // lr
  int v18; // [sp+4h] [bp-8h]

  v1 = *(_DWORD **)(result + 1028);
  v2 = *(_DWORD **)(result + 124);
  if ( !v1 )
    return result;
  if ( v1[1] || v1[2] )
  {
    v3 = 1;
  }
  else
  {
    v17 = v1[3];
    v3 = v17 != 0;
  }
  v4 = v1[35];
  v5 = v2[161] & 1;
  v6 = v2[162] & 1;
  if ( v4 && (v4 = v1[36]) != 0 )
  {
    v4 = 128;
    v7 = 16;
  }
  else
  {
    v7 = v4;
  }
  if ( v1[30] && v1[31] )
  {
    v4 = 128;
    v7 = 16;
  }
  if ( v1[25] && v1[26] )
  {
    v4 |= 0x20u;
    v7 = 16;
  }
  v8 = result;
  if ( (v2[159] & 1) != 0 )
  {
    v14 = v7 | 1;
    v7 |= 3u;
    if ( !v3 )
      v7 = v14;
    goto LABEL_38;
  }
  if ( v3 )
    v7 |= 2u;
  if ( v1[10] )
  {
    if ( v1[11] )
    {
      if ( (v2[160] & 0x100) != 0 )
      {
        v18 = v2[162] & 1;
        v15 = sub_8A8F0(result);
        v6 = v18;
        if ( v15 >> 8 == 3 )
        {
          v16 = sub_8A8F0(v8);
          v6 = v18;
          if ( v16 == 771 )
LABEL_38:
            v4 |= 1u;
        }
      }
    }
  }
  if ( v5 )
    v4 |= 2u;
  v9 = v4 | 4;
  if ( v6 && (((unsigned int)sub_120D90(v1[20]) >> 7) & 1 & (v2[162] >> 1)) != 0 )
    v9 = v4 | 0xC;
  if ( (v9 & 8) != 0 )
    goto LABEL_29;
  v10 = *(_DWORD **)(v8 + 1028);
  if ( v10[40] && v10[41] && (v2[166] & 0x100) != 0 )
  {
    if ( sub_8A8F0(v8) >> 8 == 3 && sub_8A8F0(v8) == 771 )
      goto LABEL_50;
    v10 = *(_DWORD **)(v8 + 1028);
  }
  if ( v10[45] && v10[46] && (v2[167] & 0x100) != 0 && sub_8A8F0(v8) >> 8 == 3 && sub_8A8F0(v8) == 771 )
LABEL_50:
    v9 |= 8u;
LABEL_29:
  v11 = *(_DWORD *)(v8 + 124);
  if ( (v7 & 1) != 0 )
    v12 = v7 | 0x4C;
  else
    v12 = v7 | 0xC;
  result = v12 << 30;
  v13 = v9 | 0x10;
  if ( (v12 & 2) != 0 )
    v12 |= 0x100u;
  *(_DWORD *)(v11 + 676) = v13;
  *(_DWORD *)(v11 + 672) = v12 | 0x80;
  return result;
}
