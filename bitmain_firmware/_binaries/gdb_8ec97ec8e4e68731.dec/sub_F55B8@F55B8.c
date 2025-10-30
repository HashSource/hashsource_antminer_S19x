const char *__fastcall sub_F55B8(void *a1)
{
  const char *result; // r0

  if ( &loc_F6D00 == a1 )
    result = " \t\n*|\"';:?><";
  else
    result = " \t\n!@#$%^&*()+=|~`}{[]\"';:?/>.<,";
  dword_48AD14 = (int)result;
  return result;
}
