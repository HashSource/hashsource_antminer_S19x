int __fastcall sub_555BC(int result, int a2)
{
  _DWORD v3[2]; // [sp+4h] [bp-808h] BYREF

  v3[0] = result;
  if ( a2 )
  {
    result = sub_594E0(a2, v3);
    if ( result == 1 )
      return sub_5954C(a2, v3);
  }
  return result;
}
