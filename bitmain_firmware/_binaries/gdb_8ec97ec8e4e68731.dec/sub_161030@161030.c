int __fastcall sub_161030(int *a1, int a2, const void *a3)
{
  int v5; // r8
  int v6; // r0
  int v7; // r5
  int v8; // r1
  void *v9; // r6
  size_t v10; // r0

  v5 = sub_15DB40(a1);
  v6 = ((int (__fastcall *)(int, int))loc_1DD3B4)(v5, a2);
  v7 = sub_260DBC(v6);
  v9 = (void *)sub_26BCB8(v7, v8);
  v10 = ((int (__fastcall *)(int, int))loc_1DD420)(v5, a2);
  memcpy(v9, a3, v10);
  return v7;
}
