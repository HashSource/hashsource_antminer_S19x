int (__fastcall **__fastcall sub_F4930(int a1, int a2))(int, int)
{
  int (__fastcall **result)(int, int); // r0

  result = (int (__fastcall **)(int, int))sub_F47B0();
  if ( result )
  {
    if ( *result )
      return (int (__fastcall **)(int, int))(*result)(a1, a2);
  }
  return result;
}
