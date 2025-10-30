int __fastcall sub_82998(int a1, int a2)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !*(_DWORD *)(a1 + 6236) )
    return a1 + 5208;
  *(_DWORD *)(*(_DWORD *)(a2 + 20) + 4) = **(_DWORD **)(a2 + 20);
  for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 6236) + 4); ++i )
  {
    if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(**(_DWORD **)(a1 + 6236) + 4 * i) + 9264))(
           *(_DWORD *)(**(_DWORD **)(a1 + 6236) + 4 * i),
           a2) )
    {
      sub_89984(2, "src/rule.c", 151, "zlog_spec_gen_path fail");
      return 0;
    }
  }
  **(_BYTE **)(*(_DWORD *)(a2 + 20) + 4) = 0;
  return **(_DWORD **)(a2 + 20);
}
