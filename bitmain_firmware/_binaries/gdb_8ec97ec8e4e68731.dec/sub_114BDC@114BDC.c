int __fastcall sub_114BDC(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int *v4; // r1
  int result; // r0
  int v6; // r1

  v4 = *(int **)(a1 + 36);
  result = v4[1];
  v6 = *v4;
  *a4 = result;
  *a3 = v6;
  return result;
}
