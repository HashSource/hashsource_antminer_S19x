_DWORD *__fastcall sub_56714(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // r7
  int *v10; // r0
  int v11; // r9
  _DWORD *v12; // r0
  int v13; // r7
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v3 = *(_DWORD *)(a2 + 16);
  v7 = (_DWORD *)sub_242F8C(a1);
  v8 = sub_F003C(v3, *v7);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = (int *)sub_242FDC(0);
  v11 = *v10;
  v12 = (_DWORD *)sub_242FDC(v10);
  *v12 = v9;
  v13 = sub_92E28(v12);
  sub_2435B0(a3, 1);
  v14 = sub_92E40(v13);
  v15 = (_DWORD *)sub_242FDC(v14);
  *v15 = v11;
  v16 = (_DWORD *)sub_242FB4(v15);
  sub_154B38(*v16, 0, 0, 0);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  sub_F003C(*(_DWORD *)(a2 + 16), v8);
  return a1;
}
