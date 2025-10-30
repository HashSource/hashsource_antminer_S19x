unsigned __int8 *__fastcall sub_50C48(int a1, unsigned int *a2, int *a3)
{
  unsigned __int8 *v5; // r0

  v5 = sub_50914(a1, a2, a3);
  if ( !v5 )
    return 0;
  while ( *v5 != 45 )
  {
    v5 = sub_50914((int)v5, a2, a3);
    if ( !v5 )
      return 0;
  }
  --*a3;
  return v5 + 1;
}
