int __fastcall sub_DBA80(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 60);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 64);
  return result;
}
