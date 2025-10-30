int __fastcall sub_C00EC(int a1, int a2)
{
  int v4; // r6
  int v5; // r6
  int v6; // r5
  int v8; // r0

  if ( !*(_DWORD *)(a1 + 24) )
  {
    v8 = DSA_new();
    *(_DWORD *)(a1 + 24) = v8;
    if ( !v8 )
      return 0;
  }
  v4 = sub_B8A2C(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 8));
  if ( !v4 )
    return 0;
  sub_B895C(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 8));
  *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8) = v4;
  v5 = sub_B8A2C(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 12));
  if ( !v5 )
    return 0;
  sub_B895C(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12));
  *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) = v5;
  v6 = sub_B8A2C(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 16));
  if ( !v6 )
    return 0;
  sub_B895C(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16));
  *(_DWORD *)(*(_DWORD *)(a1 + 24) + 16) = v6;
  return 1;
}
