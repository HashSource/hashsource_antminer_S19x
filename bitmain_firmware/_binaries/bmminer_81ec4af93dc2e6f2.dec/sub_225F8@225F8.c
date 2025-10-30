int sub_225F8()
{
  size_t v0; // r0
  int *v1; // r8
  int v2; // r5
  int k; // r4
  int v4; // r4
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int *v9; // r9
  int *v10; // r6
  int v11; // t1
  int i; // r4
  int v13; // r6
  int v14; // r6
  int j; // r4
  int v16; // r7
  int v17; // r7
  char v18[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = ((int (*)(void))sub_26540)();
  v1 = (int *)calloc(v0, 4u);
  if ( v1 )
  {
    if ( dword_AFE58 == 2 )
    {
      v2 = sub_26EB8();
      if ( v2 )
      {
        v2 = 0;
        for ( i = 0; i != 4; ++i )
        {
          if ( sub_266F0(i) )
          {
            v13 = sub_22568(i);
            v14 = ((int (*)(void))sub_26540)() * v13;
            v2 += sub_26580() * v14;
          }
        }
      }
      else
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_266F0(j) )
          {
            v16 = dword_B1070[j];
            v17 = ((int (*)(void))sub_26540)() * v16;
            v2 += sub_26580() * v17;
          }
        }
      }
    }
    else
    {
      v2 = 0;
      for ( k = 0; k != 4; ++k )
      {
        if ( sub_266F0(k) )
        {
          v7 = sub_1A2CC(k, (unsigned __int8)dword_B413C, v1);
          v8 = sub_26540(v7);
          if ( v8 > 0 )
          {
            v9 = &v1[v8];
            v10 = v1;
            do
            {
              v11 = *v10++;
              v2 += v11 * sub_26580();
            }
            while ( v10 != v9 );
          }
        }
      }
    }
    v4 = v2 / 1000;
    dword_B1090 = v4;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v18, 0x800u, "max_hash_rate = %d\n", v2 / 1000);
      sub_3AF5C(4, v18, 0, v6);
      v4 = dword_B1090;
    }
    free(v1);
  }
  else
  {
    v4 = 0;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v18, "malloc buf failed!\n");
      sub_3AF5C(3, v18, 0, *(_DWORD *)"ailed!\n");
    }
  }
  return v4;
}
