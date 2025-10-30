char *__fastcall sub_EA090(unsigned __int8 *a1, int a2)
{
  int v2; // r6
  char *v5; // r0
  char *v6; // r5
  char *v7; // r6
  unsigned __int8 *v8; // r1
  char *v9; // r2
  char v10; // t1

  if ( !a2 )
    return (char *)sub_E0740((void *)1);
  v2 = 3 * a2;
  v5 = (char *)CRYPTO_malloc((void *)(3 * a2));
  v6 = v5;
  if ( v5 )
  {
    if ( a2 > 0 )
    {
      v8 = &a1[a2];
      v9 = v5 + 3;
      do
      {
        v9 += 3;
        *(v9 - 6) = byte_1B65E4[(*a1 >> 4) + 56];
        v10 = *a1++;
        *(v9 - 4) = 58;
        *(v9 - 5) = byte_1B65E4[(v10 & 0xF) + 56];
      }
      while ( v8 != a1 );
      v7 = &v5[v2];
    }
    else
    {
      v7 = v5;
    }
    *(v7 - 1) = 0;
  }
  else
  {
    sub_D0048(15, 117, 65, (int)"crypto/o_str.c", 204);
  }
  return v6;
}
