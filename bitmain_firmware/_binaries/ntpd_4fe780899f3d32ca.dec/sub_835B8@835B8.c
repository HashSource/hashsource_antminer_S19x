int __fastcall sub_835B8(int a1)
{
  int v2; // r6
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24);
  (*(void (__fastcall **)(int, int))(a1 + 40))(3, a1);
  result = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2;
  return result;
}
