int __fastcall sub_11BF4(const char *a1)
{
  signed int v2; // r0
  int v3; // r3
  const char *v4; // r2
  bool v5; // zf
  const char *v6; // r1
  int v7; // r3
  int v8; // t1
  bool v9; // zf

  v2 = strlen(a1) - 1;
  if ( v2 >= 0 )
  {
    v3 = (unsigned __int8)a1[v2];
    v4 = &a1[v2];
    v5 = v3 == 32;
    if ( v3 != 32 )
      v5 = v3 == 10;
    if ( v5 )
    {
      v6 = v4 + 1;
      do
      {
        --v2;
        *--v6 = 0;
        if ( v2 == -1 )
          break;
        v8 = *(unsigned __int8 *)--v4;
        v7 = v8;
        v9 = v8 == 32;
        if ( v8 != 32 )
          v9 = v7 == 10;
      }
      while ( v9 );
    }
  }
  return v2 + 2;
}
