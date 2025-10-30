int __fastcall sub_1157F8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // r4
  int v11; // r0
  int v12; // r12
  const char *v14; // r0

  v7 = *(_DWORD **)(a1 + 36);
  v11 = sub_1322C8(v7[2]);
  v12 = v7[1];
  if ( !v12 )
  {
    v14 = (const char *)sub_21B3C4(a1);
    sub_946E0("symbol \"%s\" is optimized out", v14);
  }
  return sub_27C9B4(a2, a6, a1, a5, a3, a4, v11, *v7, *v7 + v12, v7[2]);
}
