int __fastcall sub_1AD08(int a1, int a2)
{
  int result; // r0
  int *v3; // r0

  if ( !a1 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  result = _xstat64(3, a1, a2);
  if ( result )
  {
    v3 = _errno_location();
    return sub_1AA10(*v3, "./../lib/isc/unix/file.c", 96);
  }
  return result;
}
