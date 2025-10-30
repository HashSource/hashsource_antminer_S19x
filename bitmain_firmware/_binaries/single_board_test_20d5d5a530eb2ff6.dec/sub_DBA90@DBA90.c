int __fastcall sub_DBA90(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 68);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 72);
  return result;
}
