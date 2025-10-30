void __fastcall sub_27A74(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r3

  v5 = sub_20B88(a2, 7);
  sub_20CD4(a2, a3, v5, v5 >> 31, 1);
  v6 = sub_20B88(a2, 8);
  sub_25B70(a2, a3, 7, v6 >> 31, v6, v6 >> 31, 4);
  sub_25B70(a2, a3, 8, v7, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 4);
}
