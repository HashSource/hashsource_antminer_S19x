int __fastcall sub_183AE4(int a1)
{
  int v1; // r3

  v1 = dword_487914;
  if ( *(_DWORD *)(dword_487914 + 36) != a1 )
  {
    v1 = dword_487918;
    if ( dword_487918 )
    {
      if ( a1 != *(_DWORD *)(dword_487918 + 36) )
      {
        do
          v1 = *(_DWORD *)(v1 + 4);
        while ( v1 && *(_DWORD *)(v1 + 36) != a1 );
      }
    }
  }
  return v1;
}
