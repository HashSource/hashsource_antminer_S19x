int __fastcall sub_1E1700(_BYTE *a1)
{
  int result; // r0
  int v3; // r5

  if ( !*a1 )
    return 2;
  if ( *a1 != 69 )
    return 1;
  v3 = (unsigned __int8)a1[1];
  if ( !isxdigit(v3) )
    return v3 != 46;
  if ( !isxdigit((unsigned __int8)a1[2]) )
    return v3 != 46;
  result = (unsigned __int8)a1[3];
  if ( a1[3] )
    return v3 != 46;
  return result;
}
