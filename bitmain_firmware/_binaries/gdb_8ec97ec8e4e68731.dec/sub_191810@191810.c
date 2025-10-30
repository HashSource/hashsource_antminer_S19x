int __fastcall sub_191810(int a1, int *a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r3
  _DWORD *v8; // r4
  int v9; // r2
  int v10; // r7

  v6 = sub_1911C0();
  v7 = *a2;
  v8 = v6;
  v9 = a3;
  v10 = v6[3];
  v6[3] = a2;
  (*(void (__fastcall **)(int, int *, int))(v7 + 20))(a1, a2, v9);
  v8[3] = v10;
  return a1;
}
