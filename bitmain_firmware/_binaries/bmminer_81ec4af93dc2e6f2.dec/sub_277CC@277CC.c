int sub_277CC()
{
  int result; // r0
  int v1; // r5
  int v2; // r10
  int i; // r4
  int v4; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r9
  int v9; // r0
  int v10; // r6
  int v12; // r10
  int v13; // r7
  int v14; // r0
  int v15; // r9
  int v16; // r7
  int v17; // r0
  char v18[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_26530();
  if ( result > 9 )
  {
    result = sub_26530();
    v1 = result - 1;
    if ( result - 1 >= 0 )
    {
      do
      {
        v2 = v1 * sub_26550();
        for ( i = 0; i != 4; ++i )
        {
          v4 = (unsigned __int8)i;
          if ( sub_266F0(i) )
          {
            v15 = sub_265B0();
            v16 = sub_26530() - v1;
            v17 = sub_26550();
            sub_76D38(v4, v2 * v15, v17 * v16 + 14, 1, 1);
          }
        }
        v6 = sub_26550();
        v7 = 0;
        v8 = v6 + v1 * v6 - 1;
        do
        {
          v9 = v7;
          v10 = (unsigned __int8)v7++;
          result = sub_266F0(v9);
          if ( result )
          {
            v12 = sub_265B0();
            v13 = sub_26530() - v1;
            v14 = sub_26550();
            result = sub_76D38(v10, v8 * v12, v14 * v13 + 14, 1, 1);
          }
        }
        while ( v7 != 4 );
      }
      while ( v1-- != 0 );
    }
  }
  else if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v18, "no need to set uart relay\n");
    return sub_3AF5C(4, v18, 0, *(unsigned __int16 *)"");
  }
  return result;
}
