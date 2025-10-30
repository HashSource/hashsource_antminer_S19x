int __fastcall sub_135CF4(int ***a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r3
  int result; // r0

  v2 = a2;
  v3 = *a2;
  if ( v3 == 45 )
    v3 = *++a2;
  if ( v3 == 48 && (a2[1] & 0xDF) == 0x58 )
  {
    if ( !sub_135A8C(a1, a2 + 2) )
      return 0;
  }
  else if ( !sub_135BB0(a1, a2) )
  {
    return 0;
  }
  if ( *v2 != 45 )
    return 1;
  result = 1;
  if ( (*a1)[1] )
    (*a1)[3] = (int *)1;
  return result;
}
