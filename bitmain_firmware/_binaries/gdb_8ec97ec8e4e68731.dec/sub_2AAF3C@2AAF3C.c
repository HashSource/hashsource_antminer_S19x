int __fastcall sub_2AAF3C(int result, int a2)
{
  if ( result )
  {
    *(_QWORD *)(result + 12) = 0xFFFFFFFFLL;
  }
  else
  {
    result = sub_2AAEC8(a2, 20);
    if ( result )
      *(_QWORD *)(result + 12) = 0xFFFFFFFFLL;
  }
  return result;
}
