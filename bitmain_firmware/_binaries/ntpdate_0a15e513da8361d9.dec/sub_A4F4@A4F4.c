unsigned int __fastcall sub_A4F4(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int result; // r0
  bool v7; // cc
  int *v8; // r0

  *a2 = 0;
  result = strerror_r();
  if ( result )
  {
    v7 = result > (unsigned int)a2;
    if ( (_BYTE *)result != a2 )
      v7 = result > a3;
    if ( v7 )
      return sub_108C4(a2, result, a3);
  }
  else if ( !*a2 )
  {
    v8 = _errno_location();
    return sub_FA7C(a2, a3, "%s(%d): errno %d", "strerror_r", a1, *v8);
  }
  return result;
}
