int __fastcall sub_50448(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_503B4(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
