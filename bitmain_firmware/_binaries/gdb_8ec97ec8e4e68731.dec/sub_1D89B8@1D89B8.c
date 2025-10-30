void __fastcall sub_1D89B8(int a1, char *a2)
{
  void *v3; // r0
  int v4; // r1
  int v5; // r2
  void *v6; // r6
  int v7; // r5
  bool v8; // zf
  size_t v9; // r0
  _DWORD *v10; // r0

  v3 = sub_9253C((int)nullsub_39, 0);
  v6 = v3;
  if ( dword_487D4C )
  {
    v10 = (_DWORD *)sub_242FC8(v3);
    sub_2594B0(*v10, "record_full_goto_bookmark receives %s\n", a2);
  }
  v7 = (unsigned __int8)*a2;
  v8 = v7 == 34;
  if ( v7 != 34 )
    v8 = v7 == 39;
  if ( v8 )
  {
    v9 = strlen(a2);
    if ( (unsigned __int8)a2[v9 - 1] != v7 )
      sub_946E0("Unbalanced quotes: %s", a2);
    a2 = sub_93330(a2 + 1, v9 - 2);
    sub_9253C((int)sub_1D87E8, (int)a2);
  }
  sub_1D3BC4(a2, v4, v5);
  sub_92620(v6);
}
