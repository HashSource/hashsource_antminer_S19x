unsigned int *__fastcall sub_6D854(unsigned int *result, char *src, int a3)
{
  signed int v3; // r4
  unsigned int *v4; // r6
  char *v5; // r5
  int v6; // r7
  unsigned int v7; // r3
  bool v8; // cc
  int v9; // lr
  int v10; // r3
  int v11; // r1
  int v12; // r8
  size_t v13; // r2
  char *v14; // r0

  v3 = a3;
  if ( a3 <= 0 )
    return result;
  v4 = result;
  v5 = src;
  v6 = *result & 0x3F;
  v7 = *result + a3;
  v8 = a3 > v7;
  *result = v7;
  if ( a3 > v7 )
    v7 = result[1];
  v9 = 64 - v6;
  if ( v8 )
    result[1] = v7 + 1;
  v10 = v6;
  if ( v6 )
    v10 = 1;
  if ( a3 < v9 )
    v10 = 0;
  if ( v10 )
  {
    v12 = (int)(result + 10);
    v13 = 64 - v6;
    v14 = (char *)result + v6 + 40;
    v3 -= v9;
    v5 = &src[v9];
    v6 = 0;
    memcpy(v14, src, v13);
    result = (unsigned int *)sub_6B9BC(v4, v12);
    if ( v3 <= 63 )
      goto LABEL_13;
  }
  else if ( a3 <= 63 )
  {
    return (unsigned int *)j_memcpy((char *)v4 + v6 + 40, v5, v3);
  }
  do
  {
    v11 = (int)v5;
    v3 -= 64;
    v5 += 64;
    result = (unsigned int *)sub_6B9BC(v4, v11);
  }
  while ( v3 > 63 );
LABEL_13:
  if ( v3 > 0 )
    return (unsigned int *)j_memcpy((char *)v4 + v6 + 40, v5, v3);
  return result;
}
