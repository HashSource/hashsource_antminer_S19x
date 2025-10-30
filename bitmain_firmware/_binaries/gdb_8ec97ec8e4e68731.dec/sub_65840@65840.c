int __fastcall sub_65840(int a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r0

  if ( a3 )
    sub_946E0("-add-inferior should be passed no arguments");
  v3 = ((int (*)(void))loc_184054)();
  v4 = (_DWORD *)sub_242FDC(v3);
  return sub_257694(*v4, "inferior", "i%d", *(_DWORD *)(v3 + 8));
}
