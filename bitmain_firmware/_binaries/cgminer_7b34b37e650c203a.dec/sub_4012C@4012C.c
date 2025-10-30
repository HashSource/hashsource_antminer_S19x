int __fastcall sub_4012C(const char *a1, _BYTE *a2)
{
  int result; // r0

  result = sub_40098(a1, a2);
  if ( !result )
    *a2 ^= 1u;
  return result;
}
