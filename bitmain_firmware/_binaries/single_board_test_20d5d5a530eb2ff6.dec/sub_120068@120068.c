int __fastcall sub_120068(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r0
  int v5; // r3
  int v7; // r0

  v3 = a2[32];
  if ( !a3 )
  {
    if ( (v3 & 2) == 0 || (v5 = a2[33], (v5 & 0xFFFFFF3F) == 0) && (a3 = a2[33] & 0xC0, (v5 & 0xC0) != 0) )
    {
      a3 = a2[32] & 4;
      if ( (v3 & 4) != 0 )
      {
        if ( a2[34] != 64 )
          return 0;
        if ( sub_10ED70((int)a2) < 0 )
          return 1;
        v7 = sub_10ED88((int)a2);
        return sub_110554(v7);
      }
    }
    return a3;
  }
  if ( (v3 & 2) != 0 )
  {
    a3 = a2[33] & 4;
    if ( !a3 )
      return a3;
  }
  if ( (v3 & 1) != 0 )
    return (v3 >> 4) & 1;
  if ( (a2[32] & 0x2040) == 0x2040 )
    return 3;
  if ( (v3 & 2) != 0 )
    return 4;
  if ( (v3 & 8) == 0 )
    return a2[32] & 2;
  if ( (a2[35] & 7) != 0 )
    return 5;
  return 0;
}
