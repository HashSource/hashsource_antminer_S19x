unsigned int __fastcall sub_64708(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int result; // r0
  bool v7; // cc
  int *v8; // r0

  *a2 = 0;
  result = strerror_r();
  if ( result )
  {
    v7 = (unsigned int)a2 > result;
    if ( a2 != (_BYTE *)result )
      v7 = result > a3;
    if ( v7 )
      return sub_6D4DC(a2);
  }
  else if ( !*a2 )
  {
    v8 = _errno_location();
    return sub_6C054(a2, a3, "%s(%d): errno %d", "strerror_r", a1, *v8);
  }
  return result;
}
