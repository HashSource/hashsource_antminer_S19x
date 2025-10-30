bool sub_10C0A0()
{
  _BOOL4 result; // r0

  result = sub_DE05C(0, 0, 0);
  if ( result )
    result = sub_16BCA4() != 0;
  dword_6E1C38 = result;
  return result;
}
