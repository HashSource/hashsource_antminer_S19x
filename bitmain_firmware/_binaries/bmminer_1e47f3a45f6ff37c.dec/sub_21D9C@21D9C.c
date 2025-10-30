int __fastcall sub_21D9C(int result, int a2, int a3)
{
  unsigned int *v4; // r7
  int v6; // r0
  int v7; // r9
  int v8; // r10
  unsigned int *v9; // r9
  unsigned int v10; // r5
  unsigned int v11; // r3
  int v12; // r11
  unsigned int v13; // r2
  unsigned int *v14; // r12
  int v15; // r0
  int v16; // r4
  int v17; // r1
  char v18[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a2 <= 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v18, "XXTEA decode failes, N <= 1 found.\n");
      return sub_3B6AC(3, v18, 0, *(_DWORD *)"found.\n");
    }
  }
  else
  {
    v4 = (unsigned int *)result;
    v6 = sub_8F800(52);
    v7 = a2 + 0x3FFFFFFF;
    v8 = a2 - 1;
    v9 = &v4[v7];
    v10 = -1640531527 * (v6 + 6);
    v11 = *v4;
    v12 = v10 + 1640531527 * v6 + 1253254570;
    do
    {
      v13 = v10 >> 2;
      v14 = v9;
      v15 = v8;
      do
      {
        v16 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v15-- ^ (unsigned __int8)v13) & 3));
        v11 = *v14
            - (((*(v14 - 1) ^ v16) + (v11 ^ v10)) ^ (((v11 >> 3) ^ (16 * *(v14 - 1))) + ((4 * v11) ^ (*(v14 - 1) >> 5))));
        *v14-- = v11;
      }
      while ( v15 );
      v17 = v11 ^ v10;
      result = (16 * *v9) ^ (v11 >> 3);
      v10 += 1640531527;
      v11 = *v4 - ((result + ((*v9 >> 5) ^ (4 * v11))) ^ (v17 + (*(_DWORD *)(a3 + 4 * (v13 & 3)) ^ *v9)));
      *v4 = v11;
    }
    while ( v10 != v12 );
  }
  return result;
}
