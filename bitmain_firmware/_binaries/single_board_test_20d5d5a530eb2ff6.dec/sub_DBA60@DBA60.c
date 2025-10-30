int __fastcall sub_DBA60(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 44);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 48);
  return result;
}
