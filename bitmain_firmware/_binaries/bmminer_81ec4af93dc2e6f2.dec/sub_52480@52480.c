void *__fastcall sub_52480(void *result)
{
  void *dest; // [sp+4h] [bp-8h]

  dest = result;
  if ( result )
  {
    sub_51DC0(dword_530F1C);
    return memcpy(dest, dword_530F1C, 0x124u);
  }
  return result;
}
