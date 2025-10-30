__int64 __fastcall vip_set_clk_lp(int a1)
{
  __int64 result; // x0

  __dsb(0xEu);
  result = qword_41D8 + 20;
  *(_DWORD *)(qword_41D8 + 20) = a1;
  return result;
}
