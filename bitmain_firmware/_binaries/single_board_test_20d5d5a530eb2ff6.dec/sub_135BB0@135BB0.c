int __fastcall sub_135BB0(int ***a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r10
  int v4; // r9
  unsigned __int8 *v5; // r4
  int v6; // r6
  unsigned int v7; // t1
  int **v8; // r5
  int v9; // r1
  unsigned int v10; // r4
  unsigned __int8 *v11; // r11
  int v12; // r3
  int v13; // r4
  int v14; // t1
  int *v15; // r3

  if ( !a2 )
    return 0;
  v2 = a2;
  if ( !*a2 )
    return 0;
  if ( *a2 == 45 )
  {
    v2 = a2 + 1;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = v2 - 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = *++v5;
    if ( !sub_BDB10(v7, 4) )
      break;
    if ( ++v6 == 0x20000000 )
    {
      v8 = 0;
      goto LABEL_25;
    }
  }
  if ( v6 )
  {
    if ( !a1 )
      return v4 + v6;
    v8 = *a1;
    if ( *a1 )
    {
      sub_B8930(*a1, 0);
    }
    else
    {
      v8 = (int **)sub_B822C();
      if ( !v8 )
        return 0;
    }
    if ( 4 * v6 <= 2147483584 )
    {
      v9 = (4 * v6 + 63) >> 6;
      if ( v9 <= (int)v8[2] || sub_B8838((int)v8, v9) )
      {
        v10 = 0;
        v11 = &v2[v6];
        v12 = 19 - v6 % 19;
        if ( v12 == 19 )
          v12 = 0;
        while ( 1 )
        {
          ++v12;
          v13 = 10 * v10;
          if ( v2 == v11 )
            break;
          while ( 1 )
          {
            v14 = *v2++;
            v10 = v13 - 48 + v14;
            if ( v12 != 19 )
              break;
            if ( !sub_BADB4(v8, -1981284352) || !sub_BAD28((int)v8, v10) )
              goto LABEL_25;
            v12 = 1;
            v13 = 0;
            if ( v2 == v11 )
              goto LABEL_21;
          }
        }
LABEL_21:
        sub_B8ACC(v8);
        v15 = v8[1];
        *a1 = v8;
        if ( v15 )
          v8[3] = (int *)v4;
        return v4 + v6;
      }
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_25:
  if ( *a1 )
    return 0;
  sub_B895C((int)v8);
  return 0;
}
