int sub_242ED0()
{
  int result; // r0
  int *v1; // r2

  if ( dword_46DCDC < -1 )
  {
    sub_94700(
      (int)"top.c",
      1761,
      "%s: Assertion `%s' failed.",
      "void set_readline_history_size(int)",
      "history_size >= -1");
    JUMPOUT(0x242ECC);
  }
  if ( dword_46DCDC != -1 )
    return sub_297EE4();
  v1 = &dword_490160;
  result = dword_490160;
  if ( dword_48BB30 )
    v1 = 0;
  else
    result = -dword_490160;
  if ( dword_48BB30 )
    dword_48BB30 = (int)v1;
  return result;
}
