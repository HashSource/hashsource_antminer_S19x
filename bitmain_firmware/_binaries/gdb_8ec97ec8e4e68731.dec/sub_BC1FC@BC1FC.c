int __fastcall sub_BC1FC(int a1, int *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r8
  int v12; // r0
  int v13; // r4
  int v14; // r5

  v8 = sub_16F654(a1);
  v9 = ((int (__fastcall *)(int))loc_1665F4)(v8);
  v10 = sub_16F654(v9);
  v11 = ((int (__fastcall *)(int))loc_165BB8)(v10);
  v12 = *a2;
  if ( *a2 == a3 )
    return 0;
  v13 = v9 / 8;
  if ( a3 - v12 < 2 * v13 )
    return -1;
  v14 = v12 + v13;
  *a4 = sub_15C250(v12, v13, v11);
  *a5 = sub_15C250(v14, v13, v11);
  *a2 = v14 + v13;
  return 1;
}
