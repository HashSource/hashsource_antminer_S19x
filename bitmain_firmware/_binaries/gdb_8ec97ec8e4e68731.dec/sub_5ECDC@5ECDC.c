void __fastcall __noreturn sub_5ECDC(int a1, int a2, int a3)
{
  int v4; // r0

  if ( a3 == 2 )
  {
    v4 = sub_26FBAC(*(char **)a2);
    if ( v4 )
      sub_26FFC0(v4, *(_DWORD *)(a2 + 4));
    sub_946E0("Variable object not found");
  }
  sub_946E0("Usage: NAME VISUALIZER_FUNCTION.");
}
