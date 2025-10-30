int __fastcall sub_11DEC4(int a1, int a2, int a3, int a4, int (__fastcall *a5)(int, int, int))
{
  int v9; // r0
  int v10; // r8
  int v11; // r10
  const char *v12; // r11
  const char *v13; // r0

  v9 = ((int (__fastcall *)(int, int))loc_169FA0)(a1, a4);
  v10 = v9;
  if ( dword_4872E4 )
  {
    v11 = *(_DWORD *)sub_242FC8(v9);
    v12 = (const char *)sub_3245A4(*(_DWORD *)(a2 + 4));
    v13 = (const char *)sub_25AC8C(a1, a4);
    sub_2594B0(v11, "Recording line %u, file %s, address %s\n", a3, v12, v13);
  }
  return a5(a2, a3, v10);
}
