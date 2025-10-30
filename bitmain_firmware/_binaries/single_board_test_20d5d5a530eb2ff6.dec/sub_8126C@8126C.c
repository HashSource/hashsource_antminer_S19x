bool __fastcall sub_8126C(_DWORD *a1, int a2, int *a3, int a4)
{
  int v8; // lr
  int v9; // r3
  int v10; // r6
  int v11; // r1

  memset(a1 + 574, 0, 0x30u);
  a1[576] = a2;
  a1[575] = 22;
  v8 = *a3;
  v9 = a3[1];
  v10 = a1[409];
  v11 = a1[974];
  a1[959] = a2 + 13;
  a1[584] = v8;
  a1[585] = v9;
  a1[578] = a4;
  a1[958] = v10;
  a1[579] = v10 + 13;
  return sub_7C644(a1, v11 + 36, (int)(a1 + 584)) > 0;
}
