int sub_227EC()
{
  unsigned int v0; // r6
  int i; // r4
  int v2; // r5
  int j; // r4
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r3
  int v8; // r7
  int v9; // r4
  int v10; // r6
  int v11; // r6
  int v12; // r6
  int v13; // r0
  int v14; // r7
  int v15; // r7
  unsigned int v16; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( dword_AFE58 == 2 )
  {
    v2 = sub_26EB8();
    if ( v2 )
    {
      v2 = 0;
      v9 = 0;
      if ( sub_266F0(0) )
        goto LABEL_22;
      while ( ++v9 != 4 )
      {
        if ( sub_266F0(v9) )
        {
LABEL_22:
          v10 = sub_22568(v9);
          v11 = sub_26540(v10) * v10;
          v2 += sub_26580() * v11;
        }
      }
    }
    else
    {
      v12 = 0;
      v13 = sub_266F0(0);
      if ( v13 )
        goto LABEL_26;
      while ( ++v12 != 4 )
      {
        v13 = sub_266F0(v12);
        if ( v13 )
        {
LABEL_26:
          v14 = dword_B1070[v12];
          v15 = sub_26540(v13) * v14;
          v2 += sub_26580() * v15;
        }
      }
    }
  }
  else
  {
    v0 = 0;
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_266F0(i) && !sub_1A2CC(i, (unsigned __int8)dword_B413C, (int *)&v16) )
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
    for ( j = 0; j != 4; ++j )
    {
      v4 = j;
      v5 = sub_266F0(v4);
      if ( v5 )
      {
        v8 = v0 * sub_26540(v5);
        v2 += sub_26580() * v8;
      }
    }
  }
  result = v2 / 1000;
  dword_B1094 = result;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "ideal_hash_rate = %d\n", v2 / 1000);
    sub_3AF5C(4, s, 0, v7);
    return dword_B1094;
  }
  return result;
}
