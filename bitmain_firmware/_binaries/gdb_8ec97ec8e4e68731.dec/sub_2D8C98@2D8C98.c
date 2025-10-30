int __fastcall sub_2D8C98(int a1)
{
  int v2; // r5
  _BOOL4 v3; // r3
  int v4; // r3
  int v5; // r0

  v2 = *(_DWORD *)(a1 + 160);
  v3 = (*(_BYTE *)(a1 + 40) & 7) == 1;
  if ( !v2 )
    v3 = 0;
  if ( !v3 )
    return sub_2A6024(a1);
  v4 = *(_DWORD *)(v2 + 2348);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( v5 )
      sub_2F0164(v5);
  }
  sub_2F9E40(a1, v2 + 560);
  return sub_2A6024(a1);
}
