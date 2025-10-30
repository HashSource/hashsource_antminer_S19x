int __fastcall sub_631E8(int a1)
{
  _DWORD *v1; // r0

  if ( a1 == cache_keyid )
    return cache_flags & 1;
  ++authkeyuncached;
  v1 = sub_62E48(a1);
  if ( v1 && (v1[9] & 1) != 0 )
    return 1;
  ++authkeynotfound;
  return 0;
}
