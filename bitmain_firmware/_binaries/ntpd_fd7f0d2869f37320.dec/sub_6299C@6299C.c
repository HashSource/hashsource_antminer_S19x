bool __fastcall sub_6299C(unsigned __int16 *a1, unsigned __int16 *a2, _BOOL4 a3)
{
  unsigned __int16 *v3; // r4
  _BOOL4 result; // r0

  v3 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      result = sub_62868(v3 + 2, a2, *((_DWORD *)v3 + 8));
      if ( result )
        break;
      v3 = *(unsigned __int16 **)v3;
      if ( !v3 )
        return result;
    }
    return 1;
  }
  else
  {
    result = a3;
    if ( a3 )
      return 1;
  }
  return result;
}
