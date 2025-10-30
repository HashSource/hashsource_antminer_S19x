char *__fastcall sub_63B34(signed int a1, unsigned int a2, int a3)
{
  int v4; // r2

  v4 = (unsigned int)a1 >> 31;
  if ( a1 < 0 )
  {
    a2 = -a2;
    a1 = ~a1;
    if ( !a2 )
      ++a1;
  }
  return sub_63804(a1, a2, v4, a3, 1);
}
