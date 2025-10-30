int *__fastcall sub_1E4B4(int *result, unsigned int *a2, signed int a3)
{
  signed int v3; // r5
  int v4; // r3
  int *v5; // r6
  unsigned int *v6; // r4
  bool v7; // cf
  int v8; // r2
  int v9; // r8
  signed int v10; // r7
  _BOOL4 v11; // r3
  unsigned int v12; // r5
  unsigned int *v13; // r7
  unsigned int *v14; // r1
  unsigned int *v15; // r9

  v3 = a3;
  v4 = *result;
  v5 = result;
  v6 = a2;
  v7 = __CFADD__(*result, a3);
  v8 = *result + a3;
  v9 = *result & 0x3F;
  if ( v7 )
    v4 = result[1];
  v10 = 64 - v9;
  *result = v8;
  if ( v7 )
    result[1] = v4 + 1;
  v11 = v10 <= v3;
  if ( !v9 )
    v11 = 0;
  if ( v11 )
  {
    v15 = (unsigned int *)(result + 10);
    v3 -= v10;
    memcpy((char *)result + v9 + 40, a2, 64 - v9);
    v6 = (unsigned int *)((char *)v6 + v10);
    v9 = 0;
    result = (int *)sub_1C054(v5, v15);
  }
  if ( v3 > 63 )
  {
    v12 = v3 - 64;
    v13 = &v6[16 * (v12 >> 6) + 16];
    do
    {
      v14 = v6;
      v6 += 16;
      result = (int *)sub_1C054(v5, v14);
    }
    while ( v6 != v13 );
    v3 = v12 - (v12 >> 6 << 6);
  }
  if ( v3 > 0 )
    return (int *)memcpy((char *)v5 + v9 + 40, v6, v3);
  return result;
}
