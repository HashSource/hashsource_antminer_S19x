int __fastcall sub_5EFB0(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  char *v9; // r2

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("-var-show-attributes: Usage: NAME.");
  v8 = sub_26FBAC(*a2);
  v6 = (sub_2716EC(v8) & 1) == 0;
  v9 = "editable";
  if ( v6 )
    v9 = "noneditable";
  return sub_2575E8(v7, "attr", v9);
}
