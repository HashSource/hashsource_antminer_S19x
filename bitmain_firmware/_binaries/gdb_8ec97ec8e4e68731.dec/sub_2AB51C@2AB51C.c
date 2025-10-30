void *__fastcall sub_2AB51C(unsigned int a1, unsigned int a2)
{
  void *result; // r0
  void *v5; // r5

  result = sub_2AB3B4(a1, a2);
  v5 = result;
  if ( result )
  {
    if ( a2 * a1 )
    {
      memset(result, 0, a2 * a1);
      return v5;
    }
  }
  return result;
}
