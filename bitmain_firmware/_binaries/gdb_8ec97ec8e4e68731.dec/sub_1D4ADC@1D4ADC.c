int __fastcall sub_1D4ADC(int result)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r4
  _DWORD v3[4]; // [sp+4h] [bp-10h] BYREF

  v1 = *(_DWORD **)(result + 308);
  if ( v1 )
  {
    v2 = (_DWORD *)result;
    sub_E17BC(v3, result + 252);
    result = sub_E1A3C(v1, v3);
    if ( !result )
      return sub_1D4A70(v2);
  }
  return result;
}
