int *__fastcall sub_76894(int *result, int *a2)
{
  bool v2; // nf

  if ( !result )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 339, 0, "t != ((void *)0)");
  if ( (unsigned int)result[1] > 0x3B9AC9FF )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 340, 2, "t->nanoseconds < 1000000000");
  v2 = *result < 0;
  if ( *result >= 0 )
  {
    *a2 = *result;
    result = 0;
  }
  if ( v2 )
    return (_DWORD *)(&word_28 + 1);
  return result;
}
