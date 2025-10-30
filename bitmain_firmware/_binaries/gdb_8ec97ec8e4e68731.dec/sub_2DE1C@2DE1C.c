bool __fastcall sub_2DE1C(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r0
  bool v3; // cc

  v2 = *a2;
  if ( v2 - 35 <= 1 )
    return 1;
  v3 = v2 > 0x5B;
  if ( v2 != 91 )
    v3 = v2 - 48 > 9;
  return !v3 || isalpha(v2) != 0;
}
