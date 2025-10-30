int __fastcall sub_2188C(int result, int a2, int a3)
{
  unsigned int *v3; // r7
  int v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r3
  unsigned int *v9; // r10
  int v10; // r11
  int v11; // r5
  unsigned int v12; // r9
  unsigned int *v13; // r6
  unsigned int v14; // t1
  int v15; // r4
  int v16; // r4
  int v17; // [sp+0h] [bp-80Ch]
  char v18[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a2 <= 1 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v18, "XXTEA decode failes, N <= 1 found.\n");
      return sub_3AF5C(3, v18, 0, *(_DWORD *)"found.\n");
    }
  }
  else
  {
    v3 = (unsigned int *)result;
    v6 = sub_8C490(52);
    v7 = -1640531527 * (v6 + 6);
    v17 = a2 - 1;
    v8 = *v3;
    v9 = &v3[a2 - 1];
    v10 = v7 + 1640531527 * v6 + 1253254570;
    do
    {
      v11 = v17;
      v12 = v7 >> 2;
      v13 = v9;
      do
      {
        v14 = *--v13;
        v15 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v12 ^ (unsigned __int8)v11--) & 3));
        v8 = v13[1] - (((v14 ^ v15) + (v7 ^ v8)) ^ (((4 * v8) ^ (v14 >> 5)) + ((16 * v14) ^ (v8 >> 3))));
        v13[1] = v8;
      }
      while ( v11 );
      v16 = v8 ^ v7;
      v7 += 1640531527;
      result = (4 * v8) ^ (*v9 >> 5);
      v8 = *v3 - ((result + ((16 * *v9) ^ (v8 >> 3))) ^ ((*v9 ^ *(_DWORD *)(a3 + 4 * (v12 & 3))) + v16));
      *v3 = v8;
    }
    while ( v7 != v10 );
  }
  return result;
}
