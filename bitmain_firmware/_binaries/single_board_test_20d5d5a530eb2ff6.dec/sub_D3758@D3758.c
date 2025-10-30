int __fastcall sub_D3758(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r8
  int v10; // r0
  int v12; // [sp+14h] [bp-8h] BYREF

  v12 = sub_D8AC8(a1);
  v8 = sub_D8934(a1);
  v9 = sub_D8AC0(a1);
  v10 = sub_D8AC4(a1);
  sub_E466C(a3, a2, a4, v8, v9, v10, &v12, aria_encrypt);
  sub_D8ACC(a1, v12);
  return 1;
}
