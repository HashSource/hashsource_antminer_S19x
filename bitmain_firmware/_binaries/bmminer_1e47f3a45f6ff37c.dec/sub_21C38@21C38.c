int __fastcall sub_21C38(int result, int a2, int a3)
{
  unsigned int *v3; // r7
  unsigned int *v5; // r8
  unsigned int v6; // r4
  int v7; // r10
  unsigned int v8; // r9
  unsigned int *v9; // r5
  int v10; // lr
  unsigned int v11; // r11
  int v12; // r1
  int v13; // [sp+4h] [bp-808h]
  char v14[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a2 <= 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v14, "XXTEA encode failes, N <= 1 found.\n");
      return sub_3B6AC(3, v14, 0, *(_DWORD *)"found.\n");
    }
  }
  else
  {
    v3 = (unsigned int *)result;
    v5 = (unsigned int *)(result + 4 * (a2 + 0x3FFFFFFF));
    v6 = *v5;
    v7 = a2 - 1;
    v8 = 0;
    v13 = -1640531527 * sub_8F800(52) - 1253254570;
    do
    {
      v9 = v3;
      v10 = 0;
      v8 -= 1640531527;
      v11 = v8 >> 2;
      do
      {
        v12 = ((unsigned __int8)v10++ ^ (unsigned __int8)v11) & 3;
        v6 = (((*(_DWORD *)(a3 + 4 * v12) ^ v6) + (v9[1] ^ v8))
            ^ (((16 * v6) ^ (v9[1] >> 3)) + ((v6 >> 5) ^ (4 * v9[1]))))
           + *v9;
        *v9++ = v6;
      }
      while ( v10 != v7 );
      result = v8 ^ *v3;
      v6 = ((((*v3 >> 3) ^ (16 * v6)) + ((4 * *v3) ^ (v6 >> 5)))
          ^ ((*(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v7) & 3)) ^ v6) + result))
         + *v5;
      *v5 = v6;
    }
    while ( v8 != v13 );
  }
  return result;
}
