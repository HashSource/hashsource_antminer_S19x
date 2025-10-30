int __fastcall sub_31DAC(int a1)
{
  int v1; // r5
  int v2; // r7
  int i; // r4
  int v4; // r0

  v1 = 100;
  v2 = sub_318D8(*(unsigned __int8 *)(a1 + 296), *(_DWORD *)(a1 + 300));
  for ( i = peer_list; i; i = *(_DWORD *)i )
  {
    if ( (*(_DWORD *)(i + 68) & 2) != 0 )
    {
      v4 = sub_318D8(*(unsigned __int8 *)(i + 296), *(_DWORD *)(i + 300));
      if ( v1 >= v4 )
        v1 = v4;
    }
  }
  if ( v2 == v1 )
    return v1;
  else
    return 0;
}
