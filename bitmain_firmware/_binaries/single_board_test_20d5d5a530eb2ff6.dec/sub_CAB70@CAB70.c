int *__fastcall sub_CAB70(int a1)
{
  int *result; // r0

  sub_B87C8(*(int **)(a1 + 8));
  sub_B87C8(*(int **)(a1 + 12));
  result = sub_B87C8(*(int **)(a1 + 16));
  *(_DWORD *)(a1 + 20) = 0;
  return result;
}
