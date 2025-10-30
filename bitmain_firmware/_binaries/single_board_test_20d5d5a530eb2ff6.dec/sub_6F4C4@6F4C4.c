int __fastcall sub_6F4C4(int result, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = sub_700FC(a2, &v3);
    if ( result == 1 )
      return sub_70110(a2, &v3);
  }
  return result;
}
