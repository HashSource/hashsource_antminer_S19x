char *__fastcall sub_231A94(int a1, int a2, int a3)
{
  int v3; // r0
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v3 = ps_getpid_0((int)v5);
  sub_93170(byte_489F74, 0x20u, "process %d", v3);
  return byte_489F74;
}
