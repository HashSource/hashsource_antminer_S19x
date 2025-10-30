int __fastcall sub_DBA50(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 36);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 40);
  return result;
}
