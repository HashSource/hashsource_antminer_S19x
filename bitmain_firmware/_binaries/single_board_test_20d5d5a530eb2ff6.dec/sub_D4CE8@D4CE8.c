int __fastcall sub_D4CE8(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int v12; // [sp+14h] [bp-4h] BYREF

  v8 = sub_D8934(a1);
  v12 = sub_D8AC8(a1);
  v9 = sub_D8AC0(a1);
  v10 = sub_D8924(a1);
  sub_E45C0(a3, a2, a4, v8, v9, &v12, v10, *(_DWORD *)(v8 + 280));
  sub_D8ACC(a1, v12);
  return 1;
}
