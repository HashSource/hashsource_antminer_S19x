int __fastcall sub_47AB8(char *a1, size_t a2, int a3)
{
  int v3; // s0
  int v4; // s1
  int v5; // r3
  unsigned int v8; // r0
  unsigned int v9; // r6
  int v10; // r1
  char *v11; // r0
  char *v12; // r5
  char *v13; // r0
  unsigned __int8 *v14; // r4
  int v15; // r3
  _BYTE *v16; // r5
  int v17; // t1
  size_t v18; // r2
  char *v20; // r3

  if ( a3 )
    v5 = a3;
  else
    v5 = 17;
  v8 = snprintf(a1, a2, "%.*g", v5, v3, v4);
  if ( a2 > v8 )
  {
    v9 = v8;
    v10 = *(unsigned __int8 *)localeconv()->decimal_point;
    if ( v10 != 46 )
    {
      v11 = strchr(a1, v10);
      if ( v11 )
        *v11 = 46;
    }
    v12 = strchr(a1, 46);
    v13 = strchr(a1, 101);
    if ( v12 )
    {
LABEL_9:
      if ( !v13 )
        return v9;
      goto LABEL_10;
    }
    if ( v13 )
    {
LABEL_10:
      v14 = (unsigned __int8 *)(v13 + 2);
      v15 = (unsigned __int8)v13[2];
      if ( v13[1] != 45 )
      {
        v16 = v13 + 1;
        if ( v15 != 48 )
        {
LABEL_13:
          if ( v14 != v16 )
          {
            v18 = v9 - (v14 - (unsigned __int8 *)a1);
            v9 -= v14 - v16;
            memmove(v16, v14, v18);
          }
          return v9;
        }
        do
LABEL_12:
          v17 = *++v14;
        while ( v17 == 48 );
        goto LABEL_13;
      }
      if ( v15 == 48 )
      {
        v16 = v13 + 2;
        goto LABEL_12;
      }
      return v9;
    }
    if ( v9 + 3 < a2 )
    {
      a1[v9] = 46;
      v20 = &a1[v9];
      v9 += 2;
      v20[1] = 48;
      a1[v9] = 0;
      v13 = strchr(a1, 101);
      goto LABEL_9;
    }
  }
  return -1;
}
