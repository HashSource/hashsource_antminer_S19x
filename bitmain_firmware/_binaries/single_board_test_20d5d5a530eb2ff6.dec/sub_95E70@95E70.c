int __fastcall sub_95E70(_DWORD *a1)
{
  int v2; // r3
  int result; // r0
  int v4; // r0
  bool v5; // zf

  if ( !a1[11] )
    return 0;
  v2 = a1[31];
  result = *(_DWORD *)(v2 + 252);
  if ( result )
  {
    result = *(_DWORD *)(v2 + 244);
    if ( result )
    {
      v4 = a1[16];
      if ( a1[7] )
      {
        v5 = v4 == 20;
        if ( v4 != 20 )
          return v4 == 0;
        return v5;
      }
      else
      {
        return v4 == 12;
      }
    }
  }
  return result;
}
