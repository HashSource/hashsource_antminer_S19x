int __fastcall sub_815C(int a1)
{
  _DWORD *v1; // r0

  if ( cache_keyid == a1 )
    return cache_flags & 1;
  ++authkeyuncached;
  v1 = sub_7DB0(a1);
  if ( v1 && (v1[9] & 1) != 0 )
    return 1;
  ++authkeynotfound;
  return 0;
}
