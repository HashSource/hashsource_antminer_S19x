int __fastcall sub_CA274(int result, _DWORD *a2)
{
  _DWORD *v2; // r5
  bool v4; // cc
  _DWORD *v5; // r3

  v2 = (_DWORD *)result;
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
    v4 = *v2 > 0x1Eu;
    if ( *v2 != 30 )
      v4 = (unsigned int)(*v2 - 1) > 1;
    if ( !v4 )
    {
      v5 = (_DWORD *)*a2;
      if ( *a2 )
      {
        do
        {
          v5[7] = 1;
          v5 = (_DWORD *)*v5;
        }
        while ( v5 );
      }
    }
  }
  return result;
}
