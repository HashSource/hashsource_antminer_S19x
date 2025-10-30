bool __fastcall sub_A341C(_BOOL4 result)
{
  int v1; // r2
  int v2; // r1
  bool v3; // zf
  int v4; // r3
  bool v5; // zf

  if ( result )
  {
    v1 = *(_DWORD *)(result + 24);
    if ( *(_BYTE *)v1 == 12 )
    {
      v2 = *(_DWORD *)(v1 + 20);
      v3 = result == v2;
      if ( result != v2 )
        v3 = v2 == 0;
      if ( !v3 )
      {
        do
        {
          v1 = *(_DWORD *)(v2 + 24);
          if ( *(_BYTE *)v1 != 12 )
            break;
          v4 = *(_DWORD *)(v1 + 20);
          v5 = v2 == v4;
          if ( v2 != v4 )
            v5 = v4 == 0;
          v2 = *(_DWORD *)(v1 + 20);
        }
        while ( !v5 );
      }
      return (*(_WORD *)v1 & 0x1FF) == 264;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
