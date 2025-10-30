const char *__fastcall sub_5282C(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_6448C(a1, a2);
  if ( !result && (unsigned int)(*a2 - 32) > 0x1F )
    return "Value out of range";
  return result;
}
