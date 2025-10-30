char *__fastcall sub_E591C(char *a1, char *a2, unsigned int **a3)
{
  int v3; // r5
  char *v4; // r8
  int v5; // r10
  char *v7; // r4
  char *result; // r0
  int v9; // r6
  int v10; // r4
  char *dest; // r0
  char *v12; // r3
  int v13; // r9
  char *v14; // r5
  int v15; // r2
  char *v16; // r0
  unsigned int **v17; // r3
  int v18; // r9
  unsigned int **v19; // r5
  int v20; // r2
  char *src; // [sp+8h] [bp-Ch]

  v3 = a2 - a1;
  v4 = (char *)a3 + a2 - a1;
  if ( a2 - a1 <= 24 )
    return sub_E5714(a1, a2);
  v5 = v3 >> 2;
  src = a1;
  do
  {
    v7 = a1 + 28;
    sub_E5714(a1, a1 + 28);
    a1 = v7;
  }
  while ( a2 - v7 > 24 );
  result = sub_E5714(v7, a2);
  if ( v3 > 28 )
  {
    v9 = 7;
    v10 = 14;
    if ( v5 < 14 )
      goto LABEL_17;
LABEL_6:
    dest = (char *)a3;
    v12 = src;
    v13 = 8 * v9;
    do
    {
      v14 = &v12[v13];
      dest = sub_E57D8(v12, &v12[4 * v9], &v12[4 * v9], &v12[v13], dest);
      v12 = v14;
      v15 = (a2 - v14) >> 2;
    }
    while ( v10 <= v15 );
    while ( 1 )
    {
      if ( v9 < v15 )
        v15 = v9;
      v9 = 2 * v10;
      sub_E57D8(v14, &v14[4 * v15], &v14[4 * v15], a2, dest);
      v16 = src;
      if ( v5 < 2 * v10 )
        break;
      v17 = a3;
      v18 = 2 * v10;
      do
      {
        v19 = &v17[v18];
        v16 = sub_E5888(v17, &v17[v10], (int)&v17[v10], (char *)&v17[v18], v16);
        v17 = v19;
        v20 = (v4 - (char *)v19) >> 2;
      }
      while ( v9 <= v20 );
      if ( v20 >= v10 )
        v20 = v10;
      result = sub_E5888(v19, &v19[v20], (int)&v19[v20], v4, v16);
      if ( v5 <= v9 )
        return result;
      v10 *= 4;
      if ( v5 >= 2 * v9 )
        goto LABEL_6;
LABEL_17:
      dest = (char *)a3;
      v15 = v5;
      v14 = src;
    }
    if ( v5 < v10 )
      v10 = v5;
    return sub_E5888(a3, &a3[v10], (int)&a3[v10], v4, src);
  }
  return result;
}
