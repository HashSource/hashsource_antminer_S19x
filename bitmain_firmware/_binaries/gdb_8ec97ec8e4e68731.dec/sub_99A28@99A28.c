const char *__fastcall sub_99A28(unsigned int a1)
{
  if ( a1 > 0x98 )
    return "Unknown signal";
  else
    return *(const char **)&aConstCharGdbSi[12 * a1 + 60];
}
