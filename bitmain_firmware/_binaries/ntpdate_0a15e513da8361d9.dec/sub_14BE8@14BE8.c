unsigned int __fastcall sub_14BE8(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  v1 = a1[4];
  if ( (unsigned int)(a1[3] - v1) <= 5 )
    sub_10C38();
  v2 = a1[1];
  a1[4] = v1 + 6;
  return _byteswap_ulong(*(_DWORD *)(v2 + v1 + 2));
}
