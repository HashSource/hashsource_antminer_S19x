int __fastcall sub_3BA34(unsigned int *a1, unsigned int a2, int a3)
{
  int result; // r0
  unsigned int v7; // r2
  unsigned int v8; // r3
  unsigned int *v9; // r10
  unsigned int v10; // r7
  unsigned int v11; // r12
  unsigned int *v12; // lr
  int v13; // r6
  int v14; // r4
  unsigned int v15; // [sp+0h] [bp-3Ch]
  char v16[52]; // [sp+8h] [bp-34h] BYREF

  if ( a2 <= 1 )
  {
    sub_1E938(v16, 0x30u);
    printf("%s ", v16);
    printf("%s :  xxtea decode input data length <= 1\n", "xxtea_decode");
    strcpy(byte_632E68, " xxtea decode input data length <= 1");
    return sub_3CC5C(byte_632E68, v16);
  }
  else
  {
    result = sub_189090(52, a2) + 6;
    v7 = -1640531527 * result;
    v8 = *a1;
    v9 = &a1[a2 - 1];
    v15 = a2 - 1;
    do
    {
      v10 = v15;
      v11 = v7 >> 2;
      v12 = v9;
      do
      {
        v13 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v10--) & 3));
        v8 = *v12
           - ((((16 * *(v12 - 1)) ^ (v8 >> 3)) + ((4 * v8) ^ (*(v12 - 1) >> 5))) ^ ((v7 ^ v8) + (v13 ^ *(v12 - 1))));
        *v12-- = v8;
      }
      while ( v10 );
      v14 = v7 ^ v8;
      --result;
      v7 += 1640531527;
      v8 = *a1
         - (((*v9 ^ *(_DWORD *)(a3 + 4 * (v11 & 3))) + v14) ^ (((4 * v8) ^ (*v9 >> 5)) + ((16 * *v9) ^ (v8 >> 3))));
      *a1 = v8;
    }
    while ( result );
  }
  return result;
}
