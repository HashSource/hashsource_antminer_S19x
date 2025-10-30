int __fastcall sub_23DD04(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 48);
    if ( result )
    {
      result = ((int (*)(void))loc_DB0B0)();
      *(_DWORD *)(v1 + 48) = 0;
    }
  }
  return result;
}
