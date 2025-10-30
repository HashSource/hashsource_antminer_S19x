unsigned int sub_27E64()
{
  unsigned int result; // r0

  result = _stack_chk_guard;
  if ( dword_BA8E8 && dword_BA8E0 && dword_1092C4 && dword_1092C0 == 201326592 )
    return sub_27DEC();
  return result;
}
