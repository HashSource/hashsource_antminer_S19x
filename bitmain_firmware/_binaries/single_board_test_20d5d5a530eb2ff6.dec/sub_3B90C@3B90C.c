int __fastcall sub_3B90C(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v5; // r9
  unsigned int v6; // r4
  unsigned int v7; // r6
  unsigned int v8; // r10
  unsigned int *v9; // lr
  int v10; // r5
  unsigned int v11; // r12
  int v12; // r0
  int result; // r0
  int v14; // [sp+0h] [bp-3Ch]
  char v15[52]; // [sp+8h] [bp-34h] BYREF

  if ( a2 <= 1 )
  {
    sub_1E938(v15, 0x30u);
    printf("%s ", v15);
    printf("%s :  xxtea encode input data length <= 1\n", "xxtea_encode");
    strcpy(byte_632D68, " xxtea encode input data length <= 1");
    return sub_3CC5C(byte_632D68, v15);
  }
  else
  {
    v5 = &a1[a2 - 1];
    v6 = *v5;
    v7 = a2 - 1;
    v8 = 0;
    v14 = -1640531527 * sub_189090(52, a2) - 1253254570;
    do
    {
      v9 = a1;
      v10 = 0;
      v8 -= 1640531527;
      v11 = v8 >> 2;
      do
      {
        v12 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v10++) & 3));
        v6 = *v9 + ((((4 * v9[1]) ^ (v6 >> 5)) + ((16 * v6) ^ (v9[1] >> 3))) ^ ((v8 ^ v9[1]) + (v12 ^ v6)));
        *v9++ = v6;
      }
      while ( v10 != v7 );
      result = (4 * *a1) ^ (v6 >> 5);
      v6 = ((result + ((16 * v6) ^ (*a1 >> 3)))
          ^ ((v8 ^ *a1) + (v6 ^ *(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v7) & 3)))))
         + *v5;
      *v5 = v6;
    }
    while ( v8 != v14 );
  }
  return result;
}
