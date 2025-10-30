int __fastcall sub_32908(int result)
{
  if ( *(_DWORD *)(result + 100) == 1 )
    --dword_940EC;
  *(_DWORD *)(result + 100) = 2;
  return result;
}
