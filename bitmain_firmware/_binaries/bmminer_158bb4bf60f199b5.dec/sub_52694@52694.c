const char *__fastcall sub_52694(int a1)
{
  const char *result; // r0

  dword_1AEEB8 = 2;
  result = (const char *)sub_6448C(a1, &dword_242FE4);
  if ( !result && (unsigned int)dword_242FE4 > 0x270F )
    return "Value out of range";
  return result;
}
