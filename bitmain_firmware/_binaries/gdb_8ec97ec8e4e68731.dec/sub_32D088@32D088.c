int __fastcall sub_32D088(int a1, int a2, int *a3)
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
  int v19; // r3
  signed __int64 v21; // r2
  int v22; // r1
  int v23; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v24[2]; // [sp+10h] [bp-28h] BYREF
  char v25; // [sp+18h] [bp-20h]
  __int16 v26; // [sp+1Ah] [bp-1Eh]
  _DWORD v27[3]; // [sp+1Ch] [bp-1Ch] BYREF
  int v28; // [sp+28h] [bp-10h]
  int v29; // [sp+2Ch] [bp-Ch]
  int v30; // [sp+30h] [bp-8h]
  int v31; // [sp+34h] [bp-4h]

  v3 = a3;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = v3[3];
  v3 += 4;
  v11 = *(_BYTE *)(a2 + 8);
  v23 = 0;
  v27[0] = v7;
  v27[1] = v8;
  v27[2] = v9;
  v28 = v10;
  v12 = v3[1];
  v13 = v3[2];
  v29 = *v3;
  v30 = v12;
  v31 = v13;
  if ( (v11 & 0xC0) == 0xC0 )
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
    v19 = a3[1];
    *(_BYTE *)(a1 + 8) = 0x80;
    *(_DWORD *)(a1 + 4) = v19 - v14 + 1;
    return a1;
  }
  HIDWORD(v21) = v27;
  LODWORD(v21) = v24;
  v25 = 0;
  v28 = 0;
  v24[1] = -1000000000;
  v24[0] = 1;
  v26 = 1;
  sub_32C3B0(a1, a2, v21, 0, &v23);
  v22 = v23 & 0x40000080;
  v23 &= 0x40000080u;
  if ( !v23 )
    return a1;
  sub_327DE4(a1, v22, (int)a3);
  return a1;
}
