int __fastcall sub_DBA40(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 28);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 32);
  return result;
}
