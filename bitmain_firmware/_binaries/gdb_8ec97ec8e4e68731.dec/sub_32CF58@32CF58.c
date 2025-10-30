int __fastcall sub_32CF58(int a1, int a2, int *a3)
{
  int *v3; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r12
  bool v15; // cc
  _WORD *v16; // r1
  int v17; // r3
  _WORD *v18; // r2
  signed __int64 v20; // r2
  int v21; // r1
  int v22; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v23[2]; // [sp+10h] [bp-28h] BYREF
  char v24; // [sp+18h] [bp-20h]
  __int16 v25; // [sp+1Ah] [bp-1Eh]
  _DWORD v26[3]; // [sp+1Ch] [bp-1Ch] BYREF
  int v27; // [sp+28h] [bp-10h]
  int v28; // [sp+2Ch] [bp-Ch]
  int v29; // [sp+30h] [bp-8h]
  int v30; // [sp+34h] [bp-4h]

  v3 = a3;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = v3[3];
  v3 += 4;
  v11 = *(_BYTE *)(a2 + 8);
  v22 = 0;
  v26[0] = v7;
  v26[1] = v8;
  v26[2] = v9;
  v27 = v10;
  v12 = v3[1];
  v13 = v3[2];
  v28 = *v3;
  v29 = v12;
  v30 = v13;
  if ( (v11 & 0xC0) == 0x40 )
  {
    v14 = *a3;
    v15 = *a3 <= 3;
    *(_DWORD *)a1 = *a3;
    v16 = (_WORD *)(a1 + 10);
    if ( v15 )
    {
      v17 = v14;
    }
    else
    {
      v18 = (_WORD *)(a1 + 10);
      v17 = v14;
      do
      {
        v17 -= 3;
        *v18++ = 999;
        v16 = v18;
      }
      while ( v17 > 3 );
    }
    *v16 = dword_438D00[v17] - 1;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = a3[1] - v14 + 1;
    return a1;
  }
  HIDWORD(v20) = v26;
  v23[1] = -1000000000;
  LODWORD(v20) = v23;
  v23[0] = 1;
  v25 = 1;
  v24 = 0;
  v27 = 6;
  sub_32C3B0(a1, a2, v20, 0x80u, &v22);
  v21 = v22 & 0x40000080;
  v22 &= 0x40000080u;
  if ( !v22 )
    return a1;
  sub_327DE4(a1, v21, (int)a3);
  return a1;
}
