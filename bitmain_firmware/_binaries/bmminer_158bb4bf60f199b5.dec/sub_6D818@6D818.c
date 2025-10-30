int __fastcall sub_6D818(char *a1, size_t a2)
{
  double v2; // d0
  unsigned int v5; // r0
  unsigned int v6; // r6
  int v7; // r1
  char *v8; // r0
  char *v9; // r5
  char *v10; // r0
  unsigned __int8 *v11; // r4
  int v12; // r3
  _BYTE *v13; // r5
  int v14; // t1
  size_t v15; // r2
  char *v17; // r3

  v5 = snprintf(a1, a2, "%.17g", v2);
  if ( a2 > v5 )
  {
    v6 = v5;
    v7 = *(unsigned __int8 *)localeconv()->decimal_point;
    if ( v7 != 46 )
    {
      v8 = strchr(a1, v7);
      if ( v8 )
        *v8 = 46;
    }
    v9 = strchr(a1, 46);
    v10 = strchr(a1, 101);
    if ( v9 )
    {
LABEL_6:
      if ( !v10 )
        return v6;
      goto LABEL_7;
    }
    if ( v10 )
    {
LABEL_7:
      v11 = (unsigned __int8 *)(v10 + 2);
      v12 = (unsigned __int8)v10[2];
      if ( v10[1] != 45 )
      {
        v13 = v10 + 1;
        if ( v12 != 48 )
        {
LABEL_10:
          if ( v11 != v13 )
          {
            v15 = v6 - (v11 - (unsigned __int8 *)a1);
            v6 -= v11 - v13;
            memmove(v13, v11, v15);
          }
          return v6;
        }
        do
LABEL_9:
          v14 = *++v11;
        while ( v14 == 48 );
        goto LABEL_10;
      }
      if ( v12 == 48 )
      {
        v13 = v10 + 2;
        goto LABEL_9;
      }
      return v6;
    }
    if ( v6 + 3 < a2 )
    {
      a1[v6] = 46;
      v17 = &a1[v6];
      v6 += 2;
      v17[1] = 48;
      a1[v6] = 0;
      v10 = strchr(a1, 101);
      goto LABEL_6;
    }
  }
  return -1;
}
