int __fastcall sub_3FB90(int result)
{
  int v1; // r11
  int v2; // r10
  int v3; // r4
  int v4; // r0
  int v5; // r6
  int v6; // r5
  char *i; // r7
  int v8; // t1
  int j; // r5
  int v11; // r7
  float v12; // s16
  int v13; // s13
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // [sp+14h] [bp-820h]
  int v18; // [sp+20h] [bp-814h]
  unsigned int v19; // [sp+2Ch] [bp-808h] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v19 = 0;
  if ( !dword_4B6CD0 )
  {
    v1 = 0;
    v2 = result;
    v3 = 0;
    v17 = 0;
    do
    {
      result = sub_266F0(v3);
      if ( result )
      {
        result = sub_26540();
        if ( result )
        {
          v5 = 0;
          v6 = 0;
          for ( i = (char *)&unk_B4304 + 1024 * v3; sub_26540() > v6++; i += 4 )
          {
            v8 = *((_DWORD *)i + 1);
            v5 += v8;
          }
          v18 = sub_8C490(v5);
          for ( j = 0; ; ++j )
          {
            result = sub_26540();
            if ( result <= j )
              break;
            v19 = 0;
            v11 = sub_32690(v3, j);
            sub_1A2CC(v3, 0, (int *)&v19);
            if ( v19 && v19 > v11 )
            {
              v12 = (float)v11 / (float)v19;
              if ( (unsigned int)off_AFC24 > 4 )
              {
                snprintf(s, 0x800u, "test avg_freq:%d, freq:%d", v19, v11);
                sub_3AF5C(4, s, 0, v16);
              }
            }
            else
            {
              v12 = 1.0;
            }
            if ( v2 )
            {
              v13 = dword_B42F8[256 * v3 + 4 + j];
              if ( (float)v13 < (float)((float)(3 * v18 / 4) * v12) )
              {
                v1 |= 1 << v3;
                ++dword_4B6CD0;
                if ( (double)v13 >= (float)v18 * 0.1 )
                {
                  if ( (unsigned int)off_AFC24 > 3 )
                  {
                    snprintf(s, 0x800u, "chain %d, asic %d, nonce %u < 75%% avg %u\n", v3, j, v13, v18);
                    sub_3AF5C(3, s, 0, v15);
                  }
                }
                else if ( (unsigned int)off_AFC24 > 3 )
                {
                  snprintf(s, 0x800u, "zero nonce asic:chain %d, asic %d, nonce %u < 10%% avg %u!!!\n", v3, j, v13, v18);
                  v17 = v2;
                  sub_3AF5C(3, s, 0, v14);
                }
                else
                {
                  v17 = v2;
                }
              }
            }
          }
        }
      }
      ++v3;
    }
    while ( v3 != 4 );
    if ( dword_4B6CD0 )
    {
      if ( v17 )
        v4 = 26;
      else
        v4 = 0;
      return sub_46318(v4, v1);
    }
  }
  return result;
}
