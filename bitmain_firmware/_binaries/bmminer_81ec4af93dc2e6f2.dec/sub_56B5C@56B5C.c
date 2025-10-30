int __fastcall sub_56B5C(int result, int a2)
{
  _DWORD v3[2]; // [sp+4h] [bp-808h] BYREF

  v3[0] = result;
  if ( a2 )
  {
    result = sub_584EC(a2, v3);
    if ( result == 1 )
      return sub_58558(a2, v3);
  }
  return result;
}
