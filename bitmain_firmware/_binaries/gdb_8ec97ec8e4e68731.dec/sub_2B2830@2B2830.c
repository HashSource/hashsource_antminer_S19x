int __fastcall sub_2B2830(int a1, int a2)
{
  int result; // r0
  bool v3; // zf

  result = *(_BYTE *)(a1 + 12) & 0xF;
  if ( result != 13 )
  {
    if ( result == 15 )
    {
      v3 = a2 == 1;
      if ( a2 != 1 )
        v3 = a2 == 6;
      if ( v3 )
        return a2;
      else
        return 15;
    }
    else
    {
      return a2;
    }
  }
  return result;
}
