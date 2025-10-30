int __fastcall sub_8B898(int a1, int a2)
{
  int v2; // r1

  v2 = *(_DWORD *)(a1 + 1260) & ~a2;
  *(_DWORD *)(a1 + 1260) = v2;
  return v2;
}
