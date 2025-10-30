char __fastcall sub_29B50(char result)
{
  LOBYTE(dword_B12AC) = dword_B12AC & 0xFD | (2 * (result & 1));
  return result;
}
