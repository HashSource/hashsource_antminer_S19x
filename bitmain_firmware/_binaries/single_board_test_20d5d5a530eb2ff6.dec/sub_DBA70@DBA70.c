int __fastcall sub_DBA70(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 52);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 56);
  return result;
}
