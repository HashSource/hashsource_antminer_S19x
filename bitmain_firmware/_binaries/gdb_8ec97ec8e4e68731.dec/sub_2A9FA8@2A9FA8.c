int __fastcall sub_2A9FA8(int a1)
{
  if ( (*(_BYTE *)(a1 + 40) & 7) == 3 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 204))();
  ((void (__fastcall *)(int))loc_2A6C48)(5);
  return 0;
}
