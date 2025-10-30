int __fastcall sub_2A6ADC(int a1)
{
  if ( (*(_BYTE *)(a1 + 40) & 7) == 1 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 320))();
  dword_48BBD0 = 5;
  return -1;
}
