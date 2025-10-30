unsigned __int8 *__fastcall sub_31E89C(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  unsigned int v3; // r3
  int v6; // r3

  v2 = a2;
  if ( !a2 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return 0;
  while ( 1 )
  {
    if ( v3 == 79 )
    {
      ++v2;
      sub_31E858(a1, " shared");
      if ( !v2 )
        return 0;
      goto LABEL_13;
    }
    if ( v3 > 0x4F )
      break;
    if ( v3 != 78 )
      return v2;
    v6 = v2[1];
    v2 += 2;
    if ( v6 != 103 )
      return 0;
    sub_31E858(a1, " inout");
LABEL_13:
    v3 = *v2;
    if ( !*v2 )
      return 0;
  }
  if ( v3 == 120 )
  {
    sub_31E858(a1, " const");
    return v2 + 1;
  }
  else
  {
    if ( v3 == 121 )
    {
      ++v2;
      sub_31E858(a1, " immutable");
    }
    return v2;
  }
}
