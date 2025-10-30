int sub_22D44()
{
  unsigned int v0; // r6
  int k; // r4
  int v2; // r5
  int m; // r4
  int v4; // r0
  int v5; // r0
  int v7; // r3
  int v8; // r7
  int i; // r4
  int v10; // r6
  int v11; // r6
  int j; // r6
  int v13; // r0
  int v14; // r7
  int v15; // r7
  unsigned int v16; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( dword_B32C0 == 2 )
  {
    if ( sub_2740C() )
    {
      v2 = 0;
      for ( i = 0; i != 4; ++i )
      {
        if ( sub_26C0C(i) )
        {
          v10 = sub_22A9C(i);
          v11 = sub_26A44(v10) * v10;
          v2 += sub_26A84() * v11;
        }
      }
    }
    else
    {
      v2 = 0;
      for ( j = 0; j != 4; ++j )
      {
        v13 = sub_26C0C(j);
        if ( v13 )
        {
          v14 = dword_B3DE4[j];
          v15 = sub_26A44(v13) * v14;
          v2 += sub_26A84() * v15;
        }
      }
    }
  }
  else
  {
    v0 = 0;
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_26C0C(k) && !sub_1A758(k, (unsigned __int8)dword_B6EB4, (int *)&v16) )
      {
        if ( v0 )
        {
          if ( v0 >= v16 )
            v0 = v16;
        }
        else
        {
          v0 = v16;
        }
      }
    }
    v2 = 0;
    for ( m = 0; m != 4; ++m )
    {
      v4 = m;
      v5 = sub_26C0C(v4);
      if ( v5 )
      {
        v8 = v0 * sub_26A44(v5);
        v2 += sub_26A84() * v8;
      }
    }
  }
  dword_B3E08 = v2 / 1000;
  if ( (unsigned int)dword_B308C <= 4 )
    return v2 / 1000;
  snprintf(s, 0x800u, "ideal_hash_rate = %d\n", v2 / 1000);
  sub_3B6AC(4, s, 0, v7);
  return dword_B3E08;
}
