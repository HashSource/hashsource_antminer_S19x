bool __fastcall sub_7F488(int a1, int a2)
{
  return a1 && (((int)*(unsigned __int8 *)(a1 + a2 / 8 + 1032) >> (7 - a2 % 8)) & 1) != 0;
}
