float *__fastcall sub_3EBD8(float *result, int a2)
{
  float v2; // s15
  float *v3; // r2
  float *v4; // r3
  float v5; // s14
  float v6; // s14
  float v7; // s13
  float v8; // s15

  if ( a2 > 0 )
  {
    v2 = 0.0;
    v3 = &result[a2];
    v4 = result;
    do
    {
      v5 = *v4++;
      v2 = v2 + v5;
    }
    while ( v4 != v3 );
    v6 = 0.0;
    v7 = v2 / (float)a2;
    do
    {
      v8 = *result++;
      v6 = v6 + (float)((float)(v8 - v7) * (float)(v8 - v7));
    }
    while ( v3 != result );
  }
  return result;
}
