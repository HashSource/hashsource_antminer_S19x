int __fastcall sub_A33BC(int a1, _DWORD *a2)
{
  int result; // r0
  int v3; // r3

  result = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 632);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 16);
    *a2 = v3;
    return 1;
  }
  return result;
}
