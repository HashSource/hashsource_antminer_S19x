int __fastcall sub_8E354(int result, int a2, int a3)
{
  if ( result )
  {
    *(_DWORD *)(result + 1420) = a2;
    *(_DWORD *)(result + 1424) = a3;
    return 1;
  }
  return result;
}
