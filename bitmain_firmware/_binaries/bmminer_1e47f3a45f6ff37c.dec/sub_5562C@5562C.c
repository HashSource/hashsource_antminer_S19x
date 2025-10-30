int __fastcall sub_5562C(int result, int a2, int a3)
{
  _DWORD v5[2]; // [sp+14h] [bp-818h] BYREF
  _DWORD v6[3]; // [sp+81Ch] [bp-10h] BYREF

  v5[0] = result;
  if ( a3 )
  {
    result = sub_594E0(a3, v5);
    if ( !result )
    {
      v6[0] = a2;
      v6[1] = 0;
      v6[2] = 1;
      return sub_59480(a3, v5, 4, v6, 12);
    }
  }
  return result;
}
