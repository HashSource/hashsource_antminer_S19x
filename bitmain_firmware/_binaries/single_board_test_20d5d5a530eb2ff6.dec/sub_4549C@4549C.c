int __fastcall sub_4549C(int result)
{
  int v1; // r6
  int v2; // r5
  int v3; // r3
  float v4; // s15
  int i; // r1
  int v6; // r4
  float *v7; // r3
  float v8; // s14

  v1 = *(_DWORD *)(dword_705300 + 8);
  if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(dword_705300 + 12);
    v3 = 0;
    v4 = 0.0;
    for ( i = 0; i != v1; ++i )
    {
      v6 = v2 + v3;
      if ( v2 > 0 )
      {
        v7 = (float *)(result + 4 * v3);
        do
        {
          v8 = *v7++;
          v4 = v4 + v8;
        }
        while ( (float *)(result + 4 * v6) != v7 );
      }
      v3 = v6;
    }
  }
  return result;
}
