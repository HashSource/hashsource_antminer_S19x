void __fastcall sub_17A494(int a1)
{
  int v2; // r0
  int v3; // r9
  int v4; // r0
  _DWORD *v5; // r5
  int v6; // r0
  _DWORD *v7; // r8
  _DWORD *v8; // r4
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r5
  int v13; // r8
  int v14; // r5
  int v15; // lr
  char v16; // r1
  int v17; // r5
  char v18; // r12
  int v19; // r0
  int v20; // r2
  char v21; // r12
  int v22; // r3

  sub_1780B4();
  v3 = *(_DWORD *)(v2 + 152);
  sub_1780B4();
  v5 = *(_DWORD **)(v4 + 156);
  v6 = ((int (__fastcall *)(int))loc_1665F4)(a1);
  v7 = (_DWORD *)sub_1773C4(a1, v6, 0);
  v8 = sub_93094(4u, 0x18u);
  v8[4] = "vcall_and_vbase_offsets";
  v9 = sub_172140(v7, (int)"vcall_and_vbase_offsets", 0, 0, -1, -1);
  v10 = v5;
  v11 = *(_DWORD *)(v9 + 20);
  v12 = v7[5];
  v8[9] = v7;
  v13 = *(_DWORD *)(v3 + 20);
  v14 = v11 + v12;
  v8[3] = v9;
  v15 = 8 * v14;
  v16 = *((_BYTE *)v8 + 8);
  v17 = v14 + v13;
  v18 = *((_BYTE *)v8 + 56);
  *((_BYTE *)v8 + 32) &= 0xF1u;
  v8[15] = v3;
  *((_BYTE *)v8 + 8) = v16 & 0xF1;
  *((_QWORD *)v8 + 3) = 8 * v11;
  *(_QWORD *)v8 = 0;
  v8[16] = "type_info";
  *((_BYTE *)v8 + 56) = v18 & 0xF1;
  v8[22] = "virtual_functions";
  v8[10] = "offset_to_top";
  *((_QWORD *)v8 + 6) = v15;
  v19 = sub_172140(v10, (int)"virtual_functions", 0, 0, -1, -1);
  v20 = *(_DWORD *)(v19 + 20);
  v21 = v8[20] & 0xF1;
  v8[21] = v19;
  *((_BYTE *)v8 + 80) = v21;
  *((_QWORD *)v8 + 9) = 8 * v17;
  v22 = *(_DWORD *)(((int (__fastcall *)(int, int, int, _DWORD))loc_177328)(a1, 3, 8 * (v17 + v20), 0) + 24);
  LOWORD(v17) = *(_WORD *)(v22 + 2);
  *(_DWORD *)(v22 + 24) = v8;
  *(_DWORD *)(v22 + 12) = "gdb_gnu_v3_abi_vtable";
  *(_DWORD *)(v22 + 28) = &word_3B4A2C;
  *(_WORD *)(v22 + 2) = v17 & 0xFC7F | 0x80;
  *(_WORD *)(v22 + 4) = 4;
  sub_170464();
}
