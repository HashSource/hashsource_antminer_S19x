int __fastcall ps_lsetfpregs(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r4
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  v5 = ps_getpid_0(a1);
  v6 = sub_98F48(v10, v5, a2, 0);
  v7 = sub_16F654(v6);
  v8 = sub_1DDB0C(v10[0], v10[1], v10[2], v7);
  sub_4ECA8(v8, a3);
  sub_232300(v8, -1);
  return 0;
}
