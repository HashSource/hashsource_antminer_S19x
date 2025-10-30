int __fastcall sub_171204(int result, int a2)
{
  int v2; // r2
  _DWORD *v3; // r12
  _DWORD *v4; // r3

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_DWORD **)(v2 + 32);
  if ( v3 )
  {
    v4 = (_DWORD *)v3[6];
    if ( result == *v3 )
    {
      *(_DWORD *)(v2 + 32) = v4;
    }
    else
    {
      while ( v4 )
      {
        if ( *v4 == result )
        {
          v3[6] = v4[6];
          return result;
        }
        v3 = v4;
        v4 = (_DWORD *)v4[6];
      }
    }
  }
  return result;
}
