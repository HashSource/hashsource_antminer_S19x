int __fastcall sub_5EEC0(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  int v9; // r2

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("Usage: NAME.");
  v8 = sub_26FBAC(*a2);
  v9 = ((int (__fastcall *)(int))loc_26FE7C)(v8);
  return sub_2575E8(v7, "path_expr", v9);
}
