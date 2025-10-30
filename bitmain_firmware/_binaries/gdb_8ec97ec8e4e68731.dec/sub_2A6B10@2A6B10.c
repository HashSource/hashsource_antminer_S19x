int __fastcall sub_2A6B10(int a1)
{
  if ( (*(_BYTE *)(a1 + 40) & 7) == 1 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 324))();
  dword_48BBD0 = 5;
  return -1;
}
