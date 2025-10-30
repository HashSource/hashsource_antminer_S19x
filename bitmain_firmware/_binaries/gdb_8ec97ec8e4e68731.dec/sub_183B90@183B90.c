int __fastcall sub_183B90(int a1)
{
  int v1; // r3

  v1 = dword_487918;
  if ( !dword_487918 )
    return v1;
  if ( a1 != *(_DWORD *)(dword_487918 + 8) )
  {
    while ( 1 )
    {
      v1 = *(_DWORD *)(v1 + 4);
      if ( !v1 )
        break;
      if ( *(_DWORD *)(v1 + 8) == a1 )
        return 1;
    }
    return v1;
  }
  return 1;
}
