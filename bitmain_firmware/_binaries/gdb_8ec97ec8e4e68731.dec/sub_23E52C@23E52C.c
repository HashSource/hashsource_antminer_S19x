int __fastcall sub_23E52C(int a1)
{
  int v1; // r3

  v1 = dword_48A4D4;
  if ( !dword_48A4D4 )
    return v1;
  if ( a1 != *(_DWORD *)(dword_48A4D4 + 20) )
  {
    while ( 1 )
    {
      v1 = *(_DWORD *)(v1 + 4);
      if ( !v1 )
        break;
      if ( *(_DWORD *)(v1 + 20) == a1 )
        return 1;
    }
    return v1;
  }
  return 1;
}
