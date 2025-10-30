int __fastcall sub_13A64(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v4; // r3
  int v7; // r0
  int v8; // r4
  int v9; // r6
  int v10; // r1
  char *v11; // r0
  char *v12; // r0
  char *v13; // r4
  char *v14; // r7
  char *v15; // r3
  size_t v16; // r2

  if ( a3 )
    v4 = a3;
  else
    v4 = 17;
  v7 = snprintf(a1, a2, "%.*g", v4, v3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v7;
    if ( a2 > v7 )
    {
      v10 = *(unsigned __int8 *)localeconv()->decimal_point;
      if ( v10 != 46 )
      {
        v11 = strchr(a1, v10);
        if ( v11 )
          *v11 = 46;
      }
      if ( strchr(a1, 46) )
      {
LABEL_10:
        v12 = strchr(a1, 101);
        if ( !v12 )
          return v9;
LABEL_11:
        v13 = v12 + 2;
        if ( v12[1] == 45 )
          v14 = v12 + 2;
        else
          v14 = v12 + 1;
        if ( v12[2] == 48 )
        {
          v15 = v12 + 3;
          do
            v13 = v15++;
          while ( *v13 == 48 );
        }
        if ( v13 != v14 )
        {
          v16 = a1 - v13 + v9;
          v9 += v14 - v13;
          memmove(v14, v13, v16);
        }
        return v9;
      }
      v12 = strchr(a1, 101);
      if ( v12 )
        goto LABEL_11;
      if ( a2 > v8 + 3 )
      {
        v9 = v8 + 2;
        a1[v8] = 46;
        a1[v8 + 1] = 48;
        a1[v8 + 2] = 0;
        goto LABEL_10;
      }
    }
  }
  return -1;
}
