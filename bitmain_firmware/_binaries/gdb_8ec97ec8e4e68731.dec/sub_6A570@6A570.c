int __fastcall sub_6A570(int a1, char *a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  int v12; // r5
  int v13; // r0
  bool v14; // cc
  int v15; // r0

  v12 = a5;
  v13 = sub_1B7250(a8);
  v14 = a6 > 8;
  if ( a6 != 8 )
    v14 = a6 - 1 > 1;
  if ( !v14 )
    v12 = ((int (__fastcall *)(int, int))loc_169FA0)(v13, a5);
  v15 = sub_162FDC(*(_DWORD *)(a8 + 36), a7);
  return sub_1B25B4(a1, a2, a3, a4, v12, a6, v15);
}
