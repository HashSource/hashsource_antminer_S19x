int *__fastcall sub_19858(int *result, int *a2)
{
  bool v2; // nf

  if ( !result )
    sub_1073C();
  if ( (unsigned int)result[1] > 0x3B9AC9FF )
    sub_1073C();
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
