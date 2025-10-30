void __fastcall sub_5EE38(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v10; // [sp+8h] [bp-14h] BYREF

  v5 = (int *)sub_242FDC(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_946E0("-var-info-type: Usage: NAME.");
  v8 = sub_26FBAC(*a2);
  sub_26FD6C(&ptr, v8);
  sub_2575E8(v7, "type", ptr);
  if ( ptr != &v10 )
    sub_339E64(ptr);
}
