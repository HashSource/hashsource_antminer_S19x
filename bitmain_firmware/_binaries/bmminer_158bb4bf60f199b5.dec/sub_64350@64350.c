int __fastcall sub_64350(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_642BC(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
