int __fastcall sub_C2618(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 20);
    if ( result )
      return *(_DWORD *)(result + 4);
  }
  return result;
}
