int __fastcall sub_89710(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) )
      return *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i);
  }
  return 0;
}
