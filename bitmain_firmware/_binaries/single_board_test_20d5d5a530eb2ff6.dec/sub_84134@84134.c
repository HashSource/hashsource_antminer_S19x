__int64 sub_84134()
{
  __int64 result; // r0

  LODWORD(result) = sub_DBC60(5, 0, "SSL for verify callback", 0, 0, 0);
  dword_21F56C = result;
  HIDWORD(result) = (int)result >= 0;
  dword_6DF270 = HIDWORD(result);
  return result;
}
