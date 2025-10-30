int __fastcall sub_CA320(int result, _DWORD *a2)
{
  int v2; // r5
  unsigned int v4; // r3
  bool v5; // cc

  v2 = result;
  if ( off_46C048 == "auto" )
  {
    result = off_489B60(&dword_4899A0);
    if ( !result )
      return result;
  }
  else if ( off_46C048 == "host" )
  {
    return result;
  }
  result = off_489B60(&dword_4899A0);
  if ( result )
  {
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v5 = v4 > 0x1E;
    if ( v4 != 30 )
      v5 = v4 - 1 > 1;
    if ( !v5 )
      *a2 = 1;
  }
  return result;
}
