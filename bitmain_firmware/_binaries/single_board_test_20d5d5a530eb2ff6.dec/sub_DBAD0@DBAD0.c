int __fastcall sub_DBAD0(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 100);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 104);
  return result;
}
