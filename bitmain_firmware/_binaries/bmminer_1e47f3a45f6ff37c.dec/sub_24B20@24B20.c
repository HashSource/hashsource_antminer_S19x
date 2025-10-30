int __fastcall sub_24B20(int a1)
{
  float v2; // s17
  int v3; // r7
  int result; // r0
  int v5; // r8
  int i; // s19
  int j; // r6
  int k; // r11
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r1
  float v13; // s15
  int v14; // r3
  int v15; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = flt_B3064;
  v3 = sub_26A54(a1);
  result = sub_26A34();
  v5 = result;
  v15 = (int)(((float)((float)(unsigned int)(dword_534B54 - a1) + v2) - 0.01) / v2);
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(
      s,
      0x800u,
      "g_frequency: %d %d %d %f",
      dword_534B54,
      (int)(((float)((float)(unsigned int)(dword_534B54 - a1) + v2) - 0.01) / v2),
      a1,
      v2);
    result = sub_3B6AC(3, s, 0, v14);
  }
  if ( v15 > 0 )
  {
    for ( i = 1; i <= v15; ++i )
    {
      for ( j = 0; j != 4; ++j )
      {
        result = sub_26C0C(j);
        if ( result )
        {
          if ( v3 > 0 )
          {
            for ( k = 0; k != v3; ++k )
            {
              if ( v5 > 0 )
              {
                v9 = k;
                v10 = 0;
                do
                {
                  v11 = sub_32CF8(j, v9);
                  v12 = v9;
                  ++v10;
                  v9 += v3;
                  v13 = (float)(unsigned int)dword_534B54 - (float)((float)i * v2);
                  if ( v13 <= (float)v11 )
                  {
                    if ( v13 < (float)a1 )
                      v13 = (float)a1;
                    sub_2350C(j, v12, (unsigned int)v13, (unsigned __int8)byte_534B58);
                  }
                }
                while ( v10 != v5 );
              }
            }
          }
          result = usleep((__useconds_t)sub_30D40);
        }
      }
    }
  }
  return result;
}
