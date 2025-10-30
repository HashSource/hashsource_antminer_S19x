int __fastcall sub_23DD2C(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 52);
    if ( result )
    {
      result = ((int (*)(void))loc_DB0B0)();
      *(_DWORD *)(v1 + 52) = 0;
    }
  }
  return result;
}
