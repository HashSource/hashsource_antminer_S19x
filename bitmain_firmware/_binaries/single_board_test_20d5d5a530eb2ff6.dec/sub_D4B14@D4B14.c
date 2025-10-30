int __fastcall sub_D4B14(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r0
  int v11; // [sp+14h] [bp-4h] BYREF

  v8 = sub_D8934(a1);
  v11 = sub_D8AC8(a1);
  v9 = sub_D8AC0(a1);
  sub_E8E40(a3, a2, a4, v8, v9, &v11, *(_DWORD *)(v8 + 280));
  sub_D8ACC(a1, v11);
  return 1;
}
