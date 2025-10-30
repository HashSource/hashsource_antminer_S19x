int __fastcall sub_64BFC(int a1)
{
  if ( *(_DWORD *)(a1 + 1028) >= *(_DWORD *)(a1 + 1024) )
  {
    *(_DWORD *)(a1 + 1028) = 0;
    *(_DWORD *)(a1 + 1024) = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 1032))(a1, 1024, *(_DWORD *)(a1 + 1036));
    if ( !*(_DWORD *)(a1 + 1024) || *(_DWORD *)(a1 + 1024) == -1 )
      return -1;
  }
  return *(unsigned __int8 *)(a1 + (*(_DWORD *)(a1 + 1028))++);
}
