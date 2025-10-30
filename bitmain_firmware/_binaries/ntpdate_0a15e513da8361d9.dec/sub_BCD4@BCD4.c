bool __fastcall sub_BCD4(_DWORD *a1, _DWORD *a2, int a3)
{
  int v5; // r2

  v5 = sub_BC04(a1, a2[1]) + a3;
  return sub_BAE0(a1, v5 + *a2);
}
