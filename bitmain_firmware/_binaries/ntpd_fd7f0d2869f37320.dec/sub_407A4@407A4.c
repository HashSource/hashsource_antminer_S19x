unsigned int sub_407A4()
{
  unsigned int result; // r0

  result = _stack_chk_guard;
  if ( !--dword_BDB48 )
    return sub_312E8(2u);
  return result;
}
