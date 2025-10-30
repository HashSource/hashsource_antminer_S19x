void __fastcall sub_5F194(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r5
  int v7; // r1
  int v8; // r6
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v10; // [sp+8h] [bp-14h] BYREF

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( a3 != 2 )
    sub_946E0("-var-assign: Usage: NAME EXPRESSION.");
  v6 = sub_26FBAC(*(char **)a2);
  if ( !sub_271650() )
    sub_946E0("-var-assign: Variable object is not editable");
  v7 = *(_DWORD *)(a2 + 4);
  v8 = dword_474854;
  dword_474854 = 1;
  if ( !sub_2716F8(v6, v7) )
    sub_946E0("-var-assign: Could not assign expression to variable object");
  sub_271638(&ptr, v6);
  sub_2575E8(v5, "value", ptr);
  if ( ptr != &v10 )
    sub_339E64(ptr);
  dword_474854 = v8;
}
