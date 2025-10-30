int __fastcall sub_2AA008(int a1, int a2)
{
  if ( (*(_BYTE *)(a1 + 40) & 7) == 3 && (*(_BYTE *)(a2 + 40) & 7) == 1 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 208))();
  ((void (__fastcall *)(int))loc_2A6C48)(3);
  return 0;
}
