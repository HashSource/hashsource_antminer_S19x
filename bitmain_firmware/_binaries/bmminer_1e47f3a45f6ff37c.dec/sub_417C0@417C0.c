int __fastcall sub_417C0(int result)
{
  int v1; // r10
  int *v2; // r11
  int v3; // r4
  int v4; // r0
  int v5; // r8
  char *v6; // r6
  int v7; // r5
  int v8; // t1
  int *v10; // r7
  char *v11; // r5
  int v12; // s20
  float v13; // s16
  int v14; // s14
  int v15; // r8
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // [sp+14h] [bp-820h]
  int v20; // [sp+18h] [bp-81Ch]
  unsigned int v21; // [sp+2Ch] [bp-808h] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v21 = 0;
  if ( !dword_534B5C )
  {
    v1 = result;
    v2 = (int *)&unk_B707C;
    v3 = 0;
    v20 = 0;
    v19 = 0;
    do
    {
      result = sub_26C0C(v3);
      if ( result )
      {
        result = sub_26A44();
        if ( result )
        {
          v5 = 0;
          v6 = (char *)(v2 - 1);
          v7 = 0;
          while ( v7++ < sub_26A44() )
          {
            v8 = *((_DWORD *)v6 + 1);
            v6 += 4;
            v5 += v8;
          }
          v10 = v2;
          v11 = 0;
          v12 = sub_8F800(v5);
          while ( 1 )
          {
            result = sub_26A44();
            if ( (int)v11 >= result )
              break;
            v21 = 0;
            v15 = sub_32CF8(v3, v11);
            sub_1A758(v3, 0, (int *)&v21);
            if ( v21 && v21 > v15 )
            {
              v13 = (float)v15 / (float)v21;
              if ( (unsigned int)dword_B308C > 4 )
              {
                snprintf(s, 0x800u, "test avg_freq:%d, freq:%d", v21, v15);
                sub_3B6AC(4, s, 0, v17);
              }
            }
            else
            {
              v13 = 1.0;
            }
            if ( v1 )
            {
              v14 = *v10;
              if ( (float)*v10 < (float)((float)(3 * v12 / 4) * v13) )
              {
                ++dword_534B5C;
                v19 |= 1 << v3;
                if ( (double)v14 >= (float)v12 * 0.1 )
                {
                  if ( (unsigned int)dword_B308C > 3 )
                  {
                    snprintf(s, 0x800u, "chain %d, asic %d, nonce %u < 75%% avg %u\n", v3, v11, v14, v12);
                    sub_3B6AC(3, s, 0, v16);
                  }
                }
                else
                {
                  if ( (unsigned int)dword_B308C > 3 )
                  {
                    snprintf(
                      s,
                      0x800u,
                      "zero nonce asic:chain %d, asic %d, nonce %u < 10%% avg %u!!!\n",
                      v3,
                      v11,
                      v14,
                      v12);
                    sub_3B6AC(3, s, 0, v18);
                  }
                  v20 = 1;
                }
              }
            }
            ++v11;
            ++v10;
          }
        }
      }
      ++v3;
      v2 += 256;
    }
    while ( v3 != 4 );
    if ( dword_534B5C )
    {
      if ( v20 )
        v4 = 26;
      else
        v4 = 0;
      return sub_481F0(v4, v19);
    }
  }
  return result;
}
