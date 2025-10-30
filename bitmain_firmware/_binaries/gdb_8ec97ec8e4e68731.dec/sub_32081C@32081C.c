unsigned __int8 *__fastcall sub_32081C(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r3
  int v5; // r2
  int v6; // r8
  int v7; // r3
  unsigned __int8 *v9; // r4
  unsigned __int8 *v10; // r0

  v2 = a2;
  if ( !a2 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return v2;
  v5 = 0;
  while ( v3 != 89 )
  {
    if ( v3 == 90 )
      return v2 + 1;
    if ( v3 == 88 )
    {
      ++v2;
      sub_31E858(a1, "...");
      return v2;
    }
    v6 = v5 + 1;
    if ( v5 )
      sub_31E858(a1, ", ");
    v7 = *v2;
    if ( v7 == 77 )
    {
      sub_31E858(a1, "scope ");
      v7 = *++v2;
    }
    if ( v7 == 78 )
    {
      if ( v2[1] != 107 )
        goto LABEL_23;
      sub_31E858(a1, "return ");
      v7 = v2[2];
      v2 += 2;
    }
    switch ( v7 )
    {
      case 'K':
        ++v2;
        sub_31E858(a1, "ref ");
        break;
      case 'L':
        ++v2;
        sub_31E858(a1, "lazy ");
        break;
      case 'J':
        ++v2;
        sub_31E858(a1, "out ");
        break;
    }
LABEL_23:
    v10 = sub_3200E0(a1, v2);
    v2 = v10;
    if ( !v10 )
      return 0;
    v3 = *v10;
    if ( !*v10 )
      return v2;
    v5 = v6;
  }
  v9 = v2 + 1;
  if ( v5 )
    sub_31E858(a1, ", ");
  sub_31E858(a1, "...");
  return v9;
}
