_DWORD *__fastcall sub_1036B8(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r6
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r6
  int v17; // r0

  v2 = (_DWORD *)sub_163938(a1, 0x60u);
  *v2 = ((int (__fastcall *)(int, int, int, char *))loc_177328)(a1, 10, 8, "void");
  v2[1] = sub_17741C(a1, 8, 1, "bool");
  v2[2] = sub_1773C4(a1, 8, 0, "byte");
  v2[3] = sub_1773C4(a1, 8, 1, "ubyte");
  v2[4] = sub_1773C4(a1, 16, 0, "short");
  v2[5] = sub_1773C4(a1, 16, 1, "ushort");
  v2[6] = sub_1773C4(a1, 32, 0, "int");
  v2[7] = sub_1773C4(a1, 32, 1, "uint");
  v2[8] = sub_1773C4(a1, 64, 0, "long");
  v2[9] = sub_1773C4(a1, 64, 1, "ulong");
  v2[10] = sub_1773C4(a1, 128, 0, "cent");
  v2[11] = sub_1773C4(a1, 128, 1, "ucent");
  v3 = ((int (__fastcall *)(int))loc_166138)(a1);
  v4 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v2[12] = sub_177448(a1, v3, "float", v4);
  v5 = ((int (__fastcall *)(int))loc_166228)(a1);
  v6 = ((int (__fastcall *)(int))loc_1662A0)(a1);
  v2[13] = sub_177448(a1, v5, "double", v6);
  v7 = ((int (__fastcall *)(int))loc_166318)(a1);
  v8 = ((int (__fastcall *)(int))loc_166390)(a1);
  v9 = sub_177448(a1, v7, "real", v8);
  v10 = v2[2];
  v11 = v2[3];
  v2[14] = v9;
  *(_DWORD *)(v10 + 16) |= 0x40u;
  *(_DWORD *)(v11 + 16) |= 0x40u;
  v12 = ((int (__fastcall *)(int))loc_166138)(a1);
  v13 = ((int (__fastcall *)(int))loc_1661B0)(a1);
  v2[15] = sub_177448(a1, v12, "ifloat", v13);
  v14 = ((int (__fastcall *)(int))loc_166228)(a1);
  v15 = ((int (__fastcall *)(int))loc_1662A0)(a1);
  v2[16] = sub_177448(a1, v14, "idouble", v15);
  v16 = ((int (__fastcall *)(int))loc_166318)(a1);
  v17 = ((int (__fastcall *)(int))loc_166390)(a1);
  v2[17] = sub_177448(a1, v16, "ireal", v17);
  v2[18] = sub_177B9C(a1, "cfloat", v2[12]);
  v2[19] = sub_177B9C(a1, "cdouble", v2[13]);
  v2[20] = sub_177B9C(a1, "creal", v2[14]);
  v2[21] = sub_1773F0(a1, 8, 1, "char");
  v2[22] = sub_1773F0(a1, 16, 1, "wchar");
  v2[23] = sub_1773F0(a1, 32, 1, "dchar");
  return v2;
}
