unsigned int __fastcall sub_2DB71C(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r12
  unsigned int result; // r0

  v3 = a1[3];
  if ( (v3 & (unsigned int)sub_1D4100) != 0 )
    return 0;
  if ( a1[4] != a2 )
    return v3 & (unsigned int)sub_1D4100;
  *a3 = a1[2];
  if ( (v3 & 0x200000) != 0 )
    return 1;
  result = a1[7];
  if ( !result )
    return 1;
  return result;
}
