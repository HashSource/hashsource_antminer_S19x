int __fastcall sub_2DB8A8(int a1, int a2, int a3, int a4)
{
  int result; // r0

  if ( !a4 || (unsigned int)*(unsigned __int8 *)(a4 + 12) - 3 > 1 )
    return 0;
  result = *(_DWORD *)(a4 + 20);
  if ( (*(_DWORD *)(result + 20) & 0x2000) == 0 )
    return 0;
  return result;
}
