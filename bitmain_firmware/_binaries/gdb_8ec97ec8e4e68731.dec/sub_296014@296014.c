int __fastcall sub_296014(int a1, int a2)
{
  if ( a1 < 0 )
    return sub_295C9C(-a1, a2);
  if ( dword_4900D8 )
  {
    if ( dword_46DEEC )
      return sub_295ED4(a1, a2);
    else
      return sub_295BA8(a1, a2);
  }
  else
  {
    sub_2945C8();
    return -1;
  }
}
