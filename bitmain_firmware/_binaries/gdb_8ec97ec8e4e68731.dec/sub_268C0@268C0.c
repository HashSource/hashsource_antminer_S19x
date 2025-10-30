void __fastcall sub_268C0(int a1, int a2, char a3, int a4)
{
  int v8; // r0
  char v9; // r2

  *(_QWORD *)(a2 + 8) = sub_20B88(a1, 0);
  v8 = sub_25A78(a1, a2, a4);
  sub_25B70(a1, a2, 0, 4, v8 & 0xFFFFFFFC, 0, 4);
  v9 = *(_BYTE *)(a2 + 152);
  *(_DWORD *)(a2 + 148) = a4;
  *(_DWORD *)(a2 + 212) = 161944;
  *(_BYTE *)(a2 + 152) = v9 & 0xFD | (2 * (a3 & 1));
}
