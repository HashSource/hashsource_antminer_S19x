int sub_397AC()
{
  int i; // r5
  int result; // r0
  int v2; // r7
  int j; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "\n dump domain nonce number...\n");
    sub_3AF5C(4, s, 0, *(_DWORD *)".\n");
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", i);
        sub_3AF5C(4, s, 0, v11);
      }
      v2 = 0;
      for ( j = 0; ; ++j )
      {
        v6 = sub_26530();
        v7 = sub_265A0() * v6;
        result = i;
        if ( v7 <= j )
          break;
        v8 = sub_396BC(i, j);
        v2 += v8;
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(s, 0x800u, "D[%02d]:%-10d ", j, v8);
          sub_3AF5C(4, s, 0, v9);
        }
        v4 = sub_265A0();
        sub_8C724(j + 1, v4);
        if ( !v5 )
        {
          if ( (unsigned int)off_AFC24 > 4 )
          {
            snprintf(s, 0x800u, "D_BIG[%02d]:%-10d\n", (unsigned int)j >> 2, v2);
            v2 = 0;
            sub_3AF5C(4, s, 0, v10);
          }
          else
          {
            v2 = 0;
          }
        }
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        strcpy(s, "\n");
        result = sub_3AF5C(4, s, 0, 10);
      }
    }
  }
  return result;
}
