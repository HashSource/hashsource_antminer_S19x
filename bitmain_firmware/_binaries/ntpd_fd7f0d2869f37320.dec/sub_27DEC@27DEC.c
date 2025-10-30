unsigned int sub_27DEC()
{
  unsigned int result; // r0
  int v1; // r1

  result = bswap32(sub_268FC());
  hostval = result;
  if ( result )
    return sub_272A0(result, v1);
  return result;
}
