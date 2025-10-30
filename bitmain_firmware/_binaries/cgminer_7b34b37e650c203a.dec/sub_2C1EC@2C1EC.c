const char *__fastcall sub_2C1EC(int a1)
{
  const char *result; // r0

  dword_68FD0 = 2;
  result = (const char *)sub_40268(a1, &dword_73464);
  if ( !result && (unsigned int)dword_73464 > 0x270F )
    return "Value out of range";
  return result;
}
