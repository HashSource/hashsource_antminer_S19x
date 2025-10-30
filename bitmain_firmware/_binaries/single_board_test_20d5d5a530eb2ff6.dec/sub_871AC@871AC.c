int __fastcall sub_871AC(int result, _DWORD *a2)
{
  if ( result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)(result + 60);
    return *(_DWORD *)(result + 56);
  }
  return result;
}
