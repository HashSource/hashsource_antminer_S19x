int __fastcall sub_ADC48(int a1, int a2)
{
  int result; // r0
  int v4; // r5

  result = sub_ADBDC(a2, 1, 0, 0);
  v4 = result;
  if ( result )
  {
    *(_DWORD *)(result + 4) = a1;
    if ( sub_ADA4C((_DWORD *)result) )
    {
      return 1;
    }
    else
    {
      sub_ADB9C(v4);
      return 0;
    }
  }
  return result;
}
