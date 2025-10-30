int __fastcall sub_47520(int a1, int a2)
{
  int *v2; // r2
  int result; // r0

  v2 = *(int **)(a2 + 84);
  result = *v2;
  ++v2[194];
  *(_DWORD *)(result + 20) = 1;
  return result;
}
