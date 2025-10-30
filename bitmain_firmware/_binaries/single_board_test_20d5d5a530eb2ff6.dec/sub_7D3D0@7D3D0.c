bool __fastcall sub_7D3D0(int a1)
{
  unsigned int v1; // r4
  int v2; // r2
  unsigned int v3; // r0

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    if ( !*(_DWORD *)(a1 + 712) )
    {
      v3 = 0;
      return v1 > v3;
    }
    v2 = a1 + 680;
    v3 = 0;
    while ( 1 )
    {
      ++v3;
      v2 += 48;
      if ( v1 == v3 )
        break;
      if ( !*(_DWORD *)(v2 + 32) )
        return v1 > v3;
    }
  }
  v3 = v1;
  return v1 > v3;
}
