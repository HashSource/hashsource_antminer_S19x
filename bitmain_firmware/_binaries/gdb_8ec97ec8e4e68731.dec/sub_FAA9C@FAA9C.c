int __fastcall sub_FAA9C(unsigned int a1, int a2)
{
  _DWORD savedregs[4]; // [sp+0h] [bp-Ch] BYREF

  sub_FA778(2, a1, (int)savedregs, *(_DWORD *)(a2 + 20));
  return sub_15AEA8(savedregs, a2);
}
