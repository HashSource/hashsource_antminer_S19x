int __fastcall sub_8E368(int result, int a2, int a3)
{
  if ( result )
  {
    *(_DWORD *)(result + 1412) = a2;
    *(_DWORD *)(result + 1416) = a3;
    return 1;
  }
  return result;
}
