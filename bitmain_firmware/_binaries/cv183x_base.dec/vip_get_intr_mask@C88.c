__int64 vip_get_intr_mask()
{
  __int64 result; // x0

  result = *(unsigned int *)(qword_41D8 + 12);
  __dsb(0xDu);
  return result;
}
