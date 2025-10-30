_DWORD *__fastcall sub_76E54(_DWORD *result, int a2, unsigned int a3)
{
  if ( !result )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 118, 0, "t != ((void *)0)");
  if ( a3 > 0x3B9AC9FF )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 119, 0, "nanoseconds < 1000000000");
  result[1] = a3;
  *result = a2;
  return result;
}
