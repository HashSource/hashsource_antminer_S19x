void __fastcall sub_346FE0(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_346834(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AB4(a1);
  sub_346A2C(v4, a2);
  std::overflow_error::~overflow_error((std::overflow_error *)v5);
}
