bool __fastcall sub_885C4(int a1)
{
  int v2; // r0
  int v3; // r5
  int v5; // [sp+4h] [bp-8h] BYREF

  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
  {
    v5 = sub_A8788(*(_DWORD *)(*(_DWORD *)(a1 + 3896) + 48));
    while ( 1 )
    {
      v2 = sub_A878C(&v5);
      if ( !v2 )
        break;
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 36) )
        return 1;
    }
  }
  v3 = a1 + 1616;
  return sub_7D3D0(v3) || sub_7D3C4(v3);
}
