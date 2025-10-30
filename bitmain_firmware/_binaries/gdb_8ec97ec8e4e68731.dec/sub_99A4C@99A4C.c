char *__fastcall sub_99A4C(unsigned int a1)
{
  char *result; // r0

  if ( a1 > 0x98 )
    return "?";
  result = *(char **)&aConstCharGdbSi[12 * a1 + 56];
  if ( !result )
    return "?";
  return result;
}
