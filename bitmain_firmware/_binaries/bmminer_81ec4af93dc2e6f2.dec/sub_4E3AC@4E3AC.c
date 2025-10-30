int __fastcall sub_4E3AC(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_4E318(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
