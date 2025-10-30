int __fastcall sub_1D4B2C(int a1)
{
  int v1; // r2
  int v2; // r7
  void *v3; // r8
  int v4; // r6
  __int64 v6; // [sp+4h] [bp-10h]
  int v7; // [sp+Ch] [bp-8h]

  v6 = qword_4878EC;
  v7 = unk_4878F4;
  v1 = *(_DWORD *)(a1 + 16);
  qword_4878EC = *(_QWORD *)(a1 + 8);
  unk_4878F4 = v1;
  v2 = ((int (*)(void))loc_23F1FC)();
  sub_23F298(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4, 0);
  v3 = sub_92E28();
  v4 = sub_15F70C((int)v3);
  sub_92E40((int)v3);
  sub_23F298(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4, v2);
  qword_4878EC = v6;
  unk_4878F4 = v7;
  return v4;
}
