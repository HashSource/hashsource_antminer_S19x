int sub_6DEC4()
{
  int result; // r0

  if ( dword_B3988 > 0 )
    result = close(dword_B3988);
  if ( dword_B398C > 0 )
    result = close(dword_B398C);
  if ( dword_B3990 > 0 )
    return close(dword_B3990);
  return result;
}
