int __fastcall sub_114AC(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r3
  int v4; // r2
  const char *v5; // r12
  bool v6; // zf
  const char *v7; // r0
  int v8; // r1
  int v9; // t1
  bool v10; // zf

  v2 = strlen(a1);
  v3 = v2 - 1;
  if ( v2 )
  {
    v4 = (unsigned __int8)a1[v3];
    v5 = &a1[v3];
    v6 = v4 == 10;
    if ( v4 != 10 )
      v6 = v4 == 32;
    if ( !v6 )
      return v2 + 1;
    v7 = &a1[v2];
    while ( 1 )
    {
      *--v7 = 0;
      if ( !v3 )
        break;
      v9 = *(unsigned __int8 *)--v5;
      v8 = v9;
      v10 = v9 == 10;
      if ( v9 != 10 )
        v10 = v8 == 32;
      if ( !v10 )
        return v3 + 1;
      --v3;
    }
  }
  return 1;
}
