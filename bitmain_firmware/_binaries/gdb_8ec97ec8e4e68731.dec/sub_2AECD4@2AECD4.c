bool __fastcall sub_2AECD4(int a1, int a2, unsigned int a3, int a4, int a5)
{
  char v5; // r7
  char v6; // r6
  char v7; // r8
  char v8; // r5
  char v9; // lr
  char v10; // r9
  int v11; // r4
  int v12; // r5
  _BYTE *v13; // r3
  unsigned int v14; // t1
  char v15; // r6
  char *v16; // r3
  int v17; // r4
  char v18; // r6
  _BYTE v20[9]; // [sp+0h] [bp-34h] BYREF
  _BYTE v21[43]; // [sp+9h] [bp-2Bh] BYREF

  v5 = a0123456789abcd_1[(a3 >> 8) & 0xF];
  v6 = a0123456789abcd_1[(unsigned __int8)a2 >> 4];
  v7 = a0123456789abcd_1[a2 & 0xF];
  v8 = a0123456789abcd_1[(unsigned __int16)a3 >> 12];
  v9 = a0123456789abcd_1[(unsigned __int8)a3 >> 4];
  v10 = a0123456789abcd_1[a3 & 0xF];
  v20[8] = a0123456789abcd_1[a4];
  v11 = a3 + a4 + (a3 >> 8) + a2;
  v20[4] = v5;
  v20[1] = v6;
  v20[2] = v7;
  v20[3] = v8;
  v20[5] = v9;
  v20[6] = v10;
  v20[0] = 58;
  v20[7] = 48;
  if ( a2 )
  {
    v12 = a5 - 1;
    v13 = v20;
    do
    {
      v14 = *(unsigned __int8 *)++v12;
      v13 += 2;
      v15 = a0123456789abcd_1[v14 & 0xF];
      v11 += v14;
      v13[7] = a0123456789abcd_1[v14 >> 4];
      v13[8] = v15;
    }
    while ( a5 - 1 + a2 != v12 );
    a2 *= 2;
    v16 = &v21[a2];
  }
  else
  {
    v16 = v21;
  }
  v17 = -v11;
  v18 = a0123456789abcd_1[(unsigned __int8)v17 >> 4];
  LOBYTE(v17) = a0123456789abcd_1[v17 & 0xF];
  v16[2] = 13;
  *v16 = v18;
  v16[1] = v17;
  v16[3] = 10;
  return sub_2A8884((int)v20, a2 + 13, a1) == a2 + 13;
}
