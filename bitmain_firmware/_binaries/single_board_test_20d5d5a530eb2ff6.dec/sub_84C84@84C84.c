int __fastcall sub_84C84(_DWORD *a1)
{
  int v1; // r3

  if ( !a1[7] )
  {
    v1 = a1[31];
    if ( v1 )
      return *(_DWORD *)(v1 + 548);
    return v1;
  }
  v1 = a1[313];
  if ( v1 )
    return v1;
  return *(_DWORD *)(a1[308] + 168);
}
