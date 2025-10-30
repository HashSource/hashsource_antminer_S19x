int __fastcall sub_17A398(int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BYTE *v7; // r4
  int v8; // r0
  int v9; // r6
  char v10; // lr
  char v11; // r12
  int v12; // r2
  int result; // r0
  int v14; // r3
  __int16 v15; // r12

  sub_1780B4();
  v3 = *(_DWORD *)(v2 + 152);
  sub_1780B4();
  v5 = (_DWORD *)((int (__fastcall *)(int, _DWORD, _DWORD))loc_170478)(1, 0, *(_DWORD *)(v4 + 4));
  v6 = sub_170090(v5, 0);
  v7 = sub_93094(2u, 0x18u);
  v8 = a1;
  v9 = *(_DWORD *)(v3 + 20);
  v10 = v7[8];
  v11 = v7[32];
  v12 = v9 + v6[5];
  *((_DWORD *)v7 + 3) = v3;
  *((_DWORD *)v7 + 4) = "_vptr.type_info";
  *((_DWORD *)v7 + 10) = "__name";
  *((_DWORD *)v7 + 9) = v6;
  v7[8] = v10 & 0xF1;
  v7[32] = v11 & 0xF1;
  *(_QWORD *)v7 = 0;
  *((_QWORD *)v7 + 3) = 8 * v9;
  result = ((int (__fastcall *)(int, int, int, _DWORD))loc_177328)(v8, 3, 8 * v12, 0);
  v14 = *(_DWORD *)(result + 24);
  v15 = *(_WORD *)(v14 + 2);
  *(_DWORD *)(v14 + 24) = v7;
  *(_WORD *)(v14 + 4) = 2;
  *(_DWORD *)(v14 + 12) = "gdb_gnu_v3_type_info";
  *(_WORD *)(v14 + 2) = v15 & 0xFC7F | 0x80;
  *(_DWORD *)(v14 + 28) = &word_3B4A2C;
  return result;
}
