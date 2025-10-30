float *__fastcall sub_3E000(float *result, int a2)
{
  float v2; // s0
  float *v3; // r1
  float v4; // s15

  v2 = *result;
  if ( a2 > 0 )
  {
    v3 = &result[a2];
    do
    {
      v4 = *result++;
      if ( fabsf(v2 - v4) > 0.00000011921 && (float)(v2 - v4) <= 0.00000011921 )
        v2 = v4;
    }
    while ( result != v3 );
  }
  return result;
}
