int __fastcall sub_40C7C(int a1, int a2)
{
  int *v4; // r4
  int result; // r0

  v4 = _errno_location();
  *v4 = 0;
  result = syscall(238, a1, a2);
  if ( *v4 == 38 )
    sub_258B04("tkill");
  return result;
}
