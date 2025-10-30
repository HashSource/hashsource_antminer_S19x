int __fastcall sub_49C80(int a1)
{
  _DWORD *v1; // r1
  _WORD *v2; // r2

  v1 = *(_DWORD **)(a1 + 84);
  v2 = (_WORD *)*v1;
  v2[257] = 1;
  sub_49B10(a1, (int)v1, v2);
  return 1;
}
