int __fastcall sub_1CE00(unsigned int a1)
{
  unsigned int v1; // r3
  int result; // r0

  if ( !dword_B3CC0 )
    return 0;
  if ( a1 > 4 )
    return 0;
  v1 = dword_B3CC0 + a1;
  result = *(unsigned __int8 *)(dword_B3CC0 + a1 + 16);
  if ( *(_BYTE *)(v1 + 16) )
    return 1;
  return result;
}
