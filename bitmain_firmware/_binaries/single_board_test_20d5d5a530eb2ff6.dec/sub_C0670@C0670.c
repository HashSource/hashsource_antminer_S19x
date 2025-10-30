bool __fastcall sub_C0670(int a1, int a2, int a3)
{
  _DWORD *v3; // r6

  v3 = *(_DWORD **)(a2 + 24);
  return sub_12D850(a1, "priv:", 0, 0, a3)
      && sub_12D850(a1, "pub: ", 0, 0, a3)
      && sub_12D850(a1, "P:   ", v3[2], 0, a3)
      && sub_12D850(a1, "Q:   ", v3[3], 0, a3)
      && sub_12D850(a1, "G:   ", v3[4], 0, a3) != 0;
}
