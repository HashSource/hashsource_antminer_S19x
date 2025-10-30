_BYTE *__fastcall sub_67AC8(unsigned __int8 *a1, int a2)
{
  int v2; // r7
  int v5; // r3
  _BYTE *result; // r0
  unsigned __int8 *v7; // r1
  char *v8; // r2
  unsigned int v9; // t1
  char v10; // r3
  _BYTE *v11; // r7

  v2 = 2 * a2;
  v5 = (2 * a2 + 1) & 3;
  if ( 2 * a2 + 1 <= 0 )
    v5 = -(-(v2 + 1) & 3);
  result = calloc(v2 + 1 + 4 - v5, 1u);
  if ( a2 <= 0 )
  {
    v11 = result;
  }
  else
  {
    v7 = &a1[a2];
    v8 = result + 2;
    do
    {
      v9 = *a1++;
      v8 += 2;
      v10 = aGetFreqComp[(v9 >> 4) + 1124];
      *(v8 - 3) = aGetFreqComp[(v9 & 0xF) + 1124];
      *(v8 - 4) = v10;
    }
    while ( v7 != a1 );
    v11 = &result[v2];
  }
  *v11 = 0;
  return result;
}
