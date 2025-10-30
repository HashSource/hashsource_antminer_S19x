bool __fastcall sub_23D93C(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v5; // r0
  int v6; // r3

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 8);
  v3 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 8);
  if ( v2 == v3 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = *(_DWORD *)(a2 + 24);
    if ( byte_48A4D8 )
      return v5 < v6;
    else
      return v5 > v6;
  }
  else if ( byte_48A4D8 )
  {
    return v2 < v3;
  }
  else
  {
    return v2 > v3;
  }
}
