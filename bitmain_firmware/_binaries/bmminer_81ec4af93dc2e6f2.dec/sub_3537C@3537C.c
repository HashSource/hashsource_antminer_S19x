const char *__fastcall sub_3537C(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_4E4E8();
  if ( !result && (unsigned int)(*a2 - 1) > 0xFFFE )
    return "Value out of range";
  return result;
}
