int __fastcall sub_16EAA0(int a1, int a2, char a3)
{
  int result; // r0

  result = sub_120C28(a2, -1, 0);
  if ( result != 1 || (a3 & 4) != 0 )
    return 3;
  if ( (*(_DWORD *)(a2 + 128) & 0x2000) == 0 )
    return 3;
  return result;
}
