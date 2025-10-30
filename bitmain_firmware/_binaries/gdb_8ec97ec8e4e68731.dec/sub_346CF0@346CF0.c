void __fastcall sub_346CF0(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_346794(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AB0(a1);
  sub_346A2C(v4, a2);
  std::length_error::~length_error((std::length_error *)v5);
}
