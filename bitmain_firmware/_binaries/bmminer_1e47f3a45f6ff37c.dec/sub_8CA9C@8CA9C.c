int __fastcall sub_8CA9C(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; *(_DWORD *)(a1 + 8) > i; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) )
      return *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i);
  }
  return 0;
}
