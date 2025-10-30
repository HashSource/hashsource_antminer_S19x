int __fastcall sub_791C0(int a1, _BYTE *a2, float *a3)
{
  float v3; // s0
  float v4; // s6
  int v5; // r4
  int v8; // r5
  int v9; // r7
  int v10; // r8
  int v11; // r6
  int i; // r0
  int v13; // r1
  float v14; // s12
  int v15; // r3
  float v16; // s13
  int v17; // s15
  float v18; // s14
  float v19; // s14
  float v20; // s17

  v4 = 10.0;
  v5 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  for ( i = 2; ; i = 1 )
  {
    v13 = 1;
    v14 = (float)i;
    do
    {
      v15 = (unsigned __int8)v13;
      v16 = v3 * (float)v13;
      do
      {
        v17 = (int)((float)((float)(v14 * (float)(v16 * (float)v15)) / 25.0) + 0.5);
        if ( (unsigned int)(v17 - 16) <= 0xEA )
        {
          v18 = (float)v17 * (float)(25.0 / (float)i);
          if ( (i != 1 || v18 <= 3125.0) && v18 <= 3200.0 && v18 >= 2000.0 )
          {
            v19 = fabsf(v3 - (float)(v18 / (float)(v13 * v15)));
            if ( v4 > v19 )
            {
              v5 = (int)((float)((float)(v14 * (float)(v16 * (float)v15)) / 25.0) + 0.5);
              v9 = (unsigned __int8)v13;
              v4 = v19;
              v10 = v15;
              v11 = (unsigned __int8)i;
              v8 = 1;
            }
          }
        }
        v15 = (unsigned __int8)(v15 + 1);
      }
      while ( v15 != 8 );
      ++v13;
    }
    while ( v13 != 8 );
    if ( i == 1 )
      break;
  }
  if ( v5 )
  {
    v20 = (float)((float)(25.0 / (float)v11) * (float)v5) / (float)(v8 * (__int16)v10 * (__int16)v9);
    if ( a3 )
      *a3 = v20;
    printf(
      "final refdiv: %d, fbdiv: %d, postdiv1: %d, postdiv2: %d, usr divider: %d, min diff value: %f\n",
      v11,
      v5,
      v10,
      v9,
      v8,
      v4);
    printf("Want freq: %f, Real freq: %f\n", v3, v20);
    *(_BYTE *)a1 = v10;
    *(_BYTE *)(a1 + 1) = v9;
    *(_BYTE *)(a1 + 2) = v11;
    *(_WORD *)(a1 + 4) = v5;
    *a2 = v8;
    a2[1] = v8;
    a2[2] = v8;
    a2[3] = v8;
    return 0;
  }
  else
  {
    puts("find div fail, use default value");
    return -1;
  }
}
