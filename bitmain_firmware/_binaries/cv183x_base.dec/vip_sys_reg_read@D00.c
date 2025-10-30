__int64 vip_sys_reg_read()
{
  __int64 result; // x0

  result = qword_41D8;
  __dsb(0xDu);
  return result;
}
