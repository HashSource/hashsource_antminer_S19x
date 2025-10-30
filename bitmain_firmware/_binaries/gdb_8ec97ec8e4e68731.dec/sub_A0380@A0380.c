int __fastcall sub_A0380(int a1)
{
  int v2; // r3
  int v3; // r6
  int v4; // r4

  if ( !a1 )
    return -1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v2 != 3 )
    return -1;
  v3 = *(__int16 *)(v2 + 4);
  if ( v3 <= 0 )
    return -1;
  v4 = 0;
  while ( !sub_A0328(a1, v4) )
  {
    if ( ++v4 == v3 )
      return -1;
  }
  return v4;
}
