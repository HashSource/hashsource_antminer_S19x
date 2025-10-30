void __fastcall sub_346B80(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_34674C(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AB0(a1);
  sub_346A2C(v4, a2);
  std::domain_error::~domain_error((std::domain_error *)v5);
}
