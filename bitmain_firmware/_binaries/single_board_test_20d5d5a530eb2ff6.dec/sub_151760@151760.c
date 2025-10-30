int __fastcall sub_151760(int a1, int a2)
{
  _BYTE v5[15]; // [sp+0h] [bp-90h] BYREF
  _BYTE v6[80]; // [sp+40h] [bp-50h] BYREF

  sub_17B628(v6, a1 + 64, a2);
  sub_17B628(v5, a2 + 64, a1);
  return sub_156154(v6, v5);
}
