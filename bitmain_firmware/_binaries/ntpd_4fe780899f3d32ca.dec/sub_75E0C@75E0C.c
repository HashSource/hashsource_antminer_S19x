_DWORD *__fastcall sub_75E0C(_DWORD *result, int a2, unsigned int a3)
{
  if ( !result )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 118, 0, "t != ((void *)0)");
  if ( a3 > 0x3B9AC9FF )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 119, 0, "nanoseconds < 1000000000");
  *result = a2;
  result[1] = a3;
  return result;
}
