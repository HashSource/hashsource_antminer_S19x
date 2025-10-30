const char *__fastcall sub_2C298(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_40268(a1, a2);
  if ( !result && (unsigned int)(*a2 - 42) > 0x14 )
    return "Value out of range";
  return result;
}
