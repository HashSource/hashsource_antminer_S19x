_BYTE *__fastcall sub_160220(_BYTE *result, int *a2, unsigned int a3)
{
  _BYTE *v3; // r4
  unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // r10
  char v6; // lr
  int *v8; // r8
  int v9; // r6
  int v10; // r5
  int v11; // r2
  int v12; // r6
  int v13; // r3
  int v14; // r5
  int v16; // [sp+10h] [bp-B8h] BYREF
  int v17; // [sp+14h] [bp-B4h]
  int v18; // [sp+18h] [bp-B0h] BYREF
  int v19; // [sp+1Ch] [bp-ACh]
  unsigned int v20[42]; // [sp+20h] [bp-A8h] BYREF

  if ( a3 )
  {
    v3 = result;
    v4 = result + 12;
    v5 = result + 20;
    v6 = result[12];
    v8 = a2;
    LOBYTE(result) = result[20];
    do
    {
      v9 = *v8;
      v10 = v8[1];
      v3[12] = v6 & 0x9F | 0x40;
      v3[20] = (unsigned __int8)result & 0x9F | 0x20;
      v8 += 2;
      v18 = v9;
      v16 = v9;
      v19 = v10;
      v17 = v10;
      sub_13F240(v4);
      sub_13F3E8(v4, (int)v20);
      sub_13C7E0(&v16, v20, 1);
      sub_13F240(v5);
      sub_13F3E8(v5, (int)v20);
      sub_13C7E0(&v18, v20, 1);
      v11 = v18 ^ v9;
      v12 = v9 ^ v16;
      v6 = v12;
      v13 = v19 ^ v10;
      v14 = v10 ^ v17;
      v3[16] = v13;
      v3[14] = BYTE2(v12);
      v3[15] = HIBYTE(v12);
      v3[22] = BYTE2(v11);
      v3[21] = BYTE1(v11);
      v3[13] = BYTE1(v12);
      result = (_BYTE *)(unsigned __int8)v11;
      v3[19] = HIBYTE(v13);
      v3[23] = HIBYTE(v11);
      v3[24] = v14;
      v3[17] = BYTE1(v13);
      v3[12] = v12;
      v3[20] = v11;
      v3[18] = BYTE2(v13);
      v3[25] = BYTE1(v14);
      v3[26] = BYTE2(v14);
      v3[27] = HIBYTE(v14);
    }
    while ( a3 > (char *)v8 - (char *)a2 );
  }
  return result;
}
