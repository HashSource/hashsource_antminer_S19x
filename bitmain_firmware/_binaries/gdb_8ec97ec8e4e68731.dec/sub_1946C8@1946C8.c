int *__fastcall sub_1946C8(int a1, int a2, char *a3)
{
  int v5; // r0
  int *result; // r0

  v5 = ((int (__fastcall *)(int, int))loc_16EC88)(a2, dword_487A0C);
  result = sub_1941BC(*(int **)(v5 + 20 * *(_DWORD *)(a1 + 8)), a3);
  if ( result )
    return (int *)*result;
  return result;
}
