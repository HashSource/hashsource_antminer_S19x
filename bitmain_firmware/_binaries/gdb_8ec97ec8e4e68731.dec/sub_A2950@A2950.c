int __fastcall sub_A2950(int result)
{
  if ( result )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(result + 24) + 2) & 8) == 0 )
      return sub_A28F8(result);
  }
  return result;
}
