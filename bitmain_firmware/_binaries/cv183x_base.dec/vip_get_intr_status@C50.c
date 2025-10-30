__int64 vip_get_intr_status()
{
  __int64 result; // x0

  result = *(unsigned int *)(qword_41D8 + 8);
  __dsb(0xDu);
  return result;
}
