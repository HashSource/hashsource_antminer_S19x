char __fastcall sub_29B68(char result)
{
  LOBYTE(dword_B12AC) = dword_B12AC & 0xFB | (4 * (result & 1));
  return result;
}
