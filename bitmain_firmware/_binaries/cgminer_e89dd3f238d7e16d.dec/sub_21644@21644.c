int __fastcall sub_21644(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  _DWORD v6[4]; // [sp+18h] [bp-14h] BYREF

  result = lldiv(v6, v6, a3, a4, 1000, 0, a3, a4);
  *a1 = v6[0];
  a1[1] = 1000 * v6[2];
  return result;
}
