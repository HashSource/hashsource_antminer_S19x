bool __fastcall sub_C0010(int a1, int a2, int a3)
{
  int v4; // r4
  int v6; // r6
  int v7; // r8
  int v9; // r0

  v4 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 20);
  if ( (!v6
     || sub_B6E94(a1, a3, 128)
     && (v9 = sub_B85BC(*(_DWORD **)(v4 + 8)), sub_B550C(a1, "%s: (%d bit)\n", "Private-Key", v9) > 0))
    && sub_12D850(a1, "priv:", v6, 0, a3)
    && sub_12D850(a1, "pub: ", v7, 0, a3)
    && sub_12D850(a1, "P:   ", *(_DWORD *)(v4 + 8), 0, a3)
    && sub_12D850(a1, "Q:   ", *(_DWORD *)(v4 + 12), 0, a3) )
  {
    return sub_12D850(a1, "G:   ", *(_DWORD *)(v4 + 16), 0, a3) != 0;
  }
  else
  {
    return 0;
  }
}
