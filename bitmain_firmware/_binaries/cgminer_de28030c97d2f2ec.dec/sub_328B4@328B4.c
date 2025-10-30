int __fastcall sub_328B4(int result)
{
  if ( *(_DWORD *)(result + 100) != 1 )
  {
    ++dword_940EC;
    *(_DWORD *)(result + 100) = 1;
  }
  return result;
}
