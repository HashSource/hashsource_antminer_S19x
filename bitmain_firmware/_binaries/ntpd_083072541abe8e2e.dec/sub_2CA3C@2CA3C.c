unsigned int __fastcall sub_2CA3C(_BYTE *a1, _BYTE *a2)
{
  unsigned int result; // r0
  int v3; // r4

  if ( a2 == a1 )
    return 1;
  v3 = (unsigned __int8)*a2;
  result = v3 != 35;
  if ( !*a2 )
    result = 0;
  if ( result )
    return (((*_ctype_b_loc())[v3] ^ 0x2000u) >> 13) & 1;
  return result;
}
