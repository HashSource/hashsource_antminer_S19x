int __fastcall sub_16EF38(int a1, unsigned int a2)
{
  int v2; // r3

  if ( !a1 )
    return 0;
  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return sub_10C01C(*(_DWORD **)(a1 + 4), a2);
  if ( a2 )
    return sub_10C01C(*(_DWORD **)(a1 + 4), --a2);
  return v2;
}
