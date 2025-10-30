int __fastcall sub_30D0AC(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r2
  int v3; // r3
  int result; // r0

  v1 = *a1;
  v3 = **a1;
  if ( v3 == 95 )
  {
    *a1 = v1 + 1;
    if ( (word_438898[v1[1]] & 4) != 0 )
    {
      result = sub_30D00C(a1);
      if ( **a1 == 95 )
      {
        ++*a1;
        return result;
      }
    }
  }
  else
  {
    result = v3 - 48;
    if ( (unsigned __int8)(v3 - 48) <= 9u )
    {
      *a1 = v1 + 1;
      return result;
    }
  }
  return -1;
}
