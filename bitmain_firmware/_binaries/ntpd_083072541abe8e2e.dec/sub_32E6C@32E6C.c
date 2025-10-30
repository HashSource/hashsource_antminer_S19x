int sub_32E6C()
{
  int v0; // r4
  int i; // r0
  int v2; // r0
  int result; // r0

  v0 = (unsigned __int16)word_BAE9E;
  for ( i = (unsigned __int16)word_BAE9C; (unsigned __int16)word_BAE9C != v0; v0 = (unsigned __int16)(v0 + 1) )
  {
    if ( v0 )
    {
      v2 = sub_31C78(v0);
      if ( v2 )
        sub_31FC4(v2);
    }
    i = (unsigned __int16)word_BAE9C;
  }
  result = sub_31C78(i);
  if ( result )
    return sub_31FC4(result);
  return result;
}
