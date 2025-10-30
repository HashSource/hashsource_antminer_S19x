int __fastcall sub_1F8B9C(int a1, int a2, int a3, int a4, const char *a5, int a6, int a7)
{
  const char *v7; // r12
  int v8; // lr
  bool v9; // zf

  v7 = a5;
  if ( !a5 || !*a5 )
  {
    v8 = **(_WORD **)(a2 + 24) & 0x1FF;
    v9 = v8 == 264;
    if ( v8 == 264 )
      v9 = *(_DWORD *)(a2 + 20) == 1;
    if ( !v9 )
      return sub_E7D04(a1, a2, a3, a4, a5, a6, a7);
    v7 = "UTF-8";
  }
  return sub_2691D8(a1, a2, a3, a4, (int)v7, a6, 34, 0, a7);
}
