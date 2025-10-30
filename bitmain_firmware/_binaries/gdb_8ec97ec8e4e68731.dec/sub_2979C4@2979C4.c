int __fastcall sub_2979C4(int a1)
{
  int v1; // r0
  bool v2; // cc
  int v3; // r3

  v1 = a1 - dword_4707AC;
  v2 = v1 <= 0;
  if ( v1 >= 0 )
    v2 = dword_490158 <= v1;
  if ( v2 )
    return 0;
  v3 = dword_48BB28;
  if ( dword_48BB28 )
    return *(_DWORD *)(dword_48BB28 + 4 * v1);
  return v3;
}
