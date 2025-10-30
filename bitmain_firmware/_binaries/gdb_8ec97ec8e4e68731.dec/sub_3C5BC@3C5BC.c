bool __fastcall sub_3C5BC(int a1, int a2, int a3, int a4)
{
  __pid_t v4; // r0
  _DWORD v6[4]; // [sp+4h] [bp-10h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v6[2] = a4;
  v4 = ps_getpid_0(v6);
  return kill(v4, 0) != -1;
}
