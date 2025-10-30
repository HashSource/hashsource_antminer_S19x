int __fastcall sub_11DBE4(int a1)
{
  int v1; // r3
  int v2; // r0

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  if ( !v1 )
    return 1;
  if ( (*(_BYTE *)(v1 + 192) & 1) != 0 )
    return 1;
  v2 = *(_DWORD *)(v1 + 152);
  *(_BYTE *)(v1 + 192) |= 1u;
  if ( !v2 )
    return 1;
  sub_324184(v2, sub_11DBE4, 0);
  return 1;
}
