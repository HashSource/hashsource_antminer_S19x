int __fastcall sub_41160(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r0
  _DWORD v7[4]; // [sp+4h] [bp-10h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v4 = ps_getpid_0(v7);
  v5 = sub_4C0F8(v4, 1048631);
  return sub_4C244(v5);
}
