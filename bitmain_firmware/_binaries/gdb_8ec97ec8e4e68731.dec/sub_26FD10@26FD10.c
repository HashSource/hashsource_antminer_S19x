int __fastcall sub_26FD10(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r3
  int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( *a2 < 0 || (result = *a3, *a3 < 0) )
  {
    *a2 = 0;
    *a3 = v3;
    return 0;
  }
  else
  {
    if ( *a2 > v3 )
    {
      *a2 = v3;
      result = *a3;
    }
    if ( v3 < result )
    {
      result = v3;
      *a3 = v3;
    }
    if ( *a2 > result )
      *a2 = result;
  }
  return result;
}
