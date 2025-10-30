int __fastcall sub_302A7C(int a1, int a2)
{
  if ( (*(_DWORD *)(a2 + 12) & 0x4182) != 0 || !*(_DWORD *)(a2 + 4) )
    return 0;
  else
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 284))();
}
