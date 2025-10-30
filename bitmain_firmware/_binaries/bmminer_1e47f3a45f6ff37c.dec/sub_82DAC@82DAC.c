int __fastcall sub_82DAC(int a1, int a2)
{
  int i; // [sp+Ch] [bp-8h]

  *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) = **(_DWORD **)(a2 + 28);
  for ( i = 0; *(_DWORD *)(*(_DWORD *)(a1 + 8196) + 4) > i; ++i )
  {
    if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(**(_DWORD **)(a1 + 8196) + 4 * i) + 9256))(
           *(_DWORD *)(**(_DWORD **)(a1 + 8196) + 4 * i),
           a2) )
    {
      return -1;
    }
  }
  return 0;
}
