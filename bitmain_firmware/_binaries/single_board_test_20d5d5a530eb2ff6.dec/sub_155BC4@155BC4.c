int __fastcall sub_155BC4(int a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int *v4; // r12
  unsigned int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r1
  int v22; // lr
  unsigned int v23; // r12
  int v24; // r9
  __int64 v25; // r2
  bool v26; // cc
  char v27; // r11
  char v28; // r0
  unsigned int v29; // r8
  unsigned int v30; // r4
  int result; // r0
  unsigned int v32[21]; // [sp+0h] [bp-50h] BYREF

  v4 = a2;
  v32[20] = a4;
  v6 = *a2;
  v7 = a2[1];
  v8 = v4[2];
  v9 = v4[3];
  v4 += 4;
  v32[0] = v6;
  v32[1] = v7;
  v32[2] = v8;
  v32[3] = v9;
  v10 = *v4;
  v11 = v4[1];
  v12 = v4[2];
  v13 = v4[3];
  v4 += 4;
  v32[4] = v10;
  v32[5] = v11;
  v32[6] = v12;
  v32[7] = v13;
  v14 = *v4;
  v15 = v4[1];
  v16 = v4[2];
  v17 = v4[3];
  v4 += 4;
  v32[8] = v14;
  v32[9] = v15;
  v32[10] = v16;
  v32[11] = v17;
  v18 = v4[1];
  v19 = v4[2];
  v20 = v4[3];
  v32[12] = *v4;
  v32[13] = v18;
  v32[14] = v19;
  v32[15] = v20;
  sub_155530(v32);
  v21 = 0;
  v22 = a1 - 1;
  v23 = 0;
  v24 = a1 + 55;
  v25 = 0;
  do
  {
    v26 = v21 > 7;
    if ( v21 <= 7 )
      v26 = v23 > 0xF;
    v27 = v21 - 32;
    v28 = 32 - v21;
    if ( !v26 )
    {
      v29 = v32[v23++];
      v30 = v29 << v21;
      v21 += 28;
      LODWORD(v25) = v25 | v30;
      HIDWORD(v25) |= (v29 << v27) | (v29 >> v28);
    }
    *(_BYTE *)++v22 = v25;
    result = v25 >> 8;
    v21 -= 8;
    HIDWORD(v25) >>= 8;
    LODWORD(v25) = result;
  }
  while ( v24 != v22 );
  return result;
}
