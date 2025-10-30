unsigned int *__fastcall sub_51D1C(unsigned int *result)
{
  unsigned int j; // [sp+808h] [bp-Ch]
  unsigned int i; // [sp+80Ch] [bp-8h]

  if ( result )
  {
    for ( i = 0; *result > i; ++i )
    {
      for ( j = 0; result[18 * i + 2] > j; ++j )
        ;
    }
  }
  return result;
}
