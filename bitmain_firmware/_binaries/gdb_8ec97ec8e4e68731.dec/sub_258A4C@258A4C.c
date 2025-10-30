int __fastcall sub_258A4C(int a1)
{
  int result; // r0
  _QWORD v3[2]; // [sp+0h] [bp-10h] BYREF

  result = getrlimit64(4, v3);
  if ( result )
    return 1;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 1;
    return v3[1] != 0;
  }
  if ( v3[0] )
    return v3[1] != 0;
  return result;
}
