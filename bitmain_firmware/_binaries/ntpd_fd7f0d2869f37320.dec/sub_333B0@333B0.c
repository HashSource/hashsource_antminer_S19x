int sub_333B0()
{
  int v0; // r0
  int i; // r4
  int v2; // r0
  int result; // r0

  v0 = (unsigned __int16)word_BD6E8;
  for ( i = (unsigned __int16)word_BD6EA; (unsigned __int16)word_BD6E8 != i; i = (unsigned __int16)(i + 1) )
  {
    if ( i )
    {
      v2 = sub_3217C(i);
      if ( v2 )
        sub_324CC(v2);
    }
    v0 = (unsigned __int16)word_BD6E8;
  }
  result = sub_3217C(v0);
  if ( result )
    return sub_324CC(result);
  return result;
}
