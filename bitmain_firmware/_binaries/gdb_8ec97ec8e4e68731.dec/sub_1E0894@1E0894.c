int sub_1E0894()
{
  _DWORD *v0; // r0
  int *v1; // r1
  _DWORD *v2; // r0
  int *v3; // r1
  _DWORD *v4; // r0
  int *v5; // r1
  _DWORD *v6; // r0
  int *v7; // r1
  _DWORD *v8; // r0
  int *v9; // r1
  _DWORD *v10; // r0
  int *v11; // r1
  _DWORD *v12; // r0
  int *v13; // r2

  dword_4886E0 = (int)sub_16EBB8((int)sub_1E0374);
  v0 = sub_93028(8u);
  v1 = off_46DAC8;
  v0[1] = 0;
  *v0 = &unk_46DAE4;
  *v1 = (int)v0;
  off_46DAC8 = v0 + 1;
  v2 = sub_93028(8u);
  v3 = off_46DAC8;
  *v2 = &unk_46DAD4;
  v2[1] = 0;
  *v3 = (int)v2;
  off_46DAC8 = v2 + 1;
  v4 = sub_93028(8u);
  v5 = off_46DAC8;
  *v4 = &off_46DAFC;
  v4[1] = 0;
  *v5 = (int)v4;
  off_46DAC8 = v4 + 1;
  v6 = sub_93028(8u);
  v7 = off_46DAC8;
  *v6 = &unk_46DADC;
  v6[1] = 0;
  *v7 = (int)v6;
  off_46DAC8 = v6 + 1;
  v8 = sub_93028(8u);
  v9 = off_46DAC8;
  *v8 = &off_46DACC;
  v8[1] = 0;
  *v9 = (int)v8;
  off_46DAC8 = v8 + 1;
  v10 = sub_93028(8u);
  v11 = off_46DAC8;
  *v10 = &unk_46DAEC;
  v10[1] = 0;
  *v11 = (int)v10;
  off_46DAC8 = v10 + 1;
  v12 = sub_93028(8u);
  v13 = off_46DAC8;
  *v12 = &unk_46DAF4;
  v12[1] = 0;
  *v13 = (int)v12;
  off_46DAC8 = v12 + 1;
  return sub_53274(
           "reggroups",
           11,
           (int)sub_1E09F8,
           (int)"Print the internal register group names.\nTakes an optional file parameter.",
           (int **)&dword_474784);
}
