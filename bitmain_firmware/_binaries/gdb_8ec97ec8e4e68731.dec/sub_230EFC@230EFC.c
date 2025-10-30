_DWORD *sub_230EFC()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_4899A0;
  if ( !dword_4899A0 )
    return (_DWORD *)sub_22451C("attach");
  while ( !result[8] )
  {
    result = (_DWORD *)*result;
    if ( !result )
      return (_DWORD *)sub_22451C("attach");
  }
  return result;
}
