int __fastcall sub_484B4(int a1, int a2)
{
  int *v2; // r2
  int v3; // r12
  int result; // r0

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  result = _stack_chk_guard;
  ++v2[194];
  *(_DWORD *)(v3 + 20) = 1;
  return result;
}
