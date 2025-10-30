int __fastcall sub_29C104(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r3
  int v3; // t1
  int v4; // r2
  int v5; // t1

  while ( 1 )
  {
    v3 = *a1++;
    v2 = v3;
    if ( v3 == 44 )
      break;
    v5 = *a2++;
    v4 = v5;
    if ( v5 == 44 )
    {
      if ( v2 )
        return v2;
      return 0;
    }
    if ( !v2 )
      return -v4;
    if ( v2 != v4 )
      return v2 - v4;
  }
  v4 = *a2;
  if ( v4 != 44 )
    return -v4;
  return 0;
}
