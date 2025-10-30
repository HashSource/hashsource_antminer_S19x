int __fastcall sub_16EEC0(int result, int a2)
{
  if ( result )
  {
    *(_DWORD *)(result + 8) = 1;
    return sub_116110(result + 20, a2);
  }
  return result;
}
