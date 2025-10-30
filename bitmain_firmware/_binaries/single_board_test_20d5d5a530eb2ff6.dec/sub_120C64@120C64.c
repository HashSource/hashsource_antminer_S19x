int __fastcall sub_120C64(_DWORD *a1)
{
  unsigned int v2; // r3
  int result; // r0

  sub_1205D8((int)a1);
  v2 = a1[32];
  if ( (v2 & 2) == 0 || (result = a1[33] & 4) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      return (v2 >> 4) & 1;
    }
    else if ( (a1[32] & 0x2040) == 0x2040 )
    {
      return 3;
    }
    else if ( (v2 & 2) != 0 )
    {
      return 4;
    }
    else if ( (v2 & 8) != 0 )
    {
      if ( (a1[35] & 7) != 0 )
        return 5;
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
