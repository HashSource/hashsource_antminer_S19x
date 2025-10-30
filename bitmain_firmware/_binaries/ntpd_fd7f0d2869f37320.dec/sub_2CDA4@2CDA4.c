unsigned int __fastcall sub_2CDA4(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r4
  bool v3; // zf
  unsigned int result; // r0

  if ( a2 == a1 )
    return 1;
  v2 = *a2;
  v3 = v2 == 35;
  if ( v2 != 35 )
    v3 = v2 == 0;
  result = !v3;
  if ( !v3 )
    return (((*_ctype_b_loc())[v2] ^ 0x2000u) >> 13) & 1;
  return result;
}
