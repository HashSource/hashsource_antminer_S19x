int sub_B8264()
{
  int result; // r0

  result = sub_B822C();
  if ( result )
    *(_DWORD *)(result + 16) |= 8u;
  return result;
}
