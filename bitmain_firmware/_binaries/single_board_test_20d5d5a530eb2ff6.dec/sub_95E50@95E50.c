bool __fastcall sub_95E50(int a1)
{
  int v2; // r0
  bool v3; // cc
  _BOOL4 result; // r0

  *(_DWORD *)(a1 + 20) = 2;
  v2 = sub_B6ECC(*(_DWORD *)(a1 + 12), 11, 0, 0);
  v3 = v2 <= 0;
  result = v2 > 0;
  if ( !v3 )
    *(_DWORD *)(a1 + 20) = result;
  return result;
}
