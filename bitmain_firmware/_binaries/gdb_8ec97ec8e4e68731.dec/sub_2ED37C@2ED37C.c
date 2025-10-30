int __fastcall sub_2ED37C(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // r2

  if ( !a4 )
    return sub_2CFEF4(*(_DWORD *)(a1 + 148), *(_DWORD *)(a5 + 16));
  v5 = *(unsigned __int8 *)(a4 + 12);
  if ( v5 >= 3 )
  {
    if ( v5 <= 4 )
      return *(_DWORD *)(a4 + 20);
    if ( v5 == 5 )
      return *(_DWORD *)(*(_DWORD *)(a4 + 20) + 4);
  }
  return 0;
}
