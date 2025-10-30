int __fastcall sub_6C5EC(int a1, int a2)
{
  int v2; // r3
  int v3; // r1
  int v5; // r0

  v2 = *(_DWORD *)(a2 + 156);
  v3 = *(_DWORD *)(a2 + 144);
  if ( v2 != -1 )
    return *(_DWORD *)(a1 + 52) + *(_DWORD *)(v3 + 4 * v2);
  v5 = sub_15A90();
  return sub_6C614(v5);
}
