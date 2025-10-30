unsigned int *__fastcall sub_53ED4(unsigned int *result)
{
  unsigned int *v1; // [sp+4h] [bp-810h]
  unsigned int j; // [sp+808h] [bp-Ch]
  unsigned int i; // [sp+80Ch] [bp-8h]

  v1 = result;
  if ( result )
  {
    for ( i = 0; i < *v1; ++i )
    {
      for ( j = 0; ; ++j )
      {
        result = (unsigned int *)(i << 6);
        if ( j >= v1[18 * i + 2] )
          break;
      }
    }
  }
  return result;
}
