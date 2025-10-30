int __fastcall sub_ADD20(unsigned __int8 **a1, int a2)
{
  int v2; // r3
  _BYTE *v3; // r2

  if ( a2 <= 0 )
    return 1;
  if ( a2 != 1 )
  {
    v3 = *a1;
    v2 = **a1;
    if ( !**a1 )
    {
      if ( !v3[1] )
      {
        v2 = 1;
        *a1 = v3 + 2;
      }
      return v2;
    }
  }
  return 0;
}
