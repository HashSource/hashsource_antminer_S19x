int __fastcall sub_26DFF0(int result, char a2)
{
  *(_BYTE *)(result + 4) = *(_BYTE *)(result + 4) & 0xFB | (4 * (a2 & 1));
  return result;
}
