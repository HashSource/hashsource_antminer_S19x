void __fastcall sub_5EF0C(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r5
  int v9; // r0
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v11; // [sp+8h] [bp-14h] BYREF

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("-var-info-expression: Usage: NAME.");
  v8 = sub_26FBAC(*a2);
  v9 = sub_26FF7C();
  sub_2575E8(v7, "lang", *(_DWORD *)(v9 + 4));
  sub_26FC60(&ptr, v8);
  sub_2575E8(v7, "exp", ptr);
  if ( ptr != &v11 )
    sub_339E64(ptr);
}
