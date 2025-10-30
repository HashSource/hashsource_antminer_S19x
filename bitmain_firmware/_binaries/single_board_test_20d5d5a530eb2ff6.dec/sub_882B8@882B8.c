int __fastcall sub_882B8(int a1, int a2)
{
  int v3; // r3
  int v5; // r0
  int result; // r0

  v3 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v3 )
  {
    v5 = sub_B70E8(v5);
    *(_DWORD *)(a1 + 12) = v5;
  }
  sub_B717C(v5);
  result = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = a2;
  if ( result )
  {
    result = sub_B70C0(result, a2);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
