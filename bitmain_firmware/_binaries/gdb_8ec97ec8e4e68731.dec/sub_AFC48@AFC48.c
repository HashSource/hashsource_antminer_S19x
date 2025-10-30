int __fastcall sub_AFC48(int a1, int a2)
{
  int result; // r0
  int v4; // r12
  int i; // r2

  result = *(_DWORD *)(sub_AFAEC(a2) + 20);
  if ( result )
  {
    v4 = *(_DWORD *)result;
    if ( *(_DWORD *)result )
    {
      if ( a1 == *(_DWORD *)(result + 20) )
        return 1;
      for ( i = 0; ; ++i )
      {
        result += 300;
        if ( i + 1 == v4 )
          break;
        if ( *(_DWORD *)(result + 20) == a1 )
          return i + 2;
      }
    }
    return 0;
  }
  return result;
}
