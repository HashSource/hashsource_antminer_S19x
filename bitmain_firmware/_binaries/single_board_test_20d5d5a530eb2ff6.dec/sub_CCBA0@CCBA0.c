int __fastcall sub_CCBA0(int a1)
{
  int v1; // r0
  bool v2; // zf

  v1 = **(_DWORD **)(a1 + 12);
  v2 = v1 == 1087;
  if ( v1 != 1087 )
    v2 = v1 == 1034;
  if ( v2 )
    return 253;
  if ( v1 == 1035 )
    return 448;
  return 456;
}
