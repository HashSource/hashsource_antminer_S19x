bool __fastcall sub_C06F8(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v6; // r7

  v3 = *(_DWORD **)(a2 + 24);
  v6 = v3[5];
  return sub_12D850(a1, "priv:", 0, 0, a3)
      && sub_12D850(a1, "pub: ", v6, 0, a3)
      && sub_12D850(a1, "P:   ", v3[2], 0, a3)
      && sub_12D850(a1, "Q:   ", v3[3], 0, a3)
      && sub_12D850(a1, "G:   ", v3[4], 0, a3) != 0;
}
