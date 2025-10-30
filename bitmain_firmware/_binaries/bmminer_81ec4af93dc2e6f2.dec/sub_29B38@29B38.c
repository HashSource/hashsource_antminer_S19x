char __fastcall sub_29B38(char result)
{
  LOBYTE(dword_B12AC) = dword_B12AC & 0xFE | result & 1;
  return result;
}
