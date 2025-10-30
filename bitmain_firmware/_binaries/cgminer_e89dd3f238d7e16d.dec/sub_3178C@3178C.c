int __fastcall sub_3178C(int result)
{
  if ( *(_DWORD *)(result + 100) != 1 )
  {
    ++dword_92F54;
    *(_DWORD *)(result + 100) = 1;
  }
  return result;
}
