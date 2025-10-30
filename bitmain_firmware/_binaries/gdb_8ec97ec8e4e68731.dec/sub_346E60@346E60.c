void __fastcall sub_346E60(int a1, int a2)
{
  _DWORD *v4; // r0
  _BYTE v5[8]; // [sp+0h] [bp-8h] BYREF

  sub_3467DC((int)v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AB4(a1);
  sub_346A2C(v4, a2);
  std::runtime_error::~runtime_error((std::runtime_error *)v5);
}
