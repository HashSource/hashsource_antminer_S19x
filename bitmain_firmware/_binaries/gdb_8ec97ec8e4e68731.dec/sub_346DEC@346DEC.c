void __fastcall sub_346DEC(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD v6[3]; // [sp+0h] [bp-Ch] BYREF

  sub_3467B8(v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346AB0(a1);
  v5 = sub_346A80(a2);
  sub_346A2C(v4, v5);
  std::out_of_range::~out_of_range((std::out_of_range *)v6);
}
