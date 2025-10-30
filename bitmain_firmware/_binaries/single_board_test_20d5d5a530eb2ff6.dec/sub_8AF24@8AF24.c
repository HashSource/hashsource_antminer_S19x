int __fastcall sub_8AF24(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 1140);
    if ( result )
      return *(_DWORD *)(result + 404);
  }
  return result;
}
