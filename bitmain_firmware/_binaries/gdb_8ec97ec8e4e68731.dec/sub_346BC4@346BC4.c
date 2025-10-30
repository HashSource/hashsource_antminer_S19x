void __fastcall sub_346BC4(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD v6[3]; // [sp+0h] [bp-Ch] BYREF

  sub_34674C(v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346AB0(a1);
  v5 = sub_346A80(a2);
  sub_346A2C(v4, v5);
  std::domain_error::~domain_error((std::domain_error *)v6);
}
