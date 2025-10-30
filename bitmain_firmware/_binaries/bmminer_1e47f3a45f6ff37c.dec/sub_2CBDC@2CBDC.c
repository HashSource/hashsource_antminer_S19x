unsigned int *__fastcall sub_2CBDC(unsigned int *result, char *src, int a3)
{
  signed int v3; // r4
  unsigned int v4; // r7
  unsigned int *v5; // r6
  char *v6; // r5
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r8
  _BOOL4 v10; // r3
  int v11; // r1

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = *result;
    v5 = result;
    v6 = src;
    v7 = a3 + *result;
    *result = v7;
    v8 = v4 & 0x3F;
    v9 = 64 - v8;
    if ( a3 > v7 )
      ++result[1];
    v10 = a3 >= v9;
    if ( !v8 )
      v10 = 0;
    if ( v10 )
    {
      v3 = a3 - v9;
      memcpy((char *)result + v8 + 40, src, 64 - v8);
      v8 = 0;
      result = (unsigned int *)sub_2A67C(v5, (int)(v5 + 10));
      v6 += v9;
      if ( v3 <= 63 )
        goto LABEL_10;
    }
    else if ( a3 <= 63 )
    {
      return (unsigned int *)memcpy((char *)v5 + v8 + 40, v6, v3);
    }
    do
    {
      v11 = (int)v6;
      v3 -= 64;
      v6 += 64;
      result = (unsigned int *)sub_2A67C(v5, v11);
    }
    while ( v3 > 63 );
LABEL_10:
    if ( v3 <= 0 )
      return result;
    return (unsigned int *)memcpy((char *)v5 + v8 + 40, v6, v3);
  }
  return result;
}
