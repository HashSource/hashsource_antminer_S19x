int __fastcall sub_10FD64(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 48);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 52);
  return result;
}
