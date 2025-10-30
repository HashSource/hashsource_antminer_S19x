int __fastcall sub_C2360(int result, int a2)
{
  bool v2; // zf
  int v3; // r3

  v2 = a2 == 0;
  if ( a2 )
    v2 = result == 0;
  if ( !v2 )
  {
    if ( a2 == result )
      return 1;
    while ( 1 )
    {
      v3 = *(_DWORD *)(result + 8);
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 33) & 4) == 0 )
          break;
      }
      result = *(_DWORD *)(result + 12);
      if ( !result )
        return result;
      if ( result == a2 )
        return 1;
    }
  }
  return 0;
}
