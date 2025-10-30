_BYTE *__fastcall sub_179A84(int a1, _BYTE *a2, unsigned int a3, signed int a4)
{
  int v7; // r7
  int v8; // r0
  int v9; // r4
  int v10; // r8
  int v11; // r3
  unsigned int v12; // r7
  int v13; // r3

  v7 = sub_170040(a1);
  sub_1780B4();
  v9 = *(_DWORD *)(*(_DWORD *)(v8 + 152) + 20);
  v10 = ((int (__fastcall *)(int))loc_165BB8)(v7);
  if ( ((int (__fastcall *)(int))loc_16BBA8)(v7) )
  {
    v12 = a4 >> 31;
    sub_15C34C(a2, v9, v10, 0, a3, 0);
  }
  else
  {
    sub_15C34C(a2, v9, v10, v11, a4 | a3, 0);
    a4 = 0;
    v12 = 0;
  }
  return sub_15C34C(&a2[v9], v9, v10, v13, a4, v12);
}
