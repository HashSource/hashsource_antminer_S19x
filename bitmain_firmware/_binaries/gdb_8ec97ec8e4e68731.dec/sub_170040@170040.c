int __fastcall sub_170040(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 24);
  result = *(_DWORD *)(v1 + 16);
  if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
    return sub_1B7250(result);
  return result;
}
