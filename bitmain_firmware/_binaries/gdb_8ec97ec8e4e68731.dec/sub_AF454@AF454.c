int __fastcall sub_AF454(int a1, int a2)
{
  _BYTE v4[32]; // [sp+0h] [bp-20h] BYREF

  if ( a2 )
  {
    sub_1636B8(v4, a2, 8, "invalid regular expression");
    ((void (__fastcall *)(int, _BYTE *))loc_AEF7C)(a1, v4);
    sub_16373C(v4);
  }
  else
  {
    ((void (*)(void))loc_AEF7C)();
  }
  return a1;
}
