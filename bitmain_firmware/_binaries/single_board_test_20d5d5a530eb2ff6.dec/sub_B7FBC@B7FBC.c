int __fastcall sub_B7FBC(int a1)
{
  int v2; // r0

  if ( (unsigned int)(a1 + 1) > 1 )
    return 0;
  v2 = *_errno_location();
  if ( v2 == 71 )
    return 1;
  if ( v2 <= 71 )
  {
    if ( v2 == 4 || v2 == 11 )
      return 1;
  }
  else if ( v2 == 107 || v2 >= 107 && (unsigned int)(v2 - 114) <= 1 )
  {
    return 1;
  }
  return 0;
}
