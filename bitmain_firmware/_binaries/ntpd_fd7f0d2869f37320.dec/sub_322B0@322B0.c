int __fastcall sub_322B0(int a1)
{
  int v1; // r5
  int v2; // r0
  int v3; // r4
  int i; // r7
  int v5; // r0

  v1 = 100;
  v2 = sub_31DDC(*(unsigned __int8 *)(a1 + 296), *(_DWORD *)(a1 + 300));
  v3 = peer_list;
  for ( i = v2; v3; v3 = *(_DWORD *)v3 )
  {
    if ( (*(_DWORD *)(v3 + 68) & 2) != 0 )
    {
      v5 = sub_31DDC(*(unsigned __int8 *)(v3 + 296), *(_DWORD *)(v3 + 300));
      if ( v1 >= v5 )
        v1 = v5;
    }
  }
  if ( i == v1 )
    return v1;
  else
    return 0;
}
