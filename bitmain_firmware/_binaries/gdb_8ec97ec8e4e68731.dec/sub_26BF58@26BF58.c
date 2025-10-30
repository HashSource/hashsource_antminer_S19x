int __fastcall sub_26BF58(int result, char a2)
{
  *(_BYTE *)(result + 4) = *(_BYTE *)(result + 4) & 0xFD | (2 * (a2 & 1));
  return result;
}
