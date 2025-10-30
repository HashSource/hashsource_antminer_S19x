int __fastcall sub_8AF14(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 1140);
    if ( result )
      return *(_DWORD *)(result + 400);
  }
  return result;
}
