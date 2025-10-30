int __fastcall sub_53FE8(unsigned __int8 *a1)
{
  int v1; // r4
  unsigned __int8 *v2; // r5
  int v3; // r0
  bool v4; // zf
  int result; // r0
  int v6; // t1

  v1 = *a1;
  if ( !*a1 )
    return *a1;
  v2 = a1;
  while ( 1 )
  {
    v3 = isalnum(v1);
    v4 = v3 == 0;
    result = v3 != 0;
    if ( v4 )
      result = v1 == 45;
    if ( v1 == 95 )
      result |= 1u;
    if ( !result )
      break;
    v6 = *++v2;
    v1 = v6;
    if ( !v6 )
      return 1;
  }
  return result;
}
