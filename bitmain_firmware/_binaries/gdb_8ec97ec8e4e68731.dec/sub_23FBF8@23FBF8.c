int __fastcall sub_23FBF8(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r0
  const char *v7; // r0

  v5 = ((int (__fastcall *)(int, int, int))loc_23FA8C)(a1, a2, a3);
  v6 = *(_DWORD *)(v5 + 248);
  *(_DWORD *)(v5 + 248) = a4;
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  if ( dword_46DCD4 )
  {
    v7 = (const char *)sub_23095C(a1, a2, a3);
    sub_259858("[New %s]\n", v7);
  }
  sub_B7794();
  return v5;
}
