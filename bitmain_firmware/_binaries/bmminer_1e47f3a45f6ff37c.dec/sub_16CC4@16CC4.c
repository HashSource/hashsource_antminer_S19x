int __fastcall sub_16CC4(int a1, int a2)
{
  unsigned int v2; // r7
  int v3; // r0
  unsigned int v4; // r5
  int *v5; // r3
  int v6; // r4
  int v7; // t1
  unsigned int v8; // r2
  int v9; // r4
  int v10; // r3
  bool v11; // r2
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int v16; // r0
  size_t v18; // r8
  int *v19; // r1
  char *v20; // r10
  int v21; // r3
  int v22; // r5
  int v23; // r0
  int v24; // r3
  int v25; // r5
  int v26; // r6
  int v27; // r0
  int v28; // r3
  int v29; // [sp+10h] [bp-81Ch]
  unsigned int v30; // [sp+18h] [bp-814h]
  int v31; // [sp+20h] [bp-80Ch]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v30 = a1;
  v31 = 10;
  do
  {
    v2 = 0;
    if ( sub_26C70(a1) )
    {
      do
      {
        v3 = sub_5665C((unsigned __int8)v2);
        if ( v3 >= 0 )
        {
          v4 = v3 & ~(v3 >> 31);
          if ( (unsigned int)dword_B308C > 4 )
          {
            snprintf(s, 0x800u, "fan[%u] speed[%u]\n", (unsigned __int8)v2, v3 & ~(v3 >> 31));
            sub_3B6AC(4, s, 0, v21);
          }
          v5 = dword_B2738;
          v6 = 0;
          do
          {
            v7 = *v5++;
            v8 = (unsigned __int8)v6++;
            if ( v7 == (unsigned __int8)v2 )
            {
              v11 = v8 > 1;
              goto LABEL_15;
            }
          }
          while ( v6 != 4 );
          if ( dword_B3C30 < v4 )
          {
            v20 = (char *)dword_B2738;
            v18 = 12;
            v10 = 0;
            v19 = &dword_B3C30;
          }
          else
          {
            if ( v4 > dword_B3C34 )
            {
              v9 = 1;
              v10 = 1;
            }
            else if ( v4 > dword_B3C38 )
            {
              v9 = 2;
              v10 = 2;
            }
            else
            {
              if ( v4 <= dword_B3C3C )
              {
                v11 = 1;
                goto LABEL_15;
              }
              v9 = 3;
              v10 = 3;
            }
            v6 = 4 * (v9 + 1);
            v18 = 4 * (3 - v10);
            v19 = (int *)((char *)&dword_B3C30 + v6 - 4);
            v20 = (char *)&dword_B2738[-1] + v6;
          }
          v29 = v10;
          memmove((char *)&dword_B3C30 + v6, v19, v18);
          memmove((char *)dword_B2738 + v6, v20, v18);
          v11 = 1;
          dword_B2738[v29] = (unsigned __int8)v2;
          dword_B3BE8[v29 + 18] = v4;
LABEL_15:
          if ( (int)v4 > 6000 && v11 )
          {
            sub_26D54((unsigned __int8)v2, 6000 * v4 / 0x1B58);
            if ( v30 <= 6000 * v4 / 0x1B58 )
              goto LABEL_30;
          }
          else
          {
            sub_26D54((unsigned __int8)v2, v4);
            if ( v30 <= v4 )
            {
LABEL_30:
              v3 = sub_26CC4((unsigned __int8)v2, 1);
              goto LABEL_21;
            }
          }
          v3 = sub_26CC4((unsigned __int8)v2, 0);
        }
LABEL_21:
        ++v2;
      }
      while ( v2 < sub_26C70(v3) );
    }
    v13 = sub_26C80();
    if ( v13 >= sub_26C70(v13) )
      break;
    v14 = a2 ? 2000 : 50;
    a1 = sub_3E0F0(v14);
    --v31;
  }
  while ( v31 );
  v15 = sub_26C80();
  v16 = sub_26C70(v15);
  if ( v15 < v16 )
  {
    if ( (unsigned int)dword_B308C > 1 )
    {
      v22 = sub_26C80();
      v23 = sub_26C70(v22);
      snprintf(s, 0x800u, "Error, fan lost, only find %d (< %d)\n", v22, v23);
      v16 = sub_3B6AC(1, s, 0, v24);
    }
    v25 = 0;
    while ( 1 )
    {
      v16 = sub_26C70(v16);
      v26 = (unsigned __int8)v25++;
      if ( v26 >= v16 )
        break;
      if ( (unsigned int)dword_B308C > 3 )
      {
        v27 = sub_26DC0(v26);
        snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v26, v27);
        v16 = sub_3B6AC(3, s, 0, v28);
      }
    }
    sub_481F0(10, 255);
    sub_2A0B4(1);
    sub_458A0(8, "fan lost");
    return -1;
  }
  else
  {
    sub_2A0B4(0);
    return 0;
  }
}
