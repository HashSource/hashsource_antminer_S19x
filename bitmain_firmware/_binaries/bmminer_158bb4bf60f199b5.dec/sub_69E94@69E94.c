int __fastcall sub_69E94(int a1)
{
  int v1; // r1
  _DWORD *v3; // r0
  int result; // r0

  v1 = *(_DWORD *)(a1 + 20);
  v3 = **(_DWORD ***)(a1 + 12);
  if ( v1 )
    result = sub_6AAFC(v3);
  else
    result = sub_6AAA8(v3, *v3);
  *(_DWORD *)(a1 + 20) = result;
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
