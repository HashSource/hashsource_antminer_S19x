int __fastcall sub_295244(int a1)
{
  int v1; // r3
  int result; // r0

  if ( a1 < 0 )
    return sub_2952A4(-a1);
  v1 = dword_4900D8;
  if ( a1 )
  {
    if ( a1 <= dword_4900D8 )
    {
      dword_4900D8 -= a1;
      return 0;
    }
    dword_4900D8 = 0;
    sub_2945C8();
    v1 = dword_4900D8;
  }
  result = 0;
  if ( v1 < 0 )
    dword_4900D8 = 0;
  return result;
}
