void __fastcall sub_347098(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_346858(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AB4(a1);
  sub_346A2C(v4, a2);
  std::underflow_error::~underflow_error((std::underflow_error *)v5);
}
