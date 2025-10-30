int sub_22B38()
{
  size_t v0; // r0
  int *v1; // r9
  int v2; // r5
  int k; // r8
  int v4; // r5
  int v6; // r0
  int v7; // r10
  int *v8; // r6
  int m; // r4
  int v10; // t1
  int v11; // r3
  int i; // r4
  int v13; // r6
  int v14; // r6
  int j; // r6
  int v16; // r7
  int v17; // r7
  char v18[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = ((int (*)(void))sub_26A44)();
  v1 = (int *)calloc(v0, 4u);
  if ( v1 )
  {
    if ( dword_B32C0 == 2 )
    {
      if ( sub_2740C() )
      {
        v2 = 0;
        for ( i = 0; i != 4; ++i )
        {
          if ( sub_26C0C(i) )
          {
            v13 = sub_22A9C(i);
            v14 = ((int (*)(void))sub_26A44)() * v13;
            v2 += sub_26A84() * v14;
          }
        }
      }
      else
      {
        v2 = 0;
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_26C0C(j) )
          {
            v16 = dword_B3DE4[j];
            v17 = ((int (*)(void))sub_26A44)() * v16;
            v2 += sub_26A84() * v17;
          }
        }
      }
    }
    else
    {
      v2 = 0;
      for ( k = 0; k != 4; ++k )
      {
        if ( sub_26C0C(k) )
        {
          v6 = sub_1A758(k, (unsigned __int8)dword_B6EB4, v1);
          v7 = sub_26A44(v6);
          if ( v7 > 0 )
          {
            v8 = v1 - 1;
            for ( m = 0; m != v7; ++m )
            {
              v10 = v8[1];
              ++v8;
              v2 += v10 * sub_26A84();
            }
          }
        }
      }
    }
    v4 = v2 / 1000;
    dword_B3E04 = v4;
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v18, 0x800u, "max_hash_rate = %d\n", v4);
      sub_3B6AC(4, v18, 0, v11);
      v4 = dword_B3E04;
    }
    free(v1);
  }
  else
  {
    v4 = 0;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v18, "malloc buf failed!\n");
      sub_3B6AC(3, v18, 0, *(_DWORD *)"ailed!\n");
    }
  }
  return v4;
}
