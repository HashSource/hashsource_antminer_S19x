char *__fastcall sub_2B3438(int a1)
{
  char *result; // r0

  result = sub_2AD7AC(a1, ".ARM.exidx");
  if ( result )
    return (char *)((*((_DWORD *)result + 5) >> 1) & 1);
  return result;
}
