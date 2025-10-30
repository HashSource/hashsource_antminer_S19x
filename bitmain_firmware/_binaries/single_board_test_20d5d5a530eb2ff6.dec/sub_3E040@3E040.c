float *__fastcall sub_3E040(float *result, int a2)
{
  float v2; // s15
  float *v3; // r3
  float v4; // s14

  v2 = 0.0;
  if ( a2 > 0 )
  {
    v3 = &result[a2];
    do
    {
      v4 = *result++;
      v2 = v2 + v4;
    }
    while ( result != v3 );
  }
  return result;
}
