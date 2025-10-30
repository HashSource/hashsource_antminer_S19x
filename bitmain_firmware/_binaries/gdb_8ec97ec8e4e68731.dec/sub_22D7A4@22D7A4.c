char *__fastcall sub_22D7A4(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  _DWORD v6[3]; // [sp+14h] [bp-Ch] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v6[2] = a4;
  v4 = ps_getpid_0((int)v6);
  sub_93170(byte_489F74, 0x20u, "process %d", v4);
  return byte_489F74;
}
