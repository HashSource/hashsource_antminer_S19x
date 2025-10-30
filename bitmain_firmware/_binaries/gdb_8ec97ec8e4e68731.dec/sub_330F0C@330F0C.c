int __fastcall sub_330F0C(int a1, int a2)
{
  char v2; // r4
  int result; // r0

  v2 = *(_BYTE *)(a1 + 8);
  if ( (v2 & 0x70) != 0 )
  {
    result = v2 & 0x20;
    if ( (v2 & 0x20) != 0 )
    {
      return 1;
    }
    else if ( (v2 & 0x10) == 0 )
    {
      if ( v2 < 0 )
        return 2;
      else
        return 9;
    }
  }
  else if ( sub_330EC4((int *)a1, a2) )
  {
    if ( v2 < 0 )
      return 3;
    else
      return 8;
  }
  else if ( !*(_WORD *)(a1 + 10) && *(_DWORD *)a1 == 1 )
  {
    if ( v2 < 0 )
      return 5;
    else
      return 6;
  }
  else if ( v2 < 0 )
  {
    return 4;
  }
  else
  {
    return 7;
  }
  return result;
}
