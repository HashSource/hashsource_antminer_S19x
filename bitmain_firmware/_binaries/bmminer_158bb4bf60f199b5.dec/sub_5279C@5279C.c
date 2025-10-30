const char *__fastcall sub_5279C(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_6448C(a1, a2);
  if ( !result && (unsigned int)(*a2 - 22) > 0x21 )
    return "Value out of range";
  return result;
}
