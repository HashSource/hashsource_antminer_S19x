const char *__fastcall sub_359C0(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_50584();
  if ( !result )
  {
    if ( (unsigned int)(*a2 - 1) <= 0xFFFE )
      return 0;
    else
      return "Value out of range";
  }
  return result;
}
