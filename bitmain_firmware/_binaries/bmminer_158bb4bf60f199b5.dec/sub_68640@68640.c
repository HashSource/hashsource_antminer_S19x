int __fastcall sub_68640(int result, int a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = sub_69F3C(a2, &v3);
    if ( result == 1 )
      return sub_69F5C(a2, &v3);
  }
  return result;
}
