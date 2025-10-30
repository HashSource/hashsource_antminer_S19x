int __fastcall sub_24608(int a1)
{
  float v1; // s17
  int v3; // r7
  int result; // r0
  int v5; // r8
  int v6; // r4
  int v7; // s19
  int i; // r6
  int j; // r10
  int v10; // r4
  int v11; // r5
  int v12; // r0
  int v13; // r1
  float v14; // s15
  int v15; // r3
  int v16; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v1 = flt_AFBFC;
  v3 = sub_26550(a1);
  result = sub_26530();
  v5 = result;
  v6 = (int)(((float)((float)(unsigned int)(dword_4B6CC8 - a1) + v1) - 0.01) / v1);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(
      s,
      0x800u,
      "g_frequency: %d %d %d %f",
      dword_4B6CC8,
      (int)(((float)((float)(unsigned int)(dword_4B6CC8 - a1) + v1) - 0.01) / v1),
      a1,
      v1);
    result = sub_3AF5C(3, s, 0, v15);
  }
  if ( v6 > 0 )
  {
    v7 = 1;
    v16 = v6 + 1;
    do
    {
      for ( i = 0; i != 4; ++i )
      {
        result = sub_266F0(i);
        if ( result )
        {
          if ( v3 > 0 )
          {
            for ( j = 0; j != v3; ++j )
            {
              if ( v5 > 0 )
              {
                v10 = j;
                v11 = 0;
                do
                {
                  v12 = sub_32690(i, v10);
                  v13 = v10;
                  ++v11;
                  v10 += v3;
                  v14 = (float)(unsigned int)dword_4B6CC8 - (float)((float)v7 * v1);
                  if ( (float)v12 >= v14 )
                  {
                    if ( (float)a1 > v14 )
                      v14 = (float)a1;
                    sub_23020(i, v13, (unsigned int)v14, (unsigned __int8)byte_4B6CCC);
                  }
                }
                while ( v5 != v11 );
              }
            }
          }
          result = usleep(0x30D40u);
        }
      }
      ++v7;
    }
    while ( v16 != v7 );
  }
  return result;
}
