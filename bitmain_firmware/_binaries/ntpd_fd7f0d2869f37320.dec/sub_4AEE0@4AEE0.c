int __fastcall sub_4AEE0(int a1)
{
  _DWORD *v1; // r1
  _WORD *v2; // r2

  v1 = *(_DWORD **)(a1 + 84);
  v2 = (_WORD *)*v1;
  v2[257] = 3;
  sub_4ADCC(a1, (int)v1, v2);
  return 0;
}
