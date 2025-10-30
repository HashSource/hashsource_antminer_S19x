unsigned int __fastcall sub_5A7EC(unsigned int *a1, unsigned int a2)
{
  unsigned int result; // r0

  result = bswap32(a2);
  *a1 = result;
  return result;
}
