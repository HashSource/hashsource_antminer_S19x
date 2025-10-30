int __fastcall sub_21A6D8(int a1)
{
  int v1; // r3
  __int64 v3; // r0

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
    return *(_DWORD *)(v1 + 24);
  v3 = ((__int64 (__fastcall *)(int))loc_163EC)(a1);
  return sub_21A6F4(v3, HIDWORD(v3));
}
