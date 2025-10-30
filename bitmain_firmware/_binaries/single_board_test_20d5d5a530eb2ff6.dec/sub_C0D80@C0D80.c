int __fastcall sub_C0D80(int result, _DWORD *a2, _DWORD *a3)
{
  if ( a2 )
    *a2 = *(_DWORD *)(result + 20);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 24);
  return result;
}
