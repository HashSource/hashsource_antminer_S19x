int __fastcall sub_6E060(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r3
  _DWORD *v6; // [sp+4h] [bp-8h]

  if ( !dword_65DF84 )
  {
    v6 = a2;
    v3 = sub_6DE64();
    a2 = v6;
    if ( v3 )
      return -1;
  }
  if ( dword_65DF6C )
    v4 = dword_21C158[a1];
  else
    v4 = dword_21C158[a1 + 187];
  *a2 = *(_DWORD *)(dword_65DF78 + 4 * v4);
  return 0;
}
