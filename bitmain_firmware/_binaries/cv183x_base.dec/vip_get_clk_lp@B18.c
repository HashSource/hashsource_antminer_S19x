__int64 vip_get_clk_lp()
{
  __int64 result; // x0

  result = *(unsigned int *)(qword_41D8 + 20);
  __dsb(0xDu);
  return result;
}
