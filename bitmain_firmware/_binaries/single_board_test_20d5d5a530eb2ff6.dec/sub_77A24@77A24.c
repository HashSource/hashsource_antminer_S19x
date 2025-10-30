int __fastcall sub_77A24(int a1, _BYTE *a2, float *a3)
{
  float v3; // s0
  int v4; // r7
  int v5; // lr
  __int16 v6; // r8
  __int16 v7; // r9
  int v8; // r12
  int v9; // r5
  float v10; // s3
  float v11; // s12
  int i; // r4
  int v13; // r3
  float v14; // s13
  int v15; // s14
  float v16; // s15
  float v17; // s15
  int v18; // r3

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 2;
  v10 = 10.0;
  do
  {
    v11 = (float)v9;
    for ( i = 1; i != 8; ++i )
    {
      v13 = (unsigned __int8)i;
      v14 = (float)i * v3;
      do
      {
        v15 = (int)((float)((float)((float)((float)v13 * v14) * v11) / 25.0) + 0.5);
        if ( (unsigned int)(v15 - 16) <= 0xEA )
        {
          v16 = (float)v15 * (float)(25.0 / (float)v9);
          if ( (v9 != 1 || v16 <= 3125.0) && v16 <= 3200.0 && v16 >= 2000.0 )
          {
            v17 = fabsf(v3 - (float)(v16 / (float)(v13 * i)));
            if ( v10 > v17 )
            {
              v10 = v17;
              v6 = (unsigned __int8)i;
              v4 = (int)((float)((float)((float)((float)v13 * v14) * v11) / 25.0) + 0.5);
              v7 = v13;
              v8 = (unsigned __int8)v9;
              v5 = 1;
            }
          }
        }
        v13 = (unsigned __int8)(v13 + 1);
      }
      while ( v13 != 8 );
    }
    --v9;
  }
  while ( v9 );
  if ( v4 )
  {
    if ( a3 )
      *a3 = (float)((float)(25.0 / (float)v8) * (float)v4) / (float)(v5 * v7 * v6);
    v18 = 0;
    *(_BYTE *)a1 = v7;
    *(_BYTE *)(a1 + 1) = v6;
    *(_BYTE *)(a1 + 2) = v8;
    *(_WORD *)(a1 + 4) = v4;
    *a2 = v5;
    a2[1] = v5;
    a2[2] = v5;
    a2[3] = v5;
  }
  else
  {
    puts("find div fail, use default value");
    return -1;
  }
  return v18;
}
