int __fastcall sub_301C94(int result, int a2)
{
  if ( result || (result = sub_2AAEC8(a2, 16)) != 0 )
  {
    result = sub_2AAF7C(result, a2);
    if ( result )
      *(_DWORD *)(result + 12) = 0;
  }
  return result;
}
