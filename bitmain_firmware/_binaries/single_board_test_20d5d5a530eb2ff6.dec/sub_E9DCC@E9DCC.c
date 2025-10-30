int __fastcall sub_E9DCC(DIR ***a1)
{
  int v2; // r5
  int v3; // r3

  if ( a1 && *a1 )
  {
    v2 = closedir(**a1);
    free(*a1);
    if ( v2 == -1 )
      return 0;
    v3 = 1;
    if ( !v2 )
      return v3;
  }
  *_errno_location() = 22;
  return 0;
}
