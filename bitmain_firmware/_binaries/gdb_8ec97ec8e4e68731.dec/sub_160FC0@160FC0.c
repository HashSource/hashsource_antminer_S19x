int __fastcall sub_160FC0(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v7; // r4
  int v8; // r10
  int v9; // r0
  int v10; // r6
  _BYTE *v11; // r7
  int v12; // r0
  int v13; // r3

  v7 = sub_15DB40(a1);
  v8 = ((int (*)(void))loc_165BB8)();
  v9 = ((int (__fastcall *)(int, int))loc_1DD3B4)(v7, a2);
  v10 = sub_260DBC(v9);
  v11 = (_BYTE *)sub_26E954(v10);
  v12 = ((int (__fastcall *)(int, int))loc_1DD420)(v7, a2);
  sub_15C34C(v11, v12, v8, v13, a3, a4);
  return v10;
}
