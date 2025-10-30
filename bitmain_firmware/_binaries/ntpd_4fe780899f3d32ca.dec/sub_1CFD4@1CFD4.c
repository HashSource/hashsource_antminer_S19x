__int64 __fastcall sub_1CFD4(int a1)
{
  int *v2; // r4
  int v3; // r2
  int v4; // r6
  __int64 result; // r0

  v2 = _errno_location();
  v3 = a1;
  v4 = *v2;
  result = sub_64E00(7, "ntpd not compiled for debugging (signal %d)", v3);
  *v2 = v4;
  return result;
}
