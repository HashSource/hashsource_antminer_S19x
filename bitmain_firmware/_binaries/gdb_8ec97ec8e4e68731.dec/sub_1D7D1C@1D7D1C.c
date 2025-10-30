int __fastcall sub_1D7D1C(int a1)
{
  _DWORD *v1; // r0
  int v2; // r4
  int v3; // r0

  if ( dword_487D4C )
  {
    v1 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v1, "[record-btrace] attach thread observer\n");
  }
  dword_487D98 = (int)sub_1B97B4((int)sub_1D4100);
  sub_231B78(algn_487D9C);
  dword_487D94 = (int)sub_153270((int)sub_1D40F4, 0);
  dword_487D68 = 0;
  v2 = ((int (__fastcall *)(int))loc_91C98)(dword_487D6C);
  v3 = sub_183688();
  return sub_1B9450(v3, 1, (int)"btrace", v2);
}
