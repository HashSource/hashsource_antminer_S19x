int __fastcall sub_C3290(_DWORD *a1, int a2)
{
  int v3; // r0
  int result; // r0

  v3 = sub_C620C(a1, a2);
  if ( sub_C6210(v3) != 407 )
    return 0;
  result = a1[11];
  if ( result )
  {
    result = a1[12];
    if ( result )
    {
      if ( a1[13] )
      {
        result = a1[14];
        if ( result )
        {
          result = 683;
          if ( a1[15] )
            return 0;
        }
      }
      else
      {
        return 682;
      }
    }
  }
  return result;
}
