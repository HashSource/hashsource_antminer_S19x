int __fastcall sub_201E88(int a1)
{
  int v1; // r0
  void (*v2)(void); // r3
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v1 = sub_16F654(a1);
  v2 = *(void (**)(void))(*(_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(v1, dword_4893A0) + 56);
  if ( v2 )
    v2();
  v3 = sub_183688();
  sub_1CD460(*(_DWORD *)(v3 + 36));
  sub_22F048(v4);
  sub_201664(0, 0, dword_46DBA8);
  return sub_22EF7C(v5);
}
