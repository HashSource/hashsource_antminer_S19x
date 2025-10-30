int __fastcall sub_A5E4(int a1, int a2, unsigned __int8 *a3, int a4)
{
  int *v8; // r0
  _BYTE v10[256]; // [sp+4h] [bp-104h] BYREF

  v8 = _errno_location();
  sub_A208(v10, 256, a3, *v8);
  return sub_EC98(a1, a2, v10, a4);
}
