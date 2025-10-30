_DWORD *sub_230F34()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_4899A0;
  if ( !dword_4899A0 )
    return (_DWORD *)sub_22451C("run");
  while ( !result[49] )
  {
    result = (_DWORD *)*result;
    if ( !result )
      return (_DWORD *)sub_22451C("run");
  }
  return result;
}
