unsigned __int8 *__fastcall sub_31EE34(unsigned __int8 *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r3
  int v5; // t1

  v2 = *result;
  if ( (word_438898[v2] & 4) != 0 )
  {
    v3 = *a2;
    do
    {
      v4 = 10 * v3;
      *a2 = v4;
      v3 = *result - 48 + v4;
      *a2 = v3;
      v5 = *++result;
      v2 = v5;
    }
    while ( (word_438898[v5] & 4) != 0 );
  }
  if ( !v2 )
    return 0;
  if ( *a2 < 0 )
    return 0;
  return result;
}
